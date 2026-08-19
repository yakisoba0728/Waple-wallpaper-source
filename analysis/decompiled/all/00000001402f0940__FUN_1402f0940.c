// Function: FUN_1402f0940
// Addr: 1402f0940
// Size: 898 bytes


ulonglong FUN_1402f0940(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  
  lVar6 = *param_1;
  uVar3 = FUN_1402f0f00();
  uVar8 = (ulonglong)uVar3;
  if (uVar3 != 0) goto LAB_1402f0b08;
  bVar2 = false;
  uVar3 = *(uint *)(param_1 + 1);
  uVar7 = (uint)*(ushort *)((longlong)param_1 + 0x1a) +
          (uint)*(ushort *)((longlong)param_1 + 0x62) + param_2;
  if (uVar7 <= uVar3) {
LAB_1402f0c13:
    uVar3 = FUN_1402f0f00(param_1);
    uVar8 = (ulonglong)uVar3;
    if (uVar3 != 0) goto LAB_1402f0b08;
    uVar3 = *(uint *)((longlong)param_1 + 0xc);
    uVar7 = (uint)*(ushort *)(param_1 + 0xc) + (uint)*(ushort *)(param_1 + 3) + param_3;
    if (uVar7 <= uVar3) {
      if (!bVar2) {
        return 0;
      }
      FUN_1402f08c0(param_1);
      return 0;
    }
    if (0xffff < uVar7) {
LAB_1402f0c87:
      uVar8 = 10;
      goto LAB_1402f0b08;
    }
    lVar5 = param_1[6];
    uVar9 = (uVar3 >> 1) + uVar3;
    if (uVar9 <= uVar7) {
      uVar9 = uVar7;
    }
    uVar7 = uVar9 + 3 & 0xfffffffc;
    if (0xffff < uVar7) {
      uVar7 = 0xffff;
    }
    if (((int)uVar3 < 0) || ((int)uVar7 < 0)) {
      param_1[6] = lVar5;
      uVar8 = 6;
      goto LAB_1402f0b08;
    }
    if (uVar7 == 0) {
      if (lVar5 != 0) {
        (**(code **)(lVar6 + 0x10))(lVar6,lVar5);
      }
      param_1[6] = 0;
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      FUN_1402f08c0(param_1);
      return 0;
    }
    if (0x3fffffff < (int)uVar7) {
      param_1[6] = lVar5;
      goto LAB_1402f0c87;
    }
    if (uVar3 == 0) {
      lVar6 = (**(code **)(lVar6 + 8))(lVar6,uVar7 * 2);
      uVar8 = 0x40;
      if (lVar6 != 0) goto code_r0x0001402f0cf9;
    }
    else {
      lVar6 = (**(code **)(lVar6 + 0x18))(lVar6,uVar3 * 2,uVar7 * 2,lVar5);
      if (lVar6 == 0) {
        param_1[6] = lVar5;
        uVar8 = 0x40;
        goto LAB_1402f0b08;
      }
code_r0x0001402f0cf9:
      uVar8 = 0;
      if ((int)uVar3 < (int)uVar7) {
        func_0x000140421870((int)(uVar3 * 2) + lVar6,0,(longlong)(int)((uVar7 - uVar3) * 2));
      }
    }
    param_1[6] = lVar6;
    if ((int)uVar8 == 0) {
      *(uint *)((longlong)param_1 + 0xc) = uVar7;
      FUN_1402f08c0(param_1);
      return uVar8;
    }
    goto LAB_1402f0b08;
  }
  if (0xffff < uVar7) goto LAB_1402f0c87;
  lVar5 = param_1[4];
  uVar9 = (uVar3 >> 1) + uVar3;
  if (uVar9 <= uVar7) {
    uVar9 = uVar7;
  }
  uVar7 = uVar9 + 7 & 0xfffffff8;
  if (0xffff < uVar7) {
    uVar7 = 0xffff;
  }
  if (((int)uVar3 < 0) || ((int)uVar7 < 0)) {
    uVar8 = 6;
    goto LAB_1402f0ca0;
  }
  if (uVar7 == 0) {
    if (lVar5 != 0) {
      (**(code **)(lVar6 + 0x10))(lVar6,lVar5);
    }
    param_1[4] = 0;
    if (param_1[5] != 0) {
      (**(code **)(lVar6 + 0x10))(lVar6);
    }
    param_1[5] = 0;
LAB_1402f0ac9:
    lVar5 = 0;
    if (*(char *)((longlong)param_1 + 0x14) == '\0') {
      bVar2 = true;
      *(uint *)(param_1 + 1) = uVar7;
      goto LAB_1402f0c13;
    }
    lVar4 = param_1[8];
    if ((int)(uVar3 * 2) < 0) {
LAB_1402f0c91:
      uVar8 = 6;
    }
    else {
      iVar1 = uVar7 * 2;
      if (iVar1 < 0) goto LAB_1402f0c91;
      if (iVar1 == 0) {
        if (lVar4 != 0) {
          (**(code **)(lVar6 + 0x10))(lVar6,lVar4);
        }
        param_1[8] = 0;
        goto LAB_1402f0bdd;
      }
      if (iVar1 < 0x10000000) {
        if (uVar3 * 2 == 0) {
          lVar5 = (**(code **)(lVar6 + 8))(lVar6,uVar7 << 4);
          uVar8 = 0x40;
          if (lVar5 != 0) goto LAB_1402f0b74;
        }
        else {
          lVar5 = (**(code **)(lVar6 + 0x18))(lVar6,uVar3 << 4,uVar7 << 4,lVar4);
          if (lVar5 == 0) {
            uVar8 = 0x40;
            goto LAB_1402f0b04;
          }
LAB_1402f0b74:
          uVar8 = 0;
          if ((int)(uVar3 * 2) < iVar1) {
            uVar8 = func_0x000140421870((int)(uVar3 << 4) + lVar5,0,
                                        (longlong)(int)((iVar1 + uVar3 * -2) * 8));
            return uVar8;
          }
        }
        param_1[8] = lVar5;
        if ((int)uVar8 == 0) {
LAB_1402f0bdd:
                    /* WARNING: Subroutine does not return */
          FUN_1404211c0((ulonglong)uVar7 * 8 + lVar5,(ulonglong)uVar3 * 8 + lVar5);
        }
        goto LAB_1402f0b08;
      }
      uVar8 = 10;
    }
LAB_1402f0b04:
    param_1[8] = lVar4;
    goto LAB_1402f0b08;
  }
  if ((int)uVar7 < 0x10000000) {
    if (uVar3 != 0) {
      lVar4 = (**(code **)(lVar6 + 0x18))(lVar6,uVar3 * 8,uVar7 * 8,lVar5);
      if (lVar4 != 0) goto LAB_1402f0a07;
      uVar8 = 0x40;
      goto LAB_1402f0ca0;
    }
    lVar4 = (**(code **)(lVar6 + 8))(lVar6,uVar7 * 8);
    uVar8 = 0x40;
    if (lVar4 != 0) {
LAB_1402f0a07:
      uVar8 = 0;
      if ((int)uVar3 < (int)uVar7) {
        uVar8 = func_0x000140421870((int)(uVar3 * 8) + lVar4,0,(longlong)(int)((uVar7 - uVar3) * 8))
        ;
        return uVar8;
      }
    }
    param_1[4] = lVar4;
    if ((int)uVar8 != 0) goto LAB_1402f0b08;
    if (uVar3 == 0) {
      lVar4 = (**(code **)(lVar6 + 8))(lVar6,uVar7);
      uVar8 = 0x40;
      if (lVar4 != 0) {
LAB_1402f0aa1:
        uVar8 = 0;
        if ((int)uVar3 < (int)uVar7) {
          uVar8 = func_0x000140421870((int)uVar3 + lVar4,0,(longlong)(int)(uVar7 - uVar3));
          return uVar8;
        }
      }
      param_1[5] = lVar4;
      if ((int)uVar8 == 0) goto LAB_1402f0ac9;
    }
    else {
      lVar5 = param_1[5];
      lVar4 = (**(code **)(lVar6 + 0x18))(lVar6,uVar3,uVar7,lVar5);
      if (lVar4 != 0) goto LAB_1402f0aa1;
      uVar8 = 0x40;
      param_1[5] = lVar5;
    }
  }
  else {
    uVar8 = 10;
LAB_1402f0ca0:
    param_1[4] = lVar5;
  }
  if ((int)uVar8 == 0) {
    return uVar8;
  }
LAB_1402f0b08:
  FUN_1402f1070(param_1);
  return uVar8;
}

