#include <iostream>
using namespace std;

int main()
{
    int size = 10;
    int arr[size];
    cout << "Enter the weights of the 10 packages:\n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "Sorted array in ascending order: [";
    for (int i = 0; i < size - 1; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << arr[size - 1] << "]\n";

    return 0;
}
