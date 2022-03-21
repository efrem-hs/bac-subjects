#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bac.txt");

int frecv[101],x,maxim;

int main()
{
    while (fin >> x)
        frecv[x]++;
    fin.close();
    x = 0;

    for (int i = 0; i <= 100; i++)
    {
        if(frecv[i] > 0)
            x+=frecv[i];
        else
        {
            if (x > maxim)
                maxim = x;
            x = 0;
        }
    }

    if (x > maxim)
        maxim = x;
    cout << maxim;

    return 0;
}
