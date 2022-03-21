#include <iostream>
#include <cstring>
using namespace std;

int n,dim;
char s[21],cuv[31];

int main()
{
    cin >> n; cin.get();
    for (int i = 1; i <= n; i++)
    {
        cin.getline(s,21);
        for (int k = 0; k < 3; k++)
        {
            cuv[dim]  = s[k];
            dim++;
        }
    }

    cout << cuv;
    return 0;
}
