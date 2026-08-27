// Function: __getgmtimebuf
// Addr: 1402c8e44
// Size: 75 bytes


/* Library Function - Single Match
    __getgmtimebuf
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

tm * __cdecl __getgmtimebuf(void)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  
  lVar1 = FUN_1402d98f4();
  if (lVar1 != 0) {
    if (*(tm **)(lVar1 + 0x68) != (tm *)0x0) {
      return *(tm **)(lVar1 + 0x68);
    }
    uVar2 = _malloc_base(0x24);
    *(undefined8 *)(lVar1 + 0x68) = uVar2;
    FUN_1402d9040(0);
    if (*(tm **)(lVar1 + 0x68) != (tm *)0x0) {
      return *(tm **)(lVar1 + 0x68);
    }
  }
  puVar3 = (undefined4 *)FUN_1402caf34();
  *puVar3 = 0xc;
  return (tm *)0x0;
}

