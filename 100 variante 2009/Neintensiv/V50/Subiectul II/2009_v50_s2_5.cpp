#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s[21];
    cin >> s;
    for (int i = 0; i<strlen(s); i++)
    {
        if (strchr("aeiou",s[i])!=NULL)
        {
            strcpy(s+i,s+i+1);
            break;
        }
    }
    for (int i = strlen(s)-1; i>=0; i--)
    {
        if(strchr("aeiou",s[i])!=NULL)
        {
            strcpy(s+i,s+i+1);
            break;
        }
    }

    cout << s;

    return 0;
}

