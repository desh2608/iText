#ifndef _PDF_H_
#define _PDF_H_

#include <iostream>
#include <string.h>
#include <setjmp.h>
#include "hpdf.h"

jmp_buf env;

#ifdef HPDF_DLL
void  __stdcall
#else
void
#endif

error_handler(HPDF_STATUS   error_no,HPDF_STATUS   detail_no,void    *user_data)
{
	/* throw exception when an error has occured */
	printf("ERROR: error_no=%04X, detail_no=%d\n", (unsigned int)error_no,
		(int)detail_no);
	longjmp(env, 1);
}

class PDF{
private:
	//atributs

public:
	//operacions
	PDF();
	~PDF();
	int prova();
};

#endif