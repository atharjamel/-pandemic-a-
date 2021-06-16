#pragma once
#include <iostream>
#pragma once
#include <iostream>
#include "Board.hpp"
#include <iostream>
#include "Player.hpp"

namespace pandemic
{
    class Dispatcher:public Player{
        public: 
    Dispatcher(Board board, City city):Player(board, city){}
    //Dispatcher& fly_direct(City c){}
    

    };
}

