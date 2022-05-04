//Aja Curry

#include <iostream>
using namespace std;

int main()
{
    int num1;
    int num2;
    int sum;
    int diff;
    int prod;
    int quot;
    int mod;

    cout << "Enter two integer values: " << endl;
    cin >> num1 >> num2;

    sum = num1 + num2;
    cout << num1 <<  " + " << " is " << sum << endl;;

    diff = num1 - num2;
    cout << num1 << " - " << " is " << diff << endl;

    prod = num1 * num2;
    cout << num1 << " * " << num2 << " is " << prod << endl;

    //For dividing
    if (num2 == 0)
    {
	    cout << "CANNOT DIVIDE BY ZERO!" << endl;
    }
    else
    {
	    quot = (float) num1 / num2;
	    cout << num1 << “ / “ << num2 << quot << endl;
    }

    mod = num1 % num2;
    cout << num1 << " % " << num2 << " is " << mod << endl;

    return 0;

    
}