#include <string>
#include <vector>

#include "Joueur.h"
#include "Piece.h"
#include "Board.h"


Board::Board() {
    for (int i = 0; i < size * size; i++) {
        board.push_back(NULL);
    }
}

Board::Board(int size) {
    this->size = size;
    Board(); 
}


Piece* Board::getCase(int i, int j) {
    return board.at(i * size + j);
}

void Board::setCase(int i, int j, Piece* p) {
    board.at(i * size + j) = p;
}