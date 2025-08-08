//
// Created by root on 25-8-9.
//

#ifndef LIB_CORE_BASE64_HPP
#define LIB_CORE_BASE64_HPP
#include<string_view>
std::string base64_encode     (std::string_view s, bool url = false);
std::string base64_encode_pem (std::string_view s);
std::string base64_encode_mime(std::string_view s);
std::string base64_decode(std::string_view s, bool remove_linebreaks = false);
#endif //LIB_CORE_BASE64_HPP
