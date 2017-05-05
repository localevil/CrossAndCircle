#include "libs.h"

class CRuls
{
	private:
		int winner;
	public:
		CRuls();
		~CRuls();
		void changeArray(int (&arr) [3] [3], bool &quit);	
};
