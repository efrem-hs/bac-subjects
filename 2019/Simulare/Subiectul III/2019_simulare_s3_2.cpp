#include <iostream>
#include <cstring>

using namespace std;
char cuv[][10] = {"COLEGIUL", "LICEUL", "NATIONAL", "TEORETIC"};
char s[51],s1[256], *p;
bool OK = true;

int main()
{
    cin.getline(s,51);
    p = strtok(s, " ");
    while (p)
    {
        if (strchr(p,'.'))
        {
           for(int i = 0; i < 4; i++)
            {
                if (cuv[i][0] == p[0])
                {
                    if (OK == true)
                    {
                        strcpy(s1,cuv[i]);
                        strcat(s1, " ");
                    }
                    else
                    {
                        strcat(s1,cuv[i]);
                        strcat(s1, " ");
                    }
                    break;
                }
            }
        }
        else
        {
            if (OK == true)
            {
                strcpy(s1,p);
                strcat(s1, " ");
            }
            else
            {
                strcat(s1,p);
                strcat(s1," ");
            }
        }
        OK = false;
        p = strtok(NULL, " ");
    }

    cout << s1;
    return 0;
}
