#include<stdio.h>
int main(){
    int num=13,ply=1,c_k;

    printf("\nWelcome to Chocolates and Chillies Game.\n\n");
    printf("----Rule Book----\n1.Total Chocolates - 13\n2.Player has to choose N.O of Chocolates(1 to 3)\n3.The one who empty's the Chocolates 'He is the Winner'\n\n" );

    while(num>0){
        printf("The Current number of Chocolates : %d\n\n",num);

        do{
            printf("Player %d's move -->\n",ply);
            printf("Enter the number of Chocolates(1 to 3): ");
            scanf("%d",&c_k);

            if(c_k<1 || c_k>3){
                printf("Invalid input.");
                printf("Try again!!\n");
            }
            if(c_k>num) {
                printf("Invalid input, their is not enough chocolates\n");
                printf("Try again!!\n");
            }
        }while(c_k<1 || c_k>3 || c_k>num);

        num =num-c_k;

        if(num==0){
            if(ply==1){
                printf("\n**** Player 1 is the winner ****\n");
            }
            else{
                printf("\n**** Player 2 is the winner ****\n");
            }
        }
        else{
            if(ply==1){
                ply=2;
            }
            else{
                ply=1;
            }
        }
        
    }
    return 0;
}