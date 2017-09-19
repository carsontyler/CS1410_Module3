// File: functionsStruct1
// Created by Carson Tyler on 9/14/2017 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>
using namespace std;
// Task: Create a function that displays the x and y coordinate of a point
// Constants & Structures
struct Point
{
    float x;    // x value
    float y;    // y value
};

// Prototypes
// The prototype MUST be defined AFTER the structs
void DisplayXY (struct Point p);

// Main Program Program
int main(void)
{

    return 0;
}
// Function Definitions
void DisplayXY (struct Point p)
{
    cout << "x = " << p.x << endl;
    cout << "y = " << p.y << endl;
}