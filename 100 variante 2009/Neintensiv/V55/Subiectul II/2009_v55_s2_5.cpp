#include <iostream>
#include <cstring>

using namespace std;

char s1[101],s2[101];
int k;

int main()
{
    cin.getline(s1,101);
    int dim = strlen(s1);
    for (int i = 0; i < dim; i++)
    {
        if (s1[i] >= '0' && s1[i] <= '9')
        {
            s2[k] = s1[i];
            k++;
        }
    }

    cout << s2;

    return 0;
}
