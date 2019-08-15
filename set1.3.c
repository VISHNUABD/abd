#include <stdio.h>
int main()
 {
    char c;
    printf("enter alphabet to check vowel or not");
    scanf("%c",&c);
if(c<='a' && c>='z' || c<='A' && c>='Z')
 {
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
       printf ("the entered alphabet is vowel");
        else
       printf("the entered alphabet is consonant");
     
 }
    else
    printf("invalid input");
return 0;
}
