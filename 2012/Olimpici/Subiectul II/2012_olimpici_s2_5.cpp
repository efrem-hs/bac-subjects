#include <iostream>
#include <cstring>

using namespace std;

char a[31],b[31],*p;

int main()
{
    cin >> a >> b;

    for (int i = 0; i < strlen(a); i++)
    {
        if (p == NULL)
            p = strchr(b,a[i]);
        else
            p = strchr(p+1,a[i]);
        if (p == NULL)
        {
            cout << "NU";
            return 0;
        }
    }
    cout << "DA";
    return 0;
}
