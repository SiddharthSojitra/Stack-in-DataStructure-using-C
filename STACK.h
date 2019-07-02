#define MAX 10

typedef struct
{

    int data[MAX];
    int top;

}STACK;

void init(STACK *s)
{
    s->top=-1;
    printf("\n STACK INITIALIZED ");
}

void push(STACK *s,int val)
{
    if(s->top==MAX-1)
    {
        printf("\n STACK IS FULL ");
    }
    else
    {
        s->top++;
        s->data[s->top] = val;
        printf("\n VALUE %d INSERTED\n",val);
    }
}

int pop(STACK *s)
{
    int val=NULL;
    if(s->top==-1)
    {
        printf("\n STACK IS EMPTY ");
    }
    else
    {
        val=s->data[s->top];
        s->top--;
    }
    return val;
}

int peep(STACK *s)
{
    int val=NULL;
    if(s->top==-1)
    {
        printf("\n STACK IS EMPTY");
    }
    else
    {
        val=s->data[s->top];
    }
    return val;
}

void display(STACK *s)
{
    int i;
    if(s->top==-1)
    {
        printf("\n STACK IS EMPTY ");
    }
    else
    {
       // printf("\n========================");
        for(i=s->top;i>=0;i--)
        {
            printf("\n DATA = %d",s->data[i]);
        }
        printf("\n");
    }
}

void change(STACK *s)
{
    int pos,val,i;
    printf("\n ENTER POSITION OF ELEMENT : ");
    scanf("%d",&pos);
    printf("\n ENTER NEW VALUE : ");
    scanf("%d",&val);
    printf("VALUE IS CHANGED\n");
    if(s->top==-1)
    {
        printf("\n STACK IS EMPTY ");
    }
    else
    {
        i=s->top-(pos-1);
        if(i>=0&&i<=s->top)
        {
            s->data[i]=val;
        }
        else
        {
            printf("\n INVALID POSITION ");
        }
    }
}
