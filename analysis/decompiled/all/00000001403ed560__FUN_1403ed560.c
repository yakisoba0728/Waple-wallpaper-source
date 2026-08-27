// Function: FUN_1403ed560
// Addr: 1403ed560
// Size: 365 bytes


longlong FUN_1403ed560(longlong param_1,uint param_2,char param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  uint uVar7;
  ulonglong uVar6;
  
  uVar7 = *(uint *)(param_1 + 8);
  param_2 = param_2 >> 9;
  if (uVar7 < *(uint *)(param_1 + 0x14)) {
    if (*(uint *)(*(longlong *)(param_1 + 0x18) + (ulonglong)uVar7 * 8) == param_2) {
      return *(longlong *)(param_1 + 0x28) +
             (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x18) + 4 + (ulonglong)uVar7 * 8) * 0x48;
    }
  }
  iVar4 = *(uint *)(param_1 + 0x14) - 1;
  uVar7 = 0;
  if (-1 < iVar4) {
    do {
      uVar5 = iVar4 + uVar7 >> 1;
      uVar6 = (ulonglong)uVar5;
      iVar2 = param_2 - *(int *)(*(longlong *)(param_1 + 0x18) + uVar6 * 8);
      if (iVar2 < 0) {
        iVar4 = uVar5 - 1;
      }
      else {
        if (iVar2 < 1) goto LAB_1403ed686;
        uVar7 = uVar5 + 1;
      }
    } while ((int)uVar7 <= iVar4);
  }
  uVar5 = *(uint *)(param_1 + 0x24);
  uVar6 = (ulonglong)uVar5;
  if ((param_3 == '\0') || (cVar1 = FUN_1403f8740(param_1,uVar5 + 1,1,0), cVar1 == '\0')) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x28);
    *(undefined8 *)(lVar3 + 8 + uVar6 * 0x48) = 0;
    *(undefined8 *)(lVar3 + 0x10 + uVar6 * 0x48) = 0;
    *(undefined8 *)(lVar3 + 0x18 + uVar6 * 0x48) = 0;
    *(undefined8 *)(lVar3 + 0x20 + uVar6 * 0x48) = 0;
    *(undefined8 *)(lVar3 + 0x28 + uVar6 * 0x48) = 0;
    *(undefined8 *)(lVar3 + 0x30 + uVar6 * 0x48) = 0;
    *(undefined8 *)(lVar3 + 0x38 + uVar6 * 0x48) = 0;
    *(undefined8 *)(lVar3 + 0x40 + uVar6 * 0x48) = 0;
    *(undefined4 *)(lVar3 + uVar6 * 0x48) = 0;
    uVar6 = (ulonglong)uVar7;
    lVar3 = *(longlong *)(param_1 + 0x18) + uVar6 * 8;
    FUN_1404210f0(lVar3 + 8,lVar3,(*(int *)(param_1 + 0x14) - uVar7) * 8 + -8);
    lVar3 = *(longlong *)(param_1 + 0x18);
    *(uint *)(lVar3 + uVar6 * 8) = param_2;
    *(uint *)(lVar3 + 4 + uVar6 * 8) = uVar5;
    uVar5 = uVar7;
LAB_1403ed686:
    *(uint *)(param_1 + 8) = uVar5;
    lVar3 = *(longlong *)(param_1 + 0x28) +
            (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x18) + 4 + uVar6 * 8) * 0x48;
  }
  return lVar3;
}

