#pragma once
#include <iostream>
#pragma once
#include <iostream>
#pragma once
#include <iostream>
#pragma once
#include <iostream>
#include "Board.hpp"
#include <iostream>
#include "Player.hpp"

namespace pandemic
{
    class Scientist:public Player//because "player.take_card" it accesses to the fun of the Player class 
    {
        private:
        int n;
        public:
    Scientist(Board board, City city,int num):Player(board, city),n(num){};
    

    };
}