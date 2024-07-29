#include <stdio.h>
#define N 5
int top = -1;
int stack[N];

void push()
{
    if (top == N - 1)
    {
        printf("stack is full");
    }
    else
    {
        top++;
        printf("Please Enter Element:");
        scanf("%d", &stack[top]);
    }
}
void display()
{
    for (int i = 0; i <= top; i++)
    {
        printf("%d\t", stack[i]);
    }
    printf("\n");
}
void pop()
{
    if (top == -1)
    {
        printf("Stack is empty");
    }
    else
    {
        top--;
    }
}
int main()
{
    int choice;
    while (1)
    {
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Thanks for visit");
            break;
        default:
            printf("Invalid choice");
            break;
        }
    }
    return 0;
}