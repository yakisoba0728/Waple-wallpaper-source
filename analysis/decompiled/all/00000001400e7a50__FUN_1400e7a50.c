// Function: FUN_1400e7a50
// Addr: 1400e7a50
// Size: 140 bytes


bool FUN_1400e7a50(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 0x6c) = param_3;
  iVar3 = 0x7fffffff;
  do {
    cVar1 = *(char *)(param_1 + 0x75);
    if (9 < (byte)(cVar1 - 0x30U)) break;
    iVar2 = -0x7fffffd1 - cVar1;
    if (iVar2 / 10 < *(int *)(param_1 + 0x6c)) {
                    /* WARNING: Subroutine does not return */
      FUN_1400e74c0(iVar2,param_2);
    }
    *(int *)(param_1 + 0x6c) = (int)cVar1 + *(int *)(param_1 + 0x6c) * 10 + -0x30;
    FUN_1400e5740(param_1);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return iVar3 != 0x7fffffff;
}

