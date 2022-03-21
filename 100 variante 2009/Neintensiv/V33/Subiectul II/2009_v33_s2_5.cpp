#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s[256], *p, frecv[100] = {0};
    int nr = 0;
    cin.getline(s,256);
    p = strtok(s, " ");
    while(p!=NULL)
    {
        nr++;
        for (int i = 0; i < strlen(p); i++)
            if (strchr("AEIOU",*(p+i))==NULL)
                frecv[*(p+i)] = 1;
        p = strtok(NULL, " ");
    }
    cout << nr << endl;
    for (int i = 'A'; i <= 'Z'; i++)
        if (frecv[i] == 1)
            cout << char(i) << " ";

    return 0;
}

