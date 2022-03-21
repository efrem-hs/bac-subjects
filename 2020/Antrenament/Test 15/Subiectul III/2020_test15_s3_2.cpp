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
        int nrVocale = 0, nrConsoane = 0;
        for (int i = 0; i < strlen(p); i++)
            if (strchr("aeiou",p[i]) != NULL)
                nrVocale++;
            else
                nrConsoane++;
        if (nrVocale == nrConsoane)
            nr++;
        p = strtok(NULL, " ");
    }

    cout << nr;
    return 0;
}
