#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char a[100];
    gets(a);
    int n = strlen(a);
    int l = 0;
    int u = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 65 && a[i] <= 90)
        {
            u++;
        }
        else
        {
            l++;
        }
    }

    if (l > u)
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] >= 65 && a[i] <= 90)
            {
                a[i] = a[i] + 32;
            }
        }
    }
   else if (l < u)
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] >= 97 && a[i] <= 122)
            {
                a[i] = a[i] - 32;
            }
        }
        }
         if (l == u)
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] >= 65 && a[i] <= 90)
            {
                a[i] = a[i] + 32;
            }
        }
    }
    

    puts(a);

    return 0;
}