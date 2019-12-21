#include "file.h"

int __File_is_open(File*);
void __File_open(File*, const char*);
void __File_printf(File*,const char*, ...);
void __File_scanf(File*,const char*, ...);

File new_File(const char* filename)
{
	File temp = {
		.__file = fopen(filename),
		.is_open = __File_is_open,
		.open = __File_open,
		.printf = __File_printf,
		.scanf = __File_scanf
	};
	return temp;
}



