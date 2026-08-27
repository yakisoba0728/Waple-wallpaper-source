// Function: FID_conflict:_localtime64
// Addr: 1402d0a3c
// Size: 72 bytes


/* Library Function - Multiple Matches With Different Base Names
    _gmtime32
    _gmtime64
    _localtime32
    _localtime64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

tm * __cdecl FID_conflict__localtime64(__time32_t *_Time)

{
  int iVar1;
  tm *ptVar2;
  tm *ptVar3;
  
  ptVar2 = __getgmtimebuf();
  ptVar3 = (tm *)0x0;
  if ((ptVar2 != (tm *)0x0) && (iVar1 = FUN_1402d073c(ptVar2,_Time), ptVar3 = ptVar2, iVar1 != 0)) {
    ptVar3 = (tm *)0x0;
  }
  return ptVar3;
}

