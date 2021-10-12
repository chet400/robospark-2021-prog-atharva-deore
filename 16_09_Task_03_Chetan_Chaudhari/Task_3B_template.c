// Implement an optimal approach for implementing two stacks in a single array.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 20

// Structure for two stacks
struct TwoStacks{
    char arr[MAX];
    int top1;
    int top2;
}ts;

// Initialise top1 and top2 here
void init(){

      ts.top1=-1;
      ts.top2=MAX/2-1;

}

// Write the code to push the data in Stack 1
void push1(int data){
    ts.arr[++ts.top1]=data;
    


}

// Write the code to push the data in Stack 2
void push2(int data){
    ts.arr[++ts.top2]=data;

}

// Write the code to pop the data from Stack 1
int pop1(){
    int store=ts.arr[ts.top1];
    ts.top1=ts.top1-1;
    return store;

}

// Write the code to pop the data from Stack 2
int pop2(){
    
    int store=ts.arr[ts.top2];
    ts.top2=ts.top2-1;
    return store;
    
}

// Driver Code
int main() {

    init();

    int opt, element, poppedElement;

    while(opt != 0){

        printf(">> Which option do you want to choose? \n");
        printf(" 0. EXIT\n 1. Push in Stack 1 \n 2. Push in Stack 2 \n 3. Pop from Stack 1 \n 4. Pop from Stack 2 \n");
        scanf("%d", &opt);

        switch (opt)
        {
            case 1:
                printf(">> Enter the element you want to push in Stack 1: \n");
                scanf("%d", &element);
                push1(element);
                break;
            case 2:
                printf(">> Enter the element you want to push in Stack 2: \n");
                scanf("%d", &element);
                push2(element);
                break;
            case 3:
             
                poppedElement = pop1();
                printf(">> The popped element is %d. \n", poppedElement);
                break;
            case 4:
               
               
                poppedElement = pop2();
                
               
                printf(">> The popped element is %d. \n", poppedElement);
                break;
            case 0: 
                printf("[!!] Exiting");
                exit(0);
            default:
                printf("[!!] Invalid Input, Try Again");
                break;
        }
    }

    return 0;
}