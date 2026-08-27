// Function: FUN_1403f86d0
// Addr: 1403f86d0
// Size: 106 bytes


undefined1 FUN_1403f86d0(longlong param_1,uint param_2)

{
  uint uVar1;
  char cVar2;
  
  if ((int)param_2 < 0) {
    param_2 = 0;
  }
  cVar2 = FUN_1403a4c80(param_1,param_2,0);
  if (cVar2 == '\0') {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 4);
  if (uVar1 < param_2) {
    if (((param_2 - uVar1) * 3 & 0x3fffffff) != 0) {
      FUN_1404217a0(*(longlong *)(param_1 + 8) + (ulonglong)uVar1 * 0xc,0,(param_2 - uVar1) * 0xc);
    }
  }
  *(uint *)(param_1 + 4) = param_2;
  return 1;
}

