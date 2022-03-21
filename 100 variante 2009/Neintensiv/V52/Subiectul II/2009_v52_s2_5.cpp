#include <iostream>
#include <cstring>

using namespace std;

char s[101],s1[101], *p;
unsigned short int k;

int main()
{

    cin.getline(s,101);
    p = strtok(s, " ");
    while (p != NULL)
    {
        s1[k] = *p;
        k++;
        p = strtok(NULL, " ");
    }

    cout << s1;

    return 0;
}
