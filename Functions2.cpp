//Aja Curry

#include <iostream>
using namespace std;

float Double (float num);

int main()
{
    //Value-returning
    char ans;
    float num;
    float area;
    float finalResult;

    cout << "Do you want to play today? Use 'y' for yes and 'n' for no." << endl;
    cin >> ans;

    while ((ans == 'Y' || ans == 'y'))
    {
        cout << "Enter a number: " << endl;
        cin >> num;

        finalResult = (num + num);
        cout << num << " doubled is: " << finalResult << endl;

        cout << "Do you want to play today? Use 'y' for yes and 'n' for no." << endl;
        cin >> ans;
    }

    return 0;
} //End

//Function double
float Double(float number)
{
    float results;

    results = (number - 1);

    return results;
}