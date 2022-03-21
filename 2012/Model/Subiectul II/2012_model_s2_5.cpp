#include <iostream>
#include <cstring>

using namespace std;

char s[21][21];
int n,nr;

int main()
{

    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> s[i];
    for (int i = 2; i <= n; i++)
    {
        if (strstr(s[i],s[1]) != NULL)
            if (strlen(strstr(s[i],s[1])) == strlen(s[1]))
                nr++;
    }
    cout << nr;


    return 0;
}
