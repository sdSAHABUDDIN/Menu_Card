#include<stdio.h>
int main(){
    int chocolate=13;
    
    printf("=========================================\n");
    printf("     WELCOME TO THE CHOCOLATE GAME       \n");
    printf("=========================================\n");

    while (chocolate>0)
    {
      int ans1=1;
      int choice1;
      int choice2;
      if(chocolate){
        while(ans1){
          printf("Remaining chocolate: %d\n",chocolate);
          printf("Player 1 turn take chocolate b/w 0 to 3: ");
          scanf("%d",&choice1);
          if(choice1>0 && choice1<4){
            chocolate-=choice1;
            ans1=0;
          }else{
            printf("invalid input enter number b/w 0 to 3.\n");
          }
        }
      }else{
        printf("Player 2 win. Player 1 loss.\n");
        break;
      }
      if(chocolate){
        ans1=1;
        while(ans1){
          printf("Remaining chocolate: %d\n",chocolate);
          printf("Player 2 turn take chocolate b/w 0 to 3: ");
          scanf("%d",&choice2);
          if(choice2>0 && choice2<4){
            chocolate-=choice2;
            ans1=0;
          }else{
            printf("invalid input enter number b/w 0 to 3.\n");
          }
        }
      }else{
        printf("Player 1 win. Player 2 loss.\n");
        break;
      }
    }
}