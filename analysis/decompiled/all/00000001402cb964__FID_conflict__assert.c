// Function: FID_conflict:_assert
// Addr: 1402cb964
// Size: 115 bytes


/* Library Function - Multiple Matches With Different Base Names
    _assert
    _wassert
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl FID_conflict__assert(wchar_t *_Message,wchar_t *_File,uint _Line)

{
  code *pcVar1;
  int iVar2;
  undefined8 unaff_retaddr;
  
  iVar2 = FUN_1402deb4c(3);
  if (iVar2 != 1) {
    if (iVar2 == 0) {
      iVar2 = FUN_1402d1f00();
      if (iVar2 == 1) goto LAB_1402cb9c8;
    }
    FUN_1402cb1e8(_Message,_File,_Line,unaff_retaddr);
    return;
  }
LAB_1402cb9c8:
  FUN_1402cb7a8(_Message,_File,_Line);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

