/*!
 * src/main.cpp
 * 
 * main function for project
 * Author: Abner Castro
 * Date: April 9th, 2017
 */

#include <stdio.h>
#include <math.h>
#include <time.h>

#define MAX 81

int main()
{    
    clock_t begin = clock();

    char string[MAX];
    int length = 0;
    char c;    

    // Read chars into string
    while (scanf("%c", &c) != EOF)
    {
        string[length] = c;
        length++;
    }

    int rows = floor(sqrt(length));
    int columns = ceil(sqrt(length));

    // fixing row size if necessary
    rows = (rows * columns >= length) ? rows : rows + 1;

    char encrypt_matrix[rows][columns];

    // lay out provided string in matrix
    int k = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (k == length)
            {
                // sets empty char
                encrypt_matrix[i][j] = '\0';    
            }
            else
            {
                encrypt_matrix[i][j] = string[k];
                k++;
            }            
        }
    }

    // print out encrypted
    for (int j = 0; j < columns; j++)
    {
        for (int i = 0; i < rows; i++)
        {
            if (encrypt_matrix[i][j] != '\0')
                printf("%c", encrypt_matrix[i][j]);
        }

        // whether puts space in the end
        if ((j + 1) < columns)        
            printf(" ");
    }

    clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("\n%lf", time_spent);

    return 0;
}