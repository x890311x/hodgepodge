#ifndef _DLL_H_
#define _DLL_H_

#if BUILDING_DLL
#define DLLIMPORT __declspec(dllexport)
#else
#define DLLIMPORT __declspec(dllimport)
#endif
extern "C" {
DLLIMPORT int add(int x,int y);
DLLIMPORT int p();
}
#endif
