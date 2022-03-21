#include <iostream>
#include <cstring>

using namespace std;

char s[101],mod[301],*p,u;
int ok = 1;

int main()
{
    cin.getline(s,101);
    p = strtok(s, " ");
    while (p != NULL)
    {
         if (ok == 1)
            strcpy(mod,p);
         else
         {
            if (p[strlen(p)-1] == u)
            {
                strcat(mod," succes ");
                strcat(mod,p);
            }
            else
            {
                strcat(mod, " ");
                strcat(mod,p);
            }
         }
         u = p[strlen(p)-1];
         ok = 0;
         p = strtok(NULL, " ");
    }

    if (strstr(mod,"succes") == NULL)
        cout << "nu exista";
    else
        cout << mod;

    return 0;

}
