//7. Write C++ program to find diameter, circumference and area of circle using function

#include<iostream>   
using namespace std;



  float finddiameter(int radius) {
    float pi = 3.14;
    float diameter = (radius * 2);
    return(diameter);  
  }

  float findcircumference(int radius ) {
    float pi = 3.14;
    float circumference = 2 * pi * radius;
    return(circumference);
  }

  float findarea(int radius) {
    float pi = 3.14;
    float area = pi * radius * radius;
    return(area);
  }
  
  int main() {

    int radius;
    float pi=3.14;

    cout << "enter the radius : ";
    cin >> radius;

    cout << " diameter of circle = " << finddiameter(radius) << endl;;
    cout << " circumference of circle = " << findcircumference(radius)<<endl;
    cout << " area of circle = " << findarea(radius) << endl;
    
    return 0;
  }