#include <iostream>
#include <fstream>
#include <vector>

std::fstream GetFile(std::string FileName)
{
    std::fstream file(FileName);
    file.open(FileName,std::ios::out | std::ios::app | std::ios::in);
    return file;
}

int main()
{
    std::string FileName = "settings.txt";
    std::fstream file = GetFile(FileName);
    std::string stuff;
    file.write("abc",3);
    file.seekg(0);
    std::getline(file,stuff);
    std::cout<<"stuff: "<<stuff<<'\n';
}

