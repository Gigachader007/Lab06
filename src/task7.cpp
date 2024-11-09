#include <lab.hpp>

void reverseNum(std::list<int>& lst){
    std::list<int> tmp{}; //trick fix
    for(auto el : lst){
        tmp.emplace_back(-el);
        tmp.emplace_back(el);
    }
    lst = tmp;
    //Как мне известно, не хорошо добавлять/удалять элементы из контейнеров по ходу цикла, так как из-за переаллокации бывшие указатели и итераторы могут стать невалидными.
    //Язык Rust не имеет данных недостатков
}