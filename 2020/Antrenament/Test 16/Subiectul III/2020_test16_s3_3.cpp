#include <iostream>
#include <fstream>

using namespace std;

int v1[1000000],v2[1000000],v3[2000000],m,n,k = 0;

ifstream fin("bac.in");

int main()
{
    fin >> m >> n;
    for (int i = 0; i < m; i++)
        fin >> v1[i];
    for (int i = 0; i < n; i++)
        fin >> v2[i];
    fin.close();
    int i = 0,j = 0, precedent = -1;
    while (i < m && j < n)
    {
        if (v1[i] < v2[j])
        {
            if (precedent > -1 && v1[i]%2 - precedent%2 != 0 || precedent == -1)
            {
                    v3[k] = v1[i]; precedent = v3[k]; k++;
            }
            i++;
        }
        else
        {
            if (precedent > -1 && v2[j]%2 - precedent%2 != 0 || precedent == -1)
            {
                    v3[k] = v2[j]; precedent = v3[k]; k++;
            }
            j++;
        }
    }

    while (i < m)
    {
        if (precedent > -1 && v1[i]%2 - precedent%2 != 0 || precedent == -1)
        {
            v3[k] = v1[i]; precedent = v3[k]; k++;
        }
        i++;
    }

    while (j < n)
    {
        if (precedent > -1 && v2[j]%2 - precedent%2 != 0 || precedent == -1)
        {
            v3[k] = v2[j]; precedent = v3[k]; k++;
        }
        j++;
    }

    for (i = 0; i < k; i++)
        cout << v3[i] << ' ';

    return 0;
}
