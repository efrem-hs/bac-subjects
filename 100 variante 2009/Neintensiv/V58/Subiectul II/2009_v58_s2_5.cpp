#include <iostream>
#include <cstring>

using namespace std;

char s[51];
int nrLitereMari, nrLitereMici, nrNonLitere;

int main()
{
    cin.getline(s,51);
    int dim = strlen(s);

    for (int i = 0; i < dim; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            nrLitereMari++;
        else if (s[i] >= 'a' && s[i] <= 'z')
            nrLitereMici++;
        else if (s[i] == ' ' || (s[i] >= '0' && s[i] <= '9'))
            nrNonLitere++;
    }

    cout << nrLitereMari << " " << nrLitereMici << " " << nrNonLitere;

    return 0;
}
