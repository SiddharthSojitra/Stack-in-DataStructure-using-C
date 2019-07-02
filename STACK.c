#include<stdio.h>
#include"Stack.h"

int main()
{
    int ch,val;
    STACK s;
    init(&s);

    while(1)
    {
        printf("\n 1_PUSH\n 2_POP\n 3_PEEP\n 4_DISPLAY\n 5_CHANGE\n 0_EXIT");
        printf("\n Enter your choice__: ");

        scanf("%d",&ch);
        switch(ch)
        {
            case 1 :
                    printf("\n Enter the value :");
                    scanf("%d",&val);
                    push(&s,val);
                break;

            case 2 :
                    val=pop(&s);
                    if(val!=NULL)
                    {
                        printf("\n The value %d is DELETEED \n",val);
                    }
                break;

            case 3 :
                    val=peep(&s);
                    if(val!=NULL)
                    {
                        printf("\n Returned value is %d \n",val);
                    }
                break;

            case 4 :
                    display(&s);
                break;

            case 5:
                    change(&s);
                break;

            case 0:
                    return 1;
                break;

            default:
                    printf("\n PLEASE ENTER VALID OPTION__");
                break;
        }
    }
    return 0;
}
