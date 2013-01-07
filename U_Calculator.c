/*CALCULATOR MADE BY MEGATRIX*/
#include<stdio.h>
#include<conio.h>

int main(void)
{
    int cas,add,num1,num2,mult,sub,divi,clrscr;
    char a;
    printf("THIS IS A CALCULATOR MADE BY MEGATRIX\n");
    printf("You are required to specify 2 parameters\n");
    
    printf("Please choose an operation to be performed from the list\n 1-Addition\n "
            "2-Multiplication\n 3-Subtraction\n 4-Division\n\n");
    
        
        do
        {
            printf("\n");
             printf("\n");
    printf("Please enter a number from(0-4) for calculation type");
    scanf("%d",&cas);
    /*Condition for Addition*/
    if (cas == 1)
    {
        printf("You have selected the Addition operation");
        printf("\nInsert 1st Parameter\n");
        scanf("%d",&num1);
        printf("Insert 2nd Parameter\n");
        scanf("%d",&num2);
        add=num1+num2;
        printf("\n%d + %d = %d\n\n",num1,num2,add);
    }
    /*Condition for Multiplication*/
    else if(cas == 2)
    {
        printf("You have selected the Multiplication operation");
        printf("\nInsert 1st Parameter\n");
        scanf("%d",&num1);
        printf("Insert 2nd Parameter\n");
        scanf("%d",&num2);
        mult=num1*num2;
        printf("\n%d * %d = %d\n\n",num1,num2,mult);
    }
    /*Condition for Subtraction*/
    else if(cas == 3)
    {
        printf("You have selected the Subtraction operation");
        printf("\nInsert 1st Parameter\n");
        scanf("%d",&num1);
        printf("Insert 2nd Parameter\n");
        scanf("%d",&num2);
        sub=num1-num2;
        printf("\n%d - %d = %d\n\n",num1,num2,sub);
    }
    /*Condition for Division*/
    else if(cas == 4)
    {
        printf("You have selected the Division operation");
        printf("\nInsert 1st Parameter\n");
        scanf("%d",&num1);
        printf("Insert 2nd Parameter\n");
        scanf("%d",&num2);
        divi=num1/num2;
        printf("\n%d / %d = %d\n\n",num1,num2,divi);
    }
    else
        printf("\nOperation not recognised \t Please Run Program Again\n");
    
    printf("Do you want to perform another calculation Y/N");
    a = getch();
    }
  while(a =='y');
   
}

