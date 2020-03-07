//--------------------------------------------------------------------------------
//                                   COMP1011
//                           EXERCISE 1 - Tic Tac Toe
//                                   Wu  Junyu
//                                   18080998D
//--------------------------------------------------------------------------------
//                        Limitations  of  This  Program      
//  As the problem requires, this peogram was written according to the rules of the
//  tic-tac-toe game.  One limitation is it can't tell which player win the game or
//  the two  player come to a tie at any time of the game.    Another one is at the
//  system( " cls " ) on the line 141, here we need something to do the clearing of
//  the terminal or the output would be long and messy. The order of outputs should
//  be rearranged so that we can have what we want remained on the screen.
//--------------------------------------------------------------------------------
#include <iostream>
using namespace std;

int main()
{
    //The initialization of variables and arrays.
    int round_count = 0;
    int round_flag = 0;
    char input_position = ' ';
    char input_symbol = ' ';
    int position_error_flag = 0;
    int symbol_error_flag = 0;
    char board_array [9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int  filled_flag [9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    //Start the game loop.
    while ( round_count != 9 )
    {
        //Print the board of tic-tac-toe with positions.
        cout<<"Welcome to Tic-Tac-Toe game!\n";
        cout<<"     |     |     \n";
        cout<<"  "<< board_array [0] <<"  |  "<< board_array [1] <<"  |  "<< board_array [2]<<"  \n";
        cout<<"     |     |     \n";
        cout<<"-----+-----+-----\n";
        cout<<"     |     |     \n";
        cout<<"  "<< board_array [3] <<"  |  "<< board_array [4] <<"  |  "<< board_array [5]<<"  \n";
        cout<<"     |     |     \n";
        cout<<"-----+-----+-----\n";
        cout<<"     |     |     \n";
        cout<<"  "<< board_array [6] <<"  |  "<< board_array [7] <<"  |  "<< board_array [8]<<"  \n";
        cout<<"     |     |     \n";
            //The classification of the three input reqirements of the symbol.
            switch ( round_flag )
            {
                case 0:
                cout<<"Please enter X or O:\t";
                break;
                case -1:
                cout<<"Please enter X:\t";
                break;
                case 1:
                cout<<"Please enter O:\t";
                break;
            }
            //The capitalization of input_symbol and the handling of invalid symbol inputs.
            do
            {
                cin>>input_symbol;
                switch (input_symbol)
                {
                    case 'X':
                    case 'x':
                    input_symbol = 'X';
                    symbol_error_flag = 0;
                    if ( round_flag == 0 ) round_flag = -1;
                    if ( round_flag == 1 ) 
                    {
                        cout<<"It's O's turn!\n";
                        symbol_error_flag = 1;
                    }
                    break;
                    case 'O':
                    case 'o':
                    input_symbol = 'O';
                    symbol_error_flag = 0;
                    if ( round_flag == 0 ) round_flag = 1;
                    if ( round_flag == -1 ) 
                    {
                        cout<<"It's X's turn!\n";
                        symbol_error_flag = 1;
                    }
                    break;
                    default:
                    cout<<"Invalid input!\n";
                    input_symbol = ' ';
                    symbol_error_flag = 1;
                }
            } while ( symbol_error_flag == 1 );
            //The handling of invalid position inputs.
            cout<<"Please enter the position of the cell:\t";
            do
            {
                cin>>input_position;
                switch ( input_position )
                {
                    case '1':
                    case '2':
                    case '3':
                    case '4':
                    case '5':
                    case '6':
                    case '7':
                    case '8':
                    case '9':
                    position_error_flag = 0;
                    break;
                    default:
                    cout<<"Invalid input!\n";
                    input_position = ' ';
                    position_error_flag = 1;
                    break;
                }
            } while ( position_error_flag == 1 );
                //Convertion of char position_error_flag to int position_error_flag.
                input_position = input_position - '0';
                //Write-in of the inputs and mark if the position is filled.
                if ( filled_flag [input_position - 1] == 0)
                {
                    board_array [ input_position - 1 ] = input_symbol;
                    filled_flag [ input_position - 1 ] = 1;
                    round_flag = round_flag * -1;
                    cout<<"There are "<< 8 - round_count << " more steps.\n";
                    round_count = round_count + 1;
                }
                else
                {
                    cout<<"The position has been filled!\n"<<"Please enter again.\n";
                }
                //Clean the numbers of positions in the first output.
                for (int i = 0; i < 9; i++)
                {
                    if ( filled_flag [i] == 0 )
                    {
                        board_array [i] = ' ';
                    }
                }
                //The clean screen fuction will be added here.
                //system( "cls" );
    }
    //Output of the final filled board.
    cout<<"Welcome to Tic-Tac-Toe game!\n";
    cout<<"     |     |     \n";
    cout<<"  "<< board_array [0] <<"  |  "<< board_array [1] <<"  |  "<< board_array [2]<<"  \n";
    cout<<"     |     |     \n";
    cout<<"-----+-----+-----\n";
    cout<<"     |     |     \n";
    cout<<"  "<< board_array [3] <<"  |  "<< board_array [4] <<"  |  "<< board_array [5]<<"  \n";
    cout<<"     |     |     \n";
    cout<<"-----+-----+-----\n";
    cout<<"     |     |     \n";
    cout<<"  "<< board_array [6] <<"  |  "<< board_array [7] <<"  |  "<< board_array [8]<<"  \n";
    cout<<"     |     |     \n";
    //The exit of program.
    cout<<"The game is over!\n"<<"Press any key to exit.\n";
    system ( "pause > nul" );
    return 0;
}