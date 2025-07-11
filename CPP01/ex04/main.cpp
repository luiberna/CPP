/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiberna <luiberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 18:13:12 by luiberna          #+#    #+#             */
/*   Updated: 2024/10/15 00:24:52 by luiberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <fstream>
#include <iostream>

int     createOutfile(std::ofstream &outfile, std::string filename, std::string &content)
{
    std::string outname = filename + ".replace";
    outfile.open(outname.c_str());
    if (!outfile)
        return 0;
    outfile << content;
    outfile.close();
    return 1;
}

void    replaceContent(std::string &content, std::string str1, std::string str2)
{
    size_t i = 0;
    
    while((i = content.find(str1, i)) != std::string::npos)
    {
        content.erase(i, str1.length());
        content.insert(i, str2);
        i = i + str2.length();
    }
}

void    getContent(std::string &content, std::ifstream &infile)
{
    char c;
    
    while(infile.get(c))
        content.push_back(c);
    infile.close();
}

// void    getContent(std::string &content, std::ifstream &infile)
// {
//     content.assign(std::istreambuf_iterator<char>(infile), std::istreambuf_iterator<char>());
//     infile.close();
// }

int     getInfile(std::ifstream &infile, std::string &filename)
{
    infile.open(filename.c_str());
    if (!infile)
        return 0;
    return 1;
}

int     main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "Error: arguments need to be: <filename> <string to replace> <replacement string>\n";
        return 1;
    }
    
    std::string filename = argv[1];
    std::string str1 = argv[2];
    std::string str2 = argv[3];
    std::ifstream infile;
    std::ofstream outfile;
    std::string content;

    if (str1.empty() || str2.empty()) {
        std::cout << "Error: Empty string\n";
    }
    if (!getInfile(infile, filename)) {
        std::cout << "Error getting infile\n";
        return 1;
    }
    getContent(content, infile);
    replaceContent(content, str1, str2);
    if (!createOutfile(outfile, filename, content)) {
        std::cout << "Error creating outfile\n";
        return 1;
    }
    std::cout << "Replacement successfully done\n";
    return 0;
}

