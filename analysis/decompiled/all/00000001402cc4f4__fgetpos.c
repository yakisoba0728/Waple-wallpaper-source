// Function: fgetpos
// Addr: 1402cc4f4
// Size: 75 bytes


/* Library Function - Single Match
    fgetpos
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl fgetpos(FILE *_File,fpos_t *_Pos)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  if ((_File == (FILE *)0x0) || (_Pos == (fpos_t *)0x0)) {
    puVar2 = (undefined4 *)FUN_1402caf34();
    *puVar2 = 0x16;
    FUN_1402cad8c();
    iVar1 = -1;
  }
  else {
    lVar3 = FUN_1402e0430();
    *_Pos = lVar3;
    iVar1 = (lVar3 != -1) - 1;
  }
  return iVar1;
}

