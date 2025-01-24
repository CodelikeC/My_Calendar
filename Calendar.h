#include <iostream> 
using namespace std; 

#include <string> 
#include <vector> 

#include <algorithm> 

#ifndef Calendar_H
#define Calendar_H

class Calendar
{
    public: 
    Calendar(); 
    ~Calendar(); 
    Calendar(int days, int year, int months); 

    virtual ~Calendar()
    {
        cout <<"Calendar"<< endl;
        exit(0);  
    }

    public : 
    int days; 
    int months;
    int year; 

    bool confirmed_calendar();
    void find_out_the_day(); 
    void print_all_the_days(); 
    void add_note(); // add some events on calendar // 

    public : 
    void create_calendar();
    void delete_calendar(); 
    void add_more_calendar(); 

    void setYear(); 
    void setDays();
    void setMonths(); 

    int getYear(); 
    int getMonths(); 
    int getDays(); 

    Calendar *findDay(vector <int> &months, int totalDays);
}; 

    class January
    {
        public: 
        January(); 
        ~January(); 
        January(int year, int months, int days); 

        public : 
        int year; 
        int months;
        int days; 

        public: 
        void display_calendar(); 
        void add_note();  // them su kien // 
        void setDays(); 
        int getDays(); 

        void setMonths(); 
        int getMonths(); 

        void setYear(); 
        int getYear(); 
    };

    class Febuary : public January
    {   
        public: 
        Febuary(); 
        ~Febuary(); 
        Febuary(int year, int months, int days); 

        protected:
        int year; 
        int months;
        int days; 

        public: 
        void display_calendar (); 
        void add_note();

        void setDays(); 
        void setMonths();
        void setYear(); 

        int getDays(); 
        int getMonths(); 
        int getYear();  
    }; 

    class March : public Febuary
    {
        public: 
        March();
        ~March(); 
        March(int months, int year, int days); 

        protected: 
        int months;
        int year; 
        int days; 

        public:
        void display_calendar(); 
        void add_note(); 

        void setDays(); 
        void setMonths();
        void setYear(); 

        int getDays(); 
        int getMonths(); 
        int getYear(); 
    };

    class April: public March
    {
        public: 
        April(); 
        ~April(); 
        April(int year, int months, int days); 

        protected: 
        int year; 
        int months; 
        int days; 

        public: 
        void display_calendar(); 
        void add_note(); 

        void setDays(); 
        void setMonths();
        void setYear(); 

        int getDays(); 
        int getMonths(); 
        int getYear(); 
    }; 

    class May : public April
    {
        public:
        May(); 
        ~May();
        May(int year, int months, int days);

        protected:
        int year; 
        int months;
        int days;

        public: 
        void display_calendar(); 
        void add_note(); 

        void setDays(); 
        void setMonths();
        void setYear(); 

        int getDays(); 
        int getMonths(); 
        int getYear(); 
    }; 

    class June : public May
    {
        public: 
        June(); 
        ~June(); 
        June(int months, int year, int days);

        protected: 
        int months;
        int year; 
        int days; 

        public: 
        void display_calendar(); 
        void add_note(); 
        
        void setDays(); 
        void setMonths();
        void setYear(); 

        int getDays(); 
        int getMonths(); 
        int getYear(); 
    };

    class July : public June
    {
        public :
        July();
        ~July(); 
        July(int year, int months, int days); 

        protected: 
        int months;
        int year; 
        int days; 

        public: 
        void display_calendar(); 
        void add_note(); 
        
        void setDays(); 
        void setMonths();
        void setYear(); 

        int getDays(); 
        int getMonths(); 
        int getYear(); 

    }; 


    class August : public July
    {
        public :
        August();
        ~August(); 
        August(int year, int months, int days); 

        protected: 
        int months;
        int year; 
        int days; 

        public: 
        void display_calendar(); 
        void add_note(); 

        void setDays(); 
        void setMonths();
        void setYear(); 

        int getDays(); 
        int getMonths(); 
        int getYear(); 
    }; 

    class September : public August
    {
        public :
        September();
        ~September(); 
        September(int year, int months, int days); 

        protected: 
        int months;
        int year; 
        int days; 

        public: 
        void display_calendar(); 
        void add_note(); 
        
        void setDays(); 
        void setMonths();
        void setYear(); 

        int getDays(); 
        int getMonths(); 
        int getYear(); 
    }; 

    class October : public September
    {
        public :
        October();
        ~October(); 
        October(int year, int months, int days); 

        protected: 
        int months;
        int year; 
        int days; 

        public: 
        void display_calendar(); 
        void add_note(); 

        void setDays(); 
        void setMonths();
        void setYear(); 

        int getDays(); 
        int getMonths(); 
        int getYear(); 
    }; 

    class November : public October
    {
        public: 
        November();
        ~November(); 
        November (int year, int months, int days); 

        protected: 
        int months;
        int year; 
        int days; 

        public: 
        void display_calendar(); 
        void add_note(); 

        void setDays(); 
        void setMonths();
        void setYear(); 

        int getDays(); 
        int getMonths(); 
        int getYear(); 
        
    }; 

    class December: public November
    {
        protected: 
        int months;
        int year; 
        int days; 

        public: 
        void display_calendar(); 
        void add_note(); 

        void setDays(); 
        void setMonths();
        void setYear(); 

        int getDays(); 
        int getMonths(); 
        int getYear(); 
        
        public: 
        December(); 
        ~December(); 
        December(int year, int months, int days); 
    }; 
 

#endif
