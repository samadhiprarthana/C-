//2. Write a Program to print the Fibonacci sequence of a number using functions.

#include<iostream>
using namespace std;
void findfibonocci(int range)
{
    int a = 0, b = 1, c;
    while (a <= range)
    {
        cout<< a <<" ";
        c = a + b;
        a = b;
        b = c;
    }
}

int main()
{
    int range;

    cout << "enter the number : ";
    cin >> range;

    cout << "Fibonacci sequence of a number : ";
    findfibonocci(range);

    return 0;
}