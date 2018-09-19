#include <stdio.h>
#include "log.h"

int main(int argc, const char **argv)
{
	init_log(argv[0] ? argv[0] : ":-)");
	log_info("Hello World info !\n");
	log_err("Hello World err !\n");
	log_err(NULL);
	closelog();
	return 0;
}
