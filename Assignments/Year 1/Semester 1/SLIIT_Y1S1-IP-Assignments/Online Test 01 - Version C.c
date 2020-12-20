//order pizzas from “Pizza Paradise”. Find total value of customize pizza
//Version C

//include preprocesers
#include <stdio.h>
#include <stdlib.h>

//start of main function
int main()
{
    //variable for pizza option
    int pizzaOption;
    int pizzaPrice = 0; //one pizza prize acording to pizza size
    
    //input pizza option
    printf("Input Pizza Option:  ");
    scanf("%d", &pizzaOption);  
	
	//pizza size
    char pizzaSize;
    

    //select pizza option
    switch(pizzaOption){
	    //select option 1
        case 1:
            printf("Size of the Pizza (P/M/L): ");
            scanf("%s", &pizzaSize); 
            //select pizza size
            if (pizzaSize == 'P' || pizzaSize == 'p') {
                pizzaPrice = 560; //assign size p price
            } else if (pizzaSize == 'M' || pizzaSize == 'm'){
                pizzaPrice = 920; //assign size m price
            } else if (pizzaSize == 'L' || pizzaSize == 'l'){
                pizzaPrice = 1800; //assign size l price
            } else {
                printf("Wrong Pizza Size Enterd!: ");
            }
      break;
    //select option 2
        case 2:
            printf("Size of the Pizza (P/M/L): ");
            scanf("%s", &pizzaSize); 
            //select pizza size
            if (pizzaSize == 'P' || pizzaSize == 'p') {
                pizzaPrice = 340; //assign size p price
            } else if (pizzaSize == 'M' || pizzaSize == 'm'){
                pizzaPrice = 660; //assign size m price
            } else if (pizzaSize == 'L' || pizzaSize == 'l'){
                pizzaPrice = 1300; //assign size l price
            } else {
                printf("Wrong Pizza Size Enterd!: ");
            }
        break;
        //select option 3
        case 3:
            printf("Size of the Pizza (P/M/L): ");
            scanf("%s", &pizzaSize); 
		    //select pizza size P, M or L
            if (pizzaSize == 'P' || pizzaSize == 'p') {
                pizzaPrice = 760; //assign size p price
            } else if (pizzaSize == 'M' || pizzaSize == 'm'){
                pizzaPrice = 1100; //assign size m price
            } else if (pizzaSize == 'L' || pizzaSize == 'l'){
                pizzaPrice = 2100; //assign size l price
            } else {
                printf("Wrong Pizza Size Enterd!: ");
            }
      break;
      //if option is wrong
    default:
        printf("Wrong Option Enterd!: ");
    }
    
    //get pizza amount
    int pizzaCount;
    printf("Number of Pizzas : ");
    scanf("%d", &pizzaCount);  //input pizza amount
    int totalPrize = pizzaPrice*pizzaCount; // calcualter total amount for pizza
    
    char pizzaTopping = 'Y'; 

    //select pizza topping
    printf("Do you need any extra toppings ( y/n): "); //select y or n
    scanf("%s", &pizzaTopping);
    
    //while y
    while(pizzaTopping == 'y' || pizzaTopping == 'Y'){
        int toppingOption;
        printf("Input your option: "); //input topping option
        scanf("%d", &toppingOption); //store topping option
        
        
        if (toppingOption == 1) { //topping option 1
            totalPrize += 320; //add topping option 1 prize to pizza
        }else if (toppingOption == 2) { //topping option 2
            totalPrize += 140; //add topping option 2 prize to pizza
        }else if (toppingOption == 3) { //topping option 3
            totalPrize += 130; //add topping option 3 prize to pizza
        }else if (toppingOption == 4) { //topping option 4
            totalPrize += 150; //add topping option 4 prize to pizza
        }else {
		//if toping option wrong
            printf("Wrong Toping Option Enterd!: ");
        }
        
        //ask if need extra topping
        printf("Do you need any extra toppings ( y/n): ");
        scanf("%s", &pizzaTopping); 
    }
    
	//display total price
    printf("Total Price Rs : %d", totalPrize);
    
    return 0;//exit the progran

}//end of main function
