#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s1[21], s2[21], voc[] = "aeiou";
    cin >> s1;
    for (int i = 0; i < strlen(voc); i++)
    {
        if (strchr(s1,voc[i])!=NULL)
        {
            strcpy(s2, s1);
            for (int j = 0; j < strlen(s2); j++)
            {
                if (s2[j] == voc[i])
                    strcpy(s2 + j, s2 + j + 1);
            }
            cout << s2 << endl;
        }

    }

    return 0;
}

