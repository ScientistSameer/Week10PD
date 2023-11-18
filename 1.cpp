#include <iostream>
using namespace std;
int kakaProgress(string str[], int number)
{
    int days = 0;
    for (int i = 1; i < number; i++)
    {
        if (str[i] > str[i - 1])
        {
            days++;
        }
    }
    return days;
}

int main()
{
    int number;
    cout << "Enter the number of Saturdays: ";
    cin >> number;
    string input[number];
    for (int i = 0; i < number; i++)
    {
        cout << "Enter miles run for Saturday " << i + 1 << ": ";
        cin >> input[i];
    }
    int result = kakaProgress(input, number);
    cout << "Total progress days: " << result;
    return 0;
}
