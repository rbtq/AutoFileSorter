/**\file fileSorter.h*/
#pragma once
#include "getRawDirectoryData.h"
#include "getRawFileData.h"
#include <vector>

class FileSorter {

private:
	std::vector<std::string> m_targetDirectories; //!<the directories to be sorted
	std::vector<std::string> m_currentDirectoryData; //!<the contents of the directory to be sorted


	//void getDirectoryData(unsigned int index);
	void getTargetDirectories() { m_targetDirectories = getRawFileData("config/targetDirectories.txt", true); };
public:
	FileSorter() {}; //!<constructor

	void run(); //!<sort all the files out


};