// Function: FUN_1403f8820
// Addr: 1403f8820
// Size: 141 bytes


undefined8 FUN_1403f8820(longlong param_1,uint param_2,char param_3,undefined1 param_4)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  if ((int)param_2 < 0) {
    param_2 = 0;
  }
  uVar3 = FUN_1403a5120(param_1,param_2,param_4);
  if ((char)uVar3 == '\0') {
    return uVar3;
  }
  uVar4 = (ulonglong)*(uint *)(param_1 + 4);
  if ((*(uint *)(param_1 + 4) < param_2) && (param_3 != '\0')) {
    do {
      lVar1 = *(longlong *)(param_1 + 8);
      *(undefined8 *)(lVar1 + 8 + uVar4 * 0x48) = 0;
      *(undefined8 *)(lVar1 + 0x10 + uVar4 * 0x48) = 0;
      *(undefined8 *)(lVar1 + 0x18 + uVar4 * 0x48) = 0;
      *(undefined8 *)(lVar1 + 0x20 + uVar4 * 0x48) = 0;
      *(undefined8 *)(lVar1 + 0x28 + uVar4 * 0x48) = 0;
      *(undefined8 *)(lVar1 + 0x30 + uVar4 * 0x48) = 0;
      *(undefined8 *)(lVar1 + 0x38 + uVar4 * 0x48) = 0;
      *(undefined8 *)(lVar1 + 0x40 + uVar4 * 0x48) = 0;
      *(undefined4 *)(lVar1 + uVar4 * 0x48) = 0;
      uVar2 = *(int *)(param_1 + 4) + 1;
      uVar4 = (ulonglong)uVar2;
      *(uint *)(param_1 + 4) = uVar2;
    } while (uVar2 < param_2);
  }
  *(uint *)(param_1 + 4) = param_2;
  return CONCAT71((int7)(uVar4 >> 8),1);
}

