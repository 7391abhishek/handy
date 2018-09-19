/**
 * Aim : To provide a handy header file for logging using syslog.
 */

#ifndef LOG
#define LOG

#include <syslog.h>
#include <stdint.h>

static inline void log_err(const char* fmt)
{
	syslog(LOG_ERR, fmt);
}

static inline void log_info(const char* fmt)
{
	syslog(LOG_INFO, fmt);
}

static inline void init_log(const char *prefix)
{
	openlog(prefix ? prefix : "NP", LOG_CONS | LOG_PID,
			LOG_SYSLOG);
}

#endif
