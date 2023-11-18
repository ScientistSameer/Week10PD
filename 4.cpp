#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter the number of boxes: ";
    cin >> number;
    int length[number];
    int width[number];
    int height[number];
    cout << "Enter the dimensions of the boxes (length, width, height):" << endl;
    for (int i = 0; i < number; i++)
    {
        cin >> length[i];
        cin >> width[i];
        cin >> height[i];
    }
    int sum = 0;
    for (int i = 0; i < number; i++)
    {
        sum = sum + (length[i] * width[i] * height[i]);
    }
    cout << "Total volume of all boxes: " << sum << endl;

    return 0;
}
