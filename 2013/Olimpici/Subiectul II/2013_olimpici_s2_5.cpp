#include <iostream>
#include <cstring>

using namespace std;

char s[101];
int inceputCuvant;

int main()
{
    cin.getline(s,101);
    for (int i = 0; i <= strlen(s); i++)
    {
        if (s[i] == ' ' || s[i] == '\0')
        {
            int dim = i - inceputCuvant;
            if (dim == 3)
            {
                for (int j = 1; j <= 2; j++)
                    strcpy(s+inceputCuvant,s+inceputCuvant+1);
                dim = 1;
                i-=2;
                s[inceputCuvant] = '*';
            }
            inceputCuvant = inceputCuvant + dim + 1;
        }
    }

    cout << s;
    return 0;
}
