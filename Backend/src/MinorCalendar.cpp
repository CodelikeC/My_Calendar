#include <iostream> 
using namespace std; 
#include <string> 
#include "Calendar.h"

January :: January()
{
    cout <<"The constructor of the January"<< endl; 
}

January :: ~January()
{
    cout <<"The deconstructor of the January" << endl; 
}

January :: January(int year, int months, int days)
{
    this -> year = year; 
    this -> months = months;
    this -> days = days; 
}

void January :: setDays(int days)
{
    this -> days = days; 
}

int January :: getDays()
{
    return days; 
}

void January :: setMonths(int months)
{
    this -> months = months ; 
}

int January :: getMonths()
{
    return months; 
}

void January :: setYear(int year)
{
    this -> year = year; 
}

int January :: getYear()
{
    return year; 
}

void January :: display_calendar()
{
    cout <<"Display Calendar" << endl; 
}

void January :: add_note()
{
    cout << "add event" << endl;
}

Febuary :: Febuary()
{
    cout <<"Hello Febuary" << endl;
    year = 0 ;
    months = 0 ; 
    days = 0 ; 
}

Febuary :: Febuary(int year, int months, int days)
{
    this -> year = year; 
    this -> months = months; 
    this -> days = days; 
}

Febuary :: ~Febuary()
{
    cout <<"Hello Febuary" << endl; 
    exit(0); 
}

void Febuary :: setDays(int days)
{
    this -> days = days; 
}

int Febuary :: getDays()
{
    return days; 
}

void Febuary :: setMonths(int months)
{
    this -> months = months ; 
}

int Febuary :: getMonths()
{
    return months ; 
}

void Febuary :: setYear(int year)
{
    this -> year = year; 
}

int Febuary :: getYear()
{
    return year; 
}

void Febuary :: add_note()
{
    cout <<"add note" << endl;
}

void Febuary :: display_calendar()
{
    cout <<"Display Calendar" << endl;
}

March :: March()
{
    cout <<"Hello March" << endl; 
}

March :: ~March()
{
    year = 0 ; 
    days = 0 ; 
    months = 0 ; 
}

March :: March (int year, int months, int days)
{
    this -> year = year; 
    this -> months = months; 
    this -> days = days ; 
}

void March :: setDays(int days)
{
    this -> days = days ; 
}

int March :: getDays()
{
    return days; 
}

void March :: setMonths(int months)
{
    this -> months = months;
}

int March :: getMonths()
{
    return months; 
}

void March :: setYear(int year)
{
    this -> year = year; 
}

int March :: getYear()
{
    return year; 
}

void March :: add_note()
{
    cout <<"add note" << endl; 
}

void March :: display_calendar()
{
    cout <<"Display Calendar" << endl; 
}

April :: April()
{
    cout <<"Hello April" << endl;
    days = 0; 
    months = 0;
    year = 0; 
}

April :: ~April()
{
    cout <<"Hello April" << endl; 
    exit(0); 
}

April :: April(int year, int months, int days)
{
    this -> year = year;
    this -> months = months; 
    this -> days = days;
}

void April :: setDays(int days)
{
    this -> days = days; 
}

int April :: getDays()
{
    return days;
}

void April :: setMonths(int months)
{
    this -> months = months; 
}

int April :: getMonths()
{
    return months; 
}

void April :: setYear(int year)
{
    this -> year = year ; 
}

int April :: getYear()
{
    return year ; 
}

void April :: add_note()
{
    cout << "add note" << endl; 
}

void April :: display_calendar()
{
    cout <<"Display Calendar" << endl ;
}

May :: May()
{
    cout <<"Hello May" << endl;
    days = 0 ; 
    year = 0 ; 
    months = 0 ;
}

May :: ~May()
{
    cout <<"hello may" << endl; 
    exit(0); 
}

May :: May(int year, int days, int months)
{
    this -> year = year; 
    this -> days = days; 
    this -> months = months ; 
}

void May :: setDays(int days)
{
    this -> days = days; 
}

int May :: getDays()
{
    return days; 
}

void May :: setMonths(int months)
{
    this -> months = months; 
}

int May :: getMonths()
{
    return months ; 
}

void May :: setYear(int year)
{
    this -> year = year;  
}

int May :: getYear()
{
    return year; 
}

void May :: add_note()
{
    cout <<"add note" << endl; 
}

void May :: display_calendar()
{
    cout <<"Display Calendar" << endl;
}

June :: June()
{
    cout <<"Hello June" << endl; 
    days = 0 ;
    months = 0 ; 
    year = 0 ; 
}

June :: ~June()
{
    cout <<"Good bye June" << endl;
    exit(0) ;
}

June :: June(int year , int months, int days)
{
    this -> year= year; 
    this -> months = months;
    this -> days = days; 
}

void June :: setDays(int days)
{
    this -> days = days ;
}

int June :: getDays()
{
    return days; 
}

void June :: setMonths(int months)
{
    this -> months  = months; 
}

int June :: getMonths()
{
    return months; 
}

void June :: setYear(int year)
{
    this -> year = year; 
}

int June :: getYear()
{
    return year;
}

void June :: add_note()
{
    cout <<"add note" << endl; 
}

