#include <iostream>
#include <cstring>

using namespace std;

char s[101],*p;

int main()
{
    cin.getline(s,101);
    p = strtok(s," ");
    while (p != NULL)
    {
        int inceputCuvant = p - s;
        int sfarsitCuvant = p - s + strlen(p) - 1;
        s[sfarsitCuvant + 1] = ' ';
        for (int i = inceputCuvant; i <= sfarsitCuvant; i++)
            if (strchr("aeiou",s[i]))
                while(s[i+1] != 0 && strchr("aeiou",s[i+1]) != NULL)
                {
                    strcpy(s+i+1,s+i+2);
                    sfarsitCuvant--;
                }
        p = strtok(s + sfarsitCuvant + 2, " ");
    }
    strcpy(s+strlen(s)-1,s+strlen(s));
    cout << s;

    return 0;
}
