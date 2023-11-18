#include <iostream>
using namespace std;
int main()
{
    int length;
    cout << "Enter the length of the array: ";
    cin >> length;
    cout << "Enter the elements of the array (\"left\" or \"right\"): " << endl;
    string arr[length];
    for (int i = 0; i < length; i++)
    {
        cin >> arr[i];
    }
    int rotation = 90;
    int countright = 0;
    int countleft = 0;
    for (int i = 0; i < length; i++)
    {
        if (arr[i] == "right")
        {
            countright++;
        }
        if (arr[i] == "left")
        {
            countleft++;
        }
    }
    int result = 0;
    int degrees = (rotation * countright) - (rotation * countleft);
    if (degrees % 360 != 0)
        result = 0;
    else
        result = degrees / 360;
    cout << "Number of full rotations: " << result;
    return 0;
}
