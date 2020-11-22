#ifndef NATIVEFINSTALLER_OS_H
#define NATIVEFINSTALLER_OS_H

#include <stdio.h>

enum os {
	windows,
	macos,
	linux
};

enum permissions {
	rw_r_r = 0644,
	rwx_r_r = 0744,
	rwx_rx_rx = 0755
};

enum file_seperator {
	forward_slash = '/',
	backward_slash = '\\'
};

enum os get_os();

enum file_seperator get_file_seperator();

#endif
