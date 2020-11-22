#include <stdio.h>
#include <sys/stat.h>
#include <stdlib.h>
#include "writer.h"
#include "os.h"

int main(int argc, char **argv) {
	if (argc < 2) {
		printf("Usage: \n");
		char *executable = argv[0];
		printf("\t %s %s\n", executable, "<minecraft version>");
		printf("\t %s %s %s\n", executable, "<minecraft version>", "[loader version]");
		return 0;
	}

	char *mcVersion = argv[1];
	char *loaderVersion = "0.10.8";

	if (argc > 2) {
		loaderVersion = argv[2];
	}

	printf("Minecraft Version: %s\n", mcVersion);
	printf("Fabric Loader Version: %s\n", loaderVersion);
	char *path;

	enum os os = get_os();
	if (os == windows) {
		printf("Detected windows\n");
		path = "~\\AppData\\Roaming\\.minecraft\\versions\\";
	} else if (os == macos) {
		printf("Detected Mac OS\n");
		path = "~/Library/Application Support/minecraft/versions/";
	} else if (os == linux) {
		printf("Detected Linux\n");
		path = "~/.minecraft/versions/";
	} else {
		printf("Your Operating System is not supported");
		return 1;
	}

	if (!mkdir(path, rw_r_r)) {
		printf("Unable to create directories!");
		exit(1);
	}

	create_and_write(mcVersion, loaderVersion, path);
	printf("Successfully created version fabric-%s-%s\n", mcVersion, loaderVersion);

	return 0;
}
