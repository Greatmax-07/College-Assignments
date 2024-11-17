#include<stdio.h>
#include<string.h>

char name[50],address[100],gmail[100],gmailcpy[100],pname[50],finalname[50];
char cmp[]="moc.liamg@";
char space=' ';
char project[]=" Flyover";
int cmplen, input;

int main(){

cmplen=strlen(cmp);
printf("\n**Welcome to Ministry of Road Development and Highways**\n\n");
printf("We are taking a public opinion on naming the ongoing project of constucting flyover in Karad:\n");
printf("*GENERAL INSTRUCTIONS:*\n");
printf("1] Relevance: Names should reflect the region, culture, or a notable figure associated with the area.\n");
printf("2] Clarity and Simplicity: Names should be easy to pronounce and remember.\n");
printf("3] Non-Offensive: Suggestions should not include terms that could be offensive or controversial.\n");
printf("4] Cultural or Historical Significance: Priority will be given to names that honor local history, freedom fighters, or significant events.\n");
printf("5] The name should not exceed 25 characters.\n\n");

  printf("Please Enter your name: ");
  fgets(name,sizeof(name),stdin);
  printf("Please enter you Gmail ID: ");

  while(1){
        fgets(gmail,sizeof(gmail),stdin);
        strcpy(gmailcpy,gmail);
        input=strlen(gmail);

        for(int i=input-2, j=0;i>=0;i--, j++){
            gmailcpy[i]=gmail[j];
        }

        //gmailcpy[input-1]='\0';
        //printf("%s",gmailcpy);
        int result=strncmp(gmailcpy,cmp,cmplen);
        if(strchr(gmail,space)!=NULL){
            printf("Gmail ID must not have spaces.\n");
        }
        else if(result==0){
            break;
        }
        else {
        printf("Invalid Gmail.\nPlease enter a valid Gmail ID:\n");
        }
    }
            printf("Enter the name you suggest: ");

            while(1){
            fgets(pname,sizeof(pname),stdin);
            size_t size=strlen(pname);
            if(size<=25){
                pname[strcspn(pname, "\n")]='\0';
                strcat(pname,project);
                printf("\n");
                break;
            }
            else{
                printf("Name too big. Try a smaller name instead.\n");
            }
            }
        for(int i=0;i<150;i++){
        printf("*");
        }
        printf("\n");
        printf("Recorded Response:\n");
        printf("Your Name: %s", name);
        printf("Your Gmail ID: %s", gmail);
        printf("Your suggested project name: %s\n", pname);
        printf("We thank you for participating in this program.");
  return 0;
}
