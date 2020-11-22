#ifndef NATIVEFINSTALLER_OS_H
#define NATIVEFINSTALLER_OS_H

#include "sutil.h"

enum os {
	windows,
	macos,
	linux,
	other
};

enum file_seperator {
	forward_slash = '/',
	backward_slash = '\\'
};

enum os get_os();

enum file_seperator get_file_seperator();

#endif
