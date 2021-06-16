#include "doctest.h"
#include "City.hpp"
#include "Player.hpp"
#include "Board.hpp"
#include "Scientist.hpp"
#include "GeneSplicer.hpp"
#include "OperationsExpert.hpp"
#include "FieldDoctor.hpp"
#include "Medic.hpp"
#include "Researcher.hpp"
#include "Virologist.hpp"
#include "Dispatcher.hpp"
#include <iostream>
#include <stdexcept>

using namespace pandemic;
using namespace std;

TEST_CASE("test 1 :"){
   Board board;
    CHECK(board.is_clean()==true);
    board[City::Johannesburg]=3;
    CHECK(board[City::Johannesburg]==3);

     board[City::Johannesburg]=4;
    CHECK(board[City::Johannesburg]==4);

    board[City::London]=1;
    CHECK(board[City::London]==1);
     board[City::London]=2;
    CHECK(board[City::London]==2);

    board[City::NewYork]=2;
    CHECK(board[City::NewYork]==2);

    board[City::NewYork]=3;
    CHECK(board[City::NewYork]==3); 

     board[City::Osaka]=4;
    CHECK(board[City::Osaka]==4);

     board[City::Osaka]=1;
    CHECK(board[City::Osaka]==1);

     board[City::Tokyo]=2;
    CHECK(board[City::NewYork]==2);

    board[City::Tokyo]=4;
    CHECK(board[City::Tokyo]==4);
    
    board[City::Madrid]=2;
    CHECK(board[City::Madrid]==2);

    board[City::Madrid]=1;
    CHECK(board[City::Madrid]==1);


    CHECK(board.is_clean()==false);
}

TEST_CASE ("test 2 :"){
    Board board;
    Virologist player {board, City::NewYork};
    board[City::London]=4;
    player.take_card(City::London);
    player.treat(City::London);
    CHECK (board[City::London]==3);


    Virologist player2 {board, City::Milan};
    board[City::NewYork]=2;
    player2.take_card(City::NewYork);
    player2.treat(City::NewYork);
    CHECK (board[City::NewYork]==1);
}

/*TEST_CASE("erooe!!"){
    Board board,b;
    
    OperationsExpert player {board,NewYork};
    b[City::Milan]=2;
    player.drive(City::Milan);
    player.treat(City::Milan);
    player.treat(City::Milan);
    CHECK_THROWS(player.treat(City::Milan));
}*/


TEST_CASE("TEST 3:"){
    Board board;
    Researcher player{board,City:: Moscow};
     player.take_card(City::London);
     player.take_card(City::NewYork);
     player.take_card(City::Milan);
     player.take_card(City::Delhi);
     player.take_card(City::Essen);
     CHECK_NOTHROW(player.discover_cure(Color::Red));
     CHECK(player.role()==string("Researcher"));
     
    Researcher player1{board ,City:: Taipei};
    player1.take_card(City::London);
     player1.take_card(City::NewYork);
     player1.take_card(City::Milan);
     player1.take_card(City::Delhi);
     player1.take_card(City::Essen);
     CHECK_NOTHROW(player1.discover_cure(Color::Blue));
     CHECK(player1.role()==string("Researcher"));
}
TEST_CASE (" TEST NUMBER 4 :"){
    Board board;
    FieldDoctor player {board,City::London};
    CHECK_THROWS(player.treat(City::HongKong));
    CHECK_THROWS(player.treat(City::LosAngeles));
    board[City::NewYork]=4;
    CHECK_NOTHROW(player.treat(City::NewYork));
    CHECK_NOTHROW(player.treat(City::NewYork));
    CHECK_NOTHROW(player.treat(City::NewYork));
    CHECK_NOTHROW(player.treat(City::NewYork));
}
/*TEST_CASE ("test of 5:"){
    Board board;
  GeneSplicer player{board,City::Essen};
  CHECK_THROWS(player.build());
  player.take_card(City::Istanbul);
  player.take_card(City::Karachi);
  CHECK_THROWS(player.build());
  player.take_card(City::Lima);
  player.take_card(City::LosAngeles);
  player.take_card(City::Essen);
  CHECK_NOTHROW(player.build());
  CHECK_THROWS(player.discover_cure(Color::Blue));
 
}
*/


   
