#include<iostream>
using namespace std;
int** setZeroes(int** matrix, int rows, int columns){
	int** temp = new int*[rows]; 
	for (int i = 0; i < rows; i++) {
		temp[i] = new int[columns];
	}
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			if (matrix[i][j] == 0) {
				for (int x = 0; x < rows; x++) {
					matrix[i][x] = 0;
				}
				for (int x = 0; x < columns; x++) {
					matrix[x][j] = 0;
				}
				break;
			}
		}
	}
	return matrix;
}
int main() {

	int rows;
	cout << "enter rows" << endl;
	cin >> rows;
	int cols;
	cout << "enter columns" << endl;
	cin >> cols;

	int** arr = new int* [rows];
	for (int i = 0; i < rows; i++) {
		arr[i] = new int[cols];
	}
	cout << "enter the matrix" << endl;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cin >> arr[i][j];
		}
	}

	int** a = setZeroes(arr, rows, cols);
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	
	return 0;
}