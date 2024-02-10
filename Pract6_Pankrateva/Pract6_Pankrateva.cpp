#include <iostream>
#include <string.h>

using namespace std;


void delete_gl(char s[50], char str[])
{
    int j = 0;
    for (int i = 0; s[i]; i++)
        if (!strchr(str, s[i]))

            s[j++] = s[i];
            s[j] = 0;
}

    int main(void)
    {
        setlocale(LC_ALL, "Russian");

        char s[50];
        char str[] = "AaEeIiOoUu";
        int n;
        printf("Введите строку на английском: ");
        gets_s(s);
        n = strlen(s);
        delete_gl(s, str);
        
        puts(s);
    }

