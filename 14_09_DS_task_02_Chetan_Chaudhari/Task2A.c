#include<stdio.h>
#include<string.h>
#include<stdlib.h>


 struct Bank{
        int Accountno,balance;
        char name[300];

    }bankmembers[20];
    void checkbalance(struct Bank bankmembers[20])
{

 int i=0;
 for (i=0;i<10;i++)
 {
     if ((bankmembers[i].balance)<100)
     {
         printf("Account no: %d Name : %s\n",bankmembers[i].Accountno,bankmembers[i].name);
     }
 }
}
int main()
{
   struct Bank bankmembers[20];

  int i,j,choice,choice1,accountnu,transaction;
  for(i=0;i<10;i++)
  {
      printf("Enter bank number %d\n",i+1);
      scanf("%d",&bankmembers[i].Accountno);
      printf("Enter name of %d person\n",i+1);
      scanf("%s",bankmembers[i].name);
      printf("Enter bank balance of %d person\n",i+1);
      scanf("%d",&bankmembers[i].balance);

  }
  checkbalance(bankmembers);
  
  printf("0.Withdrawl\n1.Deposit\n2.Create user\n");
  scanf("%d",&choice1);
  switch(choice1)
  {
      case 0:
      printf("Enter Bank account number");
      scanf("%d",&accountnu);
      printf("Enter withdrawl amount");
      scanf("%d",&transaction);
     for (i=0;i<10;i++)
      {
          if ((bankmembers[i].Accountno==accountnu) &&((bankmembers[i].balance)<transaction))
          {
              printf("The balance is insufficient for the specified withdrawal");
              break;
          }
          else if(bankmembers[i].Accountno==accountnu)
          {
              printf("Withdrawl Successful");
              printf("Your Current balance is %d After withdrawl of %d",bankmembers[i].balance-transaction,transaction);
          }
      }
      break;
      case 1:
        printf("Enter Account number for deposit\n");
      scanf("%d",&accountnu);
      printf("Enter Amount\n");
      scanf("%d",&transaction);
      for (i=0;i<9;i++)
      { 
          if( bankmembers[i].Accountno==accountnu )
          {   
              printf("Transaction Successful\n ");
              printf("You have deposited %d Rs \n",transaction);
              printf("Your Current balance is %d",bankmembers[i].balance+transaction);
          }
      }
      break;
      case 2:
      printf("Enter new user bank account number");
      scanf("%d",&bankmembers[10].Accountno);
      printf("Enter your name");
      scanf("%s",bankmembers[10].name);      
      printf("Enter how much money you want to deposit");
      scanf("%d",&bankmembers[10].balance);
      printf("Your data:\nAccount number :%d\nName :%s\nBalance:%d",bankmembers[10].Accountno,bankmembers[10].name,bankmembers[10].balance);      
      break;
      

       } 
  
  
}