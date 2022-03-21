#include <iostream>
#include <cstring>

using namespace std;

char s[101],s1[4],ultim,*p;
int cuv = 1,OK = 0;

int main()
{
    cin.getline(s,101);
    ultim = s[strlen(s)-1];
    p = strtok(s, " ");
    while(p != NULL)
    {
        for (int i = 0; i < strlen(p); i++)
        {
            if (cuv == 1)
            {
                if (!strchr("aeiou",p[i]))
                {
                    s1[0] = p[i];
                    OK = 1;
                    break;
                }
            }
            else if (cuv == 2)
            {
                if (strchr("aeiou",p[i]))
                {
                    s1[1] = p[i];
                    OK = 1;
                    break;
                }
            }
        }
        cuv++;
        if (cuv == 3 || OK == 0)
            break;
        OK = 0;
        p = strtok(NULL, " ");
    }

    if (OK == 1)
    {
        s1[2] = ultim;
        cout << s1;
    }
    else
        cout << "nu exista";

    return 0;
}
