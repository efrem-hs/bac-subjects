#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s[41];
    cin.getline(s,41);
    for (int i = 0; i<strlen(s); i++)
    {
        if (strchr("aeiou",s[i])!=NULL)
            cout << s[i] << " ";
    }

    return 0;
}

