//Main file
#include "libs.h"
#include "Main.h"

int main()
{
    CMain *cmain = new CMain();

    cmain->mainLoop();
    
    delete cmain;

    return 0;
}

