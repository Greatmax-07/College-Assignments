#include <stdio.h>
struct Property{
    char name[10];
    int price;
    int originalOrder;
    int amenities;
};
int main() {
    struct Property properties[5]={
        {"1BHK", 0, 0, 2}, {"2BHK", 0, 1, 4}, {"3BHK", 0, 2, 5}, {"4BHK", 0, 3, 6}, {"RowHouse", 0, 4, 8}
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
    printf("\nOur Recommendations:\n");
    for(int i=0;i<5;i++){
        printf("%s: Rs. %d with %d amenities.\n",properties[i].name, properties[i].price, properties[i].amenities);
    }

    printf("You may choose your desired property according to your budget.");
    return 0;
}
