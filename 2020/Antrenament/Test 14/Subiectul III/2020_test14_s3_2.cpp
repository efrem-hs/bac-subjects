#include <iostream>
#include <cstring>

using namespace std;

char s[101],*p;

int main()
{

    cin.getline(s,101);
    p = strchr(s,'-');
    while (p != NULL)
    {
        strcpy(p,p+1);
        p = strchr(s,'-');
    }

    cout << s;

    return 0;
}
