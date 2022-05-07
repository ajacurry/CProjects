//Aja Curry

#include <iostream>
using namespace std;
void PrintLines(int numLines); //Prototype

int main()
{
    //This program prints a "Welcome Home!" message
    PrintLines(2); //Actual parameter and prints lines of asterisks
    cout << "Welcome Home!" << endl;

    PrintLines(4); //Actual parameter

    return 0;
} //End of main method

void PrintLines(int numLines) //Formal Parameter
{
    int line;

    for (line = 0; line < numLines; line++) //Formal Parameter
    {
        cout << "***************************" << endl;
    }
}

