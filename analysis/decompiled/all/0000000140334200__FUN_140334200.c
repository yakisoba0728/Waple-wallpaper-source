// Function: FUN_140334200
// Addr: 140334200
// Size: 95 bytes


void FUN_140334200(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (((*(char *)(lVar1 + 0x58) != '\0') ||
      (iVar2 = FUN_14033c030(lVar1,*param_2,param_2[1]), iVar2 == 0)) &&
     (iVar2 = FUN_1403314c0(lVar1,param_2[2],param_2[3]), iVar2 == 0)) {
    return;
  }
  if (**(int **)(param_1 + 0x30) == 0) {
    **(int **)(param_1 + 0x30) = iVar2;
  }
  return;
}

