#include<windows.h>
#include<stdlib.h>
#include<iostream>
#include<iomanip>
#include<stdio.h>
#include<fstream>
#include<time.h>
#include<string>

using namespace std;

struct the_player{

	string first_name;
	string last_name;
	string level;
	float score;
};

the_player the_score();
the_player player();
the_player levels();

///Functions

void CellNumber(int, int);

void topTen_Processing();

void putOrRemoveFlag();

void ShowUp(int, int);

void PrintTable(char);   

void MinePositions();

void inputSymbol();

void information();

void topTen_in();

void GameTable();

void playAgain();

void OpenCell();

bool WinGame();

void display();

void topTen();

void Game();

void logo();

void end();


int size1;
int size2;
int size3;

int A, B, C, D, E, F, G, H, I, J;

char PositionsOfMines[100][100];  
char Table[100][100];     
char Symbol;     

the_player gamers;
the_player gamer;
the_player k;

int MinesFlaggedCount = 0;
int FlagCount = size2;
int starCount = 0;


bool LoseGame = false;

time_t timeSinceStart = time(0);
time_t GameTime;


int main()
{			                                                                                                                    
	Game();
	return 0;
}

void logo()
{
	system("color E");

	cout << "\n";
	cout << "\n";

	cout << "        ##              ##            ########          ##               #   #########                 " << endl;
	cout << "       # #             #  #               #            #  #             #    #                         " << endl;
	cout << "      #   #           #    #              #           #    #           #     #                         " << endl;
	cout << "     #     #         #      #             #          #      #         #      #                         " << endl;
	cout << "    #       #       #        #            #         #        #       #       #########                 " << endl;
	cout << "   #         #     #          #           #        #          #     #        #                         " << endl;
	cout << "  #           #   #            #          #       #            #   #         #                         " << endl;
	cout << " #             # #              #     ########   #              # #          #########                 " << endl;
	
	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << "\n";


	cout << "              # # #    #                            #   #######   #######  # # # # #     ########  # # # # #            " << endl;
	cout << "            #           #                          #    #         #        #        #    #         #        #           " << endl;
	cout << "           #             #                        #     #         #        #        #    #         #         #          " << endl;
	cout << "            #             #                      #      #         #        #        #    #         #        #           " << endl;
	cout << "              #            #          #         #       #######   #######  # # # # #     ########  # # # # #            " << endl;
	cout << "                #           #        # #       #        #         #        #             #         #      #             " << endl;
	cout << "                  #          #      #   #     #         #         #        #             #         #       #            " << endl;
	cout << "                   #          #    #     #   #          #         #        #             #         #        #           " << endl;
	cout << "                   #           #  #       # #           #         #        #             #         #         #          " << endl;
	cout << "           # # # #              #          #            #######   #######  #             ########  #          #         " << endl;
	                                                                                     

	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << "\n";

	system("pause");
	system("cls");

}

the_player levels(){

	system("color E");

	char Level;
	cout <<setw(61)<< "Levels\n";

	cout << "\n";

	cout <<setw(65)<< "Enter The Level\n";
	cout << "\n";
	cout << " To [Easy] Enter --> (E)  //  To [Medium] Enter --> (M)  //  To [Hard] Enter --> (H)  //  To [Custom] Enter --> (C) \n";
	cin >> Level;
	cout << "\n";
	cout << "\n";

	if (Level == 'e' || Level == 'E')
	{
		size1 = 10;
		size3 = 10;
		size2 = 10;

		k.level = ("Easy");

		cout <<setw(88) << "You Chosed The Easy Level (10 Columns & 10 Rows & 10 Mines)\n ";

		cout << "\n";
		cout << "\n";
		cout << "\n";

		system("pause");
	}

	else if (Level == 'm' || Level == 'M')
	{
		size1 = 15;
		size3 = 15;
		size2 = 30;

		k.level = ("Medium");

		cout <<setw(90)<< "You Chosed The Medium Level (15 Columns & 15 Rows & 30 Mines)\n";

		cout << "\n";
		cout << "\n";
		cout << "\n";

		system("pause");
	}

	else if (Level == 'h' || Level == 'H')
	{
		size1 = 20;
		size3 = 20;
		size2 = 45;

		k.level = ("Hard");

		cout << "\n";

		cout <<setw(88)<< "You Chosed The Hard Level (20 Columns & 20 Rows & 45 Mines)\n";

		cout << "\n";
		cout << "\n";
		cout << "\n";

		system("pause");
	}

	else if (Level == 'c' || Level == 'C')
	{
		cout <<setw(78)<< "Max Number Of columns OR Rows = 100\n";
		cout << "\n";

		cout << "Enter The Number Of Columns :";
		cin >> size3;
		cout << "\n";

		cout << "Enter The Number Of Rows :";
		cin >> size1;
		cout << "\n";

		cout << "Enter The Number Of Mines :";
		cin >> size2;
		cout << "\n";
		cout << "\n";

		k.level = ("Custom");

		cout <<setw(50)<< "The Board Will Be '" << size3 << "' Columns And '" << size1 << "' Rows With '" << size2 << "' Mines" << "\n";
		cout << "\n";
		cout << "\n";
		cout << "\n";
		system("pause");
	}

	else
	{
		cout << "Invalid Symbol \n";
		cout << "\n";
		levels();
	}

	system("cls");

	FlagCount = size2;

	return k;

}

void topTen()
{
	system("color E");

	cout << setw(67) << "Top Ten Scores\n";
	cout << "\n";
	cout << "\n";

	string all;
	ifstream TopTen("TopTen.txt");

	if (TopTen.is_open()){
		while (getline(TopTen, all))
		{

			cout << all << "\n";
		}
		TopTen.close();
	}
	cout << "\n";
	cout << "\n";

	system("pause");
	system("cls");
}

void topTen_in(){

	string line;

	ifstream one("file/11.txt");
	ifstream two("file/22.txt");
	ifstream three("file/33.txt");
	ifstream four("file/44.txt");
	ifstream five("file/55.txt");
	ifstream six("file/66.txt");
	ifstream seven("file/77.txt");
	ifstream eight("file/88.txt");
	ifstream nine("file/99.txt");
	ifstream ten("file/100.txt");

	if (one.is_open() && two.is_open() && three.is_open() && four.is_open() && five.is_open()
		&& six.is_open() && seven.is_open() && eight.is_open() && nine.is_open() && ten.is_open())
	{

		one.seekg(73);
		while (getline(one, line))
		{

			A = stoi(line);

		}
		one.close();


		two.seekg(73);
		while (getline(two, line))
		{

			B = stoi(line);

		}
		two.close();


		three.seekg(73);
		while (getline(three, line))
		{

			C = stoi(line);

		}
		three.close();


		four.seekg(73);
		while (getline(four, line))
		{

			D = stoi(line);

		}
		four.close();


		five.seekg(73);
		while (getline(five, line))
		{

			E = stoi(line);

		}
		five.close();


		six.seekg(73);
		while (getline(six, line))
		{

			F = stoi(line);

		}
		six.close();


		seven.seekg(73);
		while (getline(seven, line))
		{

			G = stoi(line);

		}
		seven.close();


		eight.seekg(73);
		while (getline(eight, line))
		{

			H = stoi(line);

		}
		eight.close();


		nine.seekg(73);
		while (getline(nine, line))
		{

			I = stoi(line);

		}
		nine.close();


		ten.seekg(73);
		while (getline(ten, line))
		{

			J = stoi(line);
		}
		ten.close();
	}

	else 
		cout << "Unable to open file\n";

}

