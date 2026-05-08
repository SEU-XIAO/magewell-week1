#include "string_utils/string_utils.hpp"
#include <cctype>

namespace string_utils{

    bool contains(std::string_view str, std::string_view substr){
        return str.find(substr)!=std::string_view::npos;
    }

    bool starts_with(std::string_view str, std::string_view prefix){
        if(prefix.size()>str.size()){
            return false;
        }
        return str.substr(0,prefix.size())==prefix;
    }

    bool ends_with(std::string_view str, std::string_view suffix)
    {
        if(suffix.size()>str.size()){
            return false;
        }
        return str.substr(str.size()-suffix.size())==suffix;
    }

    auto to_upper(std::string_view str)-> std::string{
        std::string result(str);
        for(auto& c:result){
            c=std::toupper(c);
        }
        return result;
    }

    auto to_lower(std::string_view str)-> std::string{
        std::string result(str);
        for(auto& c:result){
            c=std::tolower(c);
        }
        return result;
    }

    std::string trim_left(std::string_view str){
        auto pos=str.find_first_not_of(" \t\n\r");
        return std::string(pos==std::string_view::npos?"":str.substr(pos));
    }

    std::string trim_right(std::string_view str){
        auto pos=str.find_last_not_of(" \t\n\r");
        return std::string(pos==std::string_view::npos?"":str.substr(0,pos+1));
    }

    std::string trim(std::string_view str){
        return trim_left(trim_right(str));
    }

    std::string replace(std::string_view str, std::string_view from, std::string_view to){
        if(from.empty()) return std::string(str);

        std::string result(str);
        std::string::size_type pos=0;
        while((pos=result.find(from,pos))!=std::string::npos){
            result.replace(pos,from.size(),to);
            pos+=to.size();
        }
        return result;
    }

    auto split(std::string_view str, char delim)-> std::vector<std::string>{
        std::vector<std::string> result;
        std::string::size_type start=0;
        std::string::size_type end=str.find(delim);

        while(end!=std::string_view::npos){
            result.push_back(std::string(str.substr(start,end-start)));
            start=end+1;
            end=str.find(delim,start);
        }
        result.push_back(std::string(str.substr(start)));
        return result;
    }

    auto join(const std::vector<std::string>& parts, std::string_view separator)-> std::string{
        std::string result;
        for(std::size_t i=0;i<parts.size();i++){
            if(i>0){
                result+=separator;
            }
            result+=parts[i];
        }
        return result;
    }

}
