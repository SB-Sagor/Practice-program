#include <iostream>
#include <string>
using namespace std;
int main()
{
    int count = 0;
    string name;
    getline(cin, name);
    int length = name.length();

    for (int i = 0; i < length; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            if (name[i] == name[j])
            {
                count++;
                break;
            }
        }
    }
    length -= count;

    if (length % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }
    return 0;
}