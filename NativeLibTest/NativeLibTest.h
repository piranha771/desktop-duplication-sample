// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the NATIVELIBTEST_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// NATIVELIBTEST_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef NATIVELIBTEST_EXPORTS
#define NATIVELIBTEST_API extern "C" __declspec(dllexport)
#else
#define NATIVELIBTEST_API extern "C" __declspec(dllimport)
#endif

// This class is exported from the NativeLibTest.dll
class CNativeLibTest {
public:
	CNativeLibTest(void);
	// TODO: add your methods here.
};

NATIVELIBTEST_API int fnNativeLibTest(void);