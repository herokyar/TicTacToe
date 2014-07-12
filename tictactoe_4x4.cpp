#include <iostream>
#include <string>

using namespace std;

//char position[10] = {'0','1','2','3','4','5','6','7','8','9'};     // changed this with an array

int position[4][4] = {    //the nested braces are optional you dont have to use it but use for clarity
	{1, 2, 3, 4},
	{5, 6, 7, 8},
	{9,10,11,12},
	{13,14,15,16}
};

 
void board()
{
	system("cls");	//refresh the screen each time, you call the function
	cout << "WELCOME TO TIC-TAC-TOE 4X4 GAME ..." << endl << endl;

	//instead of writing all the parameters in board, use a for function, very efficient....

	/*cout << position[0][0] << "   ||   " << position[0][1] << "   ||   " << position[0][2] << "   ||   " << position[0][3] << endl << endl;
	cout << position[1][0] << "   ||   " << position[1][1] << "   ||   " << position[1][2] << "   ||   " << position[1][3] << endl << endl;
	cout << position[2][0] << "   ||   " << position[2][1] << "   ||   " << position[2][2] << "   ||   " << position[2][3] << endl << endl;
	cout << position[3][0] << "   ||   " << position[3][1] << "   ||   " << position[3][2] << "   ||   " << position[3][3] << endl << endl;*/

	for (int i=0; i<4; i++)
	{
		for(int j=0; j<4; j++)
		{
			cout << position[i][j] << "   ||   ";
		}
		cout << endl;
	}

}

int checkwin()
{
	if (position[0][0] == position[0][1] && position[0][1] == position[0][2] && position[0][2] == position[0][3])
	{
		return 1;
	}
	else if (position[1][0] == position[1][1] && position[1][1] == position[1][2] && position[1][2] == position[1][3])
	{
		return 1;
	}
	else if (position[2][0] == position[2][1] && position[2][1] == position[2][2] && position[2][2] == position[2][3])
	{
		return 1;
	}
	else if (position[3][0] == position[3][1] && position[3][1] == position[3][2] && position[3][2] == position[3][3])
	{
		return 1;
	}
	else if (position[0][0] == position[1][0] && position[1][0] == position[2][0] && position[2][0] == position[3][0])
	{
		return 1;
	}
	else if (position[0][1] == position[1][1] && position[1][1] == position[2][1] && position[2][1] == position[3][1])
	{
		return 1;
	}
	else if (position[0][2] == position[1][2] && position[1][2] == position[2][2] && position[2][2] == position[3][2])
	{
		return 1;
	}
	else if (position[0][3] == position[1][3] && position[1][3] == position[2][3] && position[2][3] == position[3][3])
	{
		return 1;
	}
		else if (position[0][0] == position[1][1] && position[1][1] == position[2][2] && position[2][2] == position[3][3])
	{
		return 1;
	}
		else if (position[0][3] == position[1][2] && position[1][2] == position[2][1] && position[2][1] == position[3][0])
	{
		return 1;		
	}
	else if (position[0][0] != 1 && position[0][1] != 2 && position[0][2] != 3 && position[0][3] != 4 && position[1][0] != 5 && position[1][1] != 6 && position[1][2] != 7 &&  position[1][3] != 8 && position[2][0] != 9 && position[2][1] != 10 && position[2][2] != 11 && position[2][3] != 12 && position[3][0] != 13 && position[3][1] != 14 && position[3][2] != 15 && position[3][3] != 16)
	{
		return 2;		//its a tie game 
	}
	//else if (position[2] == '2' && position[8] == '8' && position[5] == 'X' && position[1] != '1' && position[3] != '3' && position[4] != '4' && position[6] != '6' && position[7] != '7' && position[9] != '9')
	//{
	//	return 3; //ADDED later, the game can not be won by either side
	//}
	//	else if (position[4] == '4' && position[6] == '6' && position[5] == 'X' && position[1] != '1' && position[2] != '2' && position[3] != '3' && position[7] != '7' && position[8] != '8' && position[9] != '9')
	//{
	//	return 3;		//added later, the game can not be won by either side
	//}
	else
	{
		return 0;		//game continues....
	}


}


int main()
{
	int game_condition=0;		//initial value
	int player=1;				//initial value
	//int choice;			removed from the program because there are two indexes in the position
	int first_index;		//define first index
	int second_index;		//define second index
	char delimiter = ',';   //define the user input as (a,b) //use comma in between

	//char mark;			//define a char ((not int:)))
	int mark;			//define an int because position is defined as int :)

	board();

	 
	 while ( game_condition == 0)
	 {
		 
		 player = (player % 2) ? 1 : 2;		//select player procedure 

		 cout << "current player " << player << endl;
		 cout << "enter a field (a,b) :"  ;

		 //cin >> choice;							//user input (removed from the program)
		 //getline(cin, first_index, delimiter);		// it did not work because it only reads in string
		 //getline(cin, second_index);					//it reads in string

		cin >> first_index; //read the first index
		cin >> second_index;//read the second index

		 //mark = (player == 1) ? 'X' : 'O';		//select mark procedure
		 mark = (player == 1) ? 111 : 000 ;		//tryout this version, if not change mark to char and change position to char

		 //////////////////////////instead of using many if, use only one if statement 
		 if( position[first_index][second_index] == 1 || position[first_index][second_index] == 2 || position[first_index][second_index] == 3 || position[first_index][second_index] == 4 || position[first_index][second_index] == 5 || position[first_index][second_index] == 6 || position[first_index][second_index] == 7 || position[first_index][second_index] == 8 || position[first_index][second_index] == 9 || position[first_index][second_index] == 10 || position[first_index][second_index] == 11 || position[first_index][second_index] == 12 || position[first_index][second_index] == 13 || position[first_index][second_index] == 14 || position[first_index][second_index] == 15 || position[first_index][second_index] == 16)
		 {
			 position[first_index][second_index] = mark;
		 }



		 /*if (choice == 1 && position[1] == '1')
		 {
			 position[1] = mark;
		 }
		 else if (choice == 2 && position[2] == '2')
		 {
			 position[2] = mark;
		 }
		  else if (choice == 3 && position[3] == '3')
		 {
			 position[3] = mark;
		 }
		   else if (choice == 4 && position[4] == '4')
		 {
			 position[4] = mark;
		 }
		    else if (choice == 5 && position[5] == '5')
		 {
			 position[5] = mark;
		 }
		     else if (choice == 6 && position[6] == '6')
		 {
			 position[6] = mark;
		 }
			  else if (choice == 7 && position[7] == '7')
		 {
			 position[7] = mark;
		 }
			   else if (choice == 8 && position[8] == '8')
		 {
			 position[8] = mark;
		 }
			    else if (choice == 9 && position[9] == '9')
		 {
			 position[9] = mark;
		 }
*/

		 // only one if statement used instead of many if statements
		else 
		{
			cout << "invalid move, try again.." << endl;
			player++;

		}


			   board();

			   player++;

			   game_condition = checkwin();
	 }

	 if (game_condition == 1)
	 {
		
		 --player;
		 player = (player % 2) ? 1 : 2;
		 cout << "player " << player << "wins..." << endl;
	 }
	 
	 if (game_condition == 2)
	 {
		 cout << "its a tie game! " << endl;
	 }
	 
	/* if(game_condition ==3)
	 {
		 cout << "the game can not be won by either side..." << endl;
	 }
*/

	 

	return 0;
}




 