#include <iostream>
#include <fstream>

using namespace std;

int p1, p2;

ofstream fout("bac.out");

int main()
{
    cin >> p1 >> p2;
    for (int i = 1; i <= 9; i++)
        if (p1 % i == 0)
            if (p1/i < 10)
                for (int j = 0; j <= 999; j+=111)
                    for (int k = 1; k <= 9; k++)
                        if (p2 % k == 0)
                            if (p2/ k < 10)
                            {
                                fout << i << p1/i;
                                if (j == 0) fout << "000";
                                else fout << j;
                                fout << k << p2/k << endl;
                            }
    fout.close();
    return 0;
}
