/**\file getRawFileData.h*/
#pragma once
#include <string>
#include <vector>
#include <fstream>
#include <iostream>
//gets the contents of a file and put its into a vector of string
std::vector<std::string> getRawFileData(std::string filename, bool debug = false);