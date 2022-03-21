#include <iostream>
#include <cstring>

using namespace std;

char s[101];
int areConsoane = 0, ok = 1;

int main()
{
    cin.getline(s,101);
    for (int i = 0; i < strlen(s); i++)
    {
        if (strchr("aeiou",s[i]) == NULL)
            areConsoane = 1;
        else
            if (s[i] != 'i')
                ok = 0;
    }

    if (areConsoane == 1 && ok == 1)
        cout << "DA";
    else
        cout << "NU";

    return 0;
}
