#include <iostream>
#include <cstring>

using namespace std;

char s[101],nr[101],*p;

int main()
{
    cin.getline(s,101);
    p = strtok(s, " ");
    while (p != NULL)
    {
        if (p[0] >= '0' && p[0] <= '9')
        {
            if(strlen(nr) == 0)
                strcpy(nr,p);
            else
            {
                if (p[0] > nr[0])
                    strcpy(nr,p);
            }
        }
        p = strtok(NULL, " ");
    }
    cout << nr << endl;
    return 0;
}
