#include "Controller.h"

CController::CController()
{
	ruls = new CRuls();

	init_int_arr();
};

//Установка фигуры в зависимоти от игрока и положения мыши
void CController::drawPosition(CImage *fild_arr [3][3], CSDL_Setup *csdl_setup, int mouse_x,int  mouse_y, std::string file, int index)
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

void CController::CheckWinner(bool &quit)
{
	//Проверка победителя		
	ruls->changeArray(arr, quit);
}

//Инициализация масива проверки победителя
void CController::init_int_arr()
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {    
            arr[i][j] = 0;
        }
    }
}

CController::~CController()
{
	delete ruls;
}
