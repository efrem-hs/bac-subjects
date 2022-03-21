#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s[256],*p;
    cin.getline(s,256);
    p = strtok(s," ");
    while (p!=NULL)
    {
        *p = *p - 32;
        *(p+strlen(p)-1) = *(p+strlen(p)-1) - 32;
        cout << p << " ";
        p = strtok(NULL, " ");
    }

    return 0;
}

