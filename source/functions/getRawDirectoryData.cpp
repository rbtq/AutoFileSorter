/**\file getRawData.h*/
#pragma once
#include "getRawDirectoryData.h"
#include <iostream>
std::string getRawDirectoryData(std::string dir, bool debug) //gets the contents of a directory and put its into a string
{
	//vars
	char output[100];
	std::string outputString = "";
	FILE* pPipe;

	if (debug) std::cout << std::string("dir " + dir).c_str() << std::endl;

	//run dir music to get the contents of the music directory
	//use rt so the output can be read like a text file
	if ((pPipe = _popen(std::string("dir " + dir).c_str(), "rt")) == NULL)
	{
		exit(1);
	}

	/* Read pipe until end of file, or an error occurs. */

	while (fgets(output, 100, pPipe))
	{
		outputString += output;
	}
	//debug
	if (debug) std::cout << outputString << std::endl;

	int endOfFileVal = feof(pPipe);
	int closeReturnVal = _pclose(pPipe);

	if (endOfFileVal)
	{
		printf("\nProcess returned %d\n", closeReturnVal);
	}
	else
	{
		printf("Error: Failed to read the pipe to the end.\n");
	}

	return outputString;
}
