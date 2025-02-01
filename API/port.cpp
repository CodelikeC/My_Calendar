#include <iostream> 
using namespace std; 
#include <chrono>
#include <openssl/ssl.h>
#include <openssl/err.h>
#include <openssl/bio.h>
#include <openssl/rsa.h>
#include <openssl/pem.h>
#include <openssl/x509.h>
#include <sql.h>
#include <sqlext.h> 

#define CPPHTTPLIB_OPENSSL_SUPPORT
#include "httpext.h"

#include <string> 

int main ()
{
    cout <<"----create a calendar----" << endl;
    SQLHENV henv; 
    SQLHDBC hdbc; 
    SQLHSTMT hstmt; 
    SQLRETURN ret; 

    SQLAllocHandle(SQL_HANDLE_ENV, SQL_NULL_HANDLE, &henv);
    SQLSetEnvAttr(henv, SQL_ATTR_ODBC_VERSION, (void *)SQL_OV_ODBC3, 0);
    SQLAllocHandle(SQL_HANDLE_DBC, henv, &hdbc);

    ret = SQLConnect(hdbc, (SQLCHAR *)"DSN_NAME", SQL_NTS, (SQLCHAR *)"username", SQL_NTS, (SQLCHAR *)"password", SQL_NTS);
    if (ret == SQL_SUCCESS || ret == SQL_SUCCESS_WITH_INFO) 
    {
        std::cout << "Connected!" << std::endl;

        SQLAllocHandle(SQL_HANDLE_STMT, hdbc, &hstmt);
        SQLExecDirect(hstmt, (SQLCHAR *)"SELECT * FROM table_name", SQL_NTS);

        SQLCHAR col1[128], col2[128];
        while (SQLFetch(hstmt) == SQL_SUCCESS) 
        {
            SQLGetData(hstmt, 1, SQL_C_CHAR, col1, sizeof(col1), NULL);
            SQLGetData(hstmt, 2, SQL_C_CHAR, col2, sizeof(col2), NULL);
            std::cout << col1 << " " << col2 << std::endl;
        }

        SQLFreeHandle(SQL_HANDLE_STMT, hstmt);
    } 
    else 
    {
        std::cerr << "Connection failed!" << std::endl;
    }

    SQLDisconnect(hdbc);
    SQLFreeHandle(SQL_HANDLE_DBC, hdbc);
    SQLFreeHandle(SQL_HANDLE_ENV, henv);
 
    return 0 ; 
}