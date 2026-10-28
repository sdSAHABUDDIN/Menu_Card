/* Goal to create menu card
Version 1- Simple choice and generate total bill with GST
Version 2- Add service system 1.Dine-in 2.Takeaway and improve design*/
#include<stdio.h>
int main(){
  int option;
  int pizza=0;
  int pasta=0;
  int tea=0;
  int coffee=0;
  int service_type=0;
  int packaging=0;

  printf("|-----Welcome to MyCafe-----------|\n");
  printf("|---------------------------------|\n");
  printf("| Select Service Type(1 or 2)     |\n");
  printf("| 1. Dine-in                      |\n");
  printf("| 2. Takeaway (with packaging fee)|\n");
  printf("|---------------------------------|\n");
  printf("==> ");
  scanf("%d",&service_type);

  if(service_type==2){
    packaging=30;
  }

  do{
      printf("------------- MENU -------------\n");
      printf("| 1. Pizza   = 250             |\n");
      printf("| 2. Pasta   = 100             |\n");
      printf("| 3. Tea     = 20              |\n");
      printf("| 4. Coffee  = 40              |\n");
      printf("| 5. Generate Bill             |\n");
      printf("--------------------------------\n");
      printf("==> Enter your choice here: ");
      scanf("%d", &option);
  switch (option)
  {
    case 1:
      pizza++;
      printf("--> You order %d Pizza\n",pizza);
      break;
    case 2:
      pasta++; 
      printf("--> You order %d Pasta\n",pasta);
      break;
    case 3:
      tea++;
      printf("--> You order %d Tea\n",tea);
      break;
    case 4:
      coffee++;
      printf("--> You orders %d coffee\n",coffee);
      break;
    case 5:
      printf("--> Your bill in Process...\n");
      break;
    default:
      printf("Invalid choice! Please select b/w 1 and 5.\n");
      break;
  }
  }while(option>=1 && option<=4);

  int total = (pizza * 250) + (pasta * 100) + (tea * 20) + (coffee * 40);
  float gst=total*0.18f;
  float grand_total=total+ gst+ packaging;
  int item=0;

  printf("|---------FINAL BILL--------|\n");
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

  if(service_type==1){
    printf("| Mode: Dine-in             |\n");
  }else{
    printf("| Mode: Takeaway            |\n");
  }
  printf("|     SubTotal = %d        |\n",total);
  printf("|     GST 18%% = %.2f       |\n",gst);
  if (service_type == 2) {
    printf("| Packaging Fee = %d        |\n", packaging);
  }
  printf("|---------------------------|\n");
  printf("| Grand Total   = %.2f    |\n", grand_total);
  printf("|---------------------------|\n");
  printf("-- Thank you for visiting --\n\n");
}