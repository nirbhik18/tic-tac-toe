#include<stdio.h>
int a[3][3];
void display_positions();
void enter_values();
int main(){
	printf("first look the poitions of the grid of the tic tac toe:\n");
	display_positions();
    printf("\n_____________________________________________________________\n\n");
    printf("Here's how the game works: \nThis is a two player game. \nThe players take turn writing the positions of the grid displayed above. \n");
    printf("\n1's represent the positions entered by player 1.\n2's represent the positions entered by player 2.\nAnd 0's represent vacant positions.\n");
    printf("\nfor instance you want to enter position [0][1]\nThen, first type 0, press enter, then, type 1.\n");
	printf("_____________________________________________________________\n\n");
	enter_values();
	return 0;
}
void display_positions(){
	int i,j;
	for (i=0;i<3;i++){
    printf("\n -------- -------- --------\n");
    printf("| ");
		for (j=0;j<3;j++){
			printf("[%d][%d] | ",i,j);
		}		
	}
    printf("\n -------- -------- --------\n");
}
void enter_values(){
	int j,k,a,b;
	int x[3][3];
	for (k=0;k<3;k++){
		for (j=0;j<3;j++){
			
				x[k][j]=0;
			
		}
	}
	int i=1;
	while (i<10){
		int c,d;
		if (i%2 != 0){
			printf("Enter posotion :\nPlayer 1:\n");
			scanf("%d%d",&a,&b);
			if (x[a][b]==0){
				x[a][b]=1;
			}
			else{
				printf("you've enter the position that has already been entered .  \n!!!!Please enter another position!!!!\n");
				scanf("%d%d",&a,&b);
				x[a][b]=1;				
			}
		}
		if (i%2 == 0){
			printf("Enter position : \nPlayer 2:\n");
			scanf("%d%d",&a,&b);
			if (x[a][b]==0){
				x[a][b]=2;
			}
			else{
				printf("you've input the position that has already been entered .  \n!!!! Please enter another position !!!!\n");
				scanf("%d%d",&a,&b);
				x[a][b]=2;				
			}
		}
		printf("\n_____________________________________________________________\n\n");
		for(c=0;c<3;c++){
			for(d=0;d<3;d++){
				printf("%d \t",x[c][d]);
			}
			printf("\n");	
		}
		printf("\n_____________________________________________________________\n\n");	
		if (i>=5 && i%2 !=0){
			if (x[0][0]==1 && x[0][1]==1 && x[0][2]==1){
				printf("\nPlayer 1 wins!!!\n");
				break;
			}
			else if (x[1][0]==1 && x[1][1]==1 && x[1][2]==1){
				printf("\nPlayer 1 wins!!!\n");
				break;
			}
			else if (x[2][0]==1 && x[2][1]==1 && x[2][2]==1){
				printf("\nPlayer 1 wins!!!\n");
				break;
			}
			else if (x[0][0]==1 &&  x[1][0]==1 && x[2][0]==1){
				printf("\nPlayer 1 wins!!!\n");
				break;
			}
			else if (x[0][1]==1 && x[1][1]==1 && x[2][1]==1){
				printf("\nPlayer 1 wins!!!\n");
				break;
			}
			else if (x[0][2]==1 && x[1][2]==1 && x[2][2]==1){
				printf("\nPlayer 1 wins!!!\n");
				break;
			}
			else if (x[0][0]==1 && x[1][1]==1 && x[2][2]==1){
				printf("\nPlayer 1 wins!!!\n");
				break;
			}
			else if(x[0][2]==1 && x[1][1]==1 && x[2][0]==1){
				printf("\nPlayer 1 wins!!!\n");
				break;
			}
		}
		else if (i>=5 && i%2 ==0){
			if (x[0][0]==2 && x[0][1]==2 && x[0][2]==2){
				printf("\nPlayer 2 wins!!!\n");
				break;
			}
			else if (x[1][0]==2 && x[1][1]==2 && x[1][2]==2){
				printf("\nPlayer 2 wins!!!\n");
				break;
			}
			else if (x[2][0]==2 && x[2][1]==2 && x[2][2]==2){
				printf("\nPlayer 2 wins!!!\n");
				break;
			}
			else if (x[0][0]==2 &&  x[1][0]==2 && x[2][0]==2){
				printf("\nPlayer 2 wins!!!\n");
				break;
			}
			else if (x[0][1]==2 && x[1][1]==2 && x[2][1]==2){
				printf("\nPlayer 2 wins!!!\n");
				break;
			}
			else if (x[0][2]==2 && x[1][2]==2 && x[2][2]==2){
				printf("\nPlayer 2 wins!!!\n");
				break;
			}
			else if (x[0][0]==2 && x[1][1]==2 && x[2][2]==2){
				printf("\nPlayer 2 wins!!!\n");
				break;
			}
			else if(x[0][2]==2 && x[1][1]==2 && x[2][0]==2){
				printf("\nPlayer 2 wins!!!\n");
				break;
			}
		}
		if (i==9){
			printf("\n_____________________________________________________________\n\n");
			printf("\n!!!the game is a draw!!!\n");
		}
		i=i+1;
	}
	printf("\n_____________________________________________________________\n\n");
	for (k=0;k<3;k++){
		printf("\n --- --- ---\n");
		printf("|"); 
		for (j=0;j<3;j++){
			printf(" %d |",x[k][j]);
		}	
	}
	printf("\n --- --- ---\n");
}
