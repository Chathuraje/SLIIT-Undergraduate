/******************************************************************************
Input 10 no series in to the array and find the largest nos and store largest nos in to the another array.

Stident ID: 
*******************************************************************************/

#include <stdio.h>
# define SIZE 10 // define array size

int main()
{
    int myArray[SIZE]; // create array for store first no series
    int largeNum[SIZE]; // create array for store Large nos
    
    int noSeries; // variable for input no Series 
    int counter = 0; // counter to enter no Series
    
    int counterLargeNo = 0; // counter to display large no;
    
    //Input no Series'
    while (counter < SIZE) {
        printf("Enter the number series: "); // display enter the number series
        scanf("%d", &noSeries); // Take input
        
        myArray[counter] = noSeries; // store input no in noSeries array
        counter++;
    }
        
    int total = 0; // calulate total
    int i; // for arrays counter
    
    for(i = 0; i < SIZE ; i++) {
        total += myArray[i]; // suming array values
    }
    
    float average = (float) total / SIZE; // calcualater float
    printf("Average: %.1f\n", average); // display average
    
    
    // display the myArray (inputed no's)
    printf("myArray : ");
    for(i = 0; i < SIZE ; i++) {
        printf("%d ", myArray[i]);
        // store large no's in to the largeNum array;
        if (myArray[i] > average) {
            largeNum[counterLargeNo] = myArray[i]; // store larger nos than average store in lareNum array
            counterLargeNo++; // couter for the Large no
        }
            
    }
    
    // Display larger no's
    printf("\nlargeNum : ");
    for(i = 0; i < SIZE ; i++) {
        if (largeNum[i] != 0)
            printf("%d ", largeNum[i]);
    }
    
    return 0;
}
