//Aja Curry

#include <iostream>
using namespace std;

int main()
{
    //Array declaration
    int tests[6];

    //Inputting test scores
    cout << "Enter " << 6 << " test scores: " << endl;

    for (int i = 0; i < 6; i++)
    {
        cout << "Enter test " << i + 1 << ": ";
        cin >> tests[i];
    }

    //Prints out first test score
    cout << endl;

    cout << "The first test score is: " << tests[0] << endl;

    //Prints out last test score
    cout << "The last test score is: " << tests[5] << endl;

    return 0;
}