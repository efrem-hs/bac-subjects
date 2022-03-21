#include <iostream>
#include <cstring>

using namespace std;

char a[31],b[31];
int ok = 0;

int main()
{
    cin.getline(a,31);
    cin.getline(b,31);
    for (int i = strlen(a)-1; i >= 0; i--)
    {
        if (strstr(b,a+i)==b)
        {
            cout << a+i << " ";
            ok = 1;
        }
    }

    if (ok == 0)
        cout << "NU EXISTA";

    return 0;
}
