#include <iostream>
#include <fstream>

using namespace std;

int p1,p2,end1,end2;

int main()
{
    cin >> p1 >> p2;
    if (p1 < 10)
        end1 = p1;
    else
        end1 = 9;
    if (p2 < 10)
        end2 = p2;
    else
        end2 = 9;
    ofstream fout("bac.out");
    for (int i = 1; i <= end1; i++)
        if (p1 % i == 0 && p1/i < 10)
            for (int j = 999; j >= 0; j-=111)
                for (int k = 1; k <= end2; k++)
                    if (p2 % k == 0 && p2/k < 10)
                    {
                        fout << p1/i << i;
                            if (j == 0)
                                fout << "000";
                            else
                                fout << j;
                            fout << p2/k << k << endl;
                    }
    fout.close();
    return 0;

}
