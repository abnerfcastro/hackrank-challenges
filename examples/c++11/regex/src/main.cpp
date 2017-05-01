/*!
 * src/main.cpp
 * 
 * main function for project
 * Author: Abner Castro
 * Date: April 30th, 2017
 */

#include <iostream>
#include <regex>

using namespace std;

int main()
{
    std::string str;
    
    while (true)
    {
        std::cin >> str;

        // Regular expressions
        // regex expression("abc", regex_constants::icase);     // abc, aBc, ABC, ...
        // regex expression("abc.", regex_constants::icase);    // . any character except newline: abc1, abcA, ...
        // regex expression("abc?");                            // ? zero or 1 preceding character: ab, abc, ...
        // regex expression("abc*");                            // * zero or more preceding character: ab, abc, abcc, abccc ...
        // regex expression("abc+");                            // + one or more preceding character: abc, abcc, abccc ...
        // regex expression("ab[cd]*");                         // [...] any character inside square brackets: ab, abcd, abdc, abdd ...
        // regex expression("ab[^cd]*");                        // [...] any character that is not inside square brackets: ab, abe, abef, abfg ...
        // regex expression("ab[cd]{3}");                       // {x} exactly x of characters inside square brackets: abccc, abddd, abdcd ...
        // regex expression("ab[cd]{3,}");                      // {x,} exactly x or more of characters inside square brackets: abccc, abddddd, abdcdcddc ...
        // regex expression("ab[cd]{3,5}");                     // {x,y} between x and y number of characters inside square brackets: abccc, abddddd, abdcdcd ...
        // regex expression("abc|de[fg]");                      // | indicates or: abc, def, deg
        regex expression("[[:w:]]+@[[:w:]]+\\.com");          // [[:w:]] word character: digit, number or underscore
        

        bool match = regex_match(str, expression);
        bool search_match = regex_search(str, expression);

        std::cout << (match ? "Match" : "Not matched") << std::endl;
        std::cout << (search_match ? "Found" : "Not found") << std::endl << std::endl;
        
    }
}