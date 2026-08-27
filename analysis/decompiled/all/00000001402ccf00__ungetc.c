// Function: ungetc
// Addr: 1402ccf00
// Size: 88 bytes


/* Library Function - Single Match
    ungetc
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl ungetc(int _Ch,FILE *_File)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (_File == (FILE *)0x0) {
    puVar2 = (undefined4 *)FUN_1402caf34();
    *puVar2 = 0x16;
    FUN_1402cad8c();
    iVar1 = -1;
  }
  else {
    FUN_1402c9b24(_File);
    iVar1 = FUN_1402ccde0(_Ch,_File);
    FUN_1402c9b30(_File);
  }
  return iVar1;
}

