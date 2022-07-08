

/*This class will be used to represent the board of the game and will include useful and
important methods to check collisions, erase stacks and draw the board
*/
class Board
{
    //Define and/or initialize class members
    private:
    //Represents the amount of rows in the board
    int rows;
    //Represents the amount of columns in the board
    int cols;
    /*Represents the board using the rows and cols members
    Initializing as a double pointer to dynamically allocate the size fo the 2D array
    */
    bool** board;

    //Declaring the methods for the board class
    public:
    //This constructor will set the rows and cols members
    Board(int rows, int cols);
    //getters
    int getRows();
    int getCols();
    
    //This method will draw the board using functions/methods from OpenFrameworks
    void drawBoard();
    //This method will return the element inside the board in the given position (row,column)
    bool** getBoard();

    //This destructor will delete correctly the board/matrix
    ~Board();
};
