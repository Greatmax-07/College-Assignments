/*Rainfall Tracking:
Write a program to track rainfall data for 3 cities over 4 months. Using a 2D array, we can store the data, calculate the average rainfall for each city, and display the rainfall data in a tabular format.
*/
#include<stdio.h>
int main(){
    float rainfall[3][4];
    for(int i=0;i<3;i++){
    	printf("City %d: \n",i+1);
    	for(int j=0;j<4;j++){
        	printf("Month %d: ",j+1);
            scanf("%f",&rainfall[i][j]);	
    	}
    }
    float total=0;
    printf(" _______________________________________________________________________________________________________\n");
    printf("|\t\t\t\t\tRainfall Tracking By B24CE1082\t\t\t\t\t|\n");
    printf("|_______________________________________________________________________________________________________|\n");
    printf("|SR_NO\t|\tCITY\t|\tMONTH 1\t|\tMONTH 2\t|\tMONTH 3\t|\tMONTH 4\t|\tAVG\t|\n");        
    printf("|_______|_______________|_______________|_______________|_______________|_______________|_______________|\n");
    for(int i=0;i<3;i++){
    	printf("|%d\t|\tCITY %d\t|",i+1,i+1);
    	total=0;
    	for(int j=0;j<4;j++){
            printf("\t%.2f\t|",rainfall[i][j]);
        	total+=rainfall[i][j];
    	}
    	printf("\t%.2f\t|",total/4);
    	printf("\n");
        printf("|_______|_______________|_______________|_______________|_______________|_______________|_______________|\n");
    }
    return 0;
}
