#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s[41];
    cin.getline(s,41);
    for (int i = 0; i<strlen(s); i++)
    {
        char aux[41];
        strcpy(aux,s);
        strcpy(aux+i,aux+i+1);
        cout << aux << endl;
    }
    return 0;
}

