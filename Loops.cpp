//Aja Curry

#include <iostream>
using namespace std;

int main()
{
    int num,sum = 0,count = 0;

    cout << endl << "Enter a number, use '999' to quit: " << endl; //Start
    cin >> num; //Start

    while (num != 999) //Test
    {
        cout << "The number entered is: " << num << endl; //Action
        sum += num;

        cout << "Enter a number, use '999' to quit: " << endl; //Restart
        cin >> num; //Restart
        count++;
    }

        cout << "The sum of all numbers is: " << sum << endl;
        cout << "# of numbers used: " << count << endl;

    return 0;
}