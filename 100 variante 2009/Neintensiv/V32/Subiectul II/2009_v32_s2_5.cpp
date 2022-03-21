#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s[251],c1,c2;
    cin.getline(s,251);
    cin >> c1 >> c2;
    cout << s << endl;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == c1)
            s[i] = c2;
       else if (s[i] == c2)
            s[i] = c1;
    }

    cout << s;

    return 0;
}

