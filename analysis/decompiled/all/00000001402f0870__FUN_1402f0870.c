// Function: FUN_1402f0870
// Addr: 1402f0870
// Size: 1089 bytes


int FUN_1402f0870(longlong *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  
  lVar7 = *param_1;
  iVar4 = FUN_1402f0e30();
  if (iVar4 != 0) goto LAB_1402f0a38;
  bVar3 = false;
  uVar1 = *(uint *)(param_1 + 1);
  uVar8 = (uint)*(ushort *)((longlong)param_1 + 0x1a) +
          (uint)*(ushort *)((longlong)param_1 + 0x62) + param_2;
  if (uVar8 <= uVar1) {
LAB_1402f0b43:
    iVar4 = FUN_1402f0e30(param_1);
    if (iVar4 != 0) goto LAB_1402f0a38;
    uVar1 = *(uint *)((longlong)param_1 + 0xc);
    uVar8 = (uint)*(ushort *)(param_1 + 0xc) + (uint)*(ushort *)(param_1 + 3) + param_3;
    if (uVar8 <= uVar1) {
      if (!bVar3) {
        return 0;
      }
      FUN_1402f07f0(param_1);
      return 0;
    }
    if (0xffff < uVar8) {
LAB_1402f0bb7:
      iVar4 = 10;
      goto LAB_1402f0a38;
    }
    lVar6 = param_1[6];
    uVar9 = (uVar1 >> 1) + uVar1;
    if (uVar9 <= uVar8) {
      uVar9 = uVar8;
    }
    uVar8 = uVar9 + 3 & 0xfffffffc;
    if (0xffff < uVar8) {
      uVar8 = 0xffff;
    }
    if (((int)uVar1 < 0) || ((int)uVar8 < 0)) {
      param_1[6] = lVar6;
      iVar4 = 6;
      goto LAB_1402f0a38;
    }
    if (uVar8 == 0) {
      if (lVar6 != 0) {
        (**(code **)(lVar7 + 0x10))(lVar7,lVar6);
      }
      param_1[6] = 0;
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      FUN_1402f07f0(param_1);
      return 0;
    }
    if (0x3fffffff < (int)uVar8) {
      param_1[6] = lVar6;
      goto LAB_1402f0bb7;
    }
    if (uVar1 == 0) {
      lVar7 = (**(code **)(lVar7 + 8))(lVar7,uVar8 * 2);
      iVar4 = 0x40;
      if (lVar7 != 0) goto LAB_1402f0c29;
    }
    else {
      lVar7 = (**(code **)(lVar7 + 0x18))(lVar7,uVar1 * 2,uVar8 * 2,lVar6);
      if (lVar7 == 0) {
        param_1[6] = lVar6;
        iVar4 = 0x40;
        goto LAB_1402f0a38;
      }
LAB_1402f0c29:
      iVar4 = 0;
      if ((int)uVar1 < (int)uVar8) {
        FUN_1404217a0((int)(uVar1 * 2) + lVar7,0,(longlong)(int)((uVar8 - uVar1) * 2));
      }
    }
    param_1[6] = lVar7;
    if (iVar4 == 0) {
      *(uint *)((longlong)param_1 + 0xc) = uVar8;
      FUN_1402f07f0(param_1);
      return 0;
    }
    goto LAB_1402f0a38;
  }
  if (0xffff < uVar8) goto LAB_1402f0bb7;
  lVar6 = param_1[4];
  uVar9 = (uVar1 >> 1) + uVar1;
  if (uVar9 <= uVar8) {
    uVar9 = uVar8;
  }
  uVar8 = uVar9 + 7 & 0xfffffff8;
  if (0xffff < uVar8) {
    uVar8 = 0xffff;
  }
  if (((int)uVar1 < 0) || ((int)uVar8 < 0)) {
    iVar4 = 6;
    goto LAB_1402f0bd0;
  }
  if (uVar8 == 0) {
    if (lVar6 != 0) {
      (**(code **)(lVar7 + 0x10))(lVar7,lVar6);
    }
    param_1[4] = 0;
    if (param_1[5] != 0) {
      (**(code **)(lVar7 + 0x10))(lVar7);
    }
    param_1[5] = 0;
LAB_1402f09f9:
    lVar6 = 0;
    if (*(char *)((longlong)param_1 + 0x14) == '\0') {
LAB_1402f0b3d:
      bVar3 = true;
      *(uint *)(param_1 + 1) = uVar8;
      goto LAB_1402f0b43;
    }
    lVar5 = param_1[8];
    if ((int)(uVar1 * 2) < 0) {
LAB_1402f0bc1:
      iVar4 = 6;
    }
    else {
      iVar2 = uVar8 * 2;
      if (iVar2 < 0) goto LAB_1402f0bc1;
      if (iVar2 == 0) {
        if (lVar5 != 0) {
          (**(code **)(lVar7 + 0x10))(lVar7,lVar5);
        }
        param_1[8] = 0;
LAB_1402f0b0d:
        FUN_1404210f0((ulonglong)uVar8 * 8 + lVar6,(ulonglong)uVar1 * 8 + lVar6);
        param_1[9] = param_1[8] + (ulonglong)uVar8 * 8;
        goto LAB_1402f0b3d;
      }
      if (iVar2 < 0x10000000) {
        if (uVar1 * 2 == 0) {
          lVar6 = (**(code **)(lVar7 + 8))(lVar7,uVar8 << 4);
          iVar4 = 0x40;
          if (lVar6 != 0) goto LAB_1402f0aa4;
        }
        else {
          lVar6 = (**(code **)(lVar7 + 0x18))(lVar7,uVar1 << 4,uVar8 << 4,lVar5);
          if (lVar6 == 0) {
            iVar4 = 0x40;
            goto LAB_1402f0a34;
          }
LAB_1402f0aa4:
          iVar4 = 0;
          if ((int)(uVar1 * 2) < iVar2) {
            FUN_1404217a0((int)(uVar1 << 4) + lVar6,0,(longlong)(int)((iVar2 + uVar1 * -2) * 8));
          }
        }
        param_1[8] = lVar6;
        if (iVar4 != 0) goto LAB_1402f0a38;
        goto LAB_1402f0b0d;
      }
      iVar4 = 10;
    }
LAB_1402f0a34:
    param_1[8] = lVar5;
    goto LAB_1402f0a38;
  }
  if ((int)uVar8 < 0x10000000) {
    if (uVar1 != 0) {
      lVar5 = (**(code **)(lVar7 + 0x18))(lVar7,uVar1 * 8,uVar8 * 8,lVar6);
      if (lVar5 != 0) goto LAB_1402f0937;
      iVar4 = 0x40;
      goto LAB_1402f0bd0;
    }
    lVar5 = (**(code **)(lVar7 + 8))(lVar7,uVar8 * 8);
    iVar4 = 0x40;
    if (lVar5 != 0) {
LAB_1402f0937:
      iVar4 = 0;
      if ((int)uVar1 < (int)uVar8) {
        FUN_1404217a0((int)(uVar1 * 8) + lVar5,0,(longlong)(int)((uVar8 - uVar1) * 8));
      }
    }
    param_1[4] = lVar5;
    if (iVar4 != 0) goto LAB_1402f0a38;
    if (uVar1 == 0) {
      lVar5 = (**(code **)(lVar7 + 8))(lVar7,uVar8);
      iVar4 = 0x40;
      if (lVar5 != 0) {
LAB_1402f09d1:
        iVar4 = 0;
        if ((int)uVar1 < (int)uVar8) {
          FUN_1404217a0((int)uVar1 + lVar5,0,(longlong)(int)(uVar8 - uVar1));
        }
      }
      param_1[5] = lVar5;
      if (iVar4 == 0) goto LAB_1402f09f9;
    }
    else {
      lVar6 = param_1[5];
      lVar5 = (**(code **)(lVar7 + 0x18))(lVar7,uVar1,uVar8,lVar6);
      if (lVar5 != 0) goto LAB_1402f09d1;
      iVar4 = 0x40;
      param_1[5] = lVar6;
    }
  }
  else {
    iVar4 = 10;
LAB_1402f0bd0:
    param_1[4] = lVar6;
  }
  if (iVar4 == 0) {
    return 0;
  }
LAB_1402f0a38:
  FUN_1402f0fa0(param_1);
  return iVar4;
}

