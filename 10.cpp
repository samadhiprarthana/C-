
 //10. Write C++ program to print elements of array using recursion
 
#include <iostream>            
using namespace std;
#define MAX_SIZE 100



void PrintArray(int arr[], int start, int len)
{

    if (start >= len)
        return;

    cout << arr[start] << "\t";

    PrintArray(arr, start + 1, len);
}

int main()
{
    int arr[MAX_SIZE];
    int num, i;

    cout << "Enter size of the array: ";
    cin >> num;

    cout << "Enter elements in the array: ";
    for (i = 0; i < num; i++)
    {
        cin >> arr[i];
    }

    cout << "Elements in the array: ";
    PrintArray(arr, 0, num);

    return 0;
}