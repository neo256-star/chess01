//
// Created by ME on 10/1/2021.
//

#ifndef CHESS01_CHMEMBERS_H
#define CHESS01_CHMEMBERS_H

// #include "headers.h"

class ChMembers;  //define appropriately

namespace ChPieces{

	namespace amount{}
}
namespace white{
	enum class pawn{
		pawn1,pawn2,pawn3,pawn4,pawn5,pawn6,pawn7,pawn8
	};
	enum class knight{
		knight1,knight2
	};
	enum class rook{
		rook1,rook2
	};
	enum class bishop{
		bishop1,bishop2
	};
	enum class queen{
		queen1  //1 at end of definition because unlike a king a queen,
		        // isn't constantly one
	};
	enum class king{
		king
	};
}
namespace black{
	enum class pawn{
		pawn1,pawn2,pawn3,pawn4,pawn5,pawn6,pawn7,pawn8
	};
	enum class knight{
		knight1,knight2
	};
	enum class rook{
		rook1,rook2
	};
	enum class bishop{
		bishop1,bishop2
	};
	enum class queen{
		queen1  //1 at end of definition because unlike a king a queen,
		// isn't constantly one
	};
	enum class king{
		king
	};
}
#endif //CHESS01_CHMEMBERS_H
