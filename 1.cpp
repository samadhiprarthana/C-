//Create a function to print prime numbers between two numbers by using C++ programming language

#include<iostream>
using namespace std;


void findprime(int num) {
  int y = 0;
  int x = 2;

  while (x <= num / 2) {
    if (num % x == 0) {
      y = 1;
      break;
    }
    x++;
  }
  if (y == 0) {
    cout << num << " is a prime number " << endl;
  }
  else {
    cout << num << " is not a prime number " << endl;
  }

}


int main() {


  int num;
  cout << "enter the any number :";
  cin >> num;

  findprime(num);
  return 0;
}