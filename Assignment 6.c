#include <stdio.h>
struct Property{
    char name[10];
    int price;
    int originalOrder;
};
int main() {
    struct Property properties[5]={
        {"1BHK", 0, 0}, {"2BHK", 0, 1}, {"3BHK", 0, 2}, {"4BHK", 0, 3}, {"RowHouse", 0, 4}
    };
    int parkingCost;
    printf("Enter the prices that you have decided:\n");
    for(int i=0;i<5;i++){
        int valid=0;
        while(!valid){
            printf("Enter price for %s: ", properties[i].name);
            if(scanf("%d", &properties[i].price)==1){
                valid=1;
            } 
            else{
                printf("Invalid input! Please enter a valid number.\n");
                while(getchar()!='\n');
            }
        }
    }
    int validParking=0;
    while(!validParking){
        printf("Enter additional cost for parking: ");
        if(scanf("%d",&parkingCost)==1){
            validParking=1; 
        } 
        else{
            printf("Invalid input! Please enter a valid number.\n");
            while (getchar()!='\n'); 
        }
    }
    for(int i=0;i<5;i++){
        properties[i].price+=parkingCost;
    }
    for(int i=0;i<5-1;i++){
        for(int j=i+1;j<5;j++){
            if(properties[i].price<properties[j].price ||
                (properties[i].price==properties[j].price && properties[i].originalOrder>properties[j].originalOrder)){
                struct Property temp=properties[i];
                properties[i]=properties[j];
                properties[j]=temp;
            }
        }
    }
    printf("\nProperties in descending order of price (including parking cost):\n");
    for(int i=0;i<5;i++){
        printf("%s: Rs. %d\n",properties[i].name, properties[i].price);
    }
    return 0;
}