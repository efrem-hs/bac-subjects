#include <iostream>
#include <fstream>

using namespace std;

int crt, n, poz, v[10];

ifstream fin("bac.txt");

int main()
{
    fin >> n;
    while (fin >> crt)
    {
        int p = -1;
        while (crt > 0)
        {
            p++;
            crt/=10;
        }
        v[p]++;
    }
    for (int i = 0; i <= 9; i++)
    {
        while (v[i] > 0)
        {
            poz++;
            v[i]--;
            if (poz == n)
            {
                cout << 1;
                for (int j = 1; j <= i; j++)
                    cout << 0;
                fin.close();
                return 0;
            }
        }
    }

    fin.close();

    cout << "Nu exista";
    return 0;
}
