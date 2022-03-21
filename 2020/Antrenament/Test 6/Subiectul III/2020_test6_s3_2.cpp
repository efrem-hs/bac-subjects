#include <iostream>
#include <cstring>

using namespace std;

char s[101],*p;
int ok = 0;

int main()
{
    cin.getline(s,101);
    p = strtok(s, " ");
    while (p != NULL)
    {
        int nrVocale = 0, nrConsoane = 0;
        for (int i = 0; i < strlen(p); i++)
        {
            if (strchr("aeiou",p[i]))
                nrVocale++;
            else
                nrConsoane++;
        }
        if (nrVocale < nrConsoane)
        {
            cout << p << endl;
            ok = 1;
        }
        p = strtok(NULL, " ");
    }

    if (ok == 0)
        cout << "nu exista";

    return 0;

}
