#include <stdio.h>
#include <stdlib.h>
int F = -1;
int R = -1;

void insertfront(int arr[], int n, int x)
{
    if ((F == 0 && R == n - 1) || (F == R + 1))
    {
        printf("Queue is full\n");
    }
    else if (F == -1 && R == -1)
    {
        F = 0;
        R = 0;
        arr[F] = x;
    }
    else if (F == 0)
    {
        F = n - 1;
        arr[F] = x;
    }
    else
    {
        F = F - 1;
        arr[F] = x;
    }
}
void insertrear(int arr[], int n, int x)
{
    if ((F == 0 && R == n - 1) || (F == R + 1))
    {
        printf("Queue is full");
    }
    else if (F == -1 && R == -1)
    {
        F = 0;
        R = 0;
        arr[R] = x;
    }
    else if (R == 0)
    {
        R = n - 1;
        arr[R] = x;
    }
    else
    {
        R = R + 1;
        arr[R] = x;
    }
}
void display(int arr[], int n)
{
    int i = F;
    printf("\nThe element deque are:");
    while (i != R)
    {
        printf("%d", arr[i]);
        i = (i + 1) % n;
    }
    printf("%d", arr[R]);
}
void deletefront(int arr[], int n, int x)
{
}
void deleterear(int arr[], int n, int x)
{
}
int main()
{
    int n, choice, x;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    while (10)
    {
        printf("\n1.Insert Front\n");
        printf("2.Insert Rear\n");
        printf("3.Delete Front\n");
        printf("4.Delete Rear\n");
        printf("5.Display\n");
        printf("6.Exit\n");
        printf("Please Enter Your Choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("enter a element to enter in front:");
            scanf("%d", x);
            insertfront(arr, n, x);
            break;
        case 2:
            printf("enter a element to enter in rear:");
            scanf("%d", x);
            insertrear(arr, n, x);
            break;
        case 3:
            deletefront(arr, n, x);
            break;
        case 4:
            deleterear(arr, n, x);
            break;
        case 5:
            display(arr, n);
            break;
        case 6:
         printf("*************Thanks for visiting*************");
            goto a;
        }
    }
a:
    return 0;
}