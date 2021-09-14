#include<stdio.h>
#include<string.h>
#include<stdlib.h>


 struct Bank{
        int Accountno,balance;
        char name[300];

    }bankmembers[10];
    void checkbalance(struct Bank bankmembers[10])
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
   struct Bank bankmembers[10];

  int i,j,choice,accountnu,transaction;
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
  printf("You have to perform transaction\n");
  printf("Enter 1 For deposit and 0 For withdrawal\n");
  scanf("%d",&choice);
  if (choice==1)
  {
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
  }
  else{
      printf("Enter Account number");
      scanf("%d",&accountnu);
      printf("Enter Withdrawl amount");
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
  }
  
}