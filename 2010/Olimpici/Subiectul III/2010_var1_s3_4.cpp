#include <iostream>
#include <fstream>

using namespace std;
int n,s = 0;

int main()
{
    cin >> n;
    for (int k = 1; k <= n; k++)
        s = s + (k*(k+1)/2)/(n+(1-k));
    ofstream fout("BAC.TXT");
    fout << s;
    fout.close();

    return 0;
}
