#ifndef EVENT_H
#define EVENT_H
#include "Date.h"
#include "Time.h"

#include <string.h>
using namespace std;
#pragma once

class Event{
    private:
        string name;
        Date eventdate;
        Time eventtime;
    public:
        Event();
        Event(string ,Date ,Time );
        void print();
};

#endif