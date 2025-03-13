/*
Name: Claudia Yamamoto
Date: Apr 17
Prof: Tong Yi
Assignment: Lab 9 A

this program will output 3d coordinates
*/

#include <iostream>
#include <cmath>

class Coord3D {
    public:
        double x;
        double y;
        double z;
};

double length(Coord3D *p){
    return sqrt(pow(p->x, 2) + pow(p->y, 2) + pow(p->z, 2));
}
Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2){
    return length(p1) < length(p2) ? p2 : p1;
}
