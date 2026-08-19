// Function: FUN_140393dd0
// Addr: 140393dd0
// Size: 811 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140393dd0(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  byte *pbVar16;
  undefined4 local_68 [2];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40;
  longlong local_38;
  undefined4 local_30;
  undefined2 local_2c;
  
  lVar14 = 0;
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
  local_38 = 0;
  local_30 = 0x10000;
  local_2c = 0;
  uVar3 = FUN_14038b680(local_68,param_2,0x706f7374);
  *param_1 = uVar3;
  if (local_38 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402fc440("SANITIZE",local_60,0,1,0,0xffffffff,"end [%p..%p]",local_60,uStack_58);
  }
  puVar6 = (undefined8 *)*param_1;
  puVar11 = &DAT_14045dde0;
  if (puVar6 == (undefined8 *)0x0) {
    puVar4 = &DAT_14045dde0;
    uVar15 = _DAT_14045ddf8;
  }
  else {
    puVar4 = puVar6;
    uVar15 = (ulonglong)*(uint *)(puVar6 + 3);
  }
  pbVar9 = (byte *)&DAT_14045dde0;
  if (0x1f < *(uint *)(puVar4 + 3)) {
    pbVar9 = (byte *)puVar4[2];
  }
  iVar7 = (((uint)pbVar9[1] + (uint)*pbVar9 * 0x100) * 0x100 + (uint)pbVar9[2]) * 0x100 +
          (uint)pbVar9[3];
  *(int *)(param_1 + 1) = iVar7;
  if (iVar7 != 0x20000) {
    return param_1;
  }
  puVar4 = &DAT_14045dde0;
  if (puVar6 != (undefined8 *)0x0) {
    puVar4 = puVar6;
  }
  puVar10 = &DAT_14045dde0;
  if (0x1f < *(uint *)(puVar4 + 3)) {
    puVar10 = (undefined8 *)puVar4[2];
  }
  pbVar9 = (byte *)(puVar10 + 4);
  param_1[2] = pbVar9;
  param_1[5] = pbVar9 + ((ulonglong)*pbVar9 * 0x100 + 1 +
                        (ulonglong)*(byte *)((longlong)puVar10 + 0x21)) * 2;
  puVar4 = &DAT_14045dde0;
  if (puVar6 != (undefined8 *)0x0) {
    puVar4 = puVar6;
  }
  if (0x1f < *(uint *)(puVar4 + 3)) {
    puVar11 = (undefined8 *)puVar4[2];
  }
  uVar12 = (uint)(uVar15 >> 3) & 0x1fffffff;
  uVar8 = *(uint *)(param_2 + 0x18);
  if (uVar8 == 0xffffffff) {
    lVar5 = FUN_140398ae0(param_2 + 0x80);
    uVar8 = (uint)*(byte *)(lVar5 + 5) + (uint)*(byte *)(lVar5 + 4) * 0x100;
    if (uVar8 == 0) {
      uVar8 = 0;
    }
    *(uint *)(param_2 + 0x18) = uVar8;
  }
  if (uVar8 <= uVar12) {
    uVar12 = uVar8;
  }
  uVar8 = *(uint *)(param_1 + 3);
  if (((int)uVar8 < 0) || (uVar13 = uVar8, uVar12 <= uVar8)) goto LAB_14039402e;
  do {
    uVar13 = uVar13 + 8 + (uVar13 >> 1);
  } while (uVar13 < uVar12);
  if (0x3ffffffe < uVar13) {
    *(uint *)(param_1 + 3) = ~*(uint *)(param_1 + 3);
    goto LAB_14039402e;
  }
  if (uVar13 == 0) {
    lVar5 = lVar14;
    if ((uVar8 != 0) && (uVar8 != 0xffffffff)) {
      puVar6 = (undefined8 *)func_0x0001402bf8e0(param_1[4]);
      return puVar6;
    }
  }
  else if ((uVar8 == 0) && (param_1[4] != 0)) {
    lVar5 = thunk_FUN_1402da070((ulonglong)uVar13 << 2);
    if (lVar5 == 0) {
LAB_140394120:
      if (*(uint *)(param_1 + 3) < uVar13) {
        *(uint *)(param_1 + 3) = -1 - *(uint *)(param_1 + 3);
      }
      goto LAB_14039402e;
    }
    if (*(int *)((longlong)param_1 + 0x1c) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1404211c0(lVar5,param_1[4]);
    }
  }
  else {
    lVar5 = func_0x0001402cb2b0(param_1[4],(ulonglong)uVar13 << 2);
    if (lVar5 == 0) goto LAB_140394120;
  }
  param_1[4] = lVar5;
  *(uint *)(param_1 + 3) = uVar13;
