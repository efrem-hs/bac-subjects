#include <iostream>
#include <cstring>

using namespace std;

char s[51];

int main()
{

    cin >> s;
    int dim = strlen(s);

    for (int i = 0; i < dim; i++)
    {
        char aux[51] = {};
        strncpy(aux,s+dim-i-1,i+1);
        cout << aux << '\n';
    }


    return 0;
}
