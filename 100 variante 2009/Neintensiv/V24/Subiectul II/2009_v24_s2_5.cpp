#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s1[101], s2[101], suf[101] = "";
    cin.getline(s1,101);
    cin.getline(s2,101);
    int i = strlen(s1) - 1, j = strlen(s2) - 1;
    while (i >= 0 && j >= 0)
    {
        if (strcmp(s1+i,s2+j)==0)
            strcpy(suf, s1 + i);
        i--; j--;
    }
    if (strlen(suf) == 0)
        cout << "NU EXISTA";
    else
        cout << suf;
    return 0;
}
