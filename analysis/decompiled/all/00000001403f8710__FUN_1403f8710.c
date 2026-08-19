// Function: FUN_1403f8710
// Addr: 1403f8710
// Size: 41 bytes


undefined1 FUN_1403f8710(longlong param_1,uint param_2)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  
  if ((int)param_2 < 0) {
    param_2 = 0;
  }
  cVar2 = FUN_1403a4c30(param_1,param_2,0);
  if (cVar2 != '\0') {
    uVar3 = *(uint *)(param_1 + 4);
    if (uVar3 < param_2) {
      do {
        lVar1 = *(longlong *)(param_1 + 8);
        *(undefined8 *)(lVar1 + (ulonglong)uVar3 * 0x10) = 0;
        *(undefined8 *)(lVar1 + 8 + (ulonglong)uVar3 * 0x10) = 0;
        uVar3 = *(int *)(param_1 + 4) + 1;
        *(uint *)(param_1 + 4) = uVar3;
      } while (uVar3 < param_2);
    }
    else if (param_2 < uVar3) {
      func_0x00014040c020(param_1,param_2);
    }
    *(uint *)(param_1 + 4) = param_2;
    return 1;
  }
  return 0;
}

