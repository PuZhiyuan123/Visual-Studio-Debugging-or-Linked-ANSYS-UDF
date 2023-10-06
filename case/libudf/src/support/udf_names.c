/* This file generated automatically. */ 
/*          Do not modify.            */ 
#include "udf.h" 
#include "prop.h" 
#include "dpm.h" 
extern DEFINE_SOURCE(porous, cell, thread, dS, eqn);
__declspec(dllexport) UDF_Data udf_data[] = { 
{"porous", (void (*)(void))porous, UDF_TYPE_SOURCE},
}; 
__declspec(dllexport) int n_udf_data = sizeof(udf_data)/sizeof(UDF_Data); 
#include "version.h" 
__declspec(dllexport) void UDF_Inquire_Release(int *major, int *minor, int *revision) 
{ 
  *major = RampantReleaseMajor; 
  *minor = RampantReleaseMinor; 
  *revision = RampantReleaseRevision; 
} 
