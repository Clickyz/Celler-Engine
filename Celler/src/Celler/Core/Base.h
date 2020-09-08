#pragma once

#ifdef CR_PLATFORM_WINDOWS
 #ifdef CR_BUILD_DLL
   #define CELLER_API __declspec(dllexport)
  #else
   #define CELLER_API __declspec(dllimport)
 #endif
#else
 #error Celler Currently Does Not Support Your Platform!
#endif