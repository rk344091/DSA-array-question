#include <iostream>
using namespace std;
void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
void reverse(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[6] = {9, 8, 7, 6, 5, 4};

    reverse(arr1, 5);
    cout << endl;
    reverse(arr2, 6);

    printarray(arr1, 5);
    cout << endl;
    printarray(arr2, 6);
}