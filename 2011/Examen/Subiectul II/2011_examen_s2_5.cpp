#include <iostream>
#include <cstring>

using namespace std;

char s[21],cuv[21];
int n,nr;

int main()
{
    cin >> n;
    cin >> s;
    for (int i = 1; i <= n-1; i++)
    {
        cin >> cuv;
        if (strncmp(cuv,s,strlen(s))==0)
            nr++;
    }
    cout << nr;
    return 0;
}
