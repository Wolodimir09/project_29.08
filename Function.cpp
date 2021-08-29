#include "Header.h"


void print_matrix_max_sum_number_row(int** array, int row, int col) {

    int index_max_sum_row = 0, number_max_sum_row1 = 0, number_max_sum_row2 = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            array[i][j] = rand() % 100 + 1;
            cout << setw(4) << array[i][j];
            number_max_sum_row2 += array[i][j];

        }
        cout << endl;
        if (number_max_sum_row2 > number_max_sum_row1)
        {
            number_max_sum_row1 = number_max_sum_row2;
            index_max_sum_row = i;
        }
        number_max_sum_row2 = 0;
    }
    cout << "Наибольшая сумма елеменотов двумерного масива находится в ряде: " << index_max_sum_row+1 << endl;
    cout << "И имеет значение: " << number_max_sum_row1 << endl;
}

void Delete_matrix_array(int** array, int row, int col ) {

    for (int i = 0; i < row; i++)
    {
        delete[] array[i];
    }
    delete[] array;
}

int** new_matrix_array(int row, int col) {
    int** array = new int* [row];

    for (int i = 0; i < row; i++)
    {
        array[i] = new int[col];
    }
    return array;
}
