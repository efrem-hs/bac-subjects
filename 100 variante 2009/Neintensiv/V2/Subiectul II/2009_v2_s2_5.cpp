#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s[21];
    cin >> s;
    for (int i = 0; i < strlen(s); i++)
    {
        while(s[i] >= 'a' && s[i]<='z')
        {
            strcpy(s+i,s+i+1);
        }
    }

    if (strlen(s) == 0)
        cout << "CUVANT VID";
    else
        cout << s;

    return 0;
}
