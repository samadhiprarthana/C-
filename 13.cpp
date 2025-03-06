//13. Write C++ program to find maximum and minimum elements in array using recursion
#include <iostream>
using namespace std;
#define ARR_SIZE 100


int Findmax(int array[], int index, int len)
{
    int max;
    if (index >= len - 2)
    {
        if (array[index] > array[index + 1])
            return array[index];
        else
            return array[index + 1];
    }

    max = Findmax(array, index + 1, len);

    if (array[index] > max)
        return array[index];
    else
        return max;
}


int Findmin(int array[], int index, int len)
{
    int min;

    if (index >= len - 2)
    {
        if (array[index] < array[index + 1])
            return array[index];
        else
            return array[index + 1];
    }

    min = Findmin(array, index + 1, len);

    if (array[index] < min)
        return array[index];
    else
        return min;
}



int main()
{
    int array[ARR_SIZE], Num, max, min;
    int i;

    cout << "Enter size of the array: ";
    cin >> Num;
    cout << "Enter " << Num << " elements in array: ";
    for (i = 0; i < Num; i++)
    {
        cin >> array[i];
    }

    max = Findmax(array, 0, Num);
    min = Findmin(array, 0, Num);

    cout << "Minimum element in array: " << min << endl;
    cout << "Maximum element in array: " << max << endl;

    return 0;
}