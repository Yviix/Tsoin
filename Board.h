#ifndef BOARD_H
#define BOARD_H

class Board {

private:
    std::vector<Piece*> board;
    int size=9;

public:
    Board();
    Board(int size);
    Piece* getCase(int i, int j);
    void setCase(int i, int j, Piece* p);

};

#endif // BOARD_H