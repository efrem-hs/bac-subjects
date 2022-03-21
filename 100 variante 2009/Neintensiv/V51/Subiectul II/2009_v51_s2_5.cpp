#include <iostream>
#include <cstring>

using namespace std;

bool caz(char c)
{
    if (c >= 'A' && c <= 'Z')
        return true;
    if (c >= 'a' && c <= 'z')
        return true;
    if (c == ' ')
        return true;
    return false;
}

char s[31];

int main()
{

    cin.getline(s,31);
    unsigned int dim = strlen(s);
    for (unsigned int i = 0; i < dim; i++)
    {
        if (!caz(s[i]))
        {
            cout << "NU";
            return 0;
        }
    }

    cout << "DA";
    return 0;
}
