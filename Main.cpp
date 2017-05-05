#include "Main.h"

CMain::CMain()
{ 
	turn = true;
	
	init_int_arr();

	ruls = new CRuls();	

	csdl_setup = new CSDL_Setup();
    
	init_arr();

}
void CMain::mainLoop()
{
    while(!quit && csdl_setup->getMainEvent()->type != SDL_QUIT)
    {   

        csdl_setup->begin();
	if(SDL_WaitEventTimeout(csdl_setup->getMainEvent(),200))
	{
        if(csdl_setup->getMainEvent()->type == SDL_MOUSEBUTTONUP)
        {
            if(csdl_setup->getMainEvent()->button.button == SDL_BUTTON_LEFT)
            {	
		
                SDL_GetMouseState(&mouse_x, &mouse_y);
	
		if(turn)
		{	
			turn = false;
			drawPosition(mouse_x, mouse_y, "cross.png", 1);
		}
		else
		{
			turn = true;
			drawPosition(mouse_x, mouse_y, "curcle.png", 2);
		}
		}   
        }
	}

		
		ruls->changeArray(arr, quit);

            	draw_arr();
            
        	csdl_setup->end();

    }

}

void CMain::drawPosition(int mouse_x,int  mouse_y, std::string file, int index)
{

		// Поле 1 строки 1 столбца
               if((mouse_x > 5) && (mouse_x < 145) && (mouse_y > 5) && (mouse_y < 145) )
                {
                    fild_arr [0] [0] = new CImage(file, 0,0,150,150,csdl_setup->getRenderer());
                    arr [0] [0]  = index;
                }
	       	// Поле 1 строки 2 столбца
                if((mouse_x > 155) && (mouse_x < 295) && (mouse_y > 5) &&  (mouse_y < 145) )
                {    
                    fild_arr [1] [0] = new CImage(file, 150,0,150,150,csdl_setup->getRenderer());
                    arr [1] [0]  = index;
                }
		// Поле 1 строки 3 столбца
                if((mouse_x > 305) && (mouse_x < 445) && (mouse_y > 5) &&  (mouse_y < 145) )
                {
                    fild_arr [2] [0] = new CImage(file, 300,0,150,150,csdl_setup->getRenderer());
                    arr [2] [0]  = index;
                }
		// Поле 2 строки 1 столбца
                if((mouse_x > 5) && (mouse_x < 145) && (mouse_y > 155) &&  (mouse_y < 295) )
                {
                    fild_arr [0] [1] = new CImage(file, 0,150,150,150,csdl_setup->getRenderer());
                    arr [0] [1]  = index;
                }
		// Поле 2 строки 2 столбца
                if((mouse_x > 155) && (mouse_x < 295) && (mouse_y > 155) &&  (mouse_y < 295) )
                {    
                    fild_arr [1] [1] = new CImage(file, 150,150,150,150,csdl_setup->getRenderer());
                    arr [1] [1]  = index;
                }
		// Поле 2 строки 3  столбца
                if((mouse_x > 305) && (mouse_x < 445) && (mouse_y > 155) &&  (mouse_y < 295) )
                {
                    fild_arr [2] [1] = new CImage(file, 300,150,150,150,csdl_setup->getRenderer());
                    arr [2] [1]  = index;
                }
		// Поле 3 строки 1 столбца 
                if((mouse_x > 5) && (mouse_x < 145) && (mouse_y > 295) &&  (mouse_y < 445) )
                {
                    fild_arr [0] [2] = new CImage(file, 0,300,150,150,csdl_setup->getRenderer());
                    arr [0] [2]  = index;
                }
		// Поле 3 строки 2 столбца
                if((mouse_x > 155) && (mouse_x < 295) && (mouse_y > 295) &&  (mouse_y < 445) )
                {    
                    fild_arr [1] [2] = new CImage(file, 150,300,150,150,csdl_setup->getRenderer());
                    arr [1] [2]  = index;
                }
		// Поле 3 строки 3 столбца
                if((mouse_x > 305) && (mouse_x < 445) && (mouse_y > 295) &&  (mouse_y < 445) )
                {
                    fild_arr [2] [2] = new CImage(file, 300,300,150,150,csdl_setup->getRenderer());
                    arr [2] [2]  = index;
                }
}

void CMain::init_arr()
{
    int pos_X = 0;
    for(int i = 0; i < 3; i++)
    {
        int pos_Y = 0;
        for(int j = 0; j < 3; j++)
        {    
            fild_arr[i][j]= new CImage("fild1.png", pos_X, pos_Y, 150, 150, csdl_setup->getRenderer());        
            pos_Y +=150;
        }
        pos_X +=150;
    }
}

void CMain::draw_arr()
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {    
            fild_arr[i][j] -> draw();
        }
    }
}

void CMain::init_int_arr()
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {    
            arr[i][j] = 0;
        }
    }
}

CMain::~CMain()
{   
    //delete fild;
    delete csdl_setup;
}

