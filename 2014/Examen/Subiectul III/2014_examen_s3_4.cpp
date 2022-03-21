#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bac.txt");

int crt, frecv[100], maxim = -1;

int main()
{

    while (fin >> crt)
    {
        while (crt > 9)
        {
            frecv[crt%100]++;
            if (frecv[crt%100] > maxim)
                maxim = frecv[crt%100];
            crt/=10;
        }
    }

    fin.close();

    for (int i = 10; i <= 99; i++)
        if (frecv[i] == maxim)
            cout << i << ' ';
    return 0;
}
