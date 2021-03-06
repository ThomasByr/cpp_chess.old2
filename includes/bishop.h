#pragma once

#include "piece.h"

class Bishop : public Piece {
  public:
    Bishop(int color, int file, int rank);
    ~Bishop();

    std::string to_string() const;
    std::string to_fen() const;

    std::vector<int> get_targets(int board[64]) const;

  private:
};
