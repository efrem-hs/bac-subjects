#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s[256]; int OK = 1;
    cin.getline(s,256);
    for (int i = 0; i < strlen(s); i++)
    {
        if (OK == 1 && s[i] != ' ')
        {
            if (s[i] >= 'a' && s[i] <= 'z')
                s[i] = s[i] - 32;
            OK = 0;
        }
        else if(s[i] == ' ')
        {
            OK = 1;
        }
    }

    cout << s;

    return 0;
}
