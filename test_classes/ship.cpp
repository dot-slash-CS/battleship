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
