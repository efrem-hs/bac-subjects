#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s[256],*p;
    cin.getline(s,256);
    p = strtok(s, " ");
    while (p!=NULL)
    {
        if (strchr("aeiou",*p)!=NULL)
            for (int i = 0; i < strlen(p)/2; i++)
            {
                char aux = *(p+i);
                *(p+i) = *(p+strlen(p)-1-i);
                *(p+strlen(p)-1-i) = aux;
            }
        cout << p << " ";
        p = strtok(NULL, " ");
    }

    return 0;
}

