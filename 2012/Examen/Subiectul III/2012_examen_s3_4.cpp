#include <iostream>
#include <fstream>

using namespace std;

int x,nr;
ofstream fout("BAC.TXT");

int main()
{
    cin >> x;
    for (int i = 1; i <= 9-x; i++)
    {
        nr = i;
        while (nr%10 + x < 10)
        {
            nr = nr*10 + (nr%10+x);
            fout << nr << endl;
        }
    }
    fout.close();
    return 0;
}
