// Function: FUN_1402da824
// Addr: 1402da824
// Size: 200 bytes


undefined8
FUN_1402da824(undefined1 *param_1,undefined8 param_2,int param_3,int *param_4,char param_5)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((param_5 != '\0') && (param_4[1] + -1 == param_3)) {
    *(undefined2 *)(param_1 + (longlong)param_4[1] + -1 + (ulonglong)(*param_4 == 0x2d)) = 0x30;
  }
  if (*param_4 == 0x2d) {
    *param_1 = 0x2d;
    param_1 = param_1 + 1;
  }
  iVar1 = param_4[1];
  if (iVar1 < 1) {
    if ((iVar1 == 0) && (**(char **)(param_4 + 2) == '0')) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if ((param_5 == '\0') || (!bVar2)) {
      lVar3 = -1;
      do {
        lVar4 = lVar3;
        lVar3 = lVar4 + 1;
      } while (param_1[lVar3] != '\0');
                    /* WARNING: Subroutine does not return */
      FUN_1404211c0(param_1 + 1,param_1,lVar4 + 2);
    }
    *param_1 = 0x30;
    param_1 = param_1 + 1;
  }
  else {
    param_1 = param_1 + iVar1;
  }
  if (0 < param_3) {
    lVar3 = -1;
    do {
      lVar4 = lVar3;
      lVar3 = lVar4 + 1;
    } while (param_1[lVar3] != '\0');
                    /* WARNING: Subroutine does not return */
    FUN_1404211c0(param_1 + 1,param_1,lVar4 + 2);
  }
  return 0;
}

