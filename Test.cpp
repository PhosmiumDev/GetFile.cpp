#include <iostream>
#include <fstream>
#include <vector>

std::fstream GetFile(std::string FileName)
{
    std::fstream file;
    file.open(FileName,(std::ios::in,std::ios::out));
    return file;
}

int main()
{
    std::fstream file = GetFile("settings.txt");
    std::vector<std::string> stuff;
    file.
    file.get(b);
    std::cout<<"stuff: "<<b<<'\n';
}

