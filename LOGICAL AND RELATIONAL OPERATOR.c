/*WAP IF USER INPUT CAPITAL LETTER OUTPUT SHOUL BE 1 OTHERWISE 0*/
#include <stdio.h>

int main()
{
    char v;
    printf("\nIF YOU WILL ENTER A CAPITAL LETTER, THE RESULT WOULD BE 1");
    printf("\nIF YOU WILL ENTER A SMALL LETTER, THE RESULT WOULD BE 0");
    printf("\nENTER LETTER: ");
    scanf(" %c", &v);
    printf("%d\n", (v >= 'A' && v <= 'Z'));
    return 0;
}
