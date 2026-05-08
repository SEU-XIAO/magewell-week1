#pragma once
#include <string>
#include <vector>
#include <string_view>

namespace string_utils{
    bool contains(std::string_view str, std::string_view substr);

    bool starts_with(std::string_view str, std::string_view prefix);

    bool ends_with(std::string_view str, std::string_view suffix);

    auto to_upper(std::string_view str)-> std::string;

    auto to_lower(std::string_view str)-> std::string;

    std::string trim(std::string_view str);

    std::string trim_left(std::string_view str);

    std::string trim_right(std::string_view str);

    std::string replace(std::string_view str, std::string_view from, std::string_view to);

    auto split(std::string_view str, char delim)-> std::vector<std::string>;

    auto join(const std::vector<std::string>& parts, std::string_view separator)-> std::string;
}