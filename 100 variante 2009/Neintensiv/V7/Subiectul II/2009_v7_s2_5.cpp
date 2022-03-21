#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s[256];
    cin.getline(s,256);
    for (int i = strlen(s) - 1; i >=0; i--)
    {
        if (strchr("aeiou",s[i])==0)
        {
            cout << s[i];
            break;
        }
    }

    return 0;
}
