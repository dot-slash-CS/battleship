#include "player.h"

Player::Player() {
    alive = true;

}
Player::~Player() {
//nothing?
}


void Player::turnSwap() {
    turn = !turn;
}
void Player::firstTurn() {
    turn = true;
}
void Player::notFirstTurn() {
    turn = false;
}
