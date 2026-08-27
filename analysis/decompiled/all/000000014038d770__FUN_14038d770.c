// Function: FUN_14038d770
// Addr: 14038d770
// Size: 1030 bytes


bool FUN_14038d770(short *param_1,longlong param_2,undefined8 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  byte *pbVar11;
  ulonglong uVar12;
  short *psVar13;
  byte *pbVar14;
  int iVar15;
  undefined8 *puVar16;
  byte *pbVar17;
  short *psVar18;
  int iVar19;
  byte *pbVar20;
  ulonglong uVar21;
  undefined2 local_res8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  short *psStack_70;
  ulonglong local_68;
  undefined *local_60;
  
  lVar3 = FUN_140386d60(param_2,param_1);
  if (lVar3 == 0) {
    return false;
  }
  puVar16 = param_3;
  if (param_3 == (undefined8 *)0xffffffffffffffe7) {
    puVar16 = (undefined8 *)0x0;
  }
  puVar8 = (undefined8 *)0x0;
  if (puVar16 != (undefined8 *)0xffffffffffffffff) {
    puVar8 = puVar16;
  }
  if (*(int *)(puVar8 + 2) != 0) {
    puVar8 = param_3 + 4;
    if (param_3 == (undefined8 *)0xffffffffffffffdf) {
      puVar8 = (undefined8 *)0x0;
    }
    if (*(int *)(puVar8 + 2) != 0) {
      iVar19 = *(int *)(param_3 + 6);
      if (iVar19 == 0) {
        DAT_1404e4f20._0_2_ = (ushort)DAT_14045dd10;
        pbVar20 = (byte *)&DAT_1404e4f20;
      }
      else {
        pbVar20 = (byte *)param_3[5];
      }
      if (*(int *)(puVar16 + 2) == 0) {
        DAT_1404e4f20._0_2_ = (ushort)DAT_14045dd10;
        pbVar17 = (byte *)&DAT_1404e4f20;
        uVar6 = (ushort)DAT_14045dd10 & 0xff;
      }
      else {
        pbVar17 = (byte *)puVar16[1];
        uVar6 = (uint)*pbVar17;
      }
      pbVar11 = (byte *)param_3[1];
      pbVar14 = (byte *)param_3[5];
      iVar15 = *(int *)(param_3 + 2);
      uVar6 = ((*pbVar20 - uVar6) * 0x100 - (uint)pbVar17[1]) + (uint)pbVar20[1] & 0xffff;
      if (iVar15 != 0) {
        iVar15 = iVar15 + -1;
        pbVar11 = pbVar11 + 2;
      }
      while( true ) {
        if (iVar19 != 0) {
          iVar19 = iVar19 + -1;
          pbVar14 = pbVar14 + 2;
        }
        if ((iVar15 == 0) || (iVar19 == 0)) {
          bVar5 = 1;
          goto LAB_14038d90d;
        }
        pbVar20 = pbVar14;
        if (iVar19 == 0) {
          DAT_1404e4f20._0_2_ = (ushort)DAT_14045dd10;
          pbVar20 = (byte *)&DAT_1404e4f20;
        }
        if (iVar15 == 0) {
          DAT_1404e4f20._0_2_ = (ushort)DAT_14045dd10;
          uVar7 = (ushort)DAT_14045dd10 & 0xff;
          pbVar17 = (byte *)&DAT_1404e4f20;
        }
        else {
          uVar7 = (uint)*pbVar11;
          pbVar17 = pbVar11;
        }
        if (uVar6 != (((*pbVar20 - uVar7) * 0x100 - (uint)pbVar17[1]) + (uint)pbVar20[1] & 0xffff))
        break;
        if (iVar15 != 0) {
          iVar15 = iVar15 + -1;
          pbVar11 = pbVar11 + 2;
        }
      }
      goto LAB_14038d90b;
    }
  }
  uVar6 = 0;
LAB_14038d90b:
  bVar5 = 2;
LAB_14038d90d:
  local_res8 = (ushort)bVar5 << 8;
  *param_1 = local_res8;
  if (bVar5 == 1) {
    lVar3 = FUN_140386e00(param_2,param_1);
    if (lVar3 != 0) {
      param_1[1] = 0;
      uVar4 = FUN_14038af10(param_2);
      local_98 = *param_3;
      uStack_90 = param_3[1];
      local_88 = param_3[2];
      uStack_80 = param_3[3];
      local_60 = &DAT_14047054e;
      local_78 = param_3[4];
      psStack_70 = (short *)param_3[5];
      local_68 = param_3[6];
      cVar1 = FUN_14038d120(uVar4,param_2,&local_98);
      if (cVar1 != '\0') {
        uVar2 = FUN_1403f0d30(param_2,1);
        FUN_14036b900(param_2,param_1 + 1,uVar2,0,0);
        bVar5 = (byte)(uVar6 >> 8);
        local_res8 = CONCAT11((char)uVar6,bVar5);
        param_1[2] = local_res8;
        if ((uint)bVar5 * 0x100 + (uVar6 & 0xff) != uVar6) {
          *(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) | 8;
        }
        return true;
      }
      FUN_1403f0c80(param_2);
    }
  }
  else if (bVar5 == 2) {
    local_98 = *param_3;
    uStack_90 = param_3[1];
    local_78 = param_3[4];
    psVar13 = (short *)param_3[5];
    local_60 = &DAT_14047054e;
    uVar6 = *(uint *)(param_3 + 2);
    local_88 = param_3[2];
    uStack_80 = param_3[3];
    uVar12 = param_3[6];
    psStack_70 = psVar13;
    local_68 = uVar12;
    lVar3 = FUN_140386e00(param_2,param_1);
    if (lVar3 == 0) {
      return false;
    }
    uVar9 = uVar12 & 0xffffffff;
    uVar21 = uVar12 & 0xffffffff;
    if (uVar6 <= (uint)uVar12) {
      uVar21 = (ulonglong)uVar6;
    }
    cVar1 = FUN_14040a460(param_1 + 2,param_2,uVar21,0);
    if (cVar1 == '\0') {
      return false;
    }
    if ((uint)uVar21 != 0) {
      uVar10 = 0;
      uVar12 = uVar9;
      do {
        psVar18 = psVar13;
        if ((int)uVar9 == 0) {
          DAT_1404e4f20._0_2_ = (ushort)DAT_14045dd10;
          psVar18 = (short *)&DAT_1404e4f20;
        }
        if (uVar6 == 0) {
          DAT_1404e4f20._0_2_ = (ushort)DAT_14045dd10;
        }
        param_1[uVar10 + 3] = *psVar18;
        uVar7 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar7;
        if (uVar6 != 0) {
          uVar6 = uVar6 - 1;
        }
        if ((int)uVar12 == 0) {
          uVar9 = 0;
        }
        else {
          uVar9 = (ulonglong)((int)uVar12 - 1);
          psVar13 = psVar13 + 1;
          uVar12 = uVar9;
        }
      } while (uVar7 < (uint)uVar21);
    }
    cVar1 = FUN_14038db80(param_1 + 1,param_2,&local_98);
    return cVar1 != '\0';
  }
  return false;
}

