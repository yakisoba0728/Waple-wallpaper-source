// Function: FUN_1402fce80
// Addr: 1402fce80
// Size: 467 bytes


uint FUN_1402fce80(longlong param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  
  uVar2 = *(uint *)(param_1 + 0x117c);
  if ((uVar2 & 4) == 0) {
    return param_3;
  }
  lVar6 = (longlong)param_2 * 0x1c4 + *(longlong *)(param_1 + 0x1180);
  uVar4 = -param_3;
  if ((int)-param_3 < 0) {
    uVar4 = param_3;
  }
  if (param_2 == 1) {
    uVar5 = uVar2 & 2;
  }
  else {
    uVar5 = uVar2 & 1;
  }
  if (uVar5 == 0) {
    if (*(int *)(lVar6 + 0x4c) != 0) {
      uVar2 = *(uint *)(lVar6 + 0x54);
      iVar9 = uVar2 - uVar4;
      if (-1 < (int)(uVar4 - uVar2)) {
        iVar9 = uVar4 - uVar2;
      }
      if (iVar9 < 0x28) {
        if ((int)uVar2 < 0x30) {
          uVar2 = 0x30;
        }
        goto LAB_1402fd03a;
      }
    }
    if ((int)uVar4 < 0x36) {
      uVar2 = (int)(0x36 - uVar4) / 2 + uVar4;
    }
    else {
      uVar2 = uVar4;
      if ((int)uVar4 < 0xc0) {
        uVar2 = uVar4 & 0xffffffc0;
        uVar4 = uVar4 & 0x3f;
        if (9 < uVar4) {
          if (uVar4 < 0x16) {
            uVar2 = uVar2 + 10;
            goto LAB_1402fd03a;
          }
          if ((0x29 < uVar4) && (uVar4 < 0x36)) {
            uVar2 = uVar2 + 0x36;
            goto LAB_1402fd03a;
          }
        }
        uVar2 = uVar2 + uVar4;
      }
    }
    goto LAB_1402fd03a;
  }
  iVar9 = 0x62;
  uVar8 = 0;
  uVar5 = uVar4;
  uVar1 = uVar4;
  if (*(uint *)(lVar6 + 0x4c) != 0) {
    do {
      uVar5 = *(uint *)(lVar6 + 0x54 + uVar8 * 0xc);
      iVar3 = uVar5 - uVar4;
      if (-1 < (int)(uVar4 - uVar5)) {
        iVar3 = uVar4 - uVar5;
      }
      if (iVar9 <= iVar3) {
        uVar5 = uVar1;
        iVar3 = iVar9;
      }
      iVar9 = iVar3;
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
      uVar1 = uVar5;
    } while (uVar7 < *(uint *)(lVar6 + 0x4c));
  }
  uVar1 = uVar5 + 0x20 & 0xffffffc0;
  if ((int)uVar4 < (int)uVar5) {
    uVar7 = uVar4;
    if ((int)(uVar1 - 0x30) < (int)uVar4) {
      uVar7 = uVar5;
    }
  }
  else {
    uVar7 = uVar5;
    if ((int)(uVar1 + 0x30) <= (int)uVar4) {
      uVar7 = uVar4;
    }
  }
  if (param_2 == 1) {
    if ((int)uVar7 < 0x40) {
LAB_1402fd011:
      uVar2 = 0x40;
      goto LAB_1402fd03a;
    }
    uVar2 = uVar7 + 0x10;
  }
  else {
    if ((uVar2 & 8) == 0) {
      if ((int)uVar7 < 0x30) {
        uVar2 = (int)(uVar7 + 0x40) >> 1;
        goto LAB_1402fd03a;
      }
      uVar2 = uVar7 + 0x16;
      if ((int)uVar7 < 0x80) goto LAB_1402fd037;
    }
    else if ((int)uVar7 < 0x40) goto LAB_1402fd011;
    uVar2 = uVar7 + 0x20;
  }
LAB_1402fd037:
  uVar2 = uVar2 & 0xffffffc0;
LAB_1402fd03a:
  uVar4 = -uVar2;
  if (-1 < (int)param_3) {
    uVar4 = uVar2;
  }
  return uVar4;
}

