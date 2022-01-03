#include <iostream> 
#include <string.h>
#include <fstream>
#include <time.h>
#include <thread>
#include <chrono>
#include "ttt_functs.hpp"
using namespace std;
using namespace std::this_thread; // sleep_for, sleep_until
using namespace std::chrono; // nanoseconds, system_clock, seconds

int main() {
    bool hasWon = false; 
    bool validMove = false;
    string move1, move2;
    int pos1, pos2;
    char choice1, choice2;
    char player1 = 'x';
    char player2 = 'o'; 
    int pos[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    char moves[10] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '\0'};
    int array[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0}; 
    cout << "WELCOME TO THE CLASSIC TIC TAC TOE!\n";
    cout << "LETS BEGIN!\n";
    sleep_for (seconds(2));
    drawBoard(pos);
    cout << "TO PLAY, ENTER POSITION NUMBER AND X OR 0\n";
    cout << "PLAYER 1 IS X & PLAYER 2 IS O\n";
    cout << "EXAMPLE: 3X\n";
    sleep_for(seconds(3));
    
    drawBoard(moves);
    while(hasWon == false){
        while(validMove != true){
            cout << "PLAYER 1 ENTER YOUR MOVE\n";
            cin >> move1; 
            pos1 = move1[0] - '0';
            choice1 = move1[1];
            if(validate(pos1, choice1, player1)){
                validMove = true;
            } else {
                validMove = false; 
            }
        }
        validMove = false;                          //reset validMove
        while(validMove != true){
            cout << "PLAYER 2 ENTER YOUR MOVE\n";
            cin >> move2;
            pos2 =  move2[0] - '0';
            choice2 = move2[1];
            if(validate(pos2, choice2, player2)){
                validMove = true;
            } else {
                validMove = false; 
            }
        }
        validMove = false;                         //reset validMove

        moves[pos1 - 1] = choice1;                  //add appropriate x and o to char array
        moves[pos2 - 1] = choice2; 
        drawBoard(moves);
        array[pos1 - 1] = 1;                        //add int values for positions to int array
        array[pos2 - 1] = 4; 
        hasWon = checkIfWon(array);                 //pass int array
        if(hasWon){                 
            cout << "GAME OVER\n";
        }
    }
    

   
}