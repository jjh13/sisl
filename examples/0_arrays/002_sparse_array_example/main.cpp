#include <algorithm>
#include <functional>
#include <cctype>
#include <locale>
#include <iostream>
#include <fstream>
#include <ctime>
#include <chrono>

#include <stdlib.h>
#include <unistd.h>

// Basic includes
#include <sisl/memory/array.hpp>
#include <sisl/memory/sparse_array.hpp>
#include <sisl/memory/fftwalloc.hpp>

void print_at(int x, int y, const char *text)
{
    printf("\033[%d;%dH%s\n", x, y, text);
}

void clear()
{
    for (int i = 0; i < 10; i++)
        printf( "\n\n\n\n\n\n\n\n\n\n" );
}

void print_board(const sisl::sparse_array_n<bool, 2> &board, const int &m, const int &n) {
	for(uint i = 0; i < m; i++)
		for(uint j = 0; j < n; j++) {
			print_at(
				i,j,
				board(i,j) ? "X" : " "
			);
		}
}

uint count_neighbours(const sisl::sparse_array_n<bool, 2> &board, const int &m, const int &n, const int &i, const int &j) {
	uint count = 0;
	if(i + 1 < m && j + 0 < n && board(i+1, j + 0)) count+=1;
	if(i + 1 < m && j - 1 > 0 && board(i+1, j - 1)) count+=1;
	if(i + 0 < m && j - 1 > 0 && board(i+0, j - 1)) count+=1;
	if(i - 1 > 0 && j - 1 > 0 && board(i-1, j - 1)) count+=1;
	if(i - 1 > 0 && j + 0 < n && board(i-1, j + 0)) count+=1;
	if(i - 1 > 0 && j + 1 < n && board(i-1, j + 1)) count+=1;
	if(i + 0 < m && j + 1 < n && board(i+0, j + 1)) count+=1;
	if(i + 1 < m && j + 1 < n && board(i+1, j + 1)) count+=1;
	return count;
}

sisl::sparse_array_n<bool, 2> advance_board(const sisl::sparse_array_n<bool, 2> &board, const int &m, const int &n) {
	sisl::sparse_array_n<bool, 2> new_board(false, m,n);

	for(uint i = 0; i < m; i++)
		for(uint j = 0; j < n; j++) {
			int nbrs = count_neighbours(board, m, n, i, j);
			
			new_board(i,j) = false;

			if(board(i,j)) {
			 	if(nbrs == 2 || nbrs == 3)
					new_board(i,j) = true;

			} else if(nbrs == 3) {
				new_board(i,j) = true;
			}
		}
	return new_board;
}

int main(int argc, char *argv[]) {
	clear();
	srand (time(NULL));

	// Sparse arrays work exactly like arrays
	// except they save on space, they take a default value 
	//  for unfilled entries as the first argument
	sisl::sparse_array_n<bool, 2> board(false, 30, 60);

	for(uint i = 0; i < 30; i++)
		for(uint j = 0; j < 60; j++) {
			board(i,j) = rand() % 100 < 20;
		}

	for(int i = 0; i < 1000; i++) {
		print_board(board, 30, 60);
		board = advance_board(board, 30, 60);
		printf("Game of life: Iteration %d\n", i);
		usleep(50000);
	}

}