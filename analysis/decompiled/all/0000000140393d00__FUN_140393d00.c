// Function: FUN_140393d00
// Addr: 140393d00
// Size: 1119 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140393d00(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined8 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  byte *pbVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  byte *pbVar18;
  undefined4 local_68 [2];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40;
  int *local_38;
  undefined4 local_30;
  undefined2 local_2c;
  
  lVar16 = 0;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  local_68[0] = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = (int *)0x0;
  local_30 = 0x10000;
  local_2c = 0;
  uVar6 = FUN_14038b5b0(local_68,param_2,0x706f7374);
  piVar3 = local_38;
  *param_1 = uVar6;
  if (local_38 != (int *)0x0) {
    iVar9 = 1;
    FUN_1402fc370("SANITIZE",local_60,0,1,0,0xffffffff,"end [%p..%p]",local_60,uStack_58);
    if ((piVar3 != (int *)0x0) && (*piVar3 != 0)) {
      LOCK();
      iVar1 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar1 == iVar9) {
        *piVar3 = -0xdead;
        lVar8 = *(longlong *)(piVar3 + 2);
        if (lVar8 != 0) {
          FUN_1403c3220(lVar8);
          thunk_FUN_1402d9040(lVar8);
          piVar3[2] = 0;
          piVar3[3] = 0;
        }
        if (*(code **)(piVar3 + 10) != (code *)0x0) {
          (**(code **)(piVar3 + 10))(*(undefined8 *)(piVar3 + 8));
          piVar3[8] = 0;
          piVar3[9] = 0;
          piVar3[10] = 0;
          piVar3[0xb] = 0;
        }
        thunk_FUN_1402d9040(piVar3);
      }
    }
  }
  puVar2 = (undefined8 *)*param_1;
  puVar13 = &DAT_14045dd10;
  if (puVar2 == (undefined8 *)0x0) {
    puVar7 = &DAT_14045dd10;
    uVar17 = _DAT_14045dd28;
  }
  else {
    puVar7 = puVar2;
    uVar17 = (ulonglong)*(uint *)(puVar2 + 3);
  }
  pbVar11 = (byte *)&DAT_14045dd10;
  if (0x1f < *(uint *)(puVar7 + 3)) {
    pbVar11 = (byte *)puVar7[2];
  }
  iVar9 = (((uint)pbVar11[1] + (uint)*pbVar11 * 0x100) * 0x100 + (uint)pbVar11[2]) * 0x100 +
          (uint)pbVar11[3];
  *(int *)(param_1 + 1) = iVar9;
  if (iVar9 != 0x20000) {
    return param_1;
  }
  puVar7 = &DAT_14045dd10;
  if (puVar2 != (undefined8 *)0x0) {
    puVar7 = puVar2;
  }
  puVar12 = &DAT_14045dd10;
  if (0x1f < *(uint *)(puVar7 + 3)) {
    puVar12 = (undefined8 *)puVar7[2];
  }
  pbVar11 = (byte *)(puVar12 + 4);
  param_1[2] = pbVar11;
  param_1[5] = pbVar11 + ((ulonglong)*pbVar11 * 0x100 + 1 +
                         (ulonglong)*(byte *)((longlong)puVar12 + 0x21)) * 2;
  puVar7 = &DAT_14045dd10;
  if (puVar2 != (undefined8 *)0x0) {
    puVar7 = puVar2;
  }
  if (0x1f < *(uint *)(puVar7 + 3)) {
    puVar13 = (undefined8 *)puVar7[2];
  }
  uVar14 = (uint)(uVar17 >> 3) & 0x1fffffff;
  uVar10 = *(uint *)(param_2 + 0x18);
  if (uVar10 == 0xffffffff) {
    lVar8 = FUN_140398a10(param_2 + 0x80);
    uVar10 = (uint)*(byte *)(lVar8 + 5) + (uint)*(byte *)(lVar8 + 4) * 0x100;
    if (uVar10 == 0) {
      uVar10 = 0;
    }
    *(uint *)(param_2 + 0x18) = uVar10;
  }
  if (uVar10 <= uVar14) {
    uVar14 = uVar10;
  }
  uVar10 = *(uint *)(param_1 + 3);
  if (((int)uVar10 < 0) || (uVar15 = uVar10, uVar14 <= uVar10)) goto LAB_140393f5e;
  do {
    uVar15 = uVar15 + 8 + (uVar15 >> 1);
  } while (uVar15 < uVar14);
  if (0x3ffffffe < uVar15) {
    *(uint *)(param_1 + 3) = ~*(uint *)(param_1 + 3);
    goto LAB_140393f5e;
  }
  if (uVar15 == 0) {
    lVar8 = lVar16;
    if ((uVar10 != 0) && (uVar10 != 0xffffffff)) {
      thunk_FUN_1402d9040(param_1[4]);
    }
  }
  else if ((uVar10 == 0) && (param_1[4] != 0)) {
    lVar8 = _malloc_base((ulonglong)uVar15 << 2);
    if (lVar8 == 0) {
LAB_140394050:
      if (*(uint *)(param_1 + 3) < uVar15) {
        *(uint *)(param_1 + 3) = -1 - *(uint *)(param_1 + 3);
      }
      goto LAB_140393f5e;
    }
    if (*(int *)((longlong)param_1 + 0x1c) != 0) {
      FUN_1404210f0(lVar8,param_1[4]);
    }
  }
  else {
    lVar8 = _realloc_base(param_1[4],(ulonglong)uVar15 << 2);
    if (lVar8 == 0) goto LAB_140394050;
  }
  param_1[4] = lVar8;
  *(uint *)(param_1 + 3) = uVar15;
