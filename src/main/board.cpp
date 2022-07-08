#include "board.h"
//Define the constructor
Board::Board(int rows, int cols)
{
    //Setters for the row and cols members
    this->rows = rows;
    this->cols = cols;

    //Create an array of bools and with the amount of rows
    board = new bool* [rows];
    for(signed int i = 0; i<rows; i++)
    {
        //Define an array inside another array: 2D array
        board[i] = new bool [cols];
        for(signed int j = 0; j<cols;j++)
        {
            //Set all values for the board as false, meaning that there are no blocks
            board[i][j] = false;
        }
    }

}

bool** Board::getBoard() {return board;}

//Define the getters
int Board::getCols() {return this->rows;}
int Board::getRows() {return this->cols;}

//Define the destructor
Board::~Board()
{
    for(signed int i = 0; i<cols;i++)
    {
        delete[] board[i];
    }
    delete[] board;
}