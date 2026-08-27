// Function: FUN_1402deb4c
// Addr: 1402deb4c
// Size: 71 bytes


int FUN_1402deb4c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = param_1;
  iVar2 = DAT_1404e4d8c;
  if ((((param_1 != 0) && (iVar1 = param_1, param_1 != 1)) && (iVar1 = param_1, param_1 != 2)) &&
     (iVar1 = DAT_1404e4d8c, param_1 != 3)) {
    puVar3 = (undefined4 *)FUN_1402caf34();
    *puVar3 = 0x16;
    FUN_1402cad8c();
    iVar1 = DAT_1404e4d8c;
    iVar2 = -1;
  }
  DAT_1404e4d8c = iVar1;
  return iVar2;
}

