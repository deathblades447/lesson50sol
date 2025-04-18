#include "logic.h"

int main() {
	int matrix[SIZE][SIZE];
	int size;

	cout << "input size of square matrix: ";
	cin >> size;


	init(matrix, size, 0, 100);
	cout << "matrix:\n" << convert(matrix, size);

	cout << "max element up main diagonal is: " <<
		get_extream_elements_up_main_diagonale(matrix, size) << endl;

	cout << "count even element up main diagonal is: " <<
		count_even_elements_down_main_diagonale(matrix, size) << endl;


	return 0;
}