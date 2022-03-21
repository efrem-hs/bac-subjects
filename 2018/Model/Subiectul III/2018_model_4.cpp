#include <iostream>
#include <fstream>

using namespace std;

int v[100],n;

ifstream fin("bac.txt");

int main()
{
    while (fin >> n)
    {
        while (n > 9)
        {
            v[n%100]++;
            n/=10;
        }
    }

    for (int i = 10; i <= 99; i++)
    {
        if (v[i] == 1)
            cout << i << ' ';
    }
    return 0;
}
