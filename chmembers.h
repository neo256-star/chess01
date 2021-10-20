//
// Created by ME on 10/1/2021.
//

#ifndef CHESS01_CHMEMBERS_H
#define CHESS01_CHMEMBERS_H

//#include "headers.h"



/* rules functions */
void white_pawn_rules();
void white_knight_rules();
void white_rook_rules();
void white_bishop_rules();
void white_queen_rules();
void white_king_rules();
void black_pawn_rules();
void black_knight_rules();
void black_ rook_rules();
void black_bishop_rules();
void black_queen_rules();
void black_ king_rules();
/*rules functions declarations */

namespace chmembers{
	namespace white{
		enum class pawn{
			pawn1,pawn2,pawn3,pawn4,pawn5,pawn6,pawn7,pawn8
		}  //pawn
		enum class knight{
			knight1,knight2
		}//knight
		enum class rook{
			rook1,rook2
		}//rook
		enum class bishop{
			bishop1,bishop2
		}//bishop
		enum class queen{
			queen1
		}//queen
		enum class king{
			king
		}//king
	} // white
	namespace black{
		enum class pawn{
			pawn1,pawn2,pawn3,pawn4,pawn5,pawn6,pawn7,pawn8
		}  //pawn
		enum class knight{
			knight1,knight2
		}//knight
		enum class rook{
			rook1,rook2
		}//rook
		enum class bishop{
			bishop1,bishop2
		}//bishop
		enum class queen{
			queen1   //1 at end of definition because unlike a king a queen
		// isn't constantly one
		}//queen
		enum class king{
			king
		}//king
	}  //black
} //chmembers
#endif //CHESS01_CHMEMBERS_H
