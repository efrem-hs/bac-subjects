#include <iostream>
#include <cstring>

using namespace std;

char s[201],*p,voc[] = "aeiou";

int main()
{

    cin.getline(s,101);
    for (int i = 0; i < strlen(voc); i++)
    {
        p = strchr(s,voc[i]);
        while (p != NULL)
        {
            for (int j = strlen(s); j > p - s; j--)
                s[j] = s[j-1];
            p = strchr(p+2,voc[i]);
        }
    }

    cout << s;
    return 0;
}