void topTen_Processing(){ // put in top ten

	string line;

	ifstream lines1("file/lines1.txt");
	ifstream lines2("file/lines2.txt");

	ifstream one("file/11.txt");
	ifstream two("file/22.txt");
	ifstream three("file/33.txt");
	ifstream four("file/44.txt");
	ifstream five("file/55.txt");
	ifstream six("file/66.txt");
	ifstream seven("file/77.txt");
	ifstream eight("file/88.txt");
	ifstream nine("file/99.txt");
	ifstream ten("file/100.txt");

	ofstream TopTen("TopTen.txt");

	if (lines1.is_open() && lines2.is_open() && one.is_open()
		&& two.is_open() && three.is_open() && four.is_open() && five.is_open()
		&& six.is_open() && seven.is_open() && eight.is_open() && nine.is_open() && ten.is_open())
	{
		while (getline(lines1, line))
		{

			ofstream out("TopTen.txt");
			out << line << "\n";

		}
		lines1.close();


		while (getline(lines2, line))
		{

			ofstream out("TopTen.txt", ios::app);
			out << line << "\n";

		}
		lines2.close();


		while (getline(one, line))
		{

			ofstream out("TopTen.txt", ios::app);
			out << line << "\n";
			out << "\n";
		}
		one.close();


		while (getline(two, line))
		{

			ofstream out("TopTen.txt", ios::app);
			out << line << "\n";
			out << "\n";
		}
		two.close();


		while (getline(three, line))
		{

			ofstream out("TopTen.txt", ios::app);
			out << line << "\n";
			out << "\n";
		}
		three.close();


		while (getline(four, line))
		{

			ofstream out("TopTen.txt", ios::app);
			out << line << "\n";
			out << "\n";
		}
		four.close();


		while (getline(five, line))
		{

			ofstream out("TopTen.txt", ios::app);
			out << line << "\n";
			out << "\n";
		}
		five.close();


		while (getline(six, line))
		{

			ofstream out("TopTen.txt", ios::app);
			out << line << "\n";
			out << "\n";
		}
		six.close();


		while (getline(seven, line))
		{

			ofstream out("TopTen.txt", ios::app);
			out << line << "\n";
			out << "\n";
		}
		seven.close();


		while (getline(eight, line))
		{

			ofstream out("TopTen.txt", ios::app);
			out << line << "\n";
			out << "\n";
		}
		eight.close();


		while (getline(nine, line))
		{
			ofstream out("TopTen.txt", ios::app);
			out << line << "\n";
			out << "\n";
		}
		nine.close();


		while (getline(ten, line))
		{

			ofstream out("TopTen.txt", ios::app);
			out << line << "\n";
			out << "\n";

		}
		ten.close();

		TopTen.close();

	}

}

void end()
{
	std::string s(gamer.first_name);
	std::string t(gamer.last_name);
	std::string x(k.level);

	if (gamers.score < A && gamers.score < B && gamers.score < C && gamers.score < D && gamers.score < E
		&& gamers.score < F && gamers.score < G && gamers.score < H && gamers.score < I && gamers.score < J)
	{
		ofstream out("file/11.txt");

		out << "- " << gamer.first_name << " " << gamer.last_name;
		for (int i = 0; i <(39 - (s.size() + t.size())); i++)
		{
			out << " ";
		}

		out << "| " << k.level;

		for (int i = 0; i < (29 - x.size()); i++)
		{
			out << " ";
		}

		out << (gamers.score);
		out << endl;

		out.close();

	}

	else if (gamers.score > A && gamers.score < B && gamers.score < C && gamers.score < D && gamers.score < E
		&& gamers.score < F && gamers.score < G && gamers.score < H && gamers.score < I && gamers.score < J)
	{

		ofstream out("file/22.txt");

		out << "- " << gamer.first_name << " " << gamer.last_name;
		for (int i = 0; i <(39 - (s.size() + t.size())); i++)
		{
			out << " ";
		}

		out << "| " << k.level;

		for (int i = 0; i < (29 - x.size()); i++)
		{
			out << " ";
		}

		out << (gamers.score);
		out << endl;

		out.close();

	}

	else if (gamers.score > A && gamers.score > B && gamers.score < C && gamers.score < D && gamers.score < E
		&& gamers.score < F && gamers.score < G && gamers.score < H && gamers.score < I && gamers.score < J)
	{

		ofstream out("file/33.txt");

		out << "- " << gamer.first_name << " " << gamer.last_name;
		for (int i = 0; i <(39 - (s.size() + t.size())); i++)
		{
			out << " ";
		}

		out << "| " << k.level;

		for (int i = 0; i < (29 - x.size()); i++)
		{
			out << " ";
		}

		out << (gamers.score);
		out << endl;

		out.close();

	}

	else if (gamers.score > A && gamers.score > B && gamers.score > C && gamers.score < D && gamers.score < E
		&& gamers.score < F && gamers.score < G && gamers.score < H && gamers.score < I && gamers.score < J)
	{

		ofstream out("file/44.txt");

		out << "- " << gamer.first_name << " " << gamer.last_name;
		for (int i = 0; i <(39 - (s.size() + t.size())); i++)
		{
			out << " ";
		}

		out << "| " << k.level;

		for (int i = 0; i < (29 - x.size()); i++)
		{
			out << " ";
		}

		out << (gamers.score);
		out << endl;

		out.close();

	}

	else if (gamers.score > A && gamers.score > B && gamers.score > C && gamers.score > D && gamers.score < E
		&& gamers.score < F && gamers.score < G && gamers.score < H && gamers.score < I && gamers.score < J)
	{

		ofstream out("file/55.txt");

		out << "- " << gamer.first_name << " " << gamer.last_name;
		for (int i = 0; i <(39 - (s.size() + t.size())); i++)
		{
			out << " ";
		}

		out << "| " << k.level;

		for (int i = 0; i < (29 - x.size()); i++)
		{
			out << " ";
		}

		out << (gamers.score);
		out << endl;

		out.close();

	}

	else if (gamers.score > A && gamers.score > B && gamers.score > C && gamers.score > D && gamers.score > E
		&& gamers.score < F && gamers.score < G && gamers.score < H && gamers.score < I && gamers.score < J)
	{

		ofstream out("file/66.txt");

		out << "- " << gamer.first_name << " " << gamer.last_name;
		for (int i = 0; i <(39 - (s.size() + t.size())); i++)
		{
			out << " ";
		}

		out << "| " << k.level;

		for (int i = 0; i < (29 - x.size()); i++)
		{
			out << " ";
		}

		out << (gamers.score);
		out << endl;

		out.close();

	}

	else if (gamers.score > A && gamers.score > B && gamers.score > C && gamers.score > D && gamers.score > E
		&& gamers.score > F && gamers.score < G && gamers.score < H && gamers.score < I && gamers.score < J)
	{

		ofstream out("file/77.txt");

		out << "- " << gamer.first_name << " " << gamer.last_name;
		for (int i = 0; i <(39 - (s.size() + t.size())); i++)
		{
			out << " ";
		}

		out << "| " << k.level;

		for (int i = 0; i < (29 - x.size()); i++)
		{
			out << " ";
		}

		out << (gamers.score);
		out << endl;

		out.close();

	}

	else if (gamers.score > A && gamers.score > B && gamers.score > C && gamers.score > D && gamers.score > E
		&& gamers.score > F && gamers.score > G && gamers.score < H && gamers.score < I && gamers.score < J)
	{

		ofstream out("file/88.txt");

		out << "- " << gamer.first_name << " " << gamer.last_name;
		for (int i = 0; i <(39 - (s.size() + t.size())); i++)
		{
			out << " ";
		}

		out << "| " << k.level;

		for (int i = 0; i < (29 - x.size()); i++)
		{
			out << " ";
		}

		out << (gamers.score);
		out << endl;

		out.close();

	}

	else if (gamers.score > A && gamers.score > B && gamers.score > C && gamers.score > D && gamers.score > E
		&& gamers.score > F && gamers.score > G && gamers.score > H && gamers.score < I && gamers.score < J)
	{

		ofstream out("file/99.txt");

		out << "- " << gamer.first_name << " " << gamer.last_name;
		for (int i = 0; i <(39 - (s.size() + t.size())); i++)
		{
			out << " ";
		}

		out << "| " << k.level;

		for (int i = 0; i < (29 - x.size()); i++)
		{
			out << " ";
		}

		out << (gamers.score);
		out << endl;

		out.close();

	}

	else if (gamers.score > A && gamers.score > B && gamers.score > C && gamers.score > D && gamers.score > E
		&& gamers.score > F && gamers.score > G && gamers.score > H && gamers.score > I && gamers.score < J)
	{

		ofstream out("file/100.txt");

		out << "- " << gamer.first_name << " " << gamer.last_name;
		for (int i = 0; i <(39 - (s.size() + t.size())); i++)
		{
			out << " ";
		}

		out << "| " << k.level;

		for (int i = 0; i < (29 - x.size()); i++)
		{
			out << " ";
		}

		out << (gamers.score);
		out << endl;

		out.close();

	}


}



the_player the_score()
{
	GameTime = time(0);

	gamers.score = (GameTime - timeSinceStart);

	return gamers;

}

void display()
{

	cout << setw(65) << "MINESWEEPER\n";
	cout << "\n";

	cout << "Remember The Rules:-\n";
	cout << "Enter (O) To Open Cell & Put Its Coordinates (X)(Y)\n";
	cout << "Enter (F) To Put Or Remove Flag & Put The Cell Coordinates (X)(Y)\n";

	cout << "\n";

}

