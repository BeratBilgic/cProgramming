#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char name[] = "Berat", surname[] = "Bilgic";
    char *ptr;
    int i,j;
    ptr = (char*)malloc(12 * sizeof(char));
    for (i = 0; i < 5; i++)
    {
        strcpy((ptr+i),&name[i]);
    }
    *(ptr+i) = ' ';
    i++;
    for ( j = 0; j < 6; i++, j++)
    {
        strcpy((ptr+i),&surname[j]);
    }
    
    for (int k = 0; k < 12; k++)
    {
        printf("%c",*(ptr+k));
    }

    return 0;
}