#ifndef CIRCLE_H
#define CIRCLE_H
#pragma once
class Circle {
    double radius;
    public:
        Circle();
        Circle(double r);
        double area (){return (3.14*radius*radius);}
        double circums(){return (2*3.14*radius);}
        double radiuss(){return (radius);}
};
#endif