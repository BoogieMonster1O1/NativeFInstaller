#include "os.h"

enum os get_os() {
#ifdef _WIN32
	return windows;
#elif __APPLE__ || __MACH__
	return macos;
#elif __linux__
	return linux;
#endif
}

enum file_seperator get_file_seperator() {
	enum os os = get_os();
	if (os == windows) {
		return backward_slash;
	}
	return forward_slash;
}
