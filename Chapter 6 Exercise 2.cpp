/*  Program File Name: Chapter 6 Exercise 2
    Programmer: Christian Min
    Date: 11/17/26
    Requirements:
    Write a function named celsius that accepts a fahrenheit temperature as an arguement and returns the temperature converted to censius. demonstrate the function by
    calling it in a loop that displays a table of every fifth fahrenheit temperature from 0 through 100 and its celisus equivalent.
*/

#include <iostream>
#include <iomanip>
using namespace std;

double fToC(double fTemp);      //to hold the function for converting f to c
double getTemp();       //to hold the function to ask the user for the input temp
void showResults(double, double);       //to hold the function for displaying the conversion for the temp the user inputs
void displayTable();        //to hold the function for displaying the table of f to c conversion from 0-100 in increments of 5

int main()
{
    double fTemp;
    double cTemp;

    fTemp = getTemp();      //defines the ftemp variable to the value from calling the getTemp()
    cTemp = fToC(fTemp);        //defines the ctemp variable to the value from calling fToC and passing ftemp through that function        
    showResults(fTemp, cTemp);      //pass ftemp and ctemp through showresults to print the results
    cout << "\n\n";
    displayTable();     //to call displaytable to show the results of the generic 0-100 conversion in increments of 5 degrees

    return 0;
}

double fToC(double fTemp) {
    return ((5.0 / 9.0) * (fTemp - 32));        //formula to calculate the f to c conversion
}
double getTemp() {
    double temp;
    cout << "Please enter a temperature in Fahrenheit: ";
    cin >> temp;
    return temp;
}
void showResults(double f, double c) {
    cout << fixed << setprecision(2);       //to format floating point to show only 2 values after decimal
    cout << f << " Fahrenheit is equivalent to " << c << " Celsius.";
}
void displayTable() {
    cout << fixed << setprecision(2);       //to format floating point to show only 2 values after decimal
    cout << setw(10) << "Fahrenheit" << setw(10) << "Celsius" << endl;      //use setw() with different values to make formatting look more appealing
    cout << string(22, '_') << endl;        //use string instead of multiple "_" in code for compactness

    for (int i = 0; i <= 100; i += 5) {     //for loop starting at 0 to 100, at increments of 5, printing out the conversion equivalent after each loop
        cout << setw(8) << static_cast<double>(i) << setw(11) << fToC(i) << endl;       //must use static_cast to convert the i integer to floating point double to avoid complile errors
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
