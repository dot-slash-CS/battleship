#include <iostream>
#include <vector>
#include "point.h"
#include "ship.h"

using namespace std;

int main()
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
