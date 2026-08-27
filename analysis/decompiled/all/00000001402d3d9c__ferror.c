// Function: ferror
// Addr: 1402d3d9c
// Size: 44 bytes


/* Library Function - Single Match
    ferror
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl ferror(FILE *_File)

{
  uint uVar1;
  undefined4 *puVar2;
  
  if (_File == (FILE *)0x0) {
    puVar2 = (undefined4 *)FUN_1402caf34();
    *puVar2 = 0x16;
    FUN_1402cad8c();
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)((longlong)&_File->_base + 4) >> 4 & 1;
  }
  return uVar1;
}