the_player player()
{

	system("color E");

	cout << "Enter Your First Name :" << " ";
	cin >> gamer.first_name;

	cout << "\n";
	cout << "\n";

	cout << "Enter Your Last Name :" << " ";
	cin >> gamer.last_name;

	cout << "\n";
	cout << "\n";
	cout << "\n";

	return gamer;
}

void playAgain()
{
	char s;

	cout << "To Play Again Press --> (P)\n";
	cin >> s;

	if (s == 'p' || s == 'P')
	{
		system("cls");
		Game();
	}
}

void information()
{

	system("color E");

	cout << setw(65) << "MINESWEEPER\n";

	cout << "\n";
	cout << "\n";

	cout << "How To Play... (Instructions) -->>\n";

	cout << "\n";
	cout << setw(70) << "In Order To Win The Game, You Must Reveal All The cells\n"
	   	 << setw(71) << "That Do Not Have A Mine, Or To Flag All Cells With Mines\n"
		 << setw(73) << "It Is A Matter Of Personal Preference. If A Mine Is Shown,\n"
		 << setw(73) << "The Player Loses. --->> Remember A Number On A Cell Refers\n"
		 << setw(75) << "To The Number Of Mines That Are Currently Touching That Cell\n";

	cout << "\n";
	cout << "\n";

	cout << "Rules -->>\n";

	cout << "\n";
	

	cout << setw(66) << "Enter (O) To Open Cell & Put Its Coordinates (X)(Y)\n"
	     << setw(80) << "Enter (F) To Put Or Remove Flag & Put The Cell Coordinates (X)(Y)\n";
	cout << "\n";
	cout << "\n";

	cout << "About -->>\n";

	cout << "\n";

	cout << setw(45) << "It Is A C++ Program Written By :-\n"
		 << setw(27) << "Abdullah Afify &" << endl;
	cout << setw(37) << "Amar Ashraf & Joseph Wagih" << endl;
	cout << setw(40) << "Mohamed Ahmed & Fouad Mamdouh" << endl;

	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << "\n";

}

void MinePositions() ///put mines
{
	int counter = 0;
	srand(time(NULL));

	for (int i = 0; i < size1; i++)
	for (int j = 0; j < size3; j++)
		PositionsOfMines[i][j] = '0';

	int i = 0, j = 0;

	while (counter<size2)
	{
		int i = rand() % size2;
		int j = rand() % size2;

		if (PositionsOfMines[i][j] == '0')
		{
			PositionsOfMines[i][j] = 'X';

			CellNumber(i - 1, j);
			CellNumber(i + 1, j);

			CellNumber(i, j - 1);
			CellNumber(i, j + 1);

			CellNumber(i - 1, j - 1);
			CellNumber(i - 1, j + 1);
			CellNumber(i + 1, j - 1);
			CellNumber(i + 1, j + 1);

			counter++;

		}

	}
}

void CellNumber(int i, int j)
{
	if (i >= 0 && i < size1 && j >= 0 && j < size3 && PositionsOfMines[i][j] != 'X')
	{
		PositionsOfMines[i][j]++; //increasing the numbers of the table (0,1,2..)
	}

}

void GameTable()
{
	for (int i = 0; i < size1; i++)
	{
		for (int j = 0; j < size3; j++)
		{
			Table[i][j] = '*';

		}
	}
}

void PrintTable(char arr[100][100])
{
	cout << "    ";

	for (int i = 0; i < size3; i++)
		cout << setw(3) << i;
	cout << "\n" << "  ";

	for (int i = 0; i <(size3 * 3) + 3; i++)  //(size3*3)+3 (_)to make a horizontal line
		cout << "_";
	cout << "\n";

	for (int i = 0; i < size1; i++){
		cout << setw(3) << i << "|"; // size1 (|)to make a vertical line

		for (int j = 0; j < size3; j++)
			cout << setw(3) << arr[i][j];
		cout << "\n";
	}
}

void OpenCell()
{
	int i, j;

	cin >> i >> j;
	if (cin.fail())
	{
		cin.clear();
		cin.ignore();
	}

	if (PositionsOfMines[i][j] == 'X')
	{
		Table[i][j] = 'X';
		LoseGame = true;

		for (int i = 0; i < size1; i++)
		for (int j = 0; j < size3; j++)
		if (PositionsOfMines[i][j] == 'X')
			Table[i][j] = 'X';
	}
	else
		ShowUp(i, j);
}

