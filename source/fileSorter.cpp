/**\file fileSorter.cpp*/
#include "fileSorter.h"

void FileSorter::run() {
	//get the directories to be sorted
	getTargetDirectories();

	//for each target directory
	for (unsigned int i = 0; i < m_targetDirectories.size(); i++) {

	}

}

//function that gets the raw directory data and then splits it into lines
/*
void FileSorter::getDirectoryData(unsigned int index) {
	//get the raw output
	std::string currentDirectoryRawData = getRawDirectoryData(m_targetDirectories[index], true);
	//split it into lines

}*/
