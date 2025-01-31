#include <iostream> 
using namespace std; 

#include "Calendar.h"
#include "Calendar.cpp"

#include "MinorCalendar.cpp"
#include "user.h"
#include "user.cpp"

#define protocol 80
#include "Calendar/protocol/port.cpp"

// include front end // 
// #include "Calendar/FrontEnd_calendar/MinorCalendar.html"
// #include "Calendar/FrontEnd_calendar/color.html"
// #include "Calendar/FrontEnd_calendar/calendar.html"


int main ()
{
    cout <<"The main Calendar" << endl;
    do
    {
        // for Calendar // 
        cout <<"My Google Calendar" << endl; 
        cout <<"1. Create a calendar" << endl; 
        cout <<"2. Delete a calendar" << endl; 
        cout <<"3. Add more calendar" << endl; 
        cout <<"4. Find out the day" << endl; 
        cout <<"5. Print all the days" << endl; 

        // For user // 
        cout <<"6.Sign in" << endl; 
        cout <<"7.Sign up" << endl; 
        cout <<"8.Sign out" << endl; 
        cout <<"9.Change Password" << endl;
        cout <<"10.Change Username" << endl; 
        cout <<"11. Change Email" << endl; 

        cout <<"Authentication" << endl; 
        cout <<"Enter the verify code" << endl; 
        cout <<"Denied Authentication" << endl; 
        
        int decision; 
        cout <<"Enter your choice:" << endl; 
        cin >> decision ;

        // Calling object // 
        User u ; 
        Calendar c; 

        if (decision == 1)
        {
            switch(decision)
            {
                case 1 :
                // Create a calendar // 
                break; 
                default : 
                cout << endl; 
            }
        }
        else if(decision == 2)
        {
            switch(decision)
            {
                case 2 : 
                // Delete a calendar // 
                break; 
                default :
                cout << endl; 
            }
        }

        else if (decision == 3)
        {
            switch(decision)
            {
                case 3 :
                // add more calendar // 
                break; 
                default :
                cout << endl; 
            }
        }

        else if (decision == 4)
        {
            switch(decision)
            {
                case 4 :
                // find out the day // 
                break; 
                default :
                cout << endl; 
            }
        }

        else if (decision ==  5)
        {
            switch(decision)
            {
                case 5:
                // print all the days // 
                break; 
                default:
                cout << endl ;
            }
        }

        else if (decision == 6)
        {
            switch(decision)
            {
                case 6 : 
                // Sign in // 
                break; 
                default:
                cout << endl; 
            }
        }

        else if (decision == 7)
        {
            switch(decision)
            {
                case 7 : 
                // Sign up // 
                break; 
                default:
                cout << endl; 
            }
        }

        else if(decision == 8)
        {
            switch(decision)
            {
                case 8 : 
                // Sign out // 
                break; 
                default:
                cout << endl;
            }
        }

        else if (decision == 9)
        {
            switch(decision)
            {
                case 9 :
                // Change password // 
                break; 
                default :
                cout << endl;
            }
        }

        else if (decision == 10)
        {
            switch(decision)

            {
                case 10 : 
                // Change username // 
                break; 
                default:
                cout << endl; 
            }   
        }

        else if (decision == 11)
        {
            switch(decision)
            {
                case 11 : 
                // Change email // 
                break; 
                default: 
                cout << endl; 
            }
        }

        else if (decision == 12)
        {
            switch(decision)
            {
                case 12 :
                // Authentication // 
                break; 
                default:
                cout << endl; 
            }
        }

        else if (decision == 13)
        {
            switch(decision)
            {
                case 13 :
                // Enter the verify code / /
                break ; 
                default:
                cout << endl; 
            }
        }

        else if (decision == 14)
        {
            switch(decision)
            {
                case 14 : 
                // Denied Authentication // 
                break; 
                default:
                cout << endl;
            }
        }

        else if (decision == 15)
        {
            switch(decision)
            {
                case 15 : 
                exit(0); 
                break; 
                default :
                cout << endl; 
            }
        }

    }while(true);
    return 0 ;
}
