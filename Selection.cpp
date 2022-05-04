//Aja Curry

#include <iostream>
using namespace std;

int main()
{
    //Part 1: Apples and Oranges

    //Part 1 Variables
    float applePrice;
    float orangePrice;

    //Part 2 Variables
    int testScore;

    cout << "Enter the price of apples: " << endl;
    cin >> applePrice;

    cout << "Enter the price of oranges: " << endl;
    cin >> orangePrice;

    //Which costs more
    if (applePrice > orangePrice)
    {
        cout << "Apples cost more than oranges" << endl;
    }
    else if (orangePrice > applePrice)
    {
        cout << "Oranges cost more than apples" << endl;
    }
    else
    {
        cout << "Apples and oranges cost the same amount." << endl;
    }

    //Part 2: Test Scores
    cout << "Enter class test score: " << endl;
    cin >> testScore;

    if ((testScore > 100) || (testScore < 0))
        cout << "INVALID" << endl;
    else if (testScore >= 90)
        cout << "A" << endl;
    else if (testScore >= 80)
        cout << "B" << endl;
    else if (testScore >= 70)
        cout << "C" << endl;
    else if (testScore >= 60)
        cout << "D" << endl;
    else
        cout << "F" << endl;

    return 0;
}