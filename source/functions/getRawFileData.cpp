/**\file getRawFileData.cpp*/
#pragma once
#include "getRawFileData.h"
//gets the contents of a file and put its into a vector of string
std::vector<std::string> getRawFileData(std::string filename, bool debug) {
	std::ifstream file; //file var
	std::vector<std::string> data;
	std::string line = "";
	//open file
	file.open(filename, std::ios::in);

	//read contents
	while (!file.eof()) {
		std::getline(file, line);
		data.push_back(line);
		//debug
		if (debug) std::cout << line << std::endl;
	}
	//close after
	file.close();
	return data;
}