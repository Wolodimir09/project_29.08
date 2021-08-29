

#include "Header.h"

int main()
{
    setlocale(0, "rus");
    srand(time(0));
    int row = 0, col = 0;
    cout << "Введите параметры матрецы: row end col:" << endl;

    cin >> row >> col;

    int** array = new_matrix_array(row, col);

    print_matrix_max_sum_number_row(array, row, col);   
    
    Delete_matrix_array(array, row, col);




}


