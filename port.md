// sử dụng SQL Lite. 

#include <sqlite3.h>
#include <iostream>

int main() 
{
    sqlite3 *db;
    char *errMsg = 0;
    int rc = sqlite3_open("example.db", &db);

    if (rc) 
    {
        std::cerr << "Can't open database: " << sqlite3_errmsg(db) << std::endl;
        return rc;
    } 
    else 
    {
        std::cout << "Opened database successfully!" << std::endl;
    }

    const char *sql = "CREATE TABLE IF NOT EXISTS users (ID INT, NAME TEXT);"
                      "INSERT INTO users (ID, NAME) VALUES (1, 'Alice');"
                      "SELECT * FROM users;";

    rc = sqlite3_exec(db, sql, [](void*, int argc, char **argv, char **colName) -> int 
    {
        for (int i = 0; i < argc; i++) 
        {
            std::cout << colName[i] << ": " << (argv[i] ? argv[i] : "NULL") << std::endl;
        }
        return 0;
    }, 0, &errMsg);

    if (rc != SQLITE_OK) 
    {
        std::cerr << "SQL error: " << errMsg << std::endl;
        sqlite3_free(errMsg);
    }

    sqlite3_close(db);
    return 0;
}

// MYSQL connector // 
#include <mysql_driver.h>
#include <mysql_connection.h>
#include <cppconn/statement.h>
#include <cppconn/resultset.h>
#include <cppconn/exception.h>
#include <iostream>

int main() 
{
    try 
    {
        sql::mysql::MySQL_Driver *driver = sql::mysql::get_mysql_driver_instance();
        sql::Connection *con = driver->connect("tcp://127.0.0.1:3306", "username", "password");
        con->setSchema("database_name");

        sql::Statement *stmt = con->createStatement();
        sql::ResultSet *res = stmt->executeQuery("SELECT * FROM table_name");

        while (res->next()) 
        {
            std::cout << "ID: " << res->getInt("id") << ", Name: " << res->getString("name") << std::endl;
        }

        delete res;
        delete stmt;
        delete con;
    } 
    catch (sql::SQLException &e) 
    {
        std::cerr << "SQL Error: " << e.what() << std::endl;
    }

    return 0;
}

// postgreSQL (libpq)

#include <libpq-fe.h>
#include <iostream>

int main() 
{
    PGconn *conn = PQconnectdb("user=postgres password=12345 dbname=testdb hostaddr=127.0.0.1 port=5432");

    if (PQstatus(conn) != CONNECTION_OK) 
    {
        std::cerr << "Connection failed: " << PQerrorMessage(conn) << std::endl;
        PQfinish(conn);
        return 1;
    }

    PGresult *res = PQexec(conn, "SELECT * FROM users");
    if (PQresultStatus(res) == PGRES_TUPLES_OK) 
    {
        int rows = PQntuples(res);
        int cols = PQnfields(res);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                std::cout << PQfname(res, j) << ": " << PQgetvalue(res, i, j) << " ";
            }
            std::cout << std::endl;
        }
    } 
    else 
    {
        std::cerr << "Query failed: " << PQerrorMessage(conn) << std::endl;
    }

    PQclear(res);
    PQfinish(conn);
    return 0;
}

// Giao thức ODBC /// 
#include <sql.h>
#include <sqlext.h>
#include <iostream>

int main() 
{
    SQLHENV hEnv;
    SQLHDBC hDbc;
    SQLHSTMT hStmt;
    SQLRETURN ret;

    SQLAllocHandle(SQL_HANDLE_ENV, SQL_NULL_HANDLE, &hEnv);
    SQLSetEnvAttr(hEnv, SQL_ATTR_ODBC_VERSION, (void *)SQL_OV_ODBC3, 0);
    SQLAllocHandle(SQL_HANDLE_DBC, hEnv, &hDbc);

    ret = SQLConnect(hDbc, (SQLCHAR *)"DSN_NAME", SQL_NTS, (SQLCHAR *)"username", SQL_NTS, (SQLCHAR *)"password", SQL_NTS);
    if (ret == SQL_SUCCESS || ret == SQL_SUCCESS_WITH_INFO) 
    {
        std::cout << "Connected!" << std::endl;

        SQLAllocHandle(SQL_HANDLE_STMT, hDbc, &hStmt);
        SQLExecDirect(hStmt, (SQLCHAR *)"SELECT * FROM table_name", SQL_NTS);

        SQLCHAR col1[128], col2[128];
        while (SQLFetch(hStmt) == SQL_SUCCESS) 
        {
            SQLGetData(hStmt, 1, SQL_C_CHAR, col1, sizeof(col1), NULL);
            SQLGetData(hStmt, 2, SQL_C_CHAR, col2, sizeof(col2), NULL);
            std::cout << col1 << " " << col2 << std::endl;
        }

        SQLFreeHandle(SQL_HANDLE_STMT, hStmt);
    } 
    else 
    {
        std::cerr << "Connection failed!" << std::endl;
    }

    SQLDisconnect(hDbc);
    SQLFreeHandle(SQL_HANDLE_DBC, hDbc);
    SQLFreeHandle(SQL_HANDLE_ENV, hEnv);

    return 0;
}
// kết hợp Rest API 



