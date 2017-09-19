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
void Display(struct Point p);

// Main Program Program
int main(void)
{
    Display first = {2, 8};
    return 0;
}
// Function Definitions
void Display(struct Point p)
{
    cout << "x = " << p.x << endl;
    cout << "y = " << p.y << endl;
}