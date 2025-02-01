// menu for Calendar // 
#include <iostream> 
using namespace std; 
#include <cstring> 
#include <algorithm> 
#include "Calendar.h"

Calendar :: Calendar()
{
    cout <<"Constructor of The Calendar" << endl; 
}

Calendar :: ~Calendar()
{
    cout <<"Deconstructor of The Calendar" << endl; 
}

Calendar :: Calendar(int year, int months, int days)
{
    this -> year = year; 
    this -> months = months; 
    this -> days = days;
}

void Calendar :: setYear(int year)
{
    this -> year = year; 
}

int Calendar :: getYear()
{
    return year; 
}

void Calendar :: setMonths(int months)
{
    this -> months = months; 
}

int Calendar :: getMonths()
{
    return months; 
}

void Calendar :: setDays(int days)
{
    this -> days = days ;
}

int Calendar :: getDays()
{
    return days; 
}

bool Calendar :: confirmed_calendar()
{
    cout <<"Confirmed Calendar"<< endl; 
    
    {
        Calendar c ; 
        c.find_out_the_day();
        if (this -> year = year)
        {
            bool expression = true; 
            if (this -> months = months)
            {
                expression = true;
            }
            if (this -> days = days)
            {
                expression = true; 
            }
        }
        else 
        {
            bool expression = false;
        }
    }
    
    {
        January j;
        j.add_note(); 
        j.display_calendar(); 
        if (this -> year = year)
        {
            bool expression = true;
            if (this -> days = days)
            {
                expression = true;
            }
            if (this -> months = months)
            {
                expression = true; 
            }
        }

        else 
        {
            bool expression = false; 
        }
    }

    {
        Febuary f ; 
        f.add_note(); 
        f.display_calendar(); 
        if (this -> year = year)
        {
            bool expression = true;
            if (this -> days = days)
            {
                expression = true;
            }
            if (this -> months = months)
            {
                expression = true; 
            }
        }

        else 
        {
            bool expression = false; 
        }
    }

    {
        March m; 
        m.add_note(); 
        m.display_calendar(); 
        if (this -> year = year)
        {
            bool expression = true;
            if (this -> days = days)
            {
                expression = true;
            }
            if (this -> months = months)
            {
                expression = true; 
            }
        }

        else 
        {
            bool expression = false; 
        }
    }

    {
        April a;
        a.add_note();  
        a.display_calendar(); 
        if (this -> year = year)
        {
            bool expression = true;
            if (this -> days = days)
            {
                expression = true;
            }
            if (this -> months = months)
            {
                expression = true; 
            }
        }

        else 
        {
            bool expression = false; 
        }
    }

    {
        May m; 
        m.add_note();
        m.display_calendar();

        if (this -> year = year)
        {
            bool expression = true;
            if (this -> days = days)
            {
                expression = true;
            }
            if (this -> months = months)
            {
                expression = true; 
            }
        }

        else 
        {
            bool expression = false; 
        }
    }

    {
        June J ;
        J.add_note(); 
        J.display_calendar(); 
        if (this -> year = year)
        {
            bool expression = true;
            if (this -> days = days)
            {
                expression = true;
            }
            if (this -> months = months)
            {
                expression = true; 
            }
        }

        else 
        {
            bool expression = false; 
        }
    }

    {
        July ju; 
        ju.add_note(); 
        ju.display_calendar(); 

        if (this -> year = year)
        {
            bool expression = true;
            if (this -> days = days)
            {
                expression = true;
            }
            if (this -> months = months)
            {
                expression = true; 
            }
        }

        else 
        {
            bool expression = false; 
        }
    }

    {
        August A;
        A.add_note();
        A.display_calendar(); 

        if (this -> year = year)
        {
            bool expression = true;
            if (this -> days = days)
            {
                expression = true;
            }
            if (this -> months = months)
            {
                expression = true; 
            }
        }

        else 
        {
            bool expression = false; 
        }
    }

    {
        September s; 
        s.add_note(); 
        s.display_calendar(); 

        if (this -> year = year)
        {
            bool expression = true;
            if (this -> days = days)
            {
                expression = true;
            }
            if (this -> months = months)
            {
                expression = true; 
            }
        }

        else 
        {
            bool expression = false; 
        }
    }

    {
        October o;
        o.add_note(); 
        o.display_calendar();

        if (this -> year = year)
        {
            bool expression = true;
            if (this -> days = days)
            {
                expression = true;
            }
            if (this -> months = months)
            {
                expression = true; 
            }
        }

        else 
        {
            bool expression = false; 
        }
    }

    {
        November n ;
        n.add_note(); 
        n.display_calendar();

        if (this -> year = year)
        {
            bool expression = true;
            if (this -> days = days)
            {
                expression = true;
            }
            if (this -> months = months)
            {
                expression = true; 
            }
        }

        else 
        {
            bool expression = false; 
        }
    }

    {
        December d;
        d.add_note(); 
        d.display_calendar(); 

        if (this -> year = year)
        {
            bool expression = true;
            if (this -> days = days)
            {
                expression = true;
            }
            if (this -> months = months)
            {
                expression = true; 
            }
        }

        else 
        {
            bool expression = false; 
        }
    }
}

void Calendar :: find_out_the_day()
{
    cout <<"Find out the day" << endl; 
    // tim mot ngay // 
    int totalDays; 
    Calendar *findDay(vector <int> &months, int totalDays);
    {
        for (int i = 1 ; i<= totalDays ; ++i)
        {
            cout <<"Day:" << endl; 
            totalDays++; 
             
        }
        cout << endl; 
    }
}

void Calendar :: print_all_the_days()
{
    cout <<"Print all the days" << endl; 
}

void Calendar :: add_note()
{
    cout <<"Add Note" << endl; 

    struct Event
    {
        string title; 
        string time; 
    }; 

    struct Days
    {
        int days; 
        vector <Event> events; 
    };

    // Luu tru toan bo thang // 
    vector <Days> months; 

    // Khoi tao thang // 
    
    {
        void intialize_month(vector<Days>&months, int totalDays);
        {
            int totalDays; 
            for (int i = 1 ; i <= totalDays; ++i)
            {
                months.push_back({i,{}});
                // them su kien vao thang // 
            }
        }
    }

    // Khoi tao ngay // 
    {
        void initialize_day(vector<Days> &day, int totalDays); 
        {
            int totalDays;
            for (int i = 1 ; i <= totalDays ; ++i)
            {
                cout <<"Day for 12 months!" << endl;  
            }
        }
    }
      
}