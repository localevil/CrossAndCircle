//Main class
#include "libs.h"
#include "SDL_Setup.h"
#include "image.h"
#include "Ruls.h"

class CMain
{
    private:
	    //Переменная выхода
	    bool quit; 
	    
	    //Пременные позиции мыши
	    int mouse_x = 0;
	    int mouse_y = 0;

	    CSDL_Setup *csdl_setup;

	    CImage *fild;
	    CImage *fild_arr [3] [3];

	    CRuls *ruls;  
    	    
	    //Массив определения победителя
	    int arr[3] [3];
    	    
	    //Переменная очереди
	    bool turn;
   
    public:
	    CMain();
    	    ~CMain();
    	    
	    void mainLoop();
    	    
	    void init_arr();
	    void draw_arr();
	    
	    void init_int_arr();
	    
	    void drawPosition(int mouse_x, int mouse_y, std::string file, int index);
};
