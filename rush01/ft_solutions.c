/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solutions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jf <jf@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 00:13:28 by jf                #+#    #+#             */
/*   Updated: 2023/03/19 10:19:32 by jf               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdbool.h>

#define SIZE 4

void print_matrix(int matrix[SIZE][SIZE]) 
{
	for (int i = 0; i < SIZE; i++) 
	{
        for (int j = 0; j < SIZE; j++) 
		{
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

bool is_valid(int matrix[SIZE][SIZE], int row, int col, int num) 
{
    // Check row
    for (int i = 0; i < SIZE; i++) 
	{
        if (matrix[row][i] == num) 
		{
            return false;
        }
    }

    // Check column
    for (int i = 0; i < SIZE; i++) 
	{
        if (matrix[i][col] == num) 
		{
            return false;
        }
    }

    return true;
}

void generate_combinations(int matrix[SIZE][SIZE], int row, int col) 
{
	int count;
    if (row == SIZE) 
	{
		count++;
        // Base case: the matrix is filled
        print_matrix(matrix);
		printf("%i\n", count);
    }

    if (col == SIZE) 
	{
        // Move to the next row
        generate_combinations(matrix, row + 1, 0);
        return;
    }

    // Try numbers 1 to 4 in this cell
    for (int num = 1; num <= SIZE; num++) 
	{
        if (is_valid(matrix, row, col, num)) 
		{
            matrix[row][col] = num;
            generate_combinations(matrix, row, col + 1);
            matrix[row][col] = 0;
        }
    }
}

int main() {
    int matrix[SIZE][SIZE] = 
	{
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0}
    };

    generate_combinations(matrix, 0, 0);

    return 0;
}
