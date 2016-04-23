/*
TODO:
  - Let Ship inherit from coordinates as child class of Point class
*/

#ifndef SHIP_H
#define SHIP_H

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

#endif // SHIP_H
