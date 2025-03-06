//5. Write C++ Program to convert binary number to decimal


#include<iostream>
using namespace std;
int main()
{
    int binarynum, decinum = 0, i = 1, rem;
    cout << "Enter any Binary Number: ";
    cin >> binarynum;


    while (binarynum != 0)
    {
        rem = binarynum % 10;
        decinum = decinum + (rem * i);
        i = i * 2;
        binarynum = binarynum / 10;
    }

    cout << " Decimal Value : " << decinum  << endl;;
   
    return 0;
}