#include <iostream>
#include <cstring>

using namespace std;

char s[101];
int inceputCuvant = 0, dimensiuneCuvant = 0, ok = 0;

int main()
{

    cin.getline(s,101);
    for (int i = 0; i <= strlen(s); i++)
    {
        if (s[i] == ' ' || s[i] == '\0')
        {
            if (dimensiuneCuvant >= 3 && dimensiuneCuvant % 2 == 1)
            {
                strcpy(s+inceputCuvant+(dimensiuneCuvant-1)/2, s+inceputCuvant+(dimensiuneCuvant-1)/2 + 1);
                ok = 1;
                inceputCuvant = i;
                dimensiuneCuvant = 0;
            }
            else
            {
                inceputCuvant = i + 1;
                dimensiuneCuvant = -1;
            }
        }
        dimensiuneCuvant++;
    }

    if (ok == 0)
        cout << "nu exista";
    else
        cout << s;

    return 0;
}