void June :: display_calendar()
{
    cout <<"Display Calendar" << endl;
}

July :: July ()
{
    cout <<"Hello July" << endl; 
    year = 0 ; 
    months = 0 ; 
    days = 0 ; 
}

July :: ~July()
{
    cout <<"Goodbye July" << endl; 
    exit(0); 
}

July :: July(int year, int months, int days)
{
    this -> year = year; 
    this -> months = months; 
    this -> days = days; 
}

void July :: setDays(int days)
{
    this -> days = days;
}

int July :: getDays()
{
    return days; 
}

void July :: setMonths(int months)
{
    this -> months = months; 
}

int July :: getMonths()
{
    return months;
}

void July :: setYear(int year)
{
    this -> year = year; 
}

int July :: getYear()
{
    return year; 
}

void July :: add_note()
{
    cout <<"Add note" << endl; 
}

void July :: display_calendar()
{
    cout <<"Display Calendar" << endl;
}

August :: August()
{
    cout <<"Hello August" << endl;
    days = 0 ; 
    months = 0 ; 
    year = 0 ; 
}

August :: ~August()
{
    cout <<"Goodbye August" << endl ;
    exit(0); 
}

August :: August(int year, int months, int days)
{
    this ->  year = year;
    this -> months = months;
    this -> days = days; 
}

void August :: setDays(int days)
{
    this -> days = days;
}

int August :: getDays()
{
    return days; 
}

void August :: setMonths(int months)
{
    this -> months = months; 
}

int August :: getMonths()
{
    return months; 
}

void August :: setYear(int year)
{
    this -> year = year; 
}

int August :: getYear()
{
    return year; 
}

void August :: add_note()
{
    cout <<"Add note" << endl; 
}

void August :: display_calendar()
{
    cout <<"Display Calendar" << endl; 
}

September :: September()
{
    cout <<"Hello September" << endl; 
    days = 0 ; 
    months = 0 ; 
    year = 0 ; 
}

September :: ~September()
{
    cout <<"Goodbye September" << endl; 
    exit(0);
}

September :: September(int days , int year, int months)
{
    this -> days = days;
    this -> months = months;
    this -> year = year; 
}

void September :: setDays(int days)
{
    this -> days = days; 
}

int September :: getDays()
{
    return days; 
}

void September :: setMonths(int months)
{
    this -> months = months; 
}

int September :: getMonths()
{
    return months;
}

void September :: setYear(int year)
{
    this -> year= year; 
}

int September :: getYear()
{
    return year; 
}

void September :: add_note()
{
    cout <<"add note" << endl; 
}

void September :: display_calendar()
{
    cout <<"Display the calendar" << endl; 
}

October :: October()
{
    cout <<"Hello October" << endl; 
    days = 0 ; 
    months = 0 ; 
    year = 0 ; 

}

October :: ~October()
{
    cout <<"Goody bye October" << endl; 
    exit(0) ; 
}

October :: October(int days , int months, int year)
{
    this -> days  = days; 
    this -> months = months;
    this -> year = year; 
}

void October :: setDays(int days)
{
    this -> days = days; 
}

int October :: getDays()
{
    return days; 
}

void October :: setMonths(int months)
{
    this -> months = months;
}

int October :: getMonths()
{
    return months ; 
}

void October :: setYear(int year)
{
    this -> year = year; 
}

int October :: getYear()
{
    return year; 
}

void October :: add_note()
{
    cout <<"add note" << endl; 
}

void October :: display_calendar()
{
    cout <<"Display Calendar" << endl; 
}

November :: November ()
{
    cout <<"Hello November" << endl; 
    days = 0 ; 
    year = 0; 
    months  = 0 ; 
}

November :: November (int days, int months, int year)
{
    this -> months = months; 
    this -> days = days;
    this -> year = year;
}

November :: ~November()
{
    cout <<"Gooybye Novmeber" << endl; 
    exit(0) ; 
}

void November :: setDays(int days)
{
    this -> days = days ; 
}

int November :: getDays()
{
    return days;
}

void November :: setMonths(int months)
{
    this -> months = months;
}

int November :: getMonths()
{
    return months ; 
}

void November :: setYear(int year)
{
    this -> year = year; 
}

int November :: getYear()
{
    return year; 
}

void November :: add_note()
{
    cout <<"add note" << endl; 
}

void November :: display_calendar()
{   
    cout <<"Display Calendar" << endl;
}

December :: December ()
{
    cout <<"Hello December" << endl; 
    days = 0 ; 
    months = 0; 
    year =0 ; 
}

December :: ~December()
{
    cout <<"Goodbye December" << endl; 
    exit(0); 
}

December :: December (int days, int months , int year)
{
    this -> days = days;
    this -> months = months; 
    this -> year = year; 
}

void December :: setDays(int days)
{
    this-> days = days; 
}

int December :: getDays()
{
    return days; 
}

void December :: setMonths(int months)
{
    this -> months = months; 
}

int December :: getMonths()
{
    return months;
}

void December :: setYear(int year)
{
    this -> year = year; 
}

int December :: getYear()
{
    return year; 
}

void December :: add_note()
{
    cout <<"add event" << endl;
    
}

void December :: display_calendar()
{
    cout <<"Display Image" << endl;
}




