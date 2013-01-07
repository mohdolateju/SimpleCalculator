#include<stdio.h>

int main(void)
{
    int tom,cat;/*Variable Declaration*/
    printf("This is a multiplication table please enter a number\n");
    scanf("%d",&tom);
    /*Loop Condition and equation*/
    for(cat=1;cat<=10;++cat)
    printf("%d * %d = %d\n",tom,cat,tom*cat);
    return 0;
}