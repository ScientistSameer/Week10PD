#include <iostream>

using namespace std;

bool isRepeatingCycle(int elements[], int length, int cycleLength)
{
    if (cycleLength > length)
    {
        return true;
    }

    for (int i = 0; i < cycleLength; i++)
    {
        if (elements[i] != elements[i + cycleLength])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int length, cycleLength;
    cout << "Enter the length of the array: ";
    cin >> length;

    int elements[length];
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < length; i++)
    {
        cin >> elements[i];
    }

    cout << "Enter the length of the cycle: ";
    cin >> cycleLength;

    int result = isRepeatingCycle(elements, length, cycleLength);
    cout << "Output: " << result << endl;

    return 0;
}
