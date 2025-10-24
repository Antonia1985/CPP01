#include <string>
#include <fstream>
#include <iostream>

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cerr << "Provide filename string_one and string_two\n" << std::endl;
        return 1;
    }
    std::string oldFile = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];
    std::string newFile = oldFile + ".replace";
    if (s1.empty()) 
    {
        std::cerr << "Error: string_one cannot be empty\n";
        return 1;
    }

    std::ifstream infile (oldFile.c_str());
    if(!infile.is_open())
    {
        std::cerr << "Error: could not open file for reading\n";
        return 1;
    }

    std::ofstream outfile (newFile.c_str());
    if(!outfile.is_open())
    {
        std::cerr << "Error: could not open file for writing\n";
        return 1;
    }

    size_t size_s1 = s1.size();
    std::string line;
    while(std::getline(infile, line))
    {
        size_t pos  = 0;
        while (1)
        {
            if ((pos = line.find(s1, pos)) && (pos != std::string::npos)) // If pos exists
            {
                line.erase(pos, size_s1);   // Delete the s1 string in the line, if found
                line.insert(pos, s2);       // Insert the s2 at that pos
                pos += s2.size();           // skip over inserted text
                //outfile << line << std::endl; //copy paste the line into newFile
            }
            else // If pos doesn't exists
            {
                outfile << line << std::endl; // copy paste the line into newFile
                break;
            }
                
        }
    }

    outfile.close();
    infile.close();

    return 0;

}
