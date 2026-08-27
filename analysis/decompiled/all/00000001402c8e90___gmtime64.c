// Function: _gmtime64
// Addr: 1402c8e90
// Size: 72 bytes


/* Library Function - Single Match
    _gmtime64
   
   Library: Visual Studio 2019 Release */

tm * __cdecl _gmtime64(__time64_t *_Time)

{
  int iVar1;
  tm *ptVar2;
  tm *ptVar3;
  
  ptVar2 = __getgmtimebuf();
  ptVar3 = (tm *)0x0;
  if ((ptVar2 != (tm *)0x0) &&
     (iVar1 = common_gmtime_s<__int64>(ptVar2,_Time), ptVar3 = ptVar2, iVar1 != 0)) {
    ptVar3 = (tm *)0x0;
  }
  return ptVar3;
}

