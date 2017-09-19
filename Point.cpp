// File: Point
// Created by Carson Tyler on 9/19/2017 for CS1410.
// Copyright ©2017 WSU
#include <iostream>
using namespace std;
// Global, Constants, Structures
const int MAX_X = 10;                                   // Everybody can see and modify
const int MAX_Y = 10;                                   // Can use struct with larger set of data
const float IN_CM = 2.54;

struct Point
{
    float x;                                            // x-coordinate
    float y;                                            // y-coordinate
};

// Prototypes
void ShowPoint(const struct Point p);                   // Constant structure point. Take a constant address of a structure point
                                                        // You cannot modify he content of the structure
void UpdatePoint(struct Point &p);                      // Void, not getting anything back. BY VALUE = copy
struct Point CreatePoint();                             // Returning point
struct Point CreatePointValue(float x = 0.0, float y = 0.0);
// Inline functions
inline float InchesToCM(float val) { return val * IN_CM;};

// Main Program
int main(void)
{
    Point p1 = {2.5, 3.1};
    Point p2, p3;

    ShowPoint(p1);
    UpdatePoint(p1);
    ShowPoint(p1);

    p2 = CreatePoint();
    ShowPoint(p2);                                      // Catch a return with the same data type

    p3 = CreatePointValue(1.5, 7.9);
    ShowPoint(p3);

    p3.x = InchesToCM(1.5);
    ShowPoint(p3);

    return 0;
}


// Function Definitions
void ShowPoint(const struct Point p)
{
    cout << "x = " << p.x << endl;
    cout << "y = " << p.y << endl;
    // CAN'T PUT p.x = 7.0 BECAUSE IT IS READ ONLY
}
void UpdatePoint(struct Point &p)
{
    // Update x and y by incrementing their value by 1
    p.x += 1.0;
    p.y += 1.0;
}
struct Point CreatePoint()
{
    Point p;
    p.x = 0.0;
    p.y = 0.0;

    return p;
}
/* Take two optional input values. If no values are provided,
 * use the DEFAULT values to initialize the parameters only on the parameters
 */
struct Point CreatePointValue(float x, float y)
{
    Point p;
    p.x = x;
    p.y = y;

    return p;
}