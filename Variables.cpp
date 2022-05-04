//Aja Curry

#include <iostream>
#include <string>
using namespace std;

int main()
{

	//declarations
	string firstName;
 	int age;
	float bodyTemp;
	float height;
	float weight;
	char sex;
	string lastName;

	//input
	cout << "Enter your first name: " << endl;
	cin >> firstName;
	cout << "Enter your last name: " << endl;
	cin >> lastName;

	//output
	cout << "Hello " << firstName << "! " << endl;
    cout << "Enter your age: " << endl;
    cin >> age;
    cout << "Your age is " << age << " today! " << endl;
    cout << "Enter your body temperature: " << endl;
    cin >> bodyTemp;
    cout << "Enter your height in feet: " << endl;
    cin >> height;
    cout << "Enter your height in inches: " << endl;
    cin >> height;
    cout << "Enter your weight in pounds: " << endl;
    cin >> weight;
    cout << "Enter your sex: " << endl;
    cin >> sex;

    return 0;
}
