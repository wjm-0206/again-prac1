//
// Created by w1605 on 2022/3/13.
//

#include <iostream>
#include <string>
#include "Human.h"
using namespace std;


Human::Human(){
}

char Human::makeMove(){
    char hand;
    cout << "Enter Move:";
    cin >> hand;
    return hand;
}
