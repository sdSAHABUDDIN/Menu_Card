#include<stdio.h>
int main(){
  int option;
  int pizza=0;
  int pasta=0;
  int tea=0;
  int coffee=0;
  printf("<------Welcome to MyCafe-------->\n");
  
  do{
    printf("------------- MENU -------------\n");
    printf("1. Pizza= 250\n2. Pasta= 100\n3. Tea= 20\n4. coffee= 40\n5. Exit\n");
    printf("==> Enter your choice here: ");
    scanf("%d",&option);
  switch (option)
  {
    case 1:
      pizza++;
      printf("You order %d Pizza\n",pizza);
      break;
    case 2:
      pasta++; 
      printf("You order %d Pasta\n",pasta);
      break;
    case 3:
      tea++;
      printf("You order %d Tea\n",tea);
      break;
    case 4:
      coffee++;
      printf("You orders %d coffee\n",coffee);
      break;
    case 5:
      printf("Exit\n");
      break;
    default:
      printf("Nothing\n");
      
      break;
  }
  }while(option>=1 && option<=4);
  int item=0;


  printf("|---------Total bill--------|\n");
  if(pizza){
    item++;
    printf("| %d. %d * pizza  = %d       |\n",item,pizza,250*pizza);
    
  }
  if(pasta){
    item++;
    printf("| %d. %d * pasta  = %d       |\n",item,pasta,100*pasta);
  }
  if(tea){
    item++;
    printf("| %d. %d * tea    = %d        |\n",item,tea,20*tea);
  }
  if(coffee){
    item++;
    printf("| %d. %d * coffee = %d        |\n",item,coffee,40*coffee);
  }
  printf("|---------------------------|\n");
  int total=pizza*250+pasta*100+tea*20+coffee*40;
  float gst=total*18/100;
  printf("|        Total = %d        |\n",total);
  printf("|          GST = %g        ||\n",gst);
  printf("|  Grand Total = %g        |\n",total+gst);
  printf("|---------------------------|\n");
  printf("-- Thank you for visiting --\n\n");


  
}