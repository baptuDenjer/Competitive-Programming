#include<iostream>
using namespace std;

#define endl '\n'
int main()
{
	int r,c;
	
	cin >> r >> c;
	
	int mat[r][c];
	for(int i = 0; i < r; i++)
		for(int j = 0; j < c; j++)
			cin >> mat[i][j];
	
	for(int j = 0; j < c; j++){
		cout << mat[r-1][j];
		for(int i = r-2; i > -1; i--){
			cout << " " << mat[i][j];
		}
		cout << endl;
	}
		
	return 0;
}