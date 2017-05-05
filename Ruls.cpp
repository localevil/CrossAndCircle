//Проверка комбинации победителя
#include "Ruls.h"

CRuls::CRuls()
{
	winner = 0;	
}

//Проверка и отображение победителя
void CRuls::changeArray(int (&arr) [3] [3], bool &quit)
{
	
        //Столбцы
        if((arr [0] [0] == arr [0] [1]) && (arr [0] [1] == arr [0] [2]) && (arr [0] [0] != 0)) 
            {
		winner = arr [0] [0];	
            }
        if((arr [1] [0] == arr [1] [1]) && (arr [1] [1] == arr [1] [2]) && (arr [1] [0] != 0)) 
            {
		winner = arr [1] [0];	
            }
        if((arr [2] [0] == arr [2] [1]) && (arr [2] [1] == arr [2] [2]) && (arr [2] [0] != 0)) 
            {
		winner = arr [2] [0];	
            }
        //Строки
        if((arr [0] [0] == arr [1] [0]) && (arr [1] [0] == arr [2] [0]) && (arr [0] [0] != 0)) 
            {
		winner = arr [0] [0];	
            }
        if((arr [0] [1] == arr [1] [1]) && (arr [1] [1] == arr [2] [1]) && (arr [0] [1] != 0)) 
            {
		winner = arr [0] [1];	
            }
        if((arr [0] [2] == arr [1] [2]) && (arr [1] [2] == arr [2] [2]) && (arr [0] [2] != 0)) 
            {
		winner = arr [0] [2];	
            }
        //Диагонали
        if((arr [0] [0] == arr [1] [1]) && (arr [1] [1] == arr [2] [2]) && (arr [0] [0] != 0)) 
            {
		winner = arr [0] [0];	
            }
        if((arr [2] [0] == arr [1] [1]) && (arr [1] [1] == arr [0] [2]) && (arr [2] [0] != 0)) 
            {
		winner = arr [2] [0];	
            }         
	if(winner == 1)
	{
		std::cout << "Крестики победили" << std::endl;
		quit = true;
	}
	else if(winner == 2)
	{
		std::cout << "Нолики Победили" << std::endl;
		quit = true;
	}
}



CRuls::~CRuls()
{

}
