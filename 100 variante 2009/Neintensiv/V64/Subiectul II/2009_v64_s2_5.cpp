#include <iostream>
#include <cstring>

using namespace std;

char s[201],voc[] = "aAeEiIoOuU",*p;
int nr;

int main()
{

    cin.getline(s,201);
    p = strtok(s," ");

    while(p)
    {
        if (strchr(voc,p[0]) && strchr(voc,p[strlen(p)-1]))
            nr++;
        p = strtok(NULL," ");
    }

    if (nr == 0)
        cout << "NU EXISTA";
    else
        cout << nr;

    return 0;
}
