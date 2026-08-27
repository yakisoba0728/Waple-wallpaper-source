// Function: fsetpos
// Addr: 1402cc104
// Size: 53 bytes


/* Library Function - Single Match
    fsetpos
   
   Library: Visual Studio */

int __cdecl fsetpos(FILE *_File,fpos_t *_Pos)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((_File != (FILE *)0x0) && (_Pos != (fpos_t *)0x0)) {
    iVar1 = FUN_1402cc3c0(_File,*_Pos,0);
    return iVar1;
  }
  puVar2 = (undefined4 *)FUN_1402caf34();
  *puVar2 = 0x16;
  FUN_1402cad8c();
  return -1;
}

