#include <iostream> 
using namespace std; 
#include <vector> 
#include <algorithm>
#include <string> 

#include "user.h"
#include "Calendar.h"

User :: User()
{
    cout <<"-----------Welcome to Google----------" << endl; 
    password = 0 ;
    username = "";
    email  = ""; 
}

User :: ~User ()
{
    cout <<"-------------------" << endl;
    exit(0); 
}

User :: User(int password, string username, string email)
{
    this -> password = password; 
    this -> username = username; 
    this -> email = email; 
}

void User :: setPassword(int password)
{
    this -> password = password; 
}

int User :: getPassword()
{
    return password; 
}

void User :: setUsername(string username)
{
    this -> username = username; 
}

string User :: getUserName()
{
    return username;
}

void User :: setEmail(string email)
{
    this -> email = email; 
}

string User :: getEmail()
{
    return email; 
}

void User ::Authentication()
{
    cout <<"The Authentication" << endl; 
}

void User :: enterVerifyCode()
{
    cout <<"Enter Verify Code" << endl; 
}

void User :: Denied_Authentication()
{
    cout <<"Denied Authentication" << endl; 
}

void User :: database()
{
    cout <<"Database" << endl; 
}

void User :: SignIn()
{
    cout <<"Sign in" << endl; 
}

void User :: SignOut()
{
    cout <<"Sign out " << endl; 
}

void User :: SignUp()
{
    cout <<"Sign up" << endl; 
}

void User :: change_password(int new_password)
{
    cout <<"Change Password" << endl; 
}

void User :: change_username(string New_username)
{
    cout <<"Change Username" << endl; 
}

void User :: change_email(string new_email)
{
    cout <<"Change Email" << endl; 
}