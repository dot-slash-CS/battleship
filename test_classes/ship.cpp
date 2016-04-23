#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*
TODO:
  - Let Ship inherit from coordinates as child class of Point class
*/

class Ship {
private:
  bool alive;           // dead or alive
  int size;             // number of hits needed to sink ship
  int hits;             // number of hits on a ship
public:
  Ship(int size);       // constructor
  Ship(const Ship &);   // copy constructor
  ~Ship();              // destructor

  bool is_alive() const { return alive; }
  int  get_size() const { return size; }
  int  health()   const { return (size - hits); }

  void update_status(); // Changes ship from alive to dead
  void hit();           // Increase # of hits and update status

  // default ship sizes
  enum Type {
    Carrier    = 5,
    Battleship = 4,
    Submarine  = 3,
    Cruiser    = 3,
    Destroyer  = 2,
    PatrolBoat = 2
  };
};

Ship::Ship (int s) {
  alive = true;
  size = s;
  hits = 0;
}

Ship::Ship(const Ship &ship) {
  alive = ship.alive;
  size  = ship.size;
  hits  = ship.hits; 
}

Ship::~Ship() {
  // does nothing for now
}

// Called automatically by Ship::hit()
void Ship::update_status () {
  // ship is still alive if the number of
  // times it has been hit is less than size
  alive = hits < size;
}

void Ship::hit(){
  // does not hit if ship already dead
  if (alive) {
    hits++;
    update_status();
  }
}




// test function
int main()
{
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
}
