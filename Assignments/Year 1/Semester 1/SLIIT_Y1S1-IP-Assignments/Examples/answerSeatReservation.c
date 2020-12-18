# include <stdio.h>
# define SIZE 10

int main(void) {
    int seat[SIZE];

	for(int j = 0; j < SIZE; ++j)
            seat[j] = 0;
    
    int seatNo;
    
    printf("Pls input the seat number (1- 10): ");
    scanf("%d", &seatNo);
    
    while (seatNo != -1) {
        if ((seatNo < 1) || (seatNo > 10)) {
            printf("Wrong Input \n");
        } else if (seat[seatNo] == 0) {
            seat[seatNo] = 1; 
        } else {
            printf("Seat is already reserved \n");
        }
        
        printf("Pls input the seat number (1- 10): ");
        scanf("%d", &seatNo);
    }
    
    for(int j = 0; j < SIZE; ++j)
        if (seat[j] == 1)
            printf("%d",j);
}