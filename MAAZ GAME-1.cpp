#include <stdio.h>

int main ()
{
	int player = 0;
	int row = 0;
	int col = 0;
	
	int winner = 0;
	int fill = 0;


	char location [3][3] = {
				 {'1','2','3'},
				 {'4','5','6'},
				 {'7','8','9'}
						};
						
						printf("\n******MOHD MAAZ******\n********WELCOME********" );


	for (int a = 0; a<9 && winner==0; a++)
	{
		printf("\n\n");
		printf(" %c | %c | %c\n", location[0][0], location[0][1], location[0][2]);
		printf("---|---|---\n");
		printf(" %c | %c | %c\n", location[1][0], location[1][1], location[1][2]);
		printf("---|---|---\n");
		printf(" %c | %c | %c\n", location[2][0], location[2][1], location[2][2]);

		player = a%2 + 1;

		do
		{
			printf("\n\nPlayer %d", player);
				
				if (player == 1)
				
				printf("\n where  would u like to fill    X  " );
				else printf(" \n where  would u like to fill    O  "); 
                 
				
				
				
				
				
				
			scanf("%d", &fill);


			row = --fill/3;
			col = fill%3;
		}while(fill<0 || fill>9 || location [row][col]>'9');
		

		if (player==1)
		location[row][col] = 'X';
		else location[row][col] = 'O';
	
	
	
	
		
		if((location[0][0]==location[1][1] && location[0][0]==location[2][2]) ||
		   (location[0][2]==location[1][1] && location[0][2]==location[2][0]))
		   winner = player;
		else
			
			if	((location[0][0]==location[0][1] && location[0][0]==location[0][2])||
					(location[0][0]==location[1][0] && location[0][0]==location[2][0]) ||
					
				(	location[1][0]==location[1][1] && location[1][0]==location[1][2])||
					(location[2][0]==location[2][1] && location[2][0]==location[2][2]) ||
					
					
					(location[0][2]==location[1][2] && location[0][2]==location[2][2])||
					(location[0][1]==location[1][1] && location[0][1]==location[2][1]) )
					
					
					
					
					
					
					winner = player;
	

	}

		printf("\n\n");
		printf(" %c | %c | %c\n", location[0][0], location[0][1], location[0][2]);
		printf("---|---|---\n");
		printf(" %c | %c | %c\n", location[1][0], location[1][1], location[1][2]);
		printf("---|---|---\n");
		printf(" %c | %c | %c\n", location[2][0], location[2][1], location[2][2]);


		if(winner==0)
			printf("it was a great match but The game  resulted  draw :(   \n");
		else
			printf("congrats..... player %d u are the ultimate winner :) \n", winner);

	return 0;
}

