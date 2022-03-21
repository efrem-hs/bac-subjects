#include <iostream>
#include <cstring>

using namespace std;

char s[101],*p;
int ok = 1;

int main()
{
    cin.getline(s,101);
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == ' ')
            ok = 1;
        else
        {
            if (ok == 1)
            {
                if (s[i] >= 'a')
                    s[i] = s[i] - 32;
                ok = 0;
            }
            else
            {
                if (s[i] <= 'Z')
                    s[i] = s[i] + 32;
            }
        }
    }
    cout << s;
    return 0;

}
