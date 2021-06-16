#pragma once
#include <iostream>
#include "Board.hpp"
#include <iostream>
#include "Player.hpp"

namespace pandemic
{
    class FieldDoctor:public Player
    {
        public:
    FieldDoctor(Board board, City city):Player(board, city){}
   

    };
}