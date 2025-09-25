/*Temperature Tracker:
Write a program for tracking daily temperatures of 3 cities for a week. The program calculates the average temperature for each day and for the week.
*/
#include<stdio.h>
int main(){
	float temperature[3][7];
	for(int i=0;i<3;i++){
        printf("City %d: \n",i+1);
    	for(int j=0;j<7;j++){
            printf("Day %d: ",j+1);
            scanf("%f",&temperature[i][j]);	
    	}
	}
	float total=0;
	printf(" _______________________________________________________________________________________________________________________________________________________\n");
    printf("|\t\t\t\t\t\t\t\tTemperature Tracking By B24CE1082\t\t\t\t\t\t\t|\n");
    printf("|_______________________________________________________________________________________________________________________________________________________|\n");
    printf("|SR_NO\t|\tCITY\t|\tDAY 1\t|\tDAY 2\t|\tDAY 3\t|\tDAY 4\t|\tDAY 5\t|\tDAY 6\t|\tDAY 7\t|\tAVG\t|\n");     	
	printf("|_______|_______________|_______________|_______________|_______________|_______________|_______________|_______________|_______________|_______________|\n");
	for(int i=0;i<4;i++){
    	if(i+1<4){
            printf("|%d\t|\tCITY %d\t|",i+1,i+1);
        	total=0;
        	for(int j=0;j<7;j++){
                printf("\t%.2f\t|",temperature[i][j]);
                total+=temperature[i][j];
        	}
            printf("\t%.2f\t|",total/7);
            printf("\n");
            printf("|_______|_______________|_______________|_______________|_______________|_______________|_______________|_______________|_______________|_______________|\n");
    	}
    	if(i+1==4){
            printf("|%d\t|   DAILY AVG\t|",i+1);
        	for (int j = 0; j < 7; j++) {
            	float dailyTotal = 0;
            	for (int i = 0; i < 3; i++) {
                    dailyTotal += temperature[i][j];
            	}
                printf("\t%.2f\t|", dailyTotal / 3);
        	}
            printf("\t-\t|"); // No overall average for daily row
            printf("\n");
            printf("|_______|_______________|_______________|_______________|_______________|_______________|_______________|_______________|_______________|_______________|\n");
    	}
	}
	return 0;
}
