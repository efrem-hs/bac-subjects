#include <iostream>
#include <fstream>

using namespace std;


ifstream fin("BAC.TXT");

int n, crt, primaJumatate[6], aDouaJumatate[6], suma = 0;


int main()
{

    fin >> n;
    for (int i = 1; i <= n; i++)
    {
        fin >> crt;
        primaJumatate[crt]++;
    }

    for (int i = 1; i <= n; i++)
    {
        fin >> crt;
        aDouaJumatate[crt]++;
    }

    fin.close();

    for (int i = 1; i <= 5; i++)
    {
        if (primaJumatate[i] > 0)
            for (int j = 1; j <= 5; j++)
                if (aDouaJumatate[j] > 0)
                    if (i % 2 != j % 2)
                        suma = suma + primaJumatate[i]*aDouaJumatate[j]*i*j;
    }

    cout << suma;
    return 0;
}
