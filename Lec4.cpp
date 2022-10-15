#include <iostream>
using namespace std;
// Reverse an array using recursion

void reverseArrayUsingRecursion(int arr[], int size, int i = 0)
{
    if (i >= size - 1)
    {
        return;
    }

    swap(arr[i], arr[size - 1]);
    reverseArrayUsingRecursion(arr, size - 1, i + 1);
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 7, 8};
    int size = sizeof(arr) / sizeof(int);
    printArray(arr, size);
    reverseArrayUsingRecursion(arr, size);
    printArray(arr, size);
    return 0;
}