LAB_14039402e:
  uVar8 = *(uint *)((longlong)param_1 + 0x1c);
  if (uVar8 < 0xffff) {
    pbVar16 = (byte *)((uVar15 & 0xffffffff) + (longlong)puVar11);
    pbVar9 = (byte *)param_1[5];
    uVar2 = (undefined4)DAT_14045dde0;
    do {
      if (pbVar16 <= pbVar9) {
        return param_1;
      }
      if (pbVar16 <= pbVar9 + *pbVar9) {
        return param_1;
      }
      uVar3 = param_1[5];
      uVar12 = *(uint *)(param_1 + 3);
      if ((int)uVar8 < (int)uVar12) {
LAB_14039415b:
        uVar8 = *(uint *)((longlong)param_1 + 0x1c);
        *(uint *)((longlong)param_1 + 0x1c) = uVar8 + 1;
        *(int *)(param_1[4] + (ulonglong)uVar8 * 4) = (int)pbVar9 - (int)uVar3;
        uVar2 = (undefined4)DAT_14045dde0;
        uVar1 = (undefined4)DAT_1404e4ff0;
      }
      else {
        uVar1 = uVar2;
        if (-1 < (int)uVar12) {
          uVar13 = uVar12;
          if (uVar12 < uVar8 + 1) {
            do {
              uVar13 = uVar13 + 8 + (uVar13 >> 1);
            } while (uVar13 < uVar8 + 1);
            if (0x3ffffffe < uVar13) {
              *(uint *)(param_1 + 3) = ~uVar12;
              uVar2 = (undefined4)DAT_14045dde0;
              uVar1 = (undefined4)DAT_14045dde0;
              goto UNWIND_INFO_140394160_UnwindCodes_9__OffsetInProlog;
            }
            if (uVar13 == 0) {
              lVar5 = lVar14;
              if ((uVar12 != 0) && (uVar12 != 0xffffffff)) {
                puVar6 = (undefined8 *)func_0x0001402bf8e0(param_1[4]);
                return puVar6;
              }
            }
            else if ((uVar12 == 0) && (param_1[4] != 0)) {
              lVar5 = thunk_FUN_1402da070((ulonglong)uVar13 << 2);
              if (lVar5 == 0) {
code_r0x000140394209:
                if (uVar13 <= *(uint *)(param_1 + 3)) goto LAB_14039415b;
                *(uint *)(param_1 + 3) = -1 - *(uint *)(param_1 + 3);
                DAT_1404e4ff0._0_4_ = (undefined4)DAT_14045dde0;
                uVar2 = (undefined4)DAT_14045dde0;
                uVar1 = (undefined4)DAT_1404e4ff0;
                goto UNWIND_INFO_140394160_UnwindCodes_9__OffsetInProlog;
              }
              if (*(int *)((longlong)param_1 + 0x1c) != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_1404211c0(lVar5,param_1[4]);
              }
            }
            else {
              lVar5 = func_0x0001402cb2b0(param_1[4],(ulonglong)uVar13 << 2);
              if (lVar5 == 0) goto code_r0x000140394209;
            }
            param_1[4] = lVar5;
            *(uint *)(param_1 + 3) = uVar13;
          }
          goto LAB_14039415b;
        }
      }
UNWIND_INFO_140394160_UnwindCodes_9__OffsetInProlog:
      DAT_1404e4ff0._0_4_ = uVar1;
      pbVar9 = pbVar9 + (ulonglong)*pbVar9 + 1;
      uVar8 = *(uint *)((longlong)param_1 + 0x1c);
    } while (uVar8 < 0xffff);
  }
  return param_1;
}

