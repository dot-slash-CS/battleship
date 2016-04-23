#include "ship.h"

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
