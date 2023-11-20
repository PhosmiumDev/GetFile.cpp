#include <iostream>
#include <fstream>
#include <vector>

bool worked = false;
std::string buffer;
std::string settings;

std::fstream GetFile(std::string FileName)
{
    std::fstream file(FileName);
    file.open(FileName,std::ios::out);
    file.close();
    return file;
}

void WriteFileMode(std::fstream& file,std::string FileName)//before you write inside a file you should run this function
{
    if (file.is_open())
    {
        file.close();
    }
    file.open(FileName,std::ios::out);
}

void ReadFileMode(std::fstream& file,std::string FileName)//before you read inside a file you should run this function
{
    if (file.is_open())
    {
        file.close();
    }
    file.open(FileName,std::ios::in);
}

int main()
{
    std::string FileName = "settings.txt";
    std::fstream file = GetFile(FileName);
    ReadFileMode(file,FileName);

    std::getline(file, buffer);

    while (std::getline(file, buffer))
    {
        settings.append(buffer+'\n');
    }
    std::cout<< settings << '\n';
}
