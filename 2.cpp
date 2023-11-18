#include <iostream>
using namespace std;

int letterCount(string array[], int size, char letter)
{
    int number = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < array[i].length(); j++)
        {
            if (array[i][j] == letter)
            {
                number++;
            }
        }
    }

    return number;
}

int main()
{
    int size;
    cout << "Enter how many words you want to enter: ";
    cin >> size;

    string array[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter word " << i + 1 << ": ";
        cin >> array[i];
    }
    char letter;
    cout << "Enter the letter you want to count: ";
    cin >> letter;

    int result = letterCount(array, size, letter);
    cout << letter << " shows up " << result << " times in the data." << endl;
    return 0;
}
