#include "file_logger.hpp"
#include <fstream>
#include <iostream>

// Constructor 
FileLogger::FileLogger(std::string filename)
{
    // åbner filen til skrivning
    logfile.open(filename, std::ios::out);
}

// Log
void FileLogger::log(std::string msg)
{
    // skriver indholdet til filen endl for linjeskift
    logfile << msg << std::endl;
}

// Destructor
FileLogger::~FileLogger()
{
    // lukker filen igen
    logfile.close();
}