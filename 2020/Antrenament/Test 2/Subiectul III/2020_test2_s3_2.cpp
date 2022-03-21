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
        int i = p - s;
        int j = i;
        while (s[j] != ' ' && s[j] != '\0')
            j++;
        for (int x = 1; x <= j - i; x++)
            for (int k = i; k < strlen(s); k++)
                s[k] = s[k+1];
        p = strchr(s,'-');
    }

    cout << s;
    return 0;
}
