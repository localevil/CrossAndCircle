#include "libs.h"
#include "Ruls.h"
#include "image.h"
#include "SDL_Setup.h"

class CController
{
	private:
		CRuls *ruls;	
	    	
		//Массив определения победителя
	    	int arr[3] [3];
	public:
		CController();
		~CController();
		void init_int_arr();
	    	void drawPosition(CImage *fild_arr [3][3], CSDL_Setup *csdl_setup,int mouse_x, int mouse_y, std::string file, int index);
		void CheckWinner(bool &quit);
};
