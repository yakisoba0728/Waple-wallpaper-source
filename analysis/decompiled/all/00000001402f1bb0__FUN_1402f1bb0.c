// Function: FUN_1402f1bb0
// Addr: 1402f1bb0
// Size: 279 bytes


undefined8 FUN_1402f1bb0(longlong param_1,int *param_2,char param_3,uint *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  if ((*(byte *)(param_1 + 8) & 2) == 0) {
    return 0x23;
  }
  if (*param_2 == 0) {
    iVar1 = param_2[1];
    iVar5 = iVar1;
    if (param_2[3] != 0) {
      iVar5 = (iVar1 * param_2[3] + 0x24) / 0x48;
    }
    iVar2 = param_2[2];
    iVar4 = iVar2;
    if (param_2[4] != 0) {
      iVar4 = (iVar2 * param_2[4] + 0x24) / 0x48;
    }
    if (iVar1 == 0) {
      if (iVar2 != 0) {
        iVar5 = iVar4;
      }
    }
    else if (iVar2 == 0) {
      iVar4 = iVar5;
    }
    uVar6 = iVar5 + 0x20U & 0xffffffc0;
    if (((uVar6 != 0) && (uVar7 = iVar4 + 0x20U & 0xffffffc0, uVar7 != 0)) &&
       (0 < *(int *)(param_1 + 0x28))) {
      uVar3 = 0;
      do {
        if ((uVar7 == (*(int *)(*(longlong *)(param_1 + 0x30) + 0xc + (ulonglong)uVar3 * 0x10) +
                       0x20U & 0xffffffc0)) &&
           ((uVar6 == (*(int *)(*(longlong *)(param_1 + 0x30) + 8 + (ulonglong)uVar3 * 0x10) + 0x20U
                      & 0xffffffc0) || (param_3 != '\0')))) {
          if (param_4 != (uint *)0x0) {
            *param_4 = uVar3;
          }
          return 0;
        }
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < *(int *)(param_1 + 0x28));
    }
    return 0x17;
  }
  return 7;
}

