# Y tuong cho project Calendar # 
1. File header:
- Tao class cho Calendar 
- Tao class cho tung thang... 
- Tao cac functionality cho Calendar va cho tung thang... 
2. File cpp: 
- O file Calendar.cpp: Tao mot ma tran cho Calendar (bao gom 12 thang)
- o file Minor_calendar : Tao ma tran cho tung Calendar , chuc nang cho tung Calendar! 
- O file Menu_Calendar: Tao mot menu cho toan bo Calendar 
- O file Main: file test_bench cho toan bo chuong trinh! 

#ifndef MINORCALENDAR_H
#define MINORCALENDAR_H

#include <iostream>
#include <vector>
#include <string>
using namespace std; 

class Month 
{
protected:
    int year;
    int days;
    std::vector<std::string> notes;

public:
    Month(int year, int days) : year(year), days(days) {}
    virtual ~Month() {}

    int getYear() const { return year; }
    int getDays() const { return days; }

    virtual void add_note(const std::string& note) 
    {
        notes.push_back(note);
    }

    virtual void display_calendar() const 
    {
        std::cout << "Year: " << year << std::endl;
        std::cout << "Days: " << days << std::endl;
        std::cout << "Notes: " << std::endl;
        for (const auto& note : notes) 
        {
            std::cout << "- " << note << std::endl;
        }
    }

    virtual void display_notes() const 
    {
        for (const auto& note : notes) 
        {
            std::cout << note << std::endl;
        }
    }
};

class December : public Month 
{
public:
    December(int year) : Month(year, 31) {}

    void add_note(const std::string& note) override 
    {
        notes.push_back(note);
        std::cout << "Added note to December: " << note << std::endl;
    }

    void display_calendar() const override 
    {
        std::cout << "Displaying December Calendar" << std::endl;
        Month::display_calendar();
    }
};

#endif // MINORCALENDAR_H


#include "MinorCalendar.h"

int main() {
    December december(2023);
    december.add_note("Christmas");
    december.add_note("New Year's Eve");

    december.display_calendar();
    december.display_notes();

    return 0;
}