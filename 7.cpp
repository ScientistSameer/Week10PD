#include <iostream>
using namespace std;

void bubbleSort(int arr[], int length)
{
    for (int i = 0; i < length - 1; i++)
    {
        for (int j = 0; j < length - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

bool canFormConsecutiveList(int arr[], int length)
{
    bubbleSort(arr, length);
    for (int i = 1; i < length; i++)
    {
        if (arr[i] != arr[i - 1] + 1)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int length;
    cout << "Enter the length of the array: ";
    cin >> length;
    cout << "Enter the elements of the array: " << endl;
    int arr[length];
    for (int i = 0; i < length; i++)
    {
        cin >> arr[i];
    }
    int result = canFormConsecutiveList(arr, length);
    cout << "Can be arranged: " << result;
    return 0;
}
