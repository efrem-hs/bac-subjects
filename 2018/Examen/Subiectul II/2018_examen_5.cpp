#include <iostream>
#include <cstring>
using namespace std;

char s[101],c[101],s1[101];
int k;

int main()
{
    cin.getline(s,101);
    cin.getline(c,101);

    if (strlen(s) != strlen(c))
    {
        cout << "cod incorect";
        return 0;
    }

    for (int i = strlen(s)-1; i > 0; i--)
    {
        if ((c[i]-'0')%2 == 0)
        {
            s1[k] = s[i];
            k++;
        }
    }

    s1[k] = s[0]; k++;
    for (int i = 1; i < strlen(s); i++)
    {
        if ((c[i]-'0')%2 != 0)
        {
            s1[k] = s[i];
            k++;
        }
    }

    cout << s1;

    return 0;
}
