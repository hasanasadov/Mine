#ifndef DATE_H
#define DATE_H
#pragma once
class Date{
    private:
        int day;
        int month;
        int year;
    public:
        Date();
        Date(int,int,int);
        void print();
};
#endif