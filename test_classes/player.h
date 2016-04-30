#ifndef PLAYER_H
#define PLAYER_H
class Player {

    public:
        bool isAlive() const {
            return alive; }

        void terminate() const {
            alive = false;
        }


        void turnSwap(); //Switches turn boolean **MUST BE DONE FOR BOTH PLAYERS**
        void firstTurn(); //Sets first turn if they win the random chance
        void notFirstTurn(); //Sets the second turn up if they lose the random chance




    private:
        bool alive;
        bool turn;


};

#endif // PLAYER_H
