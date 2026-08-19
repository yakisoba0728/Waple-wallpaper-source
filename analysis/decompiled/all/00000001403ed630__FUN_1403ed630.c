// Function: FUN_1403ed630
// Addr: 1403ed630
// Size: 157 bytes


longlong FUN_1403ed630(longlong param_1,uint param_2,char param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar6 = *(uint *)(param_1 + 8);
  if (uVar6 < *(uint *)(param_1 + 0x14)) {
    if (*(uint *)(*(longlong *)(param_1 + 0x18) + (ulonglong)uVar6 * 8) == param_2 >> 9) {
      return *(longlong *)(param_1 + 0x28) +
             (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x18) + 4 + (ulonglong)uVar6 * 8) * 0x48;
    }
  }
  iVar4 = *(uint *)(param_1 + 0x14) - 1;
  uVar6 = 0;
  if (-1 < iVar4) {
    do {
      uVar5 = iVar4 + uVar6 >> 1;
      iVar3 = (param_2 >> 9) - *(int *)(*(longlong *)(param_1 + 0x18) + (ulonglong)uVar5 * 8);
      if (iVar3 < 0) {
        iVar4 = uVar5 - 1;
      }
      else {
        if (iVar3 < 1) {
          *(uint *)(param_1 + 8) = uVar5;
          return *(longlong *)(param_1 + 0x28) +
                 (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x18) + 4 + (ulonglong)uVar5 * 8) *
                 0x48;
        }
        uVar6 = uVar5 + 1;
      }
    } while ((int)uVar6 <= iVar4);
  }
  uVar7 = (ulonglong)*(uint *)(param_1 + 0x24);
  if ((param_3 != '\0') &&
     (cVar2 = FUN_1403f8810(param_1,*(uint *)(param_1 + 0x24) + 1,1,0), cVar2 != '\0')) {
    lVar1 = *(longlong *)(param_1 + 0x28);
    *(undefined8 *)(lVar1 + 8 + uVar7 * 0x48) = 0;
    *(undefined8 *)(lVar1 + 0x10 + uVar7 * 0x48) = 0;
    *(undefined8 *)(lVar1 + 0x18 + uVar7 * 0x48) = 0;
    *(undefined8 *)(lVar1 + 0x20 + uVar7 * 0x48) = 0;
    *(undefined8 *)(lVar1 + 0x28 + uVar7 * 0x48) = 0;
    *(undefined8 *)(lVar1 + 0x30 + uVar7 * 0x48) = 0;
    *(undefined8 *)(lVar1 + 0x38 + uVar7 * 0x48) = 0;
    *(undefined8 *)(lVar1 + 0x40 + uVar7 * 0x48) = 0;
    *(undefined4 *)(lVar1 + uVar7 * 0x48) = 0;
    lVar1 = *(longlong *)(param_1 + 0x18) + (ulonglong)uVar6 * 8;
                    /* WARNING: Subroutine does not return */
    FUN_1404211c0(lVar1 + 8,lVar1,(*(int *)(param_1 + 0x14) - uVar6) * 8 + -8);
  }
  return 0;
}

