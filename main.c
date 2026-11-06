#include <stdio.h>
int budget(){
double revenue;
double expenses;
double balance;
printf("Enter total revenue: ");
scanf("%lf", &revenue);
printf("Enter total expenses: ");
scanf("%lf", &expenses);
balance = revenue - expenses;
printf("Surplus: %.2f\n"revenue);
printf("Expenses: %.2f",expenses);
if(balance >0){
    printf("Surples")


}
printf("Budget balance: %.2f\n", balance);

}




int main()
{
char municipality[50];
char mayor[50];
int population;
bool callBudget=false;
printf("Municipal Financial Management System\n\n");
printf("Enter Municipality Name: ");
scanf("%49s", municipality);
printf("Enter Mayor: ");
scanf("%49s", mayor);
printf("Enter Population: ");
scanf("%d", &population);
printf("\n---------------------------------\n");
printf("Municipality : %s\n", municipality);
printf("Mayor : %s\n", mayor);
printf("Population : %d\n", population);

printf("Press 1 if  you want to calculate budget");
scanf("%d",&callBudget);
if(callBudget == 1){
    budget();
}
return 0;
}