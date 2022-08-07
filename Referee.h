//
// Created by w1605 on 2022/3/13.
//

#ifndef ADDS_PRAC2_REFEREE_H
#define ADDS_PRAC2_REFEREE_H


#include "Human.h"
#include "Computer.h"

class Referee {
public:
    Referee();
    char refGame(Human h, Computer c);
};

#endif