LAB_140393f5e:
  uVar10 = *(uint *)((longlong)param_1 + 0x1c);
  if (uVar10 < 0xffff) {
    pbVar18 = (byte *)((uVar17 & 0xffffffff) + (longlong)puVar13);
    pbVar11 = (byte *)param_1[5];
    uVar5 = (undefined4)DAT_14045dd10;
    do {
      if (pbVar18 <= pbVar11) {
        return param_1;
      }
      if (pbVar18 <= pbVar11 + *pbVar11) {
        return param_1;
      }
      uVar6 = param_1[5];
      uVar14 = *(uint *)(param_1 + 3);
      if ((int)uVar10 < (int)uVar14) {
LAB_14039408b:
        uVar10 = *(uint *)((longlong)param_1 + 0x1c);
        *(uint *)((longlong)param_1 + 0x1c) = uVar10 + 1;
        *(int *)(param_1[4] + (ulonglong)uVar10 * 4) = (int)pbVar11 - (int)uVar6;
        uVar5 = (undefined4)DAT_14045dd10;
        uVar4 = (undefined4)DAT_1404e4f20;
      }
      else {
        uVar4 = uVar5;
        if (-1 < (int)uVar14) {
          uVar15 = uVar14;
          if (uVar14 < uVar10 + 1) {
            do {
              uVar15 = uVar15 + 8 + (uVar15 >> 1);
            } while (uVar15 < uVar10 + 1);
            if (0x3ffffffe < uVar15) {
              *(uint *)(param_1 + 3) = ~uVar14;
              uVar5 = (undefined4)DAT_14045dd10;
              uVar4 = (undefined4)DAT_14045dd10;
              goto LAB_1403940a6;
            }
            if (uVar15 == 0) {
              lVar8 = lVar16;
              if ((uVar14 != 0) && (uVar14 != 0xffffffff)) {
                thunk_FUN_1402d9040(param_1[4]);
              }
            }
            else if ((uVar14 == 0) && (param_1[4] != 0)) {
              lVar8 = _malloc_base((ulonglong)uVar15 << 2);
              if (lVar8 == 0) {
LAB_140394139:
                if (uVar15 <= *(uint *)(param_1 + 3)) goto LAB_14039408b;
                *(uint *)(param_1 + 3) = -1 - *(uint *)(param_1 + 3);
                DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
                uVar5 = (undefined4)DAT_14045dd10;
                uVar4 = (undefined4)DAT_1404e4f20;
                goto LAB_1403940a6;
              }
              if (*(int *)((longlong)param_1 + 0x1c) != 0) {
                FUN_1404210f0(lVar8,param_1[4]);
              }
            }
            else {
              lVar8 = _realloc_base(param_1[4],(ulonglong)uVar15 << 2);
              if (lVar8 == 0) goto LAB_140394139;
            }
            param_1[4] = lVar8;
            *(uint *)(param_1 + 3) = uVar15;
          }
          goto LAB_14039408b;
        }
      }
LAB_1403940a6:
      DAT_1404e4f20._0_4_ = uVar4;
      pbVar11 = pbVar11 + (ulonglong)*pbVar11 + 1;
      uVar10 = *(uint *)((longlong)param_1 + 0x1c);
    } while (uVar10 < 0xffff);
  }
  return param_1;
}

