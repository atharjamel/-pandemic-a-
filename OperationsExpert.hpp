#pragma once
#include"City.hpp"
#include "Board.hpp"
#include <iostream>
#include<string>
#include "Player.hpp"
using namespace std;
namespace pandemic
{
    class OperationsExpert:public Player
    {
        public:
       OperationsExpert(Board board,City city);
    };
}

