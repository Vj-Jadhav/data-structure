#include <stdio.h>
#include<stdlib.h>

int main()
{
    int arr[10],n,choice;
    printf("enter the no of elements in Array:");
    scanf("%d",&n);
    
    // input the elements of array...
    
    for(int i = 0; i< n;i++){
        printf("Enter the element of array :");
        scanf("%d",&arr[i]);
    }
    printf("1 :Insert element at 1st position\n");
    printf("2 :Insert element at last position\n");
    printf("3 :Insert element at any position\n");
    printf("4 :Delete element at 1st position\n");
    printf("5 :Delete element at last position\n");
    printf("6 :Delete element at any positin\n");
    printf("7 :Display the array\n");
    printf("8 :Modify the value");
    printf("9 :Exit\n");
    
    
    
    while(1){
        printf("\nEnter the choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            //Insert element at 1st position
            int a;
            printf("Enter the value for 1st position:");
            scanf("%d",&a);
            for(int i = n;i > 0;i--){
                arr[i] = arr[i-1];
                
            }
            arr[0] = a;
            n++;
            break;
            
            case 2:
            //Insert element at last position
            printf("Enter the value at last:");
            scanf("%d",&arr[n]);
            n++;
            break;
            
            case 3:
            //Insert element at any position
            int pos,value;
            printf("Enter the position: ");
            scanf("%d",&pos);
            printf("Enter the value:");
            scanf("%d",&value);
            for(int i = n; i >= pos;i--){
                arr[i] = arr[i - 1]; 
            }
            arr[pos - 1] = value;
            n++;
            break;
            
            case 4:
            //Delete element at 1st position
            for(int i = 0;i < n;i++){
                arr[i] = arr[i + 1];
            }
            n--;
            break;
            
            case 5:
            //Delete element at last position
            n--;
            break;
            
            case 6:
            //Delete element at any position
            
            printf("Enter the position: ");
            scanf("%d",&pos);
            
            for(int i = pos -1;i<n;i++){
                arr[i] = arr[i+1];
            }
            n--;
            break;
            
            case 7:
            //Display the Array
            printf("Element of array: ");
            for(int i = 0;i < n;i++){
                printf("%d\t",arr[i]);
                
            }
            break;
            
            case 8:
            //modify the array
            printf("Enter the position: ");
            scanf("%d",&pos);
            printf("Enter the value:");
            scanf("%d",&value);
            for(int i = 0; i <= pos;i++){
                if(i == pos -1){
                arr[i] = value;
            }
            }
            break;
            
            
            case 9:
            //Exit
            exit(1);
            
            default:
            printf("Invalid Choice!!");
            break;
        }
            
            
            
            
            
            
        }
    }