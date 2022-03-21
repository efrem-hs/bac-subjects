#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s[251];
    cin.getline(s,251);
    char *p = strtok(s,"*");
    while (p!=NULL)
    {
        char aux[20];
        strcpy(aux,p);
        for (int i = 0; i < strlen(aux) - 1; i++)
            if (aux[i] == aux [i+1])
                cout << aux[i] << aux[i+1] << endl;
        p = strtok(NULL,"*");
    }
    return 0;
}
