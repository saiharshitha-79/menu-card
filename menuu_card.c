#include <stdio.h>
int main() 
{
	int i;
    char cho, type;
    int c, table_number, num_choices;
    float price = 0;
    printf("         WELCOME TO HOTEL GRAND\n");
    printf("                MENU\n");
    printf("Enter 'v' if you are vegetarian or enter 'n' if you are non-vegetarian: ");
    scanf(" %c", &cho);
    printf("Enter your table number: ");
    scanf("%d", &table_number);
    printf("Enter the number of choices: ");
    scanf("%d", &num_choices);
    printf("\nTable Number: %d\n", table_number);
    for (i = 0; i < num_choices; i++) 
    {
        switch (cho) 
        {
            case 'v':
                printf("\nVEGETARIAN MENU\n");
                printf("Enter your choice:\n 1.Soups - 80\n 2.Starters - 120\n 3.Main course - 200\n 4.Desserts - 100\n");
                scanf("%d", &c);
                break;
            case 'n':
              printf("\nNON-VEGETARIAN MENU\n");
                printf("Enter your choice:\n 1.Soups - 200\n 2.Starters - 400\n 3.Main course - 200\n 4.Desserts - 250\n");
                scanf("%d", &c);
                break;
            default:
                printf("Invalid category choice\n");
                return 0;
        }
        switch (c) 
        {
            case 1:  	
                printf("\nSOUPS MENU:\n 1.Tomato soup\n 2.Mushroom soup\n 3.Sweet corn soup\n 4.Hong Kong soup\n Enter your choice: ");
                if (cho == 'v') price += 80;
                else price += 200;
                break;
            case 2:
                printf("\nSTARTERS MENU:\n 1.Sweet corn majestic\n 2.Paneer 65\n 3.Manchuria\n 4.Noodles\n Enter your choice: ");
                if (cho == 'v') price += 120;
                else price += 400;
                break;
            case 3:
                printf("\nMAIN COURSE MENU:\n 1.Veg dum biryani\n 2.Paneer biriyani\n 3.Mushroom biriyani\n 4.Sweet corn biriyani\n Enter your choice: ");
                price += 200; 
                break;
            case 4:
                printf("\nDESSERTS MENU:\n 1.Milkshakes\n 2.Cup cakes\n 3.Donuts\n 4.Ice creams\n Enter your choice: ");
                if (cho == 'v') price += 100;
                else price += 250;
                break;
            default:
                printf("Invalid menu choice\n");
                return 0;
        }
        scanf(" %c", &type);
    }
    printf("\nThank you for choosing KING HOTEL. Your order will be served in a few minutes.\n");
    printf("Total Amount to Pay:%.2f\n",price);
return 0;
}