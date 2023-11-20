#include <iostream>
#include <fstream>
#include <vector>

bool worked = false;

std::fstream GetFile(std::string FileName)
{
    std::fstream file(FileName);
    file.open(FileName,std::ios::out);
    file.close();
    return file;
}

int main()
{
    std::string FileName = "settings.txt";
    std::fstream file = GetFile(FileName);
    std::string stuff;
    file.open(FileName,std::ios::out);
    file.write("abc", 3);
    file.close();
    file.seekg(0);
    file.open(FileName,std::ios::in);
    std::getline(file, stuff);
    file.close();
    std::cout << "stuff: " << stuff << '\n';
}
