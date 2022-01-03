#include <iostream>
using namespace std; 

bool validate(int pos, char choice, char player){
     if((pos > 9 || pos < 1) || (choice != player)){
        cout << "Invalid move! \n";
        return false;
     } 
     else {
         return true; 
     }
}
bool checkIfWon(int array[9]){
    int sum = 0; 
    for(int i = 0; i <= 2; i++){    //first row
        sum += array[i];
    }
    if(sum == 3){
        cout << "PLAYER 1 WON\n";
        return true;
    } else if(sum == 12){
        cout << "PLAYER 2 WON\n";
        return true; 
    }

    sum = 0; 
    for(int i = 3; i <= 5; i++){   //second row
        sum += array[i];
    }
    if(sum == 3){ 
        cout << "PLAYER 1 WON\n";
        return true;
    } else if(sum == 12){
        cout << "PLAYER 2 WON\n";
        return true; 
    }

    sum = 0; 
    for(int i = 6; i <= 8; i++){   //third row
        sum += array[i];
    }
    if(sum == 3){
        cout << "PLAYER 1 WON\n";
        return true;
    } else if(sum == 12){
        cout << "PLAYER 2 WON\n";
        return true; 
    }

    sum = 0; 
    for(int i = 0; i <= 6; i+=3){    //first column
        sum += array[i];
    }
    if(sum == 3){
        cout << "PLAYER 1 WON\n";
        return true;
    } else if(sum == 12){
        cout << "PLAYER 2 WON\n";
        return true; 
    }

    sum = 0; 
    for(int i = 1; i <= 7; i+=3){   //second column
    sum += array[i];
    }
    if(sum == 3){
        cout << "PLAYER 1 WON\n";
        return true;
    } else if(sum == 12){
        cout << "PLAYER 2 WON\n";
        return true; 
    }

    sum = 0; 
    for(int i = 2; i <= 8; i+=3){   //third column
        sum += array[i];
    }
    if(sum == 3){
        cout << "PLAYER 1 WON\n";
        return true;
    } else if(sum == 12){
        cout << "PLAYER 2 WON\n";
        return true; 
    }

    sum = 0; 
     for(int i = 0; i <= 8; i+=4){   //first cross
        sum += array[i];
     }
    if(sum == 3){
        cout << "PLAYER 1 WON\n";
        return true;
    } else if(sum == 12){
        cout << "PLAYER 2 WON\n";
        return true; 
    }

    sum = 0; 
    for(int i = 2; i <= 6; i+=2){   //second cross
    sum += array[i];
    }
    if(sum == 3){
        cout << "PLAYER 1 WON\n";
        return true;
    } else if(sum == 12){
        cout << "PLAYER 2 WON\n";
        return true;
    }

    sum = 0; 
    for(int i = 0; i <= 8; i++){    //tie
        sum += array[i];
    }
    if(sum == 21){
        cout << "TIED\n";
        return true; 
    }

    return false;                   //continue game

}