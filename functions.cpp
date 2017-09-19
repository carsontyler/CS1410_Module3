#include <iostream>
using namespace std;

/* Task: Define a function Arithmetic() which takes two floats as input and it displays:
 * Sum, difference, product
 */

//Function Prototype
void Arithmetic(float f1, float f2);

int main()
{
    float num1, num2;
    bool b;
    char answer;

    // Run the
    while (!b)
    {
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;

        Arithmetic(num1, num2);
        cout << "Would you like to continue? [y/n]" << endl;
        cin >> answer;
        if (answer == 'n')
        {
            b = true;
        }

    }
    return 0;
}
// Function definition
void Arithmetic(float f1, float f2)
{
    cout << "The sum of the numbers is: " << f1 + f2 << endl;
    cout << "The different of the numbers is: " << f1 - f2 << endl;
    cout << "The product of the numbers is: " << f1 * f2 << endl;

}
