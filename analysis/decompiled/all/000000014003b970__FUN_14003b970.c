// Function: FUN_14003b970
// Addr: 14003b970
// Size: 236 bytes


int * FUN_14003b970(int *param_1,undefined8 *param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  undefined1 local_28 [16];
  uint local_18;
  int local_14;
  
  *param_1 = 0;
  param_1[1] = 0xffff;
  if (7 < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  uVar1 = FUN_140290230(param_2,local_28,param_3,0xffffffff);
  param_1[2] = uVar1;
  if (uVar1 == 0) {
    iVar2 = 0x16d;
    if ((local_18 & 1) == 0) {
      iVar2 = 0x1ff;
    }
    param_1[1] = iVar2;
    if ((local_18 >> 10 & 1) != 0) {
      if (local_14 == -0x5ffffff4) {
        *param_1 = 4;
        return param_1;
      }
      if (local_14 == -0x5ffffffd) {
        *param_1 = 10;
        return param_1;
      }
    }
    *param_1 = ((local_18 & 0x10) != 0) + 2;
    return param_1;
  }
  param_1[1] = 0xffff;
  if (uVar1 < 0x41) {
    if (((uVar1 == 0x40) || (uVar1 == 2)) || (uVar1 == 3)) goto LAB_14003ba4c;
    bVar3 = uVar1 == 0x35;
  }
  else {
    if ((uVar1 == 0x7b) || (uVar1 == 0xa1)) goto LAB_14003ba4c;
    bVar3 = uVar1 == 0x10b;
  }
  if (!bVar3) {
    *param_1 = 0;
    return param_1;
  }
LAB_14003ba4c:
  *param_1 = 1;
  return param_1;
}

