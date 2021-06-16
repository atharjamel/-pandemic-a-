#pragma once
#include <iostream>
#include <string>
#include <map>
#include "Board.hpp"

namespace pandemic
{
    class Player
    {
    private:
        City city;
        int number;
        Board board;

    public:
            Player();
        Player(Board &board, City city1)
      : board(board), city(city1){}
        Player &drive(City c1);
        Player &fly_direct(City c2);
        Player &fly_charter(City c3);
        Player &fly_shuttle(City c4);
        Player &build();
        Player &discover_cure(Color color);
        Player &treat(City c5);
        std::string role();
        Player &take_card(City c6 );
    };

}
