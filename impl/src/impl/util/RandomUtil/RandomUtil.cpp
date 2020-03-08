//
// Created by Tobias Axelsson on 2020-03-08.
//

#include <cstdlib>
#include "RandomUtil.h"

using namespace std;

int randomNumberBetween(const int& lower, const int& max) {
    return rand() % max + lower;
}