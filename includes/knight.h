#pragma once

#include "piece.h"

class Knight : public Piece {
  public:
    Knight(int color, int file, int rank);
    ~Knight();

    std::string to_string() const;
    std::string to_fen() const;

    std::vector<int> get_targets(int board[64]) const;

  private:
};
