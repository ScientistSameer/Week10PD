#include <iostream>
using namespace std;
int specialValue(int array[], int length)
{
    for (int i = 0; i <= length; i++)
    {
        int counter = 0;
        for (int j = 0; j < length; j++)
        {
            if (i <= array[j])
            {
                counter++;
            }    
        }
        if (counter == i)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int length;
    cout << "Enter the length of the array: ";
    cin >> length;
    int array[length];
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < length; i++)
    {
        cin >> array[i];
    }
    cout << "Special value: " << specialValue(array, length);
    return 0;
}
