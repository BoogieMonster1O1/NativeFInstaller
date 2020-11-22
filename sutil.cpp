#include "sutil.h"

using namespace std;

string create_json(string& mcVersion, string& loaderVersion) {
	return regex_replace(regex_replace(string(g_json), regex(R"(\$\{mcVersion\})"), mcVersion), regex(R"(\$\{loaderVersion\})"), loaderVersion);
}

string create_name(string& mcVersion, string& loaderVersion) {
	return regex_replace(regex_replace("fabric-${loaderVersion}-${mcVersion}", regex(R"(\$\{mcVersion\})"), mcVersion), regex(R"(\$\{loaderVersion\})"), loaderVersion);
}
