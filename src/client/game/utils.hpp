#pragma once

#include "structs.hpp"

namespace game
{
	std::string get_dvar_string(const char* dvar_name);
	int get_dvar_int(const char* dvar_name);
	bool get_dvar_bool(const char* dvar_name);

	const dvar_t* register_dvar_bool(const char* dvar_name, bool value, int flags, const char* description);
	const dvar_t* register_sessionmode_dvar_bool(const char* dvar_name, bool value, int flags, const char* description, eModes mode = MODE_COUNT);
	const dvar_t* register_dvar_string(const char* dvar_name, const char* value, int flags, const char* description);
	void dvar_add_flags(const char* dvar, dvarFlags_e flags);
	void dvar_set_flags(const char* dvar_name, dvarFlags_e flags);
}
