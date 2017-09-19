// File: functionsReturn.cpp
// Created by Carson Tyler on 9/14/2017 for CS1410.
// Copyright (c) 2017 WSU

/* Task: Define a function that takes one input parameter (integer)
 * Increments the value by 1
 * Returns  new value to the user
 */
#include <iostream>
using namespace std;

// Prototypes
int Increment(int i1);      // Requires just an integer
void RealIncrement(int &i); // Requires an address of an integer

// Main Program
int main()
{
    int num1 = 0;
    int num2 = 0;

    // Function 1
    cout << "Enter a number: ";
    cin >> num1;
    cout << "Your number is " << num1 << endl;
    num2 = Increment(num1);
    cout << "The new number is " << num2 << endl;

    // Function 2
    cout << "Address of num: " << &num1 << endl;
    RealIncrement(num1);
    cout << "Address of new num: " << num1 << endl;

    return 0;
}
// Function Definitions
// Passing parameters by value. MAKES A COPY
int Increment(int i1)
{
    cout << "Address of i inside IncrementInt: " << &i1 << endl;
    i1++;
    return i1;
}

// Increment original integer by 1. ACTUALLY CHANGES
// NEED ADDRESS OF VARIABLE
// Passing parameter by reference (pass the address)
// Address is the same number
void RealIncrement(int &i)
{
    cout << "Address of i inside RealIncrement: " << &i << endl;
    i++;
}