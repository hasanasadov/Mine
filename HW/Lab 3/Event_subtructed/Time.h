#ifndef TIME_H
#define TIME_H
#pragma once

class Time{
    private:
        int minute;
        int hour;
    public:
        Time();
        Time(int,int);
        void print();
};


#endif