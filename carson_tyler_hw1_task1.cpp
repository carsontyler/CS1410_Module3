// File: CarsonTylerHw2_Task1.cpp
// Created by Carson Tyler on 9/19/2017 for CS1410.
// Copyright ©2017 WSU
#include <iostream>
using namespace std;
/*  Structures/Constants */
struct house
{
    int streetNum;
    char streetName[30];
    double price;
};

// Function prototypes
struct house InputHouse(void);
void PrintHouse(int houseNum, struct house h);
int ComparePrices(struct house h1, struct house h2);

/* Main Program */
int main(int argc, char* argv[])
{
    cout<<"Enter info for first house\n";
    struct house firstHouse = InputHouse();
    cout<<"\nEnter info for second house\n";
    struct house secondHouse = InputHouse();

    PrintHouse(1, firstHouse);
    printf("\n\n");
    PrintHouse(2, secondHouse);
    printf("\n\n");

    int comparison = ComparePrices(firstHouse, secondHouse);
    /* Based on comparison value, use a switch
     * statement to display all possibilities:
     * 1) "the first house is cheaper"
     * 2) "the two houses are equally expensive"
     * 3) "the second house is cheaper"
     * 4) "invalid comparison value there must be a bug"
     */
    switch (comparison)
    {
        case 1:
            cout << "The first house is cheaper" << endl;
            break;
        case 2:
            cout << "The two houses are equally expensive" << endl;
            break;
        case 3:
            cout << "The second house is cheaper" << endl;
            break;
        default:
            cout << "Invalid comparison, please try again" << endl;
            break;
    }

    return 0;
}

/* Function Definitions */
// Enter information for a new house set
struct house InputHouse(void)
{
    house h;
    cout << "Please enter the street Number: " << endl;
    cin >> h.streetNum;
    cout << "Please enter the street Name: " << endl;
    cin >> h.streetName;
    cout << "Please enter the Price: " << endl;
    cin >> h.price;

    return h;
}
// Print information for the houses
void PrintHouse(int houseNum, struct house h)
{
    cout << houseNum << " house: at " << h.streetNum << " " <<
         h.streetName << " " << " for $" << h.price << endl;
}
// Compare the two prices, returning a number for comparison in main
int ComparePrices(struct house h1, struct house h2)
{
    int i;
    if(h1.price < h2.price)
        i = 1;
    else if(h2.price == h1.price)
        i = 2;
    else if(h2.price < h1.price)
        i = 3;
    else
        i = 4;

    return i;
}
