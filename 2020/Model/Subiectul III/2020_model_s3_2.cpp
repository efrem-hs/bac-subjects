#include <iostream>
#include <cstring>

using namespace std;

int n,k;
char s[101],*p,r[51][101];

int main()
{
    cin >> n; cin.get();
    cin.getline(s,101);
    p = strtok(s, " ");
    while (p != NULL)
    {
        if (strlen(p) >= n)
            cout << p << '\n';
        else
        {
            strcpy(r[k],p);
            k++;
        }
        p = strtok(NULL, " ");
    }

    for (int i = 0; i < k; i++)
        cout << r[i] << '\n';
    return 0;
}
