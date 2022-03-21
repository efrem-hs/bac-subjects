#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream fout("BAC.TXT");
    for (int i = 11; i <= 99; i+=11)
    {
        for (int j = 0; j <= 99; j+=11)
        {
            fout << i;
            if (j == 0) fout << "0000";
            else fout << j << j;
            fout << i << endl;
        }
    }

    return 0;
}
