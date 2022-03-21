#include <iostream>
#include <cstring>

using namespace std;

char s[256];
int frecv[26];

int main()
{
    cin.getline(s,256);
    int dim = strlen(s);

    for (int i = 0; i < dim; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            if (frecv[s[i]-'a'] == 0)
            {
                cout << s[i] << ' ';
                frecv[s[i]-'a'] = 1;
            }
        }
    }

    return 0;
}
