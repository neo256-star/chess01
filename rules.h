//
// Created by ME on 10/1/2021.
//

#ifndef CHESS01_RULES_H
#define CHESS01_RULES_H
/* ******************************************************
	Revised 11th October 2021 : created the rules()s functions
	Revised 12th October 2021 : revised the rules()s functions
	Revised 13th October 2021 added useful TODOs
*/
	
#include "chmembers.h"
using namespace chmembers;

void white_pawn_rules(){
	  if(any_member.infront(white::pawn) white::pawn.cannot_move;
		if (opponent_is(diagonal_upper_left_one_to.white::pawn
						|| diagonal_upper_right_one_to.white::pawn)
			&&white.move_next
			&& !(white(inway_of().white::pawn))
		{
			white::pawn.can_eliminate(black::said_member);
		}
		else if(chmember::‪white.inway_of(white::pawn)){
      white::pawn.cannot_eliminate(black::said_member);
	}
}
        
void black_pawn_rules(){
	if(any_member.infront(black::pawn) black::pawn.cannot_move;
	if (opponent_is(diagonal_upper_left_one_to.black::pawn
					|| diagonal_upper_right_one_to.black::pawn)
		&&black.move_next
		&& !(white(inway_of().black::pawn)){
		black::pawn.can_eliminate(white::said_member);
	}
			else if(‪white.inway_of(white::pawn)){
		black::pawn.cannot_eliminate(white::said_member);
	}
}
void white_knight_rules(){
	if ( opponent_is(two_steps_forward && one_step_left) || (one_step_forward && two_steps_right)
		 || (two_steps_forward&one_step_right) || (one_step_forward&&two_steps_left)
		 ||(one_step_backward&&two_steps_left) || (one_step_backward&&two_steps_right)
		 ||(two_steps_backward&&one_step_left) || (two_steps_backward&&one_step_right))
	&& !(white(inway_of().white::knight)
		 && white.move_next)
	{
		white::knight.can_eliminate(black::said_member);
	}
	else if(white.inway_of(white::knight)){
		white::knight.cannot_eliminate(black::said_member);
	}
}

void black_knight_rules(){
	if ( opponent_is(two_steps_forward && one_step_left) || (one_step_forward && two_steps_right)
		 || (two_steps_forward&one_step_right) || (one_step_forward&&two_steps_left)
		 ||(one_step_backward&&two_steps_left) || (one_step_backward&&two_steps_right)
		 ||(two_steps_backward&&one_step_left) || (two_steps_backward&&one_step_right))
	&& !(black(inway_of().black::knight)
		 && black.move_next)
	{
		black::knight.can_eliminate(white::said_member);
	}
	else if(black.inway_of(black::knight)){
		black::knight.cannot_eliminate(white::said_member);
	}
}

void white_rook_rules(){
	if(opponent_is(left_to.white::rook || right_to.white::rook
				   || front_of.white::rook || behind_of.white::rook)
	   && !(white(inway_of().white::rook)
			&& white.move_next)
			){
		white::rook.can_eliminate(black::said_member);
	}
	else if(white(inway_of().white::rook)){
		white::rook.cannot_eliminate(black::said_member);
	}
}

void black_rook_rules({
	if(opponent_is(left_to.black::rook || right_to.black::rook
	|| front_of.black::rook || behind_of.black::rook)
	&& !(black(inway_of().black::rook)
	&&black.move_next)
	){
		black::rook.can_eliminate(white::said_member);
	}
	else if(black(inway_of().black::rook){
		black::rook.cannot_eliminate(white::said_member);
	}
}

void white_bishop_rules(){
	if(opponent_is(diagonal_upper_right_to.white::bishop
				   ||  diagonal_upper_left_to.white::bishop
				   || diagonal_lower_left_to.white::bishop
				   || diagonal_lower_right_to.white::bishop)
	   &&!white(inway_of().white::bishop)
	   &&white.move_next)
	{
		white::bishop.can_eliminate(black::said_member);
	}
	else if(white(inway_of().white::bishop)){
		white::bishop.cannot_eliminate(black::said_member);
	}
}

void black_bishop_rules(){
	if(opponent_is(diagonal_upper_right_to.black::bishop
				   ||  diagonal_upper_left_to.black::bishop
				   || diagonal_lower_left_to.black::bishop
				   || diagonal_lower_right_to.black::bishop)
	   &&!black(inway_of().black::bishop)
	   &&black.move_next)
	{
		black::bishop.can_eliminate(black::said_member);
	}
	else if(black(inway_of().black::bishop)){
		black::bishop.cannot_eliminate(white::said_member);
	}
}
void white_queen_rules(){
	if(opponent_is(diagonal_upper_right_to.white::queen
				   ||  diagonal_upper_left_to.white::queen
				   || diagonal_lower_left_to.white::queen
				   || diagonal_lower_right_to.white::queen
				   || left_to.white::queen || right_to.white::queen
				   || front_of.white::queen || behind_of.white::queen)
	   &&!white(inway_of().white::queen)
	   &&white.move_next)
	{
		white::queen.can_eliminate(black::said_member);
	}
	else if(white(inway_of().white::queen)){
		white::bishop.cannot_eliminate(black::said_member);
	}
}
void black_queen_rules(){
	if(opponent_is(diagonal_upper_right_to.black::queen
				   ||  diagonal_upper_left_to.black::queen
				   || diagonal_lower_left_to.black::queen
				   || diagonal_lower_right_to.black::queen
				   || left_to.black::queen || right_to.black::queen
				   || front_of.black::queen || behind_of.black::queen)
	   &&!black(inway_of().black::queen)
	   &&black.move_next)
	{
		black::queen.can_eliminate(white::said_member);
	}
	else if(black(inway_of().black::queen)){
		black::bishop.cannot_eliminate(white::said_member);
	}
}
void white_king_rules(){
	if(opponent_is(diagonal_upper_right_one_to.white::king
				   || diagonal_upper_left_one_to.white::king
				   || diagonal_lower_left_one_to.white::king
				   || diagonal_lower_right_one_to.white::king
				   || left_one_to.white::king || right_one_to.white::king
				   || front_one_of.white::king || behind_one_of.white::king)
	   &&!white(inway_of().white::king)
	   &&white.move_next)
	{
		white::king.can_eliminate(black::said_member);
	}
	else if(white(inway_of().black::king)){
		white::king.cannot_eliminate(black::said_member);
	}
}
void black_king_rules(){
	if(opponent_is(diagonal_upper_right_one_to.black::king
				   || diagonal_upper_left_one_to.black::king
				   || diagonal_lower_left_one_to.black::king
				   || diagonal_lower_right_one_to.black::king
				   || left_one_to.black::king || right_one_to.black::king
				   || front_one_of.black::king || behind_one_of.black::king)
	   &&!black(inway_of().black::king)
	   &&black.move_next)
	{
		black::king.can_eliminate(white::said_member);
	}
	else if(white(inway_of().black::king)){
		black::king.cannot_eliminate(white::said_member);
	}
}

/*
TODO : define and initialize opponent_is(),  cannot_eliminate(),
TODO : saidmember , inway_of(), front_of, behind_of,
TODO : left_to,right_to, two_steps_forward, one_step_forward,
TODO :  one_step_left, one_step_right, two_steps_backward,
TODO : one_step_backward, two_steps_forward, any_member
TODO : return_type  inway_of(){}, probably put in wayof rules functions
TODO : some_type can_eliminate(){}
TODO : some_type eliminate(){maybe delete opponent}
TODO : make move like king move only one direction like maybe instead of diagonal_left_to , king uses diagonal_left_one_to .
TODO : opponent_is() should take unlimited parameters like printf()
TODO : make functions like can_eliminate() or cannot_eliminate() objects, i think like chmembers::black::pawn  can_eliminate()
TODO : same for move_next.
*/
#endif //CHESS01_RULES_H
