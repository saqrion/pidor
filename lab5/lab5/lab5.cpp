#include <pch.h>
#include <iostream>
#include <iomanip>

using namespace std;

int main() {	
	int i, j, line, column, max_cord_i, max_cord_j, min_cord_i, min_cord_j;
	double tmp, min, max;
	cout << "input size of matrix NxM" << endl;
	cin >> line >> column;
	double **matrix;
	matrix = new double*[line];
	for (i = 0; i < line; i++)
		matrix[i] = new double[column];
	for (i = 0; i < column; i++)
		for (j = 0; j < column; j++) {
			cout << "iput matrix [" << i+1 << "][" << j+1 << "]" << endl;
			cin >> matrix[i][j];
		}
	for (i = 0; i < column; i++) {
		for (j = 0; j < column; j++) {
			cout << setw(5) << matrix[i][j];
		}
		cout << endl;
	}
	min = max = matrix[0][0];
	for (i = 0; i < column; i++)
		for (j = 0; j < column; j++) {
			if (matrix[i][j] > max) {
				max = matrix[i][j];
				max_cord_i = i;
				max_cord_j = j;
			}
			if (matrix[i][j] < min) {
				min = matrix[i][j];
				min_cord_i = i;
				min_cord_j = j;
			}
		}
	for (i = 0; i < column; i++)
		for (j = 0; j < column; j++) {

		}
	
	cout << min << ' ' << max << endl;
	for (i = 0; i < line; i++)
		delete []matrix[i];
	delete []matrix;
	matrix = NULL;
}




