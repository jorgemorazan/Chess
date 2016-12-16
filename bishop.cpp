#include "bishop.hpp"
#include "piece.hpp"
#include "position.hpp"
#include <cmath>
#include <sstream>
#include <iostream>
using std::stringstream;
using std::cout;


Bishop::Bishop(char color,int X,int Y):Piece(color,X,Y){
	//Se llama al constructor de la clase Piece
}
bool Bishop::isValidMove(Piece***board, Position destiny){

	int contadorY,contadorX;

	if ((this->position.getX()== destiny.getX()) || (this->position.getY()== destiny.getY())){
		//verifica que no se mueva a los lados ni verticalmente
		return false;
	}


	if (fabs(this->position.getY()-destiny.getY())==fabs(this->position.getX()-destiny.getX())){
		
		if (this->getColor() == 'B'){
			if(this->position.getY() > destiny.getY() && this->position.getX()>destiny.getX()){
				//si la posicion esta en un punto bajo y se quiere mover a la izquierda
				contadorY=this->position.getY();
				contadorX=this->position.getY();
				bool validMove=true;//Esto reemplaza el while(true), se maneja mejor
				while(validMove){
					if (board[contadorY][contadorX] == NULL){
						contadorY--;
						contadorX--;

					} else if (board[contadorY][contadorX]!=NULL && board[contadorY][contadorX]->getColor()=='B'){
						validMove = false;
					}
					if(contadorX == destiny.getX() || contadorY==destiny.getY()){
						validMove = false;
					}
				}
				return true;

			}else if(this->position.getY() > destiny.getY() && this->position.getX()<destiny.getX()){
				//si la posicion esta en un punto bajo y se quiere mover a la derecha
				contadorY=this->position.getY();
				contadorX=this->position.getY();
				bool validMove=true;//Esto reemplaza el while(true), se maneja mejor
				while(validMove){
					if (board[contadorY][contadorX] == NULL){
						contadorY--;
						contadorX--;

					} else if (board[contadorY][contadorX]!=NULL && board[contadorY][contadorX]->getColor()=='B'){
						validMove = false;
					}
					if(contadorX == destiny.getX() || contadorY==destiny.getY()){
						validMove = false;
					}
				}
				return true;

			}else if(this->position.getY() < destiny.getY() && this->position.getX()>destiny.getX()){
				//si la posicion esta en un punto alto y se quiere mover a la izquierda
				contadorY=this->position.getY();
				contadorX=this->position.getY();
				bool validMove=true;//Esto reemplaza el while(true), se maneja mejor
				while(validMove){
					if (board[contadorY][contadorX] == NULL){
						contadorY--;
						contadorX--;

					} else if (board[contadorY][contadorX]!=NULL && board[contadorY][contadorX]->getColor()=='B'){
						validMove = false;
					}
					if(contadorX == destiny.getX() || contadorY==destiny.getY()){
						validMove = false;
					}
				}
				return true;

			}else if(this->position.getY() < destiny.getY() && this->position.getX()<destiny.getX()){
				// si la posicion esta en un punto alto y se quiere mover a la derecha
				contadorY=this->position.getY();
				contadorX=this->position.getY();
				bool validMove=true;//Esto reemplaza el while(true), se maneja mejor
				while(validMove){
					if (board[contadorY][contadorX] == NULL){
						contadorY--;
						contadorX--;

					} else if (board[contadorY][contadorX]!=NULL && board[contadorY][contadorX]->getColor()=='B'){
						validMove = false;
					}
					if(contadorX == destiny.getX() || contadorY==destiny.getY()){
						validMove = false;
					}
				}
				return true;
			}
		} else {
			//si el color de esta pieza es Negro

			if(this->position.getY() > destiny.getY() && this->position.getX()>destiny.getX()){
				//si la posicion esta en un punto bajo y se quiere mover a la izquierda
				contadorY=this->position.getY();
				contadorX=this->position.getY();
				contadorY=this->position.getY();
				contadorX=this->position.getY();
				bool validMove=true;//Esto reemplaza el while(true), se maneja mejor
				while(validMove){
					if (board[contadorY][contadorX] == NULL){
						contadorY--;
						contadorX--;

					} else if (board[contadorY][contadorX]!=NULL && board[contadorY][contadorX]->getColor()=='N'){
						validMove = false;
					}
					if(contadorX == destiny.getX() || contadorY==destiny.getY()){
						validMove = false;
					}
				}
				return true;



			}else if(this->position.getY() > destiny.getY() && this->position.getX()<destiny.getX()){
				//si la posicion esta en un punto bajo y se quiere mover a la derecha
				contadorY=this->position.getY();
				contadorX=this->position.getY();
				bool validMove=true;//Esto reemplaza el while(true), se maneja mejor
				while(validMove){
					if (board[contadorY][contadorX] == NULL){
						contadorY--;
						contadorX--;

					} else if (board[contadorY][contadorX]!=NULL && board[contadorY][contadorX]->getColor()=='N'){
						validMove = false;
					}
					if(contadorX == destiny.getX() || contadorY==destiny.getY()){
						validMove = false;
					}
				}
				
				return true;

			}else if(this->position.getY() < destiny.getY() && this->position.getX()>destiny.getX()){
				//si la posicion esta en un punto alto y se quiere mover a la izquierda
				contadorY=this->position.getY();
				contadorX=this->position.getY();
				bool validMove=true;//Esto reemplaza el while(true), se maneja mejor
				while(validMove){
					if (board[contadorY][contadorX] == NULL){
						contadorY--;
						contadorX--;

					} else if (board[contadorY][contadorX]!=NULL && board[contadorY][contadorX]->getColor()=='N'){
						validMove = false;
					}
					if(contadorX == destiny.getX() || contadorY==destiny.getY()){
						validMove = false;
					}
				}
				
				return true;

			}else if(this->position.getY() < destiny.getY() && this->position.getX()<destiny.getX()){
				// si la posicion esta en un punto alto y se quiere mover a la derecha
				contadorY=this->position.getY();
				contadorX=this->position.getY();
				bool validMove=true;//Esto reemplaza el while(true), se maneja mejor
				while(validMove){
					if (board[contadorY][contadorX] == NULL){
						contadorY--;
						contadorX--;

					} else if (board[contadorY][contadorX]!=NULL && board[contadorY][contadorX]->getColor()=='B'){
						validMove = false;
					}
					if(contadorX == destiny.getX() || contadorY==destiny.getY()){
						validMove = false;
					}
				}
			}
		}
		
	}else{
		return false;
	}







	/*
	if (this->color == 'B'){
		
		if(board[destiny.getY()][destiny.getX()]==NULL || board[destiny.getY()][destiny.getX()]->getColor()=='N'){
			if(this->position.getY()>destiny.getY() && this->position.getX()>destiny.getX()){
				//Si la pieza esta en la parte inferior y movimiento diagonal a la izquierda
				contadorV = this->position.getY();
				contadorH = this->position.getX();
				contadorV--;
				contadorH--;

				while (contadorV != destiny.getY() && contadorH != destiny.getX() ){
					if ((contadorH>7 || contadorH<0) || (contadorV>7 || contadorV<0)){
						return false;
					}
					if (board[contadorV][contadorH]->getColor() == 'B' ){
						return false;
					}
					contadorV--;
					contadorH--;
				}
				return true;



					
			}else if(this->position.getY()>destiny.getY() && this->position.getX()<destiny.getX()){
				//Si la pieza esta en la parte inferior y movimiento diagonal a la derecha

				contadorV = this->position.getY();
				contadorH = this->position.getX();
				contadorV--;
				contadorH++;

				while (contadorV != destiny.getY() && contadorH != destiny.getX() ){
					if ((contadorH>7 || contadorH<0) || (contadorV>7 || contadorV<0)){
						return false;
					}
					if (board[contadorV][contadorH]->getColor() == 'B' ){
						return false;
					}
					contadorV--;
					contadorH++;
				}
				return true;

			}else if(this->position.getY()<destiny.getY() && this->position.getX()>destiny.getX()){
				//Si la pieza esta en la parte superior y movimiento diagonal a la izquierda
				contadorV = this->position.getY();
				contadorH = this->position.getX();
				contadorV++;
				contadorH--;

				while (contadorV != destiny.getY() && contadorH != destiny.getX() ){
					if ((contadorH>7 || contadorH<0) || (contadorV>7 || contadorV<0)){
						return false;
					}
					if (board[contadorV][contadorH]->getColor() == 'B' ){
						return false;
					}
					contadorV--;
					contadorH--;
				}
				return true;

			}else if(this->position.getY()<destiny.getY() && this->position.getX()<destiny.getX()){
				//Si la pieza esta en la parte superior y movimiento diagonal a la derecha
				contadorV = this->position.getY();
				contadorH = this->position.getX();
				contadorV++;
				contadorH++;

				while (contadorV != destiny.getY() && contadorH != destiny.getX() ){
					if ((contadorH>7 || contadorH<0) || (contadorV>7 || contadorV<0)){
						return false;
					}
					if (board[contadorV][contadorH]->getColor() == 'B' ){
						return false;
					}
					contadorV++;
					contadorH++;
				}
				return true;

			}

		}else{
			return false;
		}


	}else{
		if(board[destiny.getY()][destiny.getX()]==NULL || board[destiny.getY()][destiny.getX()]->getColor()=='B'){
			if(this->position.getY()>destiny.getY() && this->position.getX()>destiny.getX()){
				//Si la pieza esta en la parte inferior y movimiento diagonal a la izquierda
				contadorV = this->position.getY();
				contadorH = this->position.getX();

				while (contadorV != destiny.getY() && contadorH != destiny.getX() ){
					if ((contadorH>7 || contadorH<0) || (contadorV>7 || contadorV<0)){
						return false;
					}
					if (board[contadorV][contadorH]->getColor() == 'N' ){
						return false;
					}
					contadorV--;
					contadorH--;
				}
				return true;



					
			}else if(this->position.getY()>destiny.getY() && this->position.getX()<destiny.getX()){
				//Si la pieza esta en la parte inferior y movimiento diagonal a la derecha

				contadorV = this->position.getY();
				contadorH = this->position.getX();

				while (contadorV != destiny.getY() && contadorH != destiny.getX() ){
					if ((contadorH>7 || contadorH<0) || (contadorV>7 || contadorV<0)){
						return false;
					}
					if (board[contadorV][contadorH]->getColor() == 'N' ){
						return false;
					}
					contadorV--;
					contadorH++;
				}
				return true;

			}else if(this->position.getY()<destiny.getY() && this->position.getX()>destiny.getX()){
				//Si la pieza esta en la parte superior y movimiento diagonal a la izquierda
				contadorV = this->position.getY();
				contadorH = this->position.getX();


				while (contadorV != destiny.getY() && contadorH != destiny.getX() ){
					if ((contadorH>7 || contadorH<0) || (contadorV>7 || contadorV<0)){
						return false;
					}
					if (board[contadorV][contadorH]->getColor() == 'N' ){
						return false;
					}
					contadorV--;
					contadorH--;
				}
				return true;

			}else if(this->position.getY()<destiny.getY() && this->position.getX()<destiny.getX()){
				//Si la pieza esta en la parte superior y movimiento diagonal a la derecha
				contadorV = this->position.getY();
				contadorH = this->position.getX();

				while (contadorV != destiny.getY() && contadorH != destiny.getX() ){
					if ((contadorH>7 || contadorH<0) || (contadorV>7 || contadorV<0)){
						return false;
					}
					if (board[contadorV][contadorH]->getColor() == 'N' ){
						return false;
					}
					contadorV++;
					contadorH++;
				}
				return true;

			}

		}
	}
	*/

}

bool Bishop::moveTo(Piece*** board, Position destiny){
	if(isValidMove(board,destiny)){
		board[position.getY()][position.getX()] = NULL;
		position = destiny;
		board[position.getY()][position.getX()] = this;
		return true;
	}
	else{
		cout << "Invalid move" << endl;
		return false;
	}
}

string Bishop::toString()const{
	stringstream ss;
	if (color == 'N'){
		ss << "A";
	}
	else{
		ss << "a";
	}
	return ss.str();
}


