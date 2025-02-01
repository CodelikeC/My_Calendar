#include <iostream> 
using namespace std; 
#include <vector> 
#include <algorithm>
#include <string> 

#include "user.h"
#include "Calendar.h"
#include <ctime> 

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
    cout <<"---- Authentication----" << endl; 
    
    srand(time(0));
    int verify_code;  
    
    if((time(0)) == true)
    verify_code = rand() % 1000 +1; 
    cout <<"The verify code is:" << verify_code << endl;

    {
        cout <<"----the verify code----" << endl; 
        int code ;

        if (code == verify_code)
        {
            cout <<"The code was accepted" << endl;
            return this -> enterVerifyCode();
        }

        else 
        {
            cout <<"The code was invalid" << endl;
            exit(0);  
        }
    }
    cout <<"Invalid code" << endl; 
}

void User :: enterVerifyCode()
{
    cout <<"Enter the verify code" << endl; 
    int code; 
    cin >> code; 

    if (code == 0)
    {
        cout <<"The code was invalid" << endl; 
        exit(0); 
    }

    else 
    {
        cout <<"The code was accepted" << endl; 
        return this -> Authentication(); 
    }
}

void User :: Denied_Authentication()
{
    cout <<"Denied Authentication" << endl; 
    cout <<"The code was invalid" << endl; 

    char choice; 
    cout <<"Do you want to accept the Authentication?" << endl; 
    cout <<"Please enter your choice:" << endl; 
    
    cin >> choice; 
    if (choice == 'y')
    {
        cout <<"The Authentication may continue" << endl; 
        return this -> Authentication();
    }

    if (choice == 'n')
    {
        cout <<"The authentication was denied" << endl; 
        exit(0); 
    }
    
    else 
    {
        cout << endl;  
    }
}

void User :: database()
{
    cout <<"---Database---" << endl; 
    // Luu tru thong tin nguoi dung // 
    vector <User> user;
    user.push_back(User(1234, "Huy", "")); 
    user.push_back(User(5678, "Tuan", "")); 
    user.push_back(User(9101, "Tri", ""));

    // Luu tru thong tin lich 
    vector<Calendar> calendar;
    calendar.push_back(Calendar(30, 2023,12)); 
    calendar.push_back(Calendar(31, 2023, 1)); 
    calendar.push_back(Calendar(28, 2023, 1));

    for (int i = 0 ; i < calendar.size(); i++)
    {
        cout <<"The calendar is:" << calendar.capacity() << endl;

        if (calendar.empty() == true)
        {
            cout <<"The calendar is empty" << endl; 
        }

        else 
        {
            cout <<"The calendar is not empty" << endl;
        }
    }
}

void User :: SignIn()
{
    cout <<"Sign in" << endl; 

    cout <<"Enter your username:" << endl; 
    getline(cin, username); 

    cout <<"Enter your password:" << endl; 
    cin >> password;

    cout <<"Enter your email:" << endl; 
    getline(cin, email); 

    while (cin.fail())
    {
        cin.clear(); 
        cin.ignore(1000, '\n');
        cout <<"Invalid input. Please enter a validate email!" << endl; 

        cout <<"Enter again your email:" << endl; 
        getline(cin, email); 

        cout <<"Enter you password:" << endl; 
        cin >> password; 

        cout <<"Enter your username:" << endl; 
        getline(cin, username);  
        
        if (cin.fail() == true)
        {
            break; 
        }
    }
    cout <<"Welcome" << endl;

}

void User :: SignOut()
{
    cout <<"Sign out"<< endl; 
    while (true)
    {
        cout <<"Do you want to sign out ? (y/n)" << endl; 
        char choice; 
        cout <<"Please enter your choice:" << endl; 
        cin >> choice; 

        if (choice == 'y')
        {
            cout <<"You have signed out" << endl; 
            break; 
        }

        if (choice == 'n')
        {
            cout <<"You are still in the system" << endl; 
            break; 
        }
        
        else 
        {
            cout <<"Invalid input.Please try again later" << endl; 
        }
    }
}

void User :: SignUp()
{
    cout <<"Sign up" << endl; 
    cout <<"---Create your account---" << endl; 

    cout <<"Enter your username:" << endl; 
    getline(cin, username); 

    cout <<"Enter your password:" << endl; 
    cin >> password; 

    cout <<"Enter your email:" << endl;
    getline(cin, email); 

    // check if the email is invalid or not 
    while (cin.fail())
    {
        cin.clear(); 
        cin.ignore(1000, '\n'); 
        
        cout <<"Invalid input. Please enter a validate email" << endl; 

        cout <<"Enter again your email:" << endl; 
        getline(cin, email); 

        cout <<"Enter you password:" << endl; 
        cin >> password; 

        cout <<"Enter your username:" << endl; 
        getline(cin, username);  
        if (cin.fail() == true)
        {
            break; 
        }
    }

    while (cin.good())
    {
        this -> username = username;
        this -> password = password; 
        this -> email = email;

        this -> SignIn(); 
    }

    {
        cout <<"Invalid input. Please enter a validate email" << endl; 
    }
}

void User :: change_password(int new_password)
{
    cout <<"-----Change Password-----" << endl; 
    
    cout <<"Enter your old password" << endl; 
    cin >> password; 

    if (password != new_password)
    cout <<"Enter your new password" << endl; 
    cin >> new_password; 

    if (password == new_password)
    cout <<"Invalid reupdate password" << endl; 

    {
        cout <<"Enter again your new password" << endl; 
        this -> change_password(new_password);

        cout <<"Your current password is:" << endl; 
        cin >> new_password; 

        if (true)
        this -> SignIn();
    }

    while (cin.fail())
    {
        cout <<"Invalid input" << endl;
    }
}

void User :: change_username(string New_username)
{
    cout <<"----Change Username-----" << endl; 
    
    cout <<"Enter your old username:" << endl;
    getline(cin,username);

    if (username != New_username)
    cout <<"Enter your new username:" << endl; 
    getline(cin, New_username); 

    if (username == New_username)
    cout <<"Invalid reupdate username" << endl; 

    {
        cout <<"Enter again your new username" << endl; 
        this -> change_username(New_username);

        cout <<"Your current username is:" << endl; 
        getline(cin, New_username); 

        if (true)
        this -> SignIn();
    }
}

void User :: change_email(string new_email)
{
    cout <<"----Change Email-----"<< endl; 

    cout <<"Enter your old email :" << endl;
    getline(cin,email); 

    if(email!= new_email)
    cout <<"Enter your new email:" << endl; 
    getline(cin, new_email); 

    if (email == new_email)
    cout <<"Invalid email" << endl;  
    
    {
        cout <<"Enter again your new email:" << endl; 
        this -> change_email(new_email);

        cout <<"Your current email is:" << endl; 
        getline(cin, new_email); 

        if (true)
        this -> SignIn();
    }
}