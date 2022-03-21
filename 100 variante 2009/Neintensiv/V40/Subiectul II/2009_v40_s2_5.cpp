#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s[256],cuv[256],*p;
    cin.getline(s,256);
    p = strtok(s,"*");
    strcpy(cuv,p);
    while (p!=NULL)
    {
        if(strcmp(p,cuv)==0)
            strcpy(p,p+strlen(p));
        cout << p << "*";
        p = strtok(NULL,"*");
    }

    return 0;
}

