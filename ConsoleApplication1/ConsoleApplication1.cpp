// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
long sum(int n)
{
    long sum = 0;
    int i;
    for (int i = 0;i <= n;i++)
    {
        if (i % 2 == 0)
        {
            sum += i;

        }

    }
    return sum;

}

double calculator()
{
    double a, b; 
    char op;
    cout << "input a=";
    cin >> a;
    cout << "\n";
    cout << "input operator ";
    cin >> op;
    cout << "input b=";
    cin >> b;
    cout << "\n";
    if (op == '+')
    {
        return a + b;

    }
    else if (op == '-')
    {
        return a - b;

    }
    else
        return NULL;
}


struct student {
    string idNumber;
    char name[100];
    char major[20];
    double gpa;

};


void main()
{
    int num[3][3] = { {1,2,3}, {4,2,5},{6,6,77} };
    cout << sizeof(num[2][2]);
    for (int i = 0;i < 3;i++)
    {
        for (int j = 0;j < 3;j++)

        {
            cout << &num[i][j]<<"\n";

        }


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
