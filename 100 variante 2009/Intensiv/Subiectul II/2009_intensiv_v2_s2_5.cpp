#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s[20], v[] = "aeiou";
    cin >> s;
    for (int i = 0; i < strlen(v); i++)
    {
        char* p = strchr(s, v[i]);
        while (p!=NULL)
        {
            char aux[20];
            strcpy(aux,p);
            aux[0] = aux[0] - 32;
            strcpy(p+1, aux);
            p = strchr(p+1, v[i]);
        }
    }
    cout << s;
    return 0;
}