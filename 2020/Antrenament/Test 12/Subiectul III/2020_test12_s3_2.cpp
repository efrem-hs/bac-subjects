#include <iostream>
#include <cstring>

using namespace std;

char s[101];
int ok;

int main()
{
    cin.getline(s,101);
    for (int i = strlen(s)-1; i >= 0; i--)
    {
        if (strchr("aeiou",s[i]) != NULL)
        {
            ok = 1;
            strcpy(s+i,s+i+1);
            break;
        }
    }

    if (ok == 0)
        cout << "nu exista";
    else
        cout << s;
    return 0;

}
