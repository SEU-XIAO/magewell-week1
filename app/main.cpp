#include <iostream>
#include <string_utils/string_utils.hpp>

int main(){
    std::string text="Hello,World!";
    std::cout<<"contains: "<<std::boolalpha<<string_utils::contains(text,"World")<<"\n";
    std::cout<<"starts_with:"<<string_utils::starts_with(text,"Hello")<<"\n";
    std::cout<<"ends_with: "<<string_utils::ends_with(text,"!")<<"\n";

    return 0;
}