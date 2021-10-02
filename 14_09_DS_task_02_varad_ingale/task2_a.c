#include<stdio.h>
struct bankinfo{
    int accountno;
    char name[20];
    int balance;
}cust[10];
void creation(struct bankinfo cust[]){
    for(int i=0;i<10;i++){
        printf("\nNew Account Generation\n");
        printf("Enter the Account Number: ");
        scanf("%d",&cust[i].accountno);
        printf("Enter the Name: ");
        scanf("%s",cust[i].name);
        printf("Enter the Balance: ");
        scanf("%d",&cust[i].balance);
    }
}
void limit(struct bankinfo cust[]){
    printf("The Account number and name of each customer with balance below Rs. 100 are as follows -\n");
     for(int i=0;i<10;i++){
        if(cust[i].balance<100){
        printf("The Account No. - %d ",cust[i].accountno);
        printf("The Customer Name is - %s \n",cust[i].name);
        }
    }
}
void withdrawal(struct bankinfo cust[]){
    int acc;
    printf("Enter the Acccount Number: ");
    scanf("%d",&acc);
    for(int i=0;i<10;i++){
        if(cust[i].accountno==acc){
            int wdr;
            printf("Enter the amount to withdraw: ");
            scanf("%d",&wdr);
            if(wdr>cust[i].balance){
                printf("The balance is insufficient for the specified withdrawal\n");
            }
            else{
                cust[i].balance-=wdr;
                printf("Name: %s    Account Number: %d\n",cust[i].name,cust[i].accountno);
                printf("Amount Withdrawn: %d    Updated Amount:%d\n",wdr,cust[i].balance);
            }
        }
    }

}
void deposit(struct bankinfo cust[]){
    int acc;
    printf("Enter the Acccount Number: ");
    scanf("%d",&acc);
    for(int i=0;i<10;i++){
        if(cust[i].accountno==acc){
            int dep;
            printf("Enter the amount to deposit: ");
            scanf("%d",&dep);
            cust[i].balance+=dep;
            printf("Name: %s    Account Number: %d\n",cust[i].name,cust[i].accountno);
            printf("Amount Deposited: %d    Updated Amount:%d\n",dep,cust[i].balance);
        }
    }
}
void checkbalance(struct bankinfo cust[]){
    int acc;
    printf("Enter the Acccount Number: ");
    scanf("%d",&acc);
    for(int i=0;i<10;i++){
        if(cust[i].accountno==acc){
            printf("Name: %s    Account Number: %d\n",cust[i].name,cust[i].accountno);
            printf("Current Balance of Account is %d\n",cust[i].balance);
        }
    }
}
int main()
{
    
    int choice;

    do{
    printf("\nPress 0 for Account Generation\nPress 1 for Withdrawal \nPress 2 for Deposit\nPress 3 for Checking Balance \nPress 4 for getting details of the account having balance less than 100 rs\nPress 5 for Exit\n");
    scanf("%d",&choice);

    switch(choice){
        case 0: {
            creation(cust);
            break;
        }
        case 1: {
            withdrawal(cust);
            break;
        }
        case 2: {
            deposit(cust);
            break;
        }
        case 3: {
            checkbalance(cust);
            break;
        }
        case 4: {
            limit(cust);
            break;
        }
        case 5: ;
            break;
        default:
            printf("Invalid Input");
    }
    }
    while(choice!=5);
    
 return 0;
    
}