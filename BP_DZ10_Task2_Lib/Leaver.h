#pragma once
#ifdef LEAVERLIBRARYDYNAMIC_EXPORTS
#define LEAVER_API __declspec(dllexport)
#else
#define LEAVER_API __declspec(dllimport)
#endif

#include <iostream>

namespace Leaver {
	class Leaver {
	public:
		LEAVER_API std::string leave(std::string str);
	};
}