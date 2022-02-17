#include <iostream>
#include <fstream>

bool arg_check(int ac, char **av)
{
    if (ac == 4)
    {
        std::string file = av[1];
        std::string s1 = av[2];
        std::string s2 = av[3];
        if (file == "" || s1 == "" || s2 == "" ||
            s1.compare(s2) == 0)
            return (false);
        return (true);
    }
    return (false);
}

std::string file_name_suffixe(std::string file)
{
    std::string new_name = file;

    new_name += ".replace";
    std::cout << new_name << std::endl;
    return (new_name);
}

void my_find_replace(std::string *origin, std::string to_find, std:: string to_replace)
{
    size_t      pos;

    pos = origin->find(to_find);
    while (pos != origin->npos)
    {
        origin->erase(pos, to_find.length());
        origin->insert(pos, to_replace);
        pos = origin->find(to_find, (pos + to_replace.length()));
    }
}

bool    replacer(std::string file, std::string s1, std::string s2)
{
    std::ifstream       ifs(file.c_str());
    std::ofstream       ofs;
    std::string         replace_file = file_name_suffixe(file);
    std::string         str;

    if (ifs.fail())
        return (false);
    ofs.open(replace_file.c_str(), std::ofstream::trunc);
    if (ofs.fail())
        return (false);
    while (!ifs.eof())
    {
        if (ifs.fail())
            return (false);
        getline(ifs, str);
        my_find_replace(&str, s1, s2);
        ofs << str;
        if(!ifs.eof())
            ofs << std::endl;
    }
    ifs.close();
    ofs.close();
    return (true);
}

bool    fileexist(char *file)
{
    std::ifstream   ifs(file);

    if (!ifs.is_open())
        return (false);
    ifs.close();
    return (true);
}

int main( int ac, char **av )
{
    if (!arg_check(ac, av))
    {
        std::cout << "Error bad arguments" << std::endl;
        return (0);
    }
    if (!fileexist(av[1]))
    {
        std::cout << "File error : can't open [" << av[1] <<  "]" << std::endl;
        return (0);
    }
    std::string     file = av[1];
    std::string     s1 = av[2];
    std::string     s2 = av[3];

    if (!replacer(file, s1, s2))
        std::cout << "Error while reading file" << std::endl;
    return (0);
}

// use string.insert(position, string) and string.erase(start, end)
// string.find() and string.compare()