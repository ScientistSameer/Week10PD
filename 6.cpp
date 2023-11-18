#include <iostream>
using namespace std;
string reverseWords(string array)
{
    string result = "";
    string reverse = "";
    for (int i = 0; i < array.length(); i++)
    {
        result += array[i];
        if (array[i] == ' ')
        {
            reverse = result + reverse;
            result = "";
        }
    }
    if (result != "")
    {
        reverse = result + " " + reverse;
    }
    return reverse;
}

int main()
{
    string array;
    cout << "Enter a string: ";
    getline(cin, array);
    cout << "Reversed string: " << reverseWords(array);
    return 0;
}
