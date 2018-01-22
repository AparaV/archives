// Files-1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	FILE *master_fptr;
	FILE *trans_fptr;

	master_fptr = fopen("master.dat", "w");

	fprintf(master_fptr, "%d%s%f", 100, "Alan Jones", 348.17);
	fprintf(master_fptr, "%d%s%f", 300, "Mary Smith", 27.19);
	fprintf(master_fptr, "%d%s%f", 500, "Sam Sharp", 0.00);
	fprintf(master_fptr, "%d%s%f", 700, "Suzy Green", -14.22);

	fclose(master_fptr);

	trans_fptr = fopen("trans.dat", "w");

	fprintf(trans_fptr, "%d%f", 100, 27.14);
	fprintf(trans_fptr, "%d%f", 300, 62.11);
	fprintf(trans_fptr, "%d%f", 400, 100.56);
	fprintf(trans_fptr, "%d%f", 900, 82.17);

	fclose(trans_fptr);

    return 0;
}

