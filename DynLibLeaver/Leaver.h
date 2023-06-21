#pragma once
#include <string>
#ifdef DYNLIBLEAVER_EXPORTS
#define DYNLIBLEAVER_API __declspec(dllexport)
#else
#define DYNLIBLEAVER_API __declspec(dllimport)
#endif
namespace Leaver_ns 
{
	class Leaver {
	public:
		DYNLIBLEAVER_API std::string leaver(std::string str);
	};
}
