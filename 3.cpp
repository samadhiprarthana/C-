//Write a program to find the factorial of a given number by using a function in C++ programming language.

#include<iostream>
using namespace std;


  void findfac(int num) {
    int fac = 1;
    for (int i = 1; i <= num; i++) {
      fac = fac * i;
    }
    cout << "factorial : "<<fac;
  }
  

  int main() {

    int num;

    cout << "enter the number : ";
    cin >> num;

    findfac(num);

    return 0;
  }