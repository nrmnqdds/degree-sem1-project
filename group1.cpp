#include <iostream>
#include <conio.h>
#include <string>
#include <iomanip>

using namespace std;

void DisplayMenu();
void printCharacter();
void printScene(string);
void printDrive();
void Continue();
void GoRestaurant(string);
double calorieCounter(int);

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
	getline(cin, name);
	cout << "Player age: ";
	cin >> age;
	cout << "Enter height(cm): ";
	cin >> height;
	cout << "Enter weight(kg): ";
	cin >> weight;
	
	Player player(name, age, height, weight);
	
	printCharacter();	
	cout << "Your character has finished!" << endl << endl;
	Continue();
	system("cls");
	printScene(player.getname());
	
	do{
		cout << "(1) Go to restaurant" << endl << "(2) Workout" << endl << "(3) Commit Suicide" << endl << endl;
		cout << "Now what you wanna do => ";
		cin >> choice;
		switch(choice){
			case 1:
				system("cls");
				GoRestaurant(player.getname()); break;
			case 2:
				break;
			case 3:
				break;
		}
	}while(choice!=4);
	
	
	
	
	return 0;
}

void GoRestaurant(string name){
	
	string drinkname[11] = {"sky juice", "milo kaw", "kopi luak", "dolce latte", "java frappe", "nescafe", "triple mango", "peach tea", "xtrajoss", "macchiato", "cream mocha"};
	double drinkprice[11][2] = {{0, 0.3}, {15, 30}, {30, 35}, {15, 20}, {30, 35}, {2, 2.5}, {15, 20}, {15, 20}, {3, 3.5}, {15, 20}, {15, 20}};
	string foodname[8] = {"roti canai", "nasi lemak", "dim sum", "kaya toast", "chinese fried rice", "mamak fried rice", "pataya fried rice", "fried noodle"};
	double foodprice[8] = {1, 3, 10, 5, 10, 10, 10, 10};
	
	int i, j;
	double money, price=0;
	string order, hc;
	
	printDrive();
	DisplayMenu();
	
	cout << "How much money do you have in your bank right now? => RM";
	cin >> money;
	
	cout << endl << "Anne: Drink?" << endl;
	cout << name << ": Give me => ";
	cin.ignore();
	getline(cin, order);
	for(int x=0; x<11; x++){
		if(order==drinkname[x]){
			i=x;
		}
	}
	
	cout << endl << "Anne: Hot or cold?" << endl;
	cout << name << ": ";
	cin >> hc;
	if(hc=="hot"){
		j = 0;
	}else{
		j = 1;
	}
	
	price+=drinkprice[i][j];
	
	cout << endl << "Anne: Eat?" << endl;
	cout << name << ": Give me => ";
	cin.ignore();
	getline(cin, order);
	for(int i=0; i<8; i++){
		if(order==foodname[i]){
			price+=foodprice[i];
		}
	}
	
	cout << "Price: RM" << fixed << setprecision(2) << price << endl;
	
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
	cout << "|             LUNCH             |  NESCAFE       | RM 2.00   RM 2.50 |" << endl;
	cout << "+---------------------+---------+  TRIPLE MANGO  | RM15.00   RM20.00 |" << endl;
	cout << "|  CHINESE FRIED RICE | RM10.00 |  PEACH TEA     | RM15.00   RM20.00 |" << endl;
	cout << "|  MAMAK FRIED RICE   | RM10.00 |  XTRAJOSS      | RM 3.00   RM 3.50 |" << endl;
	cout << "|  PATAYA FRIED RICE  | RM10.00 |  MACCHIATO     | RM15.00   RM20.00 |" << endl;
	cout << "|  FRIED NOODLE       | RM10.00 |  CREAM MOCHA   | RM15.00   RM20.00 |" << endl;
	cout << "|                     |         |                |                   |" << endl;
	cout << "+---------------------+---------+----------------+-------------------+" << endl << endl;
	
	
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
	cout << "      /-/-/|o|-|\\-\\|\\\\    / | \\" << endl;
	cout << "       '`  ` |-|   `` '" << endl;
	cout << "             |-|" << endl;
	cout << "             |-|O" << endl;
	cout << "             |-(\\,__" << endl;
	cout << "          ...|-|\\--,\\_...." << endl;
	cout << "      ,;;;;;;;;;;;;;;;;;;;;;;;;,." << endl;
	cout << "~~,;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "~;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,  ______   ---------   _____     ------" << endl << endl;
	
	cout << "Welcome " << name << "! You just wake up on your private island. Life is good. " << endl << endl;
	
}

void printDrive(){
	
	cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
	cout << "                                _    ," << endl;
	cout << "__   __   __   __   __   --  -,_/\\\\_~0_\\ ___    __   __   __" << endl;
	cout << "                      --    /  ___ \\-  `___`+-," << endl;
	cout << "                    ---    `--( @ )----( @ )---`" << endl;
	cout << "                               '-'      '-'" << endl;
	cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl << endl;

	cout << "Le you driving to the restaurant..." << endl;
	cout << "You parked and take a seat..." << endl;
	cout << "The waiter gives you the menu..." << endl << endl;
	Continue();
	system("cls");
	
}

void Continue(){
	
	cout << "Press any key to continue..." << endl;
	getch();
	
}







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