void putOrRemoveFlag()
{

	int i, j;

	cin >> i >> j;
	if (cin.fail())
	{
		cin.clear();
		cin.ignore();
	}

	if (Table[i][j] == '*')
	{
		Table[i][j] = 'F';
		FlagCount--;

		if (PositionsOfMines[i][j] == 'X')
			MinesFlaggedCount++;
	}
	else if (Table[i][j] == 'F')
	{
		Table[i][j] = '*';
		FlagCount++;

		if (PositionsOfMines[i][j] == 'X')
			MinesFlaggedCount--;
	}
}

void inputSymbol()
{
	cout << "Enter Symbol(O)or(F) & Coordinates (X)(Y)\n";
	cin >> Symbol;

	switch (Symbol)
	{
	case'o':
	case'O':OpenCell();
		break;
	case'f':
	case'F':putOrRemoveFlag();
		break;
	default:
		inputSymbol();
	}
}

void ShowUp(int i, int j)
{
	if (Table[i][j] == '*' && PositionsOfMines[i][j] != 'X' && i >= 0 && i<size1 && j >= 0 && j < size3)
	{
		Table[i][j] = PositionsOfMines[i][j];

		if (PositionsOfMines[i][j] == '0')
		{

			ShowUp(i, j - 1);
			ShowUp(i, j + 1);

			ShowUp(i - 1, j - 1);
			ShowUp(i + 1, j - 1);
			ShowUp(i + 1, j + 1);
			ShowUp(i - 1, j + 1);

			ShowUp(i - 1, j);
			ShowUp(i + 1, j);

			starCount--;
		}
	}
}

bool WinGame()
{
	if (FlagCount == 0 && MinesFlaggedCount == size2 || starCount == size2 && FlagCount == size2 || starCount + (size2 - FlagCount) == size2)
		return 1;
	else
		return 0;
}


void Game()
{
	LoseGame = false;
	 
	logo();

	information();

	system("pause");
	system("cls");

	levels();

	timeSinceStart = time(0);

	GameTable();

	MinePositions();

	while (!LoseGame && !WinGame())
	{

		the_score();

		display();

		PrintTable(Table);

		GameTime = time(0);
		cout << "\n" << "Flags :" << FlagCount << "\n";
		cout << "\n";

		cout << "Hints :" << MinesFlaggedCount << "\n";
		cout << "\n";

		cout << "Time :";

		if ((GameTime - timeSinceStart) >= 60)
			cout << fixed << setprecision(2) << ((GameTime - timeSinceStart) / 60.0) << " " << "Min\n";
		else
			cout << (GameTime - timeSinceStart) << " " << "Sec\n";
		cout << "\n";

		inputSymbol();
		system("cls");

		starCount = size1*size3;

		for (int i = 0; i<size1; i++)
		{
			for (int j = 0; j<size3; j++)
			{

				if (Table[i][j] == '8' || Table[i][j] == '7' || Table[i][j] == '6' || Table[i][j] == '5'
					|| Table[i][j] == '4' || Table[i][j] == '3' || Table[i][j] == '2' || Table[i][j] == '1' || Table[i][j] == '0')

					starCount--;
			}
		}

		starCount = starCount - (size2 - FlagCount);


	}
	if (LoseGame)
	{
		cout << setw(65) << "MINESWEEPER\n";

		PrintTable(Table);

		cout << "\n" << setw(65) << "GAME OVER" << "\n";

		playAgain();

		system("pause");

	}
	if (WinGame())
	{
		cout << setw(65) << "MINESWEEPER\n";

		PrintTable(Table);

		cout << setw(73) << "CONGRATULATIOS YOU WIN " << "\n";

		cout << setw(68) << "Time To Complete :";

		if ((GameTime - timeSinceStart) >= 60)
			cout << fixed << setprecision(2) << ((GameTime - timeSinceStart) / 60.0) << " " << "Min\n";
		else
			cout << (GameTime - timeSinceStart) << " " << "Sec\n";

		cout << "\n";
		cout << "\n";
		cout << "\n";

		player();
	
		system("cls");

		topTen_in();

		end();

		topTen_Processing();

		topTen();

	}

}
