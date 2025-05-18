#include <iostream>
#include <string>
using namespace std;
struct Player {
	string name;
	int score;
	Player* rival;
};
void swapScores(Player* player1, Player* player2) {
	int temp = player1->score;
	player1->score = player2->score;
	player2->score = temp;
}
int main() {
	Player* player1 = new Player;
	Player* player2 = new Player;
	cout << "Enter details for Player 1:\n";
	cout << "Name: ";
	cin >> player1->name;
	cout << "Score: ";
	cin >> player1->score;
	cout << "Enter details for Player 2:\n";
	cout << "Name: ";
	cin >> player2->name;
	cout << "Score: ";
	cin >> player2->score;
	player1->rival = player2;
	player2->rival = player1;
	cout << "\nPlayer 1 Details:\n";
	cout << "Name: " << player1->name << "\nScore: " << player1->score << "\nRival: " << player1->rival->name << endl;
	cout << "\nPlayer 2 Details:\n";
	cout << "Name: " << player2->name << "\nScore: " << player2->score << "\nRival: " << player2->rival->name << endl;
	swapScores(player1, player2);
	cout << "\nAfter swapping scores:\n";
	cout << "Player 1 Score: " << player1->score << endl;
	cout << "Player 2 Score: " << player2->score << endl;
	delete player1;
	delete player2;
	cout << "\nMemory deallocated." << endl;
	return 0;
}
