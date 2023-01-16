#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

void DisplayMenu();
void printCharacter();
void printScene(string);
void Continue();

class Player{
	
	private:
		double height;
		double weight;
		string name;
		int age;
		
	public:
		Player(string n, int a, double h, double w){
			height = h;
			weight = w;
			name = n;
			age = a;
		}
		
		~Player(){cout << "Character died xoxo" << endl;}
		
		void setheight(double h){height = h;}
		double getheight(){return height;}
		
		void setweight(double w){weight = w;}
		double getweight(){return weight;}
		
		void setname(string n){name = n;}
		string getname(){return name;}
		
		void setage(int a){age = a;}
		int getage(){return age;}
		
	
};

int main(){
	
	int age, choice;
	double height, weight;
	string name;
	
	cout << endl << "-----CREATE YOUR CHARACTER-----" << endl << endl;
	
	cout << "Player name: ";
	cin >> name;
	cout << "Player age: ";
	cin >> age;
	cout << "Enter height: ";
	cin >> height;
	cout << "Enter weight: ";
	cin >> weight;
	
	Player player(name, age, height, weight);
	
	printCharacter();	
	cout << "Your character has finished!" << endl;
	Continue();
	system("cls");
	printScene(player.getname());
	
	cout << "Now what you wanna do =>";
	switch(choice){
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
	
	
	
	return 0;
}

void DisplayMenu(){
	
	cout << "+--------------------------------------------------------------------+" << endl;
	cout << "|                               MENU                                 |" << endl;
	cout << "+-------------------------------+----------------+-------------------+" << endl;
	cout << "|            BREAKFAST          |    BEVERAGES   |   HOT       COLD  |" << endl;
	cout << "+---------------------+---------+----------------+-------------------+" << endl;
	cout << "|  ROTI CANAI         | RM 1.00 |  SKY JUICE     | FREE      RM00.30 |" << endl;
	cout << "|  NASI LEMAK         | RM 3.00 |  MILO KAW      | RM15.00   RM30.00 |" << endl;
	cout << "|  DIM SUM            | RM10.00 |  KOPI LUAK     | RM30.00   RM35.00 |" << endl;
	cout << "|  KAYA TOAST         | RM 5.00 |  DOLCE LATTE   | RM15.00   RM20.00 |" << endl;
	cout << "+---------------------+---------+  JAVA FRAPPE   | RM30.00   RM35.00 |" << endl;
	cout << "|             LUNCH             |  NESCAFE       |                   |" << endl;
	cout << "+---------------------+---------+  TRIPLE MANGO  |                   |" << endl;
	cout << "|  CHINESE FRIED RICE | RM10.00 |  PEACH TEA     |                   |" << endl;
	cout << "|  MAMAK FRIED RICE   | RM10.00 |  XTRAJOSS      |                   |" << endl;
	cout << "|  PATAYA FRIED RICE  | RM10.00 |  MACCHIATO     |                   |" << endl;
	cout << "|  FRIED NOODLE       | RM10.00 |  CREAM MOCHA   |                   |" << endl;
	cout << "|                     |         |                |                   |" << endl;
	cout << "+---------------------+---------+----------------+-------------------+" << endl;
	
	
}

void printCharacter(){
	
	cout << endl << endl;
	cout << "\\            " << endl;
	cout << " \\    O      " << endl;
	cout << " _\\|  |  }   " << endl;
	cout << "   M_/|\\_|}  " << endl;
	cout << "      |  }   " << endl;
	cout << "     / \\     " << endl;
	cout << "   _/   \\_   " << endl << endl;
	
}

void printScene(string name){
	
	cout << endl << endl;
	cout << "          ___   ____   " << endl;
	cout << "        /' --;^/ ,-_\\     \\ | /" << endl;
	cout << "       / / --o\\ o-\\ \\\\   --(_)--" << endl;
	cout << "      /-/-/|o|-|\\-\\|\\\\   / | \\" << endl;
	cout << "       '`  ` |-|   `` '" << endl;
	cout << "             |-|" << endl;
	cout << "             |-|O" << endl;
	cout << "             |-(\\,__" << endl;
	cout << "          ...|-|\\--,\\_...." << endl;
	cout << "      ,;;;;;;;;;;;;;;;;;;;;;;;;,." << endl;
	cout << "~~,;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "~;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,  ______   ---------   _____     ------" << endl;
	
	cout << "Welcome " << name << "! You just wake up on your private island. Life is good. " << endl << endl;
	
}

void Continue(){
	
	cout << "Press any key to continue..." << endl;
	getch();
	
}








//\
// \    O
// _\|  |  }
//   M_/|\_|}
//      |  }
//     / \
//   _/   \_


//      ********
//  ****************
//*******************
//********************
// ********************
//    \\   //  ********
//     \\\//  *******
//       \\\////
//        |||//                       ,
//        |||||                    __/
//,,,,,,,//||||\,,,,,,,,,,,,,,,,,,o==o
//;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;



//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
//                                _    ,
//__   __   __   __   __   --  -,_/\\_~0_\ ___    __   __   __
//                      --    /  ___ \-  `___`"-,
//                    ---    `"-( @ )----( @ )---`
//jgs                              '-'      '-'
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^



//          ___   ____
//        /' --;^/ ,-_\     \ | /
//       / / --o\ o-\ \\   --(_)--
//      /-/-/|o|-|\-\\|\\   / | \
//       '`  ` |-|   `` '
//             |-|
//             |-|O
//             |-(\,__
//          ...|-|\--,\_....
//      ,;;;;;;;;;;;;;;;;;;;;;;;;,.
//~~,;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//~;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,  ______   ---------   _____     ------


