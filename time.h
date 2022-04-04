#ifndef TIME_H
#define TIME_H

#include <iostream>

class Time
{
    private:
        int time;
        int hour;
        int minute;
        int second;
    public:

        Time();
        Time(int t);
        friend std::ostream &operator<<( std::ostream &output, const Time &t );
        friend std::istream &operator>>( std::istream  &input, Time &t );
        Time operator+(const Time &T) const;
        Time operator-(const Time &T) const;
        operator int();



};

#endif // TIME_H
