#include <iostream>
#include <cstring>

using namespace std;

char s[101],*p;

int main()
{
    cin.getline(s,101);
    p = strchr(s, ' ');
    while (p != NULL)
    {
        while (p[1] == ' ')
            strcpy(p+1,p+2);;
        p = strchr(p+1,' ');
    }

    cout << s;

    return 0;
}
