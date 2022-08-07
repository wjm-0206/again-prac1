//
// Created by w1605 on 2022/3/13.
//

#include <iostream>
#include <string>
#include "Referee.h"
using namespace std;


Referee::Referee(){
}


char Referee::refGame(Human h, Computer c){
    char player1Hand = h.makeMove();
    char player2Hand = c.makeMove();
    char result = ' ';


    if(player1Hand == 'R' && player2Hand == 'S'){ // 'A'
        return 'W';
    }
    if(player1Hand == 'R' && player2Hand == 'P'){
        return 'L';
    }
    if(player1Hand  =='R' && player2Hand =='R'){
        return 'T';
    }
    if(player1Hand == 'S' && player2Hand == 'S'){
        return 'T';
    }
    if(player1Hand == 'S' && player2Hand == 'R'){
        return 'L';
    }
    if(player1Hand == 'S' && player2Hand == 'P'){
        return 'W';
    }
    if(player1Hand == 'P' && player2Hand == 'S'){
        return 'L';
    }
    if(player1Hand == 'P' && player2Hand == 'P'){
        return 'T';
    }
    if(player1Hand == 'P' && player2Hand == 'R'){
        return 'W';
    }
    return result;

}
