#include <iostream>
#include <cstring>

using namespace std;

char s[301];
int inceput = -1, sfarsit = -1;

int main()
{

    cin.getline(s,101);
    for (int i = 0; i <= strlen(s); i++)
    {
        if (s[i] != ' ' && inceput == -1)
            inceput = i;
        else if (s[i] == ' ' || s[i] == '\0')
            sfarsit = i-1;
        if (inceput > -1 && sfarsit > -1)
        {
            int vocale = 1;
            for (int j = inceput; j <= sfarsit; j++)
                if (strchr("aeiou",s[j]) == NULL)
                    vocale = 0;
            if (vocale == 1)
            {
                for (int k = 1; k <= sfarsit-inceput+2; k++)
                    for (int j = strlen(s); j > sfarsit; j--)
                        s[j] = s[j-1];
                s[sfarsit+1] = ' ';
                for (int j = sfarsit+2; j <= sfarsit+(sfarsit-inceput+2); j++)
                    s[j] = s[j-(sfarsit-inceput+1)-1];
                i = i + (sfarsit-inceput+2);
            }
            inceput = -1;
            sfarsit = -1;
        }
    }

    cout << s;
    return 0;
}
