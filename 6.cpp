//6. Write C++ Program to convert decimal number to binary

#include <iostream>      
using namespace std;

int main()
{
  int a[10], num,i;

  cout << "Enter the any decimal number : ";
  cin >> num;


  for (i = 0; num > 0; i++)
  {
    a[i] = num % 2;
    num = num / 2;
  }

  cout << "Binary  number : ";
  for ( i = i - 1; i >= 0; i--)
  {
    cout << a[i];
  }
}