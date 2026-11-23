#include <iostream>

using namespace std;

const int size_arr = 8;
int arr[size_arr][size_arr]{};
bool f = false;
int step = 0;

void show(){
	for (int i = 0; i < size_arr; i++)
	{
		for (int j = 0; j < size_arr; j++)
			cout << (arr[i][j] ? "Q " : ". ");
		cout << endl;
	}
	cin.get();
}

bool check(int row, int col){
	for (int i = 0; i < row; i++)
		if (arr[i][col])
			return false;
	for (int i = 1; row - i >= 0 && col - i >= 0; i++)
		if (arr[row - i][col - i])
			return false;
	for (int i = 1; row - i >= 0 && col + i < size_arr; i++)
		if (arr[row - i][col + i])
			return false;
	return true;
}

void game(int row){
	if (row == size_arr){
		f = true;
		cout << endl << "Result: " << endl;
		show();
		cout << endl;
		return;
	}
	if(!f)
	{
	for (int col = 0; col < size_arr; col++)
		if (check(row, col)){
			arr[row][col] = 1;
			if(!f) {cout << ++step << ")" << endl; show(); cout << endl;}
			
			game(row + 1);

			arr[row][col] = 0;
		}
	}
}

int main(){
	setlocale(LC_ALL,".65001"); 

	arr[0][3] = 1;

	game(1); 

	return 0;
}