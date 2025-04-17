#include<stdio.h>

int main(){
    int idNo,phoneNo;
    char name[20],county[20];
    
    printf("Enter the name: ");
    scanf("%s",name);
    printf("Enter the county: ");
    scanf("%s",county);
    printf("Enter the IdNo: ");
    scanf("%d",&idNo);
    printf("Enter the phone No: ");
    scanf("%d",&phoneNo);

    printf("\n====USER DETAILS ====>\nname:\t%s\ncounty:\t%s\nid num:\t%d\nphoneNum:\t%d\n____________________",name,county,idNo,phoneNo);


    
    return 0;
}