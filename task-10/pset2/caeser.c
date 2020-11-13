
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc,char* argv[])
{
    int key = 0;
    char pt[100];
    char *a=argv[1];
    if (argc == 2)
    {
        key = atoi(a);
    }

    if (key >= 26)
    {
        key %= 26;
    }

    if (argc != 2 || key <= 0)
    {
        printf("Enter valid key");
        return 1;
    }

    printf("Plain text:");
    
    scanf("%s",pt);
   int n=strlen(pt);

    if (argc == 2)
    {
    
        for (int i = 0; i < n; i++)
        {
            if (!isalnum(pt[i]))
            {
                continue;
                }
            if (pt[i] >= 65 && pt[i] <= 90)
            {
                
                if (pt[i] + key > 90)
                {
                    pt[i] -= 26;
                }
                
                pt[i] += key;
            }
            
            else if (pt[i] >= 97 && pt[i] <= 121)
            {
                
                if (pt[i] + key > 121)
                {
                    pt[i] -= 26;
                }
                
                pt[i] += key;
            }
        }
    }

    // prints out encrypted message
    printf("ciphertext: %s\n", pt);
    return 0;
}
