//
// Created by ME on 10/2/2021.
//

#include "chmembers.h"
// #include "headers.h"

/*
 * WHAT BOARD SHOULD LOOK LIKE
 * DEFINE THE SPACES BELOW APPROPRIATELY
 * [A8][B8][C8][D8][E8][F8][G8][H8]
 * [A7][B7][C7][D7][E7][F7][G7][H7]
 * [A6][B6][C6][D6][E6][F6][G6][H6]
 * [A5][B5][C5][D5][E5][F5][G5][H5]
 * [A4][B4][C4][D4][E4][F4][G4][H4]
 * [A3][B3][C3][D3][E3][F3][G3][H3]
 * [A2][B2][C2][D2][E2][F2][G2][H2]
 * [A1][B1][C1][D1][E1][F1][G1][H1]
 */
 
using namespace chmembers;

/* DEFAULT POSITIONS*/
namespace deflt_pos{
	//WHITE
	white::pawn::pawn1 = A2;
	white::pawn::pawn2 = B2;
	white::pawn::pawn3 = C2;
	white::pawn::pawn4 = D2;
	white::pawn::pawn5 = E2;
	white::pawn::pawn6 = F2;
	white::pawn::pawn7 = G2;
	white::pawn::pawn8 = H2;

	white::knight::knight1 = B1;
	white::knight::knight2 = G1;

	white::rook::rook1 = A1;
	white::rook::rook2 = H1;

	white::bishop::bishop1 = C1;
	white::bishop::bishop2 = F1;

	white::queen::queen1 = D1;

	white::king::king = E1;

	//BLACK
	black::pawn::pawn1 = A7;
	black::pawn::pawn2 = B7;
	black::pawn::pawn3 = C7;
	black::pawn::pawn4 = D7;
	black::pawn::pawn5 = E7;
	black::pawn::pawn6 = F7;
	black::pawn::pawn7 = G7;
	black::pawn::pawn8 = H7;

	black::knight::knight1 = B8;
	black::knight::knight2 = G8;

	black::rook::rook1 = A8;
	black::rook::rook2 = H8;

	black::bishop::bishop1 = C8;
	black::bishop::bishop2 = F8;

	black::queen::queen1 = D8;

	black::king::king = E8;
}
