#include <iostream>
#include <cstring>

using namespace std;

char s[51][101];
int nr = 0;

int main()
{

    while (cin.peek() != '\n')
    {
        nr++;
        cin >> s[nr];
    }

    for (int i = 1; i <= nr; i++)
    {
        for (int j = 1; j <= nr; j++)
        {
            if (strlen(s[i])%2 - strlen(s[j])%2 == 1)
            {
                char aux[101]{};
                strcpy(aux,s[j]);
                strcpy(aux+strlen(aux)/2, aux+strlen(aux)/2+1);
                if (strcmp(s[i],aux) == 0)
                {
                    cout << "DA";
                    return 0;
                }
            }
        }
    }


    cout << "NU";

    return 0;
}
