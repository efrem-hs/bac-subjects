#include <iostream>
#include <cstring>

using namespace std;

char s[51];
int frecv[26],OK;

int main()
{
    cin.getline(s,256);
    int dim = strlen(s);

    for (int i = 0; i < dim; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            frecv[s[i] - 'a']++;
            OK = 1;
        }
    }

    if (OK == 1)
    {
        int maxim = -1;
        char c = 0;
        for (int i = 0; i <= 25; i++)
        {
            if (frecv[i] > maxim)
            {
                maxim = frecv[i];
                c = i + 'a';
            }
            else if (frecv[i] == maxim)
            {
                if (i + 'a' < c)
                    c = i + 'a';
            }
        }

        cout << c;

    }
    else
        cout << "nu";

    return 0;
}
