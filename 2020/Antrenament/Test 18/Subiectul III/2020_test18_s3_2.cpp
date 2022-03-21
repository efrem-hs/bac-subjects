#include <iostream>
#include <cstring>

using namespace std;

char s[21][21];
int n,k,ok;

int main()
{

    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> s[i];
    for (int i = 1; i <= n; i++)
    {
        if (i != k)
        {
            if (strstr(s[i],s[k]) != NULL)
                if (strlen(strstr(s[i],s[k])) == strlen(s[k]))
                {
                    cout << s[i] << ' ';
                    ok = 1;
                }
        }
    }

    if (ok == 0)
        cout << "nu exista";
    return 0;
}
