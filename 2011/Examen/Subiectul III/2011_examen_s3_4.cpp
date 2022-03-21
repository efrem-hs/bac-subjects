#include <iostream>
#include <fstream>

using namespace std;

int s1,s2,c1,incc1,endc1,c2,c3,c4,incc4,endc4,c5;

int main()
{
    cin >> s1 >> s2;
    if (s1 > 9)
    {
        incc1 = s1 - 9;
        endc1 = 9;
    }
    else
    {
        incc1 = 1;
        endc1 = s1;
    }
    if (s2 > 9)
    {
        incc4 = s2 - 9;
        endc4 = 9;

    }
    else
    {
        incc4 = 0;
        endc4 = s2;
    }
    ofstream fout("BAC.TXT");
    for (c1 = incc1; c1 <= endc1; c1++)
    {
        c2 = s1 - c1;
        for (c3 = 0; c3 <= 9; c3++)
        {
            for (c4 = incc4; c4 <= endc4; c4++)
            {
                c5 = s2 - c4;
                fout << c1 << c2 << c3 << c4 << c5 << endl;
            }
        }
    }
    fout.close();
    return 0;
}
