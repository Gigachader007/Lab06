#include <lab.hpp>

int wordsCounter(const std::string& str){
    const std::string delims = " ,.\n";
    int counter = 0;
    for(std::string::const_iterator it = str.begin(); it != str.end(); ++it){
        if(it == str.end()-1){
            if(delims.find(*it) == std::string::npos){
                return ++counter;
            }
        }
        auto sym1 = *it;
        auto sym2 = *(it+1);
        if((delims.find(sym1) == std::string::npos && delims.find(sym2) != std::string::npos))
        {
            counter++;
        }
    }
    return counter;
}