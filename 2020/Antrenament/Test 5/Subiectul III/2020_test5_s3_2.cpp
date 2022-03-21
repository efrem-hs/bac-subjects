#include <iostream>
#include <cstring>

using namespace std;

char s[101],*p;
int nr;

int main()
{
    cin.getline(s,101);
    p = strtok(s, " ");
    while (p != NULL)
    {
        int ok = 1;
        for (int i = 0; i < strlen(p); i++)
            if (p[i] >= 'a' && p[i] <= 'z')
                ok = 0;
        if (ok == 1)
            if (strchr(p,',') == NULL)
                nr++;
        p = strtok(NULL, " ");
    }
    cout << nr;
    return 0;
}
