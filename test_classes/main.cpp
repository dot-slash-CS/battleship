#include <iostream>
#include <vector>
#include "point.h"
#include "ship.h"
#include "player.h"
#include <stdlib.h> //used for srand
#include <time.h> //used for srand

void goesFirst (Player, Player);



void main () {
    Player player1, player2;
    goesFirst(player1,player2);



    while (player1.isAlive() && player2.isAlive()) {
        if (player1.turn == true) {

            //player1 gameplay here

            /*
             * THINGS TO DO IN HERE:
             * 1. Update Grid
             * 2. Ask for input for coordinate
             * 3.
             *
            */

            player1.turnSwap();
            player2.turnSwap();
        }
        else {
            //player2 gameplay here

            player1.turnSwap();
            player2.turnSwap();

        }
    }

    if (player1.isAlive() == false) {
        cout << "Player 2 Wins!" << endl; //Go to endgame (Cout for now)

    }
    else {
        cout << "Player 1 Wins!" << endl; //Go to endgame (cout for now)
    }

}



void goesFirst (Player p1, Player p2) {

    srand (time(NULL));             // initialize the random seed
    first = rand() % 100 + 1;       // random # from 1 to 100
    if (first % 2) == 0 {           // Player 1 goes first if even
        p1.firstTurn();
        p2.notFirstTurn();
    }
    else {
        p1.notFirstTurn();     //Player 2 goes first if odd
        p2.FirstTurn();
    }

}



//Wulfgang's Main Class
/*int main()
{
    vector<Point> points = { Point(), Point(6, 9) };
    points[0].set_hit();
    for (int i = 0; i < points.size(); i++) {
        cout << points[i].get_x() << ", " << points[i].get_y() << "; "
             << (points[i].is_hit() ? "hit" : "not hit") << endl;
    }

    vector<Ship> ships = {
        Ship(Ship::Type::Carrier),
        Ship(Ship::Type::Battleship),
        Ship(Ship::Type::Submarine),
        Ship(Ship::Type::Cruiser),
        Ship(Ship::Type::Destroyer),
        Ship(Ship::Type::PatrolBoat)
    };

    // hit each ship once
    for (int i = 0; i < ships.size(); i++) {
        ships[i].hit();
    }

    // display some information about each ship
    for (int j = 0; j < ships.size(); j++) {
        cout << "Status: " << (ships[j].is_alive() ? "alive" : "dead") << "; "
             << "Size: " << ships[j].get_size() << "; "
             << "Health: " << ships[j].health() << endl;
    }

    return 0;
}
*/
