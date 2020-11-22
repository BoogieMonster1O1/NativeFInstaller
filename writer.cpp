#include "writer.h"
#include "sutil.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void write(char *mcVersionC, char *loaderVersionC, char *pathC, char fileSeperator) {
	string mcVersion = string(mcVersionC);
	string loaderVersion = string(loaderVersionC);
	string path = string(pathC);
	path += (create_name(mcVersion, loaderVersion) + ".json");
	ofstream stream(path);
	stream << create_json(mcVersion, loaderVersion);
	stream.close();
}
