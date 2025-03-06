//4. Write C++ program to check even or odd using functions

#include<iostream>               
using namespace std;


void findevenodd(int num) {
  if (num % 2 == 0) {
    cout << num << " is a even number";
  }
  else {
    cout << num << " is a odd number ";
  }
}

int main() {

  int num;

  cout << "Enter the number : ";
  cin >> num;

  findevenodd(num);

  return 0;
}