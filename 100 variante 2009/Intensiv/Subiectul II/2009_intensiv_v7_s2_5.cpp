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
            strcpy(s+i,s+i+1);
            break;
        }
    }

    cout << s;


    return 0;
}
