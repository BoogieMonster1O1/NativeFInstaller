#ifndef NATIVEFINSTALLER_SUTIL_H
#define NATIVEFINSTALLER_SUTIL_H

#include <string>
#include <regex>
#include "main.h"

std::string create_json(std::string& mcVersion, std::string& loaderVersion);

std::string create_name(std::string& mcVersion, std::string& loaderVersion);

#endif
