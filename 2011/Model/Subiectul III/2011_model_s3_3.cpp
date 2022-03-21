#include <iostream>
#include <fstream>
using namespace std;

void eval(int a, int b, int& rez)
{
    rez = a + b;
}

int x, y, s = 0;

int main()
{
    ifstream fin ("BAC.IN");
    while (fin >> x)
        eval(s,x,s);
    fin.close();
    cout << s;
    return 0;
}
