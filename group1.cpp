#include <iostream>

using namespace std;

void DisplayMenu();

class Player{
	
	private:
		double height;
		double weight;
		
	public:
		Player(double h, double w){
			height = h;
			weight = w;
		}
		
		~Player(){
			cout << "Character died xoxo" << endl;
		}
		
		void setheight(double h){
			height = h;
		}
		
		double getheight(){
			return height;
		}
		
		void setweight(double w){
			weight = w;
		}
		
		double getweight(){
			return weight;
		}
		
		
		
	
};

int main(){
	
	Player player1(170, 77);
	Player player2(180, 60);
	
	cout << "Height player 1: " << player1.getheight() << endl;
	cout << "Height player 2: " << player2.getheight() << endl;
	
	
	
	
	
	
	return 0;
}

void DisplayMenu(){
	
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	
}



//+--------------------------------------------------------------------+
//|                               MENU                                 |
//+---------------------+---------+------------------------------------+
//|       BREAKFAST     | PRICE   |                                    |
//+---------------------+---------+------------------------------------+
//|  ROTI CANAI         | RM1.00  |                                    |
//|  NASI LEMAK         | RM3.00  |                                    |
//|  DIM SUM            | RM10.00 |                                    |
//|  KAYA TOAST         | RM5.00  |                                    |
//+---------------------+---------+                                    |
//|         LUNCH       | PRICE   |                                    |
//+---------------------+---------+                                    |
//|  CHINESE FRIED RICE | RM10.00 |                                    |
//|  MAMAK FRIED RICE   | RM10.00 |                                    |
//|  PATAYA FRIED RICE  | RM10.00 |                                    |
//|  FRIED NOODLE       | RM10.00 |                                    |
//|                     |         |                                    |
//+---------------------+---------+------------------------------------+


