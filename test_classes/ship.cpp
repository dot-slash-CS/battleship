#include <iostream>
#include <string>
using namespace std;

class Ship {
    string status;                       // dead or alive
    int live_slits;                   // number oh hits needed to sink ship
    int hits;                         // number of hits on a ship
  public:
    Ship(int);                         // constructor
    void update_status ();         // Changes ship from alive to dead
    string check_status () {return status;} // Tells if ship is dead/alive
    void hit();                       // Increase # of hits
};

Ship::Ship (int size) {           // constructor 
  status = "alive";
  live_slits = size;
  hits = 0;
}
  
void Ship::update_status () {
  if (hits > live_slits)
    {status = "dead";}
}

void Ship::hit(){
  hits++;
}



int main()
{
  // During set up
  Ship destroyer_player1(5);
  Ship destroyer_computer(5);
  
  /* 
         if the attack is on the location of destroyer
            {
             destroyer_player1.hit();
             destroyer_player1.update_status;
            }
  */
  
  cout << "Ship status: " << destroyer_player1.check_status();
  
   
        if (destroyer_player1.check_status() == "dead")
        {
            cout << "\n destroyer is sunk";
            // number_of_dead_ships++
        }
        
        
  
}
