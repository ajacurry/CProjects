//Aja Curry

#include <iostream>
#include <string>
#include <fstream> 
using namespace std;

int main()
{
    int total;
    int temp;
    temp = 0;
    total = 0;

    //Declare a handle
    ifstream infile; //Open only

    //Open the file
    infile.open("f:\\Towson Fall 2019\testFile1.txt");

    infile >> temp;

    while (infile)
    {
        //Calculations
        total = total + temp;

        infile >> temp;
    }

    cout << "The total of all temperatures is: " << total << endl;

    return 0;
}