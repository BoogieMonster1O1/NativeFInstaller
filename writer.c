#include "writer.h"
#include "main.h"
#include <stdio.h>

void create_and_write(char *mcVersionC, char *loaderVersionC, char *pathC) {
	FILE *file = fopen(pathC, "w");
	fprintf(file, g_json, mcVersionC, mcVersionC, loaderVersionC, mcVersionC, loaderVersionC);
}
