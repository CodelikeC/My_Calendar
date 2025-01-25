#include <iostream>
using namespace std;
#include <string>
#include <vector> 
#include <algorithm> 
#include "Calendar.h"

class User
{
    public : 
    int password ; 
    string username; 
    string email;

    public: 
    User(); 
    ~User(); 
    User(int password, string username, string email); 

    public: 
    void SignIn();
    void SignUp(); 
    void SignOut(); 

    void change_password(int new_password); 
    void change_username(string New_username);
    void change_email(string new_email); 

    public: 
    // function for Authentication //
    void Authentication(); 
    void enterVerifyCode(); 
    void Denied_Authentication(); 

    public: 
    // getter and setter // 
    void setPassword(int password); 
    void setUsername(string username); 
    void setEmail(string email); 

    int getPassword();
    string getUserName(); 
    string getEmail(); 

    void database(); 

}; 