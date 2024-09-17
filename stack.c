#include <stdio.h>
#include<stdlib.h>

int main()
{
    printf("1. PUSH:Insert the elements in stack\n");
    printf("2. POP : Delete the elements in stack\n");
    printf("3. PEAK:Show the top ost Element\n");
    printf("4. Underflow!!\n");
    printf("5. Overflow!!\n");
    printf("6. Display the elements in stack\n");
    printf("7. EXIT!!\n");
    int stack[10],n,x,top =-1;
    printf("Enter the size of stack:");
            scanf("%d",&n);
            for(int i=0;i<n;i++){
                printf("Enter the elements of Stack");
                scanf("%d",&x);
                top +=1;
                stack[top] = x;
            }
             while(1)
   {
              int choice;
               printf("Enter the choice:");
              scanf("%d",&choice);
               switch(choice)
              {
             case 1:
               //push insert the elements
             int a=0;
              printf("enter the elements to push in stack:");
              scanf("%d",&a);
              top+=1;
              stack[top] = a;
            break;
            case 2:
            //pop delete the element
            top--;
            break;
            case 3:
            //show the peek elments
            printf("Elements of top is:%d\n",stack[top]);
            break;
            case 4:
            //Underflow check
            if(top > -1){
                printf("Stack is Underflow!!\n");
            }
            break;
            case 5:
            //Overflow check
            if(top == 10){
                printf("Stack is Overflow!!\n");
            }
            break;
            case 6:
            //Display the stack
            for(int i =top;i>-1;i--){
                printf("%d \t",stack[i]);
            }
            break;
            case 7:
            //exit
            exit(1);
            break;
            default:
            printf("Invalid Choice!!");
            break;
            
        }
    }
}