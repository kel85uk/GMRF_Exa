#ifndef EXASTENCILS_UTIL_LOG_H
#define EXASTENCILS_UTIL_LOG_H

#include <iostream>
#include <fstream>

#define LOG_NOTE(msg) \
{ \
	std::cout << "[NOTE] " << __FILE__ << ", " << __LINE__ << ": " << msg << std::endl; \
}

#define LOG_WARNING(msg) \
{ \
	std::cerr << "[WARN] " << __FILE__ << ", " << __LINE__ << ": " << msg << std::endl; \
}

#define LOG_ERROR(msg) \
{ \
	std::cerr << "[ERR ] " << __FILE__ << ", " << __LINE__ << ": " << msg << std::endl; \
}

#define	ASSERT_WARNING(condition, msg, fail_op) \
{ \
	if (!(condition)) \
	{ \
		LOG_WARNING(msg); \
		fail_op; \
	} \
}

#define	ASSERT_ERROR(condition, msg, fail_op) \
{ \
	if (!(condition)) \
	{ \
		LOG_ERROR(msg); \
		fail_op; \
	} \
}

#define SAFE_DELETE(p) \
{ \
	if (0 == p) \
	{ LOG_WARNING("Trying to delete NULL pointer");} \
	else \
	{ \
	delete p; \
	p = NULL; \
	} \
}

#define SAFE_DELETE_SILENT(p) \
{ \
	if (0 != p) \
	{ \
	delete p; \
	p = NULL; \
	} \
}

#define SAFE_DELETE_A(p) \
{ \
	if (0 == p) \
	{ LOG_WARNING("Trying to delete NULL pointer");} \
	else \
	{ \
	delete[] p; \
	p = NULL; \
	} \
}

#define SAFE_DELETE_A_SILENT(p) \
{ \
	if (0 != p) \
	{ \
	delete[] p; \
	p = NULL; \
	} \
}

#endif
