#include <stdio.h>
int top = -1;
int length;

void push( int stack[] ) {
    int val;
    if ( top == length - 1 ) {
        printf("\nSTACK OVERFLOW!!!\n");
        return;
    }
    printf("Element to push? : ");
    scanf("%d", &val);
    top++;
    stack[top] = val;
}

void pop(int stack[] ) {
    if ( top == -1 ) {
        printf("\nSTACKUNDERFLOW!!!\n");
        return;
    }
    printf("\n%d Popped from the stack\n",stack[top]);
    top--;
}

void peek( int stack[] ) {
    if ( top == -1 ) {
        printf("\nStack is Empty!!!\n");
        return;
    }
    printf("\nThe peek element is : %d\n",stack[top]);
}

void display( int stack[]) {
    if ( top == -1 ) {
        printf("\nThe stack is empty!!!\n");
        return;
    }
    printf("\n    STACK ELEMENTS\n");
    for ( int i = top ; i >= 0 ; i-- ) {
        printf("\t| %d |\n",stack[i]);
        // printf("____\n");
    }
}

int main() {
    
    printf("Enter the length of the stack : ");
    scanf("%d", &length);
    int stack[length];
    
    int choice;
    do {
        printf("\n\n\tSTACK OPERATION == MENY DRIVEN PROGRAM\n\n");
        printf("Enter your choice :\n");
        printf("1. Stack Push :\n");
        printf("2. Stack Pop : \n");
        printf("3. Stack Peek : \n");
        printf("4. Stack elements display :\n");
        printf("5. Exit\n\n\n");    

        printf("Enter your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        
            case 1:
                push(stack);
                break;
        
            case 2:
                pop(stack);
                break;
        
            case 3:
                peek(stack);
                break;
            
            case 4:
                display(stack);
                 break;
            case 5:
                printf("\n\t=====EXITING THE STACK MENU DRIVEN PROGRAM=====\n\n");
                return 0;
            default:
                printf("\nINVALID CHOICE\n\n");
                break;
        }
    } while ( choice != 5 );
    return 0;
}