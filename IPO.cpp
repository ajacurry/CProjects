//Aja Curry

#include <iostream>
using namespace std;

int main()
{
    float rmlength;
    float rmWidth;
    float rmArea;
    float rmPerimeter;

    //Length and width of a room
    cout << "Enter the length, then the width of the room: " << endl;
    cin >> rmlength;
    cin >> rmWidth;

    //Calculation
    rmArea = (rmlength + rmWidth);
    rmPerimeter = 2 * (rmlength + rmWidth);

    //Display
    cout << "Area: " << rmArea << endl;
    cout << "Perimeter: " << rmPerimeter << endl;
    cout << "Length: " << rmlength << endl;
    cout << "Width: " << rmWidth << endl;

    return 0;
}