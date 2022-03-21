#include <iostream>
#include <cstring>

using namespace std;

char s[51];
int frecv[10], OK;

int main()
{
    cin.getline(s,51);
    int dim = strlen(s);
    for (int i = 0; i < dim; i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            frecv[s[i]-'0']++;
            OK = 1;
        }
    }

    if (OK == 1)
    {
        int maxim = frecv[0], n = 0;
        for (int i = 1; i <= 9; i++)
        {
            if (frecv[i] > maxim)
            {
                maxim = frecv[i];
                n = i;
            }
            else if (frecv[i] == maxim)
            {
                if (i < n)
                    n = i;
            }
        }
       cout << n;
    }
    else cout << "NU";

    return 0;
}
