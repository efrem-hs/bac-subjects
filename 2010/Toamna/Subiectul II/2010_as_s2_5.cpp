#include <iostream>
#include <cstring>

using namespace std;

char s[101],*p;

int main()
{
    cin.getline(s,101);
    p = strchr(s,'.');
    while (p != NULL)
    {
        int poz = p - s;
        int i = poz, j = poz;
        while(s[i] != ' ' && i - 1 >= 0)
            i--;
        if (i == 0)
        {
            if (s[i] == ' ')
                i++;
        }
        else i++;
        while (s[j] != ' ' && s[j] != '\0')
            j++;
        j--;
        for (int k = 1; k <= j - i + 1; k++)
            strcpy(s+i,s+i+1);
        p = strchr(s,'.');
    }

    cout << s;
    return 0;
}
