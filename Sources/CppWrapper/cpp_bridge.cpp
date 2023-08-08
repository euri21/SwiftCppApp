//
//  File.swift
//  
//
//  Created by euri on 8/1/23.
//

#include <cpp_bridge.hpp>

#include <string>
#include "Cpp/cpp_lib.hpp"

#ifdef __cplusplus
extern "C"
#endif
void show_message(char const* message) {
    std::string msg(message);
    show(msg);
}
