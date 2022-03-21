#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s[101];
    cin.getline(s,101);
    for (int i = 0; i<strlen(s); i++)
    {
        if (strchr("aeiou",s[i])!=NULL)
            s[i] = s[i] + 1;
    }

    cout << s;
    return 0;
}

