#include <iostream>
#include <cstring>

using namespace std;

char s[21][21];
int n,ok;

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> s[i];
    for (int i = 1; i <= n - 1; i++)
    {
        if (strstr(s[i],s[n]) != NULL)
            if (strlen(strstr(s[i],s[n])) == strlen(s[i]))
            {
                cout << s[i] << ' ';
                ok = 1;
            }
    }

    if (ok == 0)
        cout << "nu exista";

    return 0;

}
