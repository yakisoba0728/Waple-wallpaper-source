// Function: FUN_140349ce0
// Addr: 140349ce0
// Size: 6772 bytes


void FUN_140349ce0(longlong param_1,longlong param_2,byte *param_3,uint *param_4)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  char cVar4;
  char cVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  int iVar15;
  byte *pbVar16;
  byte *pbVar17;
  ulonglong uVar18;
  byte *pbVar19;
  undefined4 uVar20;
  byte *pbVar21;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  int local_78;
  int local_74;
  int local_70;
  undefined8 local_68;
  int local_60;
  ulonglong local_50;
  
  local_50 = DAT_1404dc110 ^ (ulonglong)auStack_a8;
  uVar20 = 0;
  iVar10 = 0;
  local_68 = 0;
  uVar13 = 0;
  local_60 = 0;
  if ((((param_3 == (byte *)0x0) || (param_2 == 0)) || (*(longlong *)(param_2 + 0x80) == 0)) ||
     ((param_3 < *(byte **)(param_2 + 0x40) ||
      ((byte *)(*(longlong *)(param_2 + 0x80) + -2 + (ulonglong)*(uint *)(param_2 + 0x88)) < param_3
      )))) goto LAB_14034b7ed;
  bVar1 = *param_3;
  uVar12 = (uint)bVar1;
  *param_4 = (uint)bVar1;
  if (0x20 < bVar1) goto LAB_14034b7ed;
  pbVar16 = param_3 + 1;
  if (bVar1 == 1) {
    if ((*(byte **)(param_2 + 0x40) <= pbVar16) &&
       (pbVar16 <=
        (byte *)(((ulonglong)*(uint *)(param_2 + 0x88) - 5) + *(longlong *)(param_2 + 0x80)))) {
      bVar1 = *pbVar16;
      if (((uint)bVar1 <= *(uint *)(param_2 + 0x28)) &&
         (iVar10 = CONCAT31(CONCAT21(CONCAT11(param_3[2],param_3[3]),param_3[4]),param_3[5]),
         (uint)bVar1 + iVar10 <= *(uint *)(param_2 + 0x28))) {
        param_4[2] = (uint)bVar1;
        param_4[3] = 0;
        *(ulonglong *)(param_4 + 4) =
             (ulonglong)(uint)(iVar10 * 4) + *(longlong *)(param_2 + 0x30) + 4;
      }
    }
    goto LAB_14034b7ed;
  }
  if (bVar1 - 2 < 2) {
    if ((pbVar16 < *(byte **)(param_2 + 0x40)) ||
       ((byte *)(((ulonglong)*(uint *)(param_2 + 0x88) - 4) + *(longlong *)(param_2 + 0x80)) <
        pbVar16)) goto LAB_14034b7ed;
    pbVar17 = param_3 + 5;
    *(ushort *)(param_4 + 2) = CONCAT11(*pbVar16,param_3[2]);
    *(ushort *)((longlong)param_4 + 10) = CONCAT11(param_3[3],param_3[4]);
    if (bVar1 == 3) {
      if ((pbVar17 < *(byte **)(param_2 + 0x40)) ||
         ((byte *)(((ulonglong)*(uint *)(param_2 + 0x88) - 4) + *(longlong *)(param_2 + 0x80)) <
          pbVar17)) goto LAB_14034b7ed;
      uVar13 = CONCAT31(CONCAT21(CONCAT11(*pbVar17,param_3[6]),param_3[7]),param_3[8]);
      uVar18 = (ulonglong)uVar13;
      if (uVar13 == 0xffffffff) {
        *param_4 = 2;
        *(undefined2 *)((longlong)param_4 + 10) = *(undefined2 *)((longlong)param_4 + 10);
        goto LAB_14034b7ed;
      }
      if (*(longlong *)(param_2 + 0x78) != 0) {
        if (*(uint *)(param_2 + 0x68) <= uVar13) {
          uVar18 = (ulonglong)(*(uint *)(param_2 + 0x68) - 1);
        }
        lVar3 = uVar18 * 4;
        uVar18 = (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x78) + uVar18 * 4);
        uVar20 = *(undefined4 *)(lVar3 + *(longlong *)(param_2 + 0x70));
      }
      sVar6 = (**(code **)(*(longlong *)(param_1 + 0x2e0) + 0x70))
                        (param_1,param_2 + 0x48,uVar20,uVar18);
      *(short *)((longlong)param_4 + 10) = *(short *)((longlong)param_4 + 10) + sVar6;
    }
    *param_4 = 2;
    goto LAB_14034b7ed;
  }
  if (bVar1 == 0xb) {
    if ((*(byte **)(param_2 + 0x40) <= pbVar16) &&
       (pbVar16 <=
        (byte *)(((ulonglong)*(uint *)(param_2 + 0x88) - 2) + *(longlong *)(param_2 + 0x80)))) {
      param_4[2] = (uint)CONCAT11(*pbVar16,param_3[2]);
    }
    goto LAB_14034b7ed;
  }
  pbVar17 = *(byte **)(param_2 + 0x40);
  if ((pbVar16 < pbVar17) ||
     (pbVar21 = (byte *)((ulonglong)*(uint *)(param_2 + 0x88) + *(longlong *)(param_2 + 0x80)),
     pbVar21 + -4 < pbVar16)) goto LAB_14034b7ed;
  pbVar19 = param_3 + 4;
  uVar11 = (uint)CONCAT21(CONCAT11(*pbVar16,param_3[2]),param_3[3]);
  if ((uVar11 == 0) || ((pbVar16 = param_3 + uVar11, pbVar16 < pbVar17 || (pbVar21 <= pbVar16))))
  goto LAB_14034b7ed;
  cVar4 = '\0';
  uVar11 = 0;
  iVar9 = 0;
  if ((bVar1 == 4) || (cVar4 = '\x01', bVar1 == 5)) {
    cVar5 = FUN_140349c80(param_2,pbVar16,param_4 + 2,cVar4);
    if (((cVar5 != '\0') && (*(byte **)(param_2 + 0x40) <= pbVar19)) &&
       (pbVar19 <=
        (byte *)(((ulonglong)*(uint *)(param_2 + 0x88) - 0xc) + *(longlong *)(param_2 + 0x80)))) {
      param_4[10] = ((int)(short)((ushort)*pbVar19 << 8) | (uint)pbVar19[1]) << 0x10;
      param_4[0xb] = ((int)(short)((ushort)pbVar19[2] << 8) | (uint)pbVar19[3]) << 0x10;
      param_4[0xc] = ((int)(short)((ushort)pbVar19[4] << 8) | (uint)pbVar19[5]) << 0x10;
      param_4[0xd] = ((int)(short)((ushort)pbVar19[6] << 8) | (uint)pbVar19[7]) << 0x10;
      pbVar16 = pbVar19 + 0xc;
      param_4[0xe] = ((int)(short)((ushort)pbVar19[8] << 8) | (uint)pbVar19[9]) << 0x10;
      param_4[0xf] = ((int)(short)((ushort)pbVar19[10] << 8) | (uint)pbVar19[0xb]) << 0x10;
      if (cVar4 != '\0') {
        if ((pbVar16 < *(byte **)(param_2 + 0x40)) ||
           ((byte *)(((ulonglong)*(uint *)(param_2 + 0x88) - 4) + *(longlong *)(param_2 + 0x80)) <
            pbVar16)) goto LAB_14034b7ed;
        uVar13 = CONCAT31(CONCAT21(CONCAT11(*pbVar16,pbVar19[0xd]),pbVar19[0xe]),pbVar19[0xf]);
        if (uVar13 == 0xffffffff) {
          iVar10 = 0;
          iVar8 = 0;
          iVar7 = 0;
          iVar15 = 0;
        }
        else {
          lVar3 = *(longlong *)(param_1 + 0x2e0);
          uVar12 = uVar13;
          uVar14 = uVar20;
          if (*(longlong *)(param_2 + 0x78) != 0) {
            uVar11 = uVar13;
            if (*(uint *)(param_2 + 0x68) <= uVar13) {
              uVar11 = *(uint *)(param_2 + 0x68) - 1;
            }
            uVar12 = *(uint *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar11 * 4);
            uVar14 = *(undefined4 *)((ulonglong)uVar11 * 4 + *(longlong *)(param_2 + 0x70));
          }
          local_78 = (**(code **)(lVar3 + 0x70))(param_1,param_2 + 0x48,uVar14,uVar12);
          uVar12 = uVar13 + 1;
          uVar14 = uVar20;
          if (*(longlong *)(param_2 + 0x78) != 0) {
            uVar11 = *(uint *)(param_2 + 0x68) - 1;
            if (uVar12 < *(uint *)(param_2 + 0x68)) {
              uVar11 = uVar12;
            }
            uVar12 = *(uint *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar11 * 4);
            uVar14 = *(undefined4 *)(*(longlong *)(param_2 + 0x70) + (ulonglong)uVar11 * 4);
          }
          local_70 = (**(code **)(lVar3 + 0x70))(param_1,param_2 + 0x48,uVar14,uVar12);
          uVar12 = uVar13 + 2;
          uVar14 = uVar20;
          if (*(longlong *)(param_2 + 0x78) != 0) {
            uVar11 = *(uint *)(param_2 + 0x68) - 1;
            if (uVar12 < *(uint *)(param_2 + 0x68)) {
              uVar11 = uVar12;
            }
            uVar12 = *(uint *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar11 * 4);
            uVar14 = *(undefined4 *)(*(longlong *)(param_2 + 0x70) + (ulonglong)uVar11 * 4);
          }
          local_74 = (**(code **)(lVar3 + 0x70))(param_1,param_2 + 0x48,uVar14,uVar12);
          uVar12 = uVar13 + 3;
          if (*(longlong *)(param_2 + 0x78) != 0) {
            uVar11 = *(uint *)(param_2 + 0x68) - 1;
            if (uVar12 < *(uint *)(param_2 + 0x68)) {
              uVar11 = uVar12;
            }
            uVar20 = *(undefined4 *)(*(longlong *)(param_2 + 0x70) + (ulonglong)uVar11 * 4);
            uVar12 = *(uint *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar11 * 4);
          }
          iVar10 = (**(code **)(lVar3 + 0x70))(param_1,param_2 + 0x48,uVar20,uVar12);
          uVar12 = uVar13 + 4;
          if (*(longlong *)(param_2 + 0x78) == 0) {
            uVar20 = 0;
          }
          else {
            uVar11 = *(uint *)(param_2 + 0x68) - 1;
            if (uVar12 < *(uint *)(param_2 + 0x68)) {
              uVar11 = uVar12;
            }
            uVar20 = *(undefined4 *)(*(longlong *)(param_2 + 0x70) + (ulonglong)uVar11 * 4);
            uVar12 = *(uint *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar11 * 4);
          }
          uVar11 = (**(code **)(lVar3 + 0x70))(param_1,param_2 + 0x48,uVar20,uVar12);
          uVar13 = uVar13 + 5;
          if (*(longlong *)(param_2 + 0x78) == 0) {
            uVar20 = 0;
          }
          else {
            uVar12 = *(uint *)(param_2 + 0x68) - 1;
            if (uVar13 < *(uint *)(param_2 + 0x68)) {
              uVar12 = uVar13;
            }
            uVar20 = *(undefined4 *)(*(longlong *)(param_2 + 0x70) + (ulonglong)uVar12 * 4);
            uVar13 = *(uint *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar12 * 4);
          }
          iVar9 = (**(code **)(lVar3 + 0x70))(param_1,param_2 + 0x48,uVar20,uVar13);
          iVar8 = local_74;
          iVar7 = local_70;
          iVar15 = local_78;
        }
        param_4[10] = param_4[10] + iVar15 * 0x10000;
        param_4[0xb] = param_4[0xb] + iVar7 * 0x10000;
        param_4[0xc] = param_4[0xc] + iVar8 * 0x10000;
        param_4[0xd] = param_4[0xd] + iVar10 * 0x10000;
        param_4[0xe] = param_4[0xe] + uVar11 * 0x10000;
        param_4[0xf] = param_4[0xf] + iVar9 * 0x10000;
      }
      *param_4 = 4;
    }
    goto LAB_14034b7ed;
  }
  cVar4 = '\0';
  if ((bVar1 == 6) || (cVar4 = '\x01', bVar1 == 7)) {
    cVar5 = FUN_140349c80(param_2,pbVar16,param_4 + 2,cVar4);
    if ((cVar5 != '\0') &&
       ((*(byte **)(param_2 + 0x40) <= pbVar19 &&
        (pbVar19 <=
         (byte *)(((ulonglong)*(uint *)(param_2 + 0x88) - 0xc) + *(longlong *)(param_2 + 0x80))))))
    {
      param_4[10] = ((int)(short)((ushort)*pbVar19 << 8) | (uint)pbVar19[1]) << 0x10;
      param_4[0xb] = ((int)(short)((ushort)pbVar19[2] << 8) | (uint)pbVar19[3]) << 0x10;
      uVar13 = (int)(short)((ushort)pbVar19[4] << 8) | (uint)pbVar19[5];
      uVar12 = uVar13 << 0x10;
      if ((int)(uVar13 << 0x10) < 0) {
        uVar12 = 0x7fffffff;
      }
      param_4[0xc] = uVar12;
      param_4[0xd] = ((int)(short)((ushort)pbVar19[6] << 8) | (uint)pbVar19[7]) << 0x10;
      pbVar16 = pbVar19 + 0xc;
      param_4[0xe] = ((int)(short)((ushort)pbVar19[8] << 8) | (uint)pbVar19[9]) << 0x10;
      uVar13 = (int)(short)((ushort)pbVar19[10] << 8) | (uint)pbVar19[0xb];
      uVar12 = uVar13 << 0x10;
      if ((int)(uVar13 << 0x10) < 0) {
        uVar12 = 0x7fffffff;
      }
      param_4[0xf] = uVar12;
      if (cVar4 != '\0') {
        if ((pbVar16 < *(byte **)(param_2 + 0x40)) ||
           ((byte *)(((ulonglong)*(uint *)(param_2 + 0x88) - 4) + *(longlong *)(param_2 + 0x80)) <
            pbVar16)) goto LAB_14034b7ed;
        uVar13 = CONCAT31(CONCAT21(CONCAT11(*pbVar16,pbVar19[0xd]),pbVar19[0xe]),pbVar19[0xf]);
        if (uVar13 == 0xffffffff) {
          iVar10 = 0;
          iVar9 = 0;
          iVar8 = 0;
          iVar7 = 0;
          uVar13 = uVar11;
        }
        else {
          lVar3 = *(longlong *)(param_1 + 0x2e0);
          uVar12 = uVar13;
          uVar14 = uVar20;
          if (*(longlong *)(param_2 + 0x78) != 0) {
            uVar11 = uVar13;
            if (*(uint *)(param_2 + 0x68) <= uVar13) {
              uVar11 = *(uint *)(param_2 + 0x68) - 1;
            }
            uVar12 = *(uint *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar11 * 4);
            uVar14 = *(undefined4 *)((ulonglong)uVar11 * 4 + *(longlong *)(param_2 + 0x70));
          }
          local_78 = (**(code **)(lVar3 + 0x70))(param_1,param_2 + 0x48,uVar14,uVar12);
          uVar12 = uVar13 + 1;
          uVar14 = uVar20;
          if (*(longlong *)(param_2 + 0x78) != 0) {
            uVar11 = *(uint *)(param_2 + 0x68) - 1;
            if (uVar12 < *(uint *)(param_2 + 0x68)) {
              uVar11 = uVar12;
            }
            uVar12 = *(uint *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar11 * 4);
            uVar14 = *(undefined4 *)(*(longlong *)(param_2 + 0x70) + (ulonglong)uVar11 * 4);
          }
          local_70 = (**(code **)(lVar3 + 0x70))(param_1,param_2 + 0x48,uVar14,uVar12);
          uVar12 = uVar13 + 2;
          uVar14 = uVar20;
          if (*(longlong *)(param_2 + 0x78) != 0) {
            uVar11 = *(uint *)(param_2 + 0x68) - 1;
            if (uVar12 < *(uint *)(param_2 + 0x68)) {
              uVar11 = uVar12;
            }
            uVar12 = *(uint *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar11 * 4);
            uVar14 = *(undefined4 *)(*(longlong *)(param_2 + 0x70) + (ulonglong)uVar11 * 4);
          }
          local_74 = (**(code **)(lVar3 + 0x70))(param_1,param_2 + 0x48,uVar14,uVar12);
          uVar12 = uVar13 + 3;
          if (*(longlong *)(param_2 + 0x78) != 0) {
            uVar11 = *(uint *)(param_2 + 0x68) - 1;
            if (uVar12 < *(uint *)(param_2 + 0x68)) {
              uVar11 = uVar12;
            }
            uVar20 = *(undefined4 *)(*(longlong *)(param_2 + 0x70) + (ulonglong)uVar11 * 4);
            uVar12 = *(uint *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar11 * 4);
          }
          iVar10 = (**(code **)(lVar3 + 0x70))(param_1,param_2 + 0x48,uVar20,uVar12);
          uVar12 = uVar13 + 4;
          if (*(longlong *)(param_2 + 0x78) == 0) {
            uVar20 = 0;
          }
          else {
            uVar11 = *(uint *)(param_2 + 0x68) - 1;
            if (uVar12 < *(uint *)(param_2 + 0x68)) {
              uVar11 = uVar12;
            }
            uVar20 = *(undefined4 *)(*(longlong *)(param_2 + 0x70) + (ulonglong)uVar11 * 4);
            uVar12 = *(uint *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar11 * 4);
          }
          uVar11 = (**(code **)(lVar3 + 0x70))(param_1,param_2 + 0x48,uVar20,uVar12);
          uVar13 = uVar13 + 5;
          if (*(longlong *)(param_2 + 0x78) == 0) {
            uVar20 = 0;
          }
          else {
            uVar12 = *(uint *)(param_2 + 0x68) - 1;
            if (uVar13 < *(uint *)(param_2 + 0x68)) {
              uVar12 = uVar13;
            }
            uVar20 = *(undefined4 *)(*(longlong *)(param_2 + 0x70) + (ulonglong)uVar12 * 4);
            uVar13 = *(uint *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar12 * 4);
          }
          uVar13 = (**(code **)(lVar3 + 0x70))(param_1,param_2 + 0x48,uVar20,uVar13);
          iVar9 = local_74;
          iVar8 = local_70;
          iVar7 = local_78;
        }
        param_4[10] = param_4[10] + iVar7 * 0x10000;
        param_4[0xb] = param_4[0xb] + iVar8 * 0x10000;
        param_4[0xc] = param_4[0xc] + iVar9 * 0x10000;
        param_4[0xd] = param_4[0xd] + iVar10 * 0x10000;
        param_4[0xe] = param_4[0xe] + uVar11 * 0x10000;
        param_4[0xf] = param_4[0xf] + uVar13 * 0x10000;
      }
      *param_4 = 6;
    }
    goto LAB_14034b7ed;
  }
  cVar4 = '\0';
  if ((bVar1 == 8) || (cVar4 = '\x01', bVar1 == 9)) {
    cVar5 = FUN_140349c80(param_2,pbVar16,param_4 + 2,cVar4);
    if ((cVar5 != '\0') &&
       ((*(byte **)(param_2 + 0x40) <= pbVar19 &&
        (pbVar19 <=
         (byte *)(((ulonglong)*(uint *)(param_2 + 0x88) - 8) + *(longlong *)(param_2 + 0x80)))))) {
      param_4[10] = ((int)(short)((ushort)*pbVar19 << 8) | (uint)pbVar19[1]) << 0x10;
      param_4[0xb] = ((int)(short)((ushort)pbVar19[2] << 8) | (uint)pbVar19[3]) << 0x10;
      pbVar16 = pbVar19 + 8;
      param_4[0xc] = ((int)(short)((ushort)pbVar19[4] << 8) | (uint)pbVar19[5]) << 2;
      param_4[0xd] = ((int)(short)((ushort)pbVar19[6] << 8) | (uint)pbVar19[7]) << 2;
      if (cVar4 != '\0') {
        if ((pbVar16 < *(byte **)(param_2 + 0x40)) ||
           ((byte *)(((ulonglong)*(uint *)(param_2 + 0x88) - 4) + *(longlong *)(param_2 + 0x80)) <
            pbVar16)) goto LAB_14034b7ed;
        uVar13 = CONCAT31(CONCAT21(CONCAT11(*pbVar16,pbVar19[9]),pbVar19[10]),pbVar19[0xb]);
        if (uVar13 == 0xffffffff) {
          iVar7 = 0;
          iVar9 = 0;
          iVar10 = 0;
          iVar8 = 0;
        }
        else {
          lVar3 = *(longlong *)(param_1 + 0x2e0);
          uVar12 = uVar13;
          if (*(longlong *)(param_2 + 0x78) != 0) {
            if (*(uint *)(param_2 + 0x68) <= uVar13) {
              uVar12 = *(uint *)(param_2 + 0x68) - 1;
            }
            uVar20 = *(undefined4 *)((ulonglong)uVar12 * 4 + *(longlong *)(param_2 + 0x70));
            uVar12 = *(uint *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar12 * 4);
          }
          iVar10 = (**(code **)(lVar3 + 0x70))(param_1,param_2 + 0x48,uVar20,uVar12);
          uVar12 = uVar13 + 1;
          if (*(longlong *)(param_2 + 0x78) == 0) {
            uVar20 = 0;
          }
          else {
            uVar11 = *(uint *)(param_2 + 0x68) - 1;
            if (uVar12 < *(uint *)(param_2 + 0x68)) {
              uVar11 = uVar12;
            }
            uVar20 = *(undefined4 *)(*(longlong *)(param_2 + 0x70) + (ulonglong)uVar11 * 4);
            uVar12 = *(uint *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar11 * 4);
          }
          iVar9 = (**(code **)(lVar3 + 0x70))(param_1,param_2 + 0x48,uVar20,uVar12);
          uVar12 = uVar13 + 2;
          if (*(longlong *)(param_2 + 0x78) == 0) {
            uVar20 = 0;
          }
          else {
            uVar11 = *(uint *)(param_2 + 0x68) - 1;
            if (uVar12 < *(uint *)(param_2 + 0x68)) {
              uVar11 = uVar12;
            }
            uVar20 = *(undefined4 *)(*(longlong *)(param_2 + 0x70) + (ulonglong)uVar11 * 4);
            uVar12 = *(uint *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar11 * 4);
          }
          local_74 = (**(code **)(lVar3 + 0x70))(param_1,param_2 + 0x48,uVar20,uVar12);
          uVar13 = uVar13 + 3;
          if (*(longlong *)(param_2 + 0x78) == 0) {
            uVar20 = 0;
          }
          else {
            uVar12 = *(uint *)(param_2 + 0x68) - 1;
            if (uVar13 < *(uint *)(param_2 + 0x68)) {
              uVar12 = uVar13;
            }
            uVar20 = *(undefined4 *)(*(longlong *)(param_2 + 0x70) + (ulonglong)uVar12 * 4);
            uVar13 = *(uint *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar12 * 4);
          }
          iVar7 = (**(code **)(lVar3 + 0x70))(param_1,param_2 + 0x48,uVar20,uVar13);
          iVar8 = local_74;
        }
        param_4[10] = param_4[10] + iVar10 * 0x10000;
        param_4[0xc] = param_4[0xc] + iVar8 * 4;
        param_4[0xb] = param_4[0xb] + iVar9 * 0x10000;
        param_4[0xd] = param_4[0xd] + iVar7 * 4;
      }
      *param_4 = 8;
    }
    goto LAB_14034b7ed;
  }
  if (bVar1 == 10) {
    if ((pbVar17 <= pbVar19) && (pbVar19 <= pbVar21 + -2)) {
      *(byte **)(param_4 + 2) = pbVar16;
      *(undefined1 *)(param_4 + 4) = 0;
      param_4[6] = (uint)CONCAT11(*pbVar19,param_3[5]);
    }
    goto LAB_14034b7ed;
  }
  if (bVar1 - 0xc < 2) {
    *(byte **)(param_4 + 2) = pbVar16;
    *(undefined1 *)(param_4 + 4) = 0;
    if ((((*(byte **)(param_2 + 0x40) <= pbVar19) &&
         (pbVar16 = (byte *)((ulonglong)*(uint *)(param_2 + 0x88) + *(longlong *)(param_2 + 0x80)),
         pbVar19 <= pbVar16 + -4)) &&
        (uVar13 = (uint)CONCAT21(CONCAT11(*pbVar19,param_3[5]),param_3[6]), uVar13 != 0)) &&
       (((param_3 = param_3 + uVar13, *(byte **)(param_2 + 0x40) <= param_3 && (param_3 < pbVar16))
        && (param_3 <= pbVar16 + -0x18)))) {
      param_4[6] = CONCAT31(CONCAT21(CONCAT11(*param_3,param_3[1]),param_3[2]),param_3[3]);
      param_4[9] = CONCAT31(CONCAT21(CONCAT11(param_3[4],param_3[5]),param_3[6]),param_3[7]);
      param_4[7] = CONCAT31(CONCAT21(CONCAT11(param_3[8],param_3[9]),param_3[10]),param_3[0xb]);
      param_4[10] = CONCAT31(CONCAT21(CONCAT11(param_3[0xc],param_3[0xd]),param_3[0xe]),param_3[0xf]
                            );
      pbVar16 = param_3 + 0x18;
      param_4[8] = CONCAT31(CONCAT21(CONCAT11(param_3[0x10],param_3[0x11]),param_3[0x12]),
                            param_3[0x13]);
      param_4[0xb] = CONCAT31(CONCAT21(CONCAT11(param_3[0x14],param_3[0x15]),param_3[0x16]),
                              param_3[0x17]);
      if (bVar1 == 0xd) {
        if ((pbVar16 < *(byte **)(param_2 + 0x40)) ||
           ((byte *)(((ulonglong)*(uint *)(param_2 + 0x88) - 4) + *(longlong *)(param_2 + 0x80)) <
            pbVar16)) goto LAB_14034b7ed;
        uVar13 = CONCAT31(CONCAT21(CONCAT11(*pbVar16,param_3[0x19]),param_3[0x1a]),param_3[0x1b]);
        if (uVar13 == 0xffffffff) {
          iVar10 = 0;
          iVar9 = 0;
          iVar8 = 0;
          iVar7 = 0;
          uVar12 = uVar11;
        }
        else {
          lVar3 = *(longlong *)(param_1 + 0x2e0);
          uVar12 = uVar13;
          uVar14 = uVar20;
          if (*(longlong *)(param_2 + 0x78) != 0) {
            uVar11 = uVar13;
            if (*(uint *)(param_2 + 0x68) <= uVar13) {
              uVar11 = *(uint *)(param_2 + 0x68) - 1;
            }
            uVar12 = *(uint *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar11 * 4);
            uVar14 = *(undefined4 *)((ulonglong)uVar11 * 4 + *(longlong *)(param_2 + 0x70));
          }
          local_74 = (**(code **)(lVar3 + 0x70))(param_1,param_2 + 0x48,uVar14,uVar12);
          uVar12 = uVar13 + 1;
          uVar14 = uVar20;
          if (*(longlong *)(param_2 + 0x78) != 0) {
            uVar11 = *(uint *)(param_2 + 0x68) - 1;
            if (uVar12 < *(uint *)(param_2 + 0x68)) {
              uVar11 = uVar12;
            }
            uVar12 = *(uint *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar11 * 4);
            uVar14 = *(undefined4 *)(*(longlong *)(param_2 + 0x70) + (ulonglong)uVar11 * 4);
          }
          local_70 = (**(code **)(lVar3 + 0x70))(param_1,param_2 + 0x48,uVar14,uVar12);
          uVar12 = uVar13 + 2;
          uVar14 = uVar20;
          if (*(longlong *)(param_2 + 0x78) != 0) {
            uVar11 = *(uint *)(param_2 + 0x68) - 1;
            if (uVar12 < *(uint *)(param_2 + 0x68)) {
              uVar11 = uVar12;
            }
            uVar12 = *(uint *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar11 * 4);
            uVar14 = *(undefined4 *)(*(longlong *)(param_2 + 0x70) + (ulonglong)uVar11 * 4);
          }
          local_78 = (**(code **)(lVar3 + 0x70))(param_1,param_2 + 0x48,uVar14,uVar12);
          uVar12 = uVar13 + 3;
          if (*(longlong *)(param_2 + 0x78) != 0) {
            uVar11 = *(uint *)(param_2 + 0x68) - 1;
            if (uVar12 < *(uint *)(param_2 + 0x68)) {
              uVar11 = uVar12;
            }
            uVar20 = *(undefined4 *)(*(longlong *)(param_2 + 0x70) + (ulonglong)uVar11 * 4);
            uVar12 = *(uint *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar11 * 4);
          }
          iVar10 = (**(code **)(lVar3 + 0x70))(param_1,param_2 + 0x48,uVar20,uVar12);
          uVar12 = uVar13 + 4;
          if (*(longlong *)(param_2 + 0x78) == 0) {
            uVar20 = 0;
          }
          else {
            uVar11 = *(uint *)(param_2 + 0x68) - 1;
            if (uVar12 < *(uint *)(param_2 + 0x68)) {
              uVar11 = uVar12;
            }
            uVar20 = *(undefined4 *)(*(longlong *)(param_2 + 0x70) + (ulonglong)uVar11 * 4);
            uVar12 = *(uint *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar11 * 4);
          }
          uVar12 = (**(code **)(lVar3 + 0x70))(param_1,param_2 + 0x48,uVar20,uVar12);
          uVar13 = uVar13 + 5;
          if (*(longlong *)(param_2 + 0x78) == 0) {
            uVar20 = 0;
          }
          else {
            uVar11 = *(uint *)(param_2 + 0x68) - 1;
            if (uVar13 < *(uint *)(param_2 + 0x68)) {
              uVar11 = uVar13;
            }
            uVar20 = *(undefined4 *)(*(longlong *)(param_2 + 0x70) + (ulonglong)uVar11 * 4);
            uVar13 = *(uint *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar11 * 4);
          }
          uVar11 = (**(code **)(lVar3 + 0x70))(param_1,param_2 + 0x48,uVar20,uVar13);
          iVar9 = local_78;
          iVar8 = local_70;
          iVar7 = local_74;
        }
        param_4[10] = param_4[10] + iVar10;
        param_4[0xb] = param_4[0xb] + uVar11;
        param_4[6] = iVar7 + param_4[6];
        param_4[7] = iVar9 + param_4[7];
        param_4[8] = uVar12 + param_4[8];
        param_4[9] = iVar8 + param_4[9];
      }
      *param_4 = 0xc;
    }
    goto LAB_14034b7ed;
  }
  if (bVar1 - 0xe < 2) {
    *(byte **)(param_4 + 2) = pbVar16;
    *(undefined1 *)(param_4 + 4) = 0;
    if ((*(byte **)(param_2 + 0x40) <= pbVar19) &&
       (pbVar19 <=
        (byte *)(((ulonglong)*(uint *)(param_2 + 0x88) - 4) + *(longlong *)(param_2 + 0x80)))) {
      pbVar16 = param_3 + 8;
      param_4[6] = ((int)(short)((ushort)*pbVar19 << 8) | (uint)param_3[5]) << 0x10;
      param_4[7] = ((int)(short)((ushort)param_3[6] << 8) | (uint)param_3[7]) << 0x10;
      if (bVar1 == 0xf) {
        if ((pbVar16 < *(byte **)(param_2 + 0x40)) ||
           ((byte *)(((ulonglong)*(uint *)(param_2 + 0x88) - 4) + *(longlong *)(param_2 + 0x80)) <
            pbVar16)) goto LAB_14034b7ed;
        uVar13 = CONCAT31(CONCAT21(CONCAT11(*pbVar16,param_3[9]),param_3[10]),param_3[0xb]);
        uVar12 = uVar11;
        if (uVar13 != 0xffffffff) {
          lVar3 = *(longlong *)(param_1 + 0x2e0);
          uVar12 = uVar13;
          uVar14 = uVar20;
          if (*(longlong *)(param_2 + 0x78) != 0) {
            uVar11 = uVar13;
            if (*(uint *)(param_2 + 0x68) <= uVar13) {
              uVar11 = *(uint *)(param_2 + 0x68) - 1;
            }
            uVar12 = *(uint *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar11 * 4);
            uVar14 = *(undefined4 *)((ulonglong)uVar11 * 4 + *(longlong *)(param_2 + 0x70));
          }
          uVar11 = (**(code **)(lVar3 + 0x70))(param_1,param_2 + 0x48,uVar14,uVar12);
          uVar13 = uVar13 + 1;
          if (*(longlong *)(param_2 + 0x78) != 0) {
            uVar12 = *(uint *)(param_2 + 0x68) - 1;
            if (uVar13 < *(uint *)(param_2 + 0x68)) {
              uVar12 = uVar13;
            }
            uVar20 = *(undefined4 *)(*(longlong *)(param_2 + 0x70) + (ulonglong)uVar12 * 4);
            uVar13 = *(uint *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar12 * 4);
          }
          uVar12 = (**(code **)(lVar3 + 0x70))(param_1,param_2 + 0x48,uVar20,uVar13);
        }
        param_4[6] = param_4[6] + uVar11 * 0x10000;
        param_4[7] = param_4[7] + uVar12 * 0x10000;
      }
      *param_4 = 0xe;
    }
    goto LAB_14034b7ed;
  }
  if (bVar1 - 0x10 < 8) {
    *(byte **)(param_4 + 2) = pbVar16;
    *(undefined1 *)(param_4 + 4) = 0;
    if ((*(byte **)(param_2 + 0x40) <= pbVar19) &&
       (pbVar19 <=
        (byte *)(((ulonglong)*(uint *)(param_2 + 0x88) - 2) + *(longlong *)(param_2 + 0x80)))) {
      pbVar16 = param_3 + 6;
      uVar12 = ((int)(short)((ushort)*pbVar19 << 8) | (uint)param_3[5]) << 2;
      param_4[6] = uVar12;
      if (bVar1 - 0x10 < 4) {
        if ((pbVar16 < *(byte **)(param_2 + 0x40)) ||
           ((byte *)(((ulonglong)*(uint *)(param_2 + 0x88) - 2) + *(longlong *)(param_2 + 0x80)) <
            pbVar16)) goto LAB_14034b7ed;
        bVar2 = *pbVar16;
        pbVar16 = param_3 + 8;
        uVar12 = ((int)(short)((ushort)bVar2 << 8) | (uint)param_3[7]) << 2;
      }
      param_4[7] = uVar12;
      if ((bVar1 - 0x12 & 0xfffffffa) == 0) {
        if ((pbVar16 < *(byte **)(param_2 + 0x40)) ||
           ((byte *)(((ulonglong)*(uint *)(param_2 + 0x88) - 4) + *(longlong *)(param_2 + 0x80)) <
            pbVar16)) goto LAB_14034b7ed;
        pbVar17 = pbVar16 + 4;
        param_4[8] = ((int)(short)((ushort)*pbVar16 << 8) | (uint)pbVar16[1]) << 0x10;
        uVar13 = ((int)(short)((ushort)pbVar16[2] << 8) | (uint)pbVar16[3]) << 0x10;
      }
      else {
        param_4[8] = 0;
        pbVar17 = pbVar16;
      }
      param_4[9] = uVar13;
      if ((bVar1 - 0x11 & 0xfffffff9) == 0) {
        if ((pbVar17 < *(byte **)(param_2 + 0x40)) ||
           ((byte *)(((ulonglong)*(uint *)(param_2 + 0x88) - 4) + *(longlong *)(param_2 + 0x80)) <
            pbVar17)) goto LAB_14034b7ed;
        uVar13 = CONCAT31(CONCAT21(CONCAT11(*pbVar17,pbVar17[1]),pbVar17[2]),pbVar17[3]);
        if (bVar1 == 0x11) {
          if (uVar13 != 0xffffffff) {
            lVar3 = *(longlong *)(param_1 + 0x2e0);
            uVar12 = uVar13;
            uVar14 = uVar20;
            if (*(longlong *)(param_2 + 0x78) != 0) {
              uVar11 = uVar13;
              if (*(uint *)(param_2 + 0x68) <= uVar13) {
                uVar11 = *(uint *)(param_2 + 0x68) - 1;
              }
              uVar12 = *(uint *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar11 * 4);
              uVar14 = *(undefined4 *)((ulonglong)uVar11 * 4 + *(longlong *)(param_2 + 0x70));
            }
            iVar10 = (**(code **)(lVar3 + 0x70))(param_1,param_2 + 0x48,uVar14,uVar12);
            uVar12 = uVar13 + 1;
            uVar14 = uVar20;
            if (*(longlong *)(param_2 + 0x78) != 0) {
              uVar11 = *(uint *)(param_2 + 0x68) - 1;
              if (uVar12 < *(uint *)(param_2 + 0x68)) {
                uVar11 = uVar12;
              }
              uVar12 = *(uint *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar11 * 4);
              uVar14 = *(undefined4 *)(*(longlong *)(param_2 + 0x70) + (ulonglong)uVar11 * 4);
            }
            uVar11 = (**(code **)(lVar3 + 0x70))(param_1,param_2 + 0x48,uVar14,uVar12);
          }
          param_4[6] = param_4[6] + iVar10 * 4;
          param_4[7] = param_4[7] + uVar11 * 4;
        }
        uVar12 = *param_4;
        if (uVar12 == 0x13) {
          if (uVar13 == 0xffffffff) {
            iVar7 = 0;
            iVar10 = 0;
            iVar9 = 0;
            iVar8 = 0;
          }
          else {
            lVar3 = *(longlong *)(param_1 + 0x2e0);
            uVar12 = uVar13;
            uVar14 = uVar20;
            if (*(longlong *)(param_2 + 0x78) != 0) {
              uVar11 = uVar13;
              if (*(uint *)(param_2 + 0x68) <= uVar13) {
                uVar11 = *(uint *)(param_2 + 0x68) - 1;
              }
              uVar12 = *(uint *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar11 * 4);
              uVar14 = *(undefined4 *)((ulonglong)uVar11 * 4 + *(longlong *)(param_2 + 0x70));
            }
            local_78 = (**(code **)(lVar3 + 0x70))(param_1,param_2 + 0x48,uVar14,uVar12);
            uVar12 = uVar13 + 1;
            if (*(longlong *)(param_2 + 0x78) != 0) {
              uVar11 = *(uint *)(param_2 + 0x68) - 1;
              if (uVar12 < *(uint *)(param_2 + 0x68)) {
                uVar11 = uVar12;
              }
              uVar20 = *(undefined4 *)(*(longlong *)(param_2 + 0x70) + (ulonglong)uVar11 * 4);
              uVar12 = *(uint *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar11 * 4);
            }
            iVar10 = (**(code **)(lVar3 + 0x70))(param_1,param_2 + 0x48,uVar20,uVar12);
            uVar12 = uVar13 + 2;
            if (*(longlong *)(param_2 + 0x78) == 0) {
              uVar20 = 0;
            }
            else {
              uVar11 = *(uint *)(param_2 + 0x68) - 1;
              if (uVar12 < *(uint *)(param_2 + 0x68)) {
                uVar11 = uVar12;
              }
              uVar20 = *(undefined4 *)(*(longlong *)(param_2 + 0x70) + (ulonglong)uVar11 * 4);
              uVar12 = *(uint *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar11 * 4);
            }
            iVar9 = (**(code **)(lVar3 + 0x70))(param_1,param_2 + 0x48,uVar20,uVar12);
            uVar12 = uVar13 + 3;
            if (*(longlong *)(param_2 + 0x78) == 0) {
              uVar20 = 0;
            }
            else {
              uVar11 = *(uint *)(param_2 + 0x68) - 1;
              if (uVar12 < *(uint *)(param_2 + 0x68)) {
                uVar11 = uVar12;
              }
              uVar20 = *(undefined4 *)(*(longlong *)(param_2 + 0x70) + (ulonglong)uVar11 * 4);
              uVar12 = *(uint *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar11 * 4);
            }
            iVar7 = (**(code **)(lVar3 + 0x70))(param_1,param_2 + 0x48,uVar20,uVar12);
            uVar12 = *param_4;
            iVar8 = local_78;
          }
          param_4[6] = param_4[6] + iVar8 * 4;
          param_4[7] = param_4[7] + iVar10 * 4;
          param_4[8] = param_4[8] + iVar9 * 0x10000;
          param_4[9] = param_4[9] + iVar7 * 0x10000;
        }
        uVar20 = 0;
        iVar10 = 0;
        if (uVar12 == 0x15) {
          iVar9 = iVar10;
          if (uVar13 != 0xffffffff) {
            uVar12 = uVar13;
            uVar14 = uVar20;
            if (*(longlong *)(param_2 + 0x78) != 0) {
              uVar11 = uVar13;
              if (*(uint *)(param_2 + 0x68) <= uVar13) {
                uVar11 = *(uint *)(param_2 + 0x68) - 1;
              }
              uVar12 = *(uint *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar11 * 4);
              uVar14 = *(undefined4 *)((ulonglong)uVar11 * 4 + *(longlong *)(param_2 + 0x70));
            }
            iVar9 = (**(code **)(*(longlong *)(param_1 + 0x2e0) + 0x70))
                              (param_1,param_2 + 0x48,uVar14,uVar12);
            uVar12 = *param_4;
          }
          param_4[6] = param_4[6] + iVar9 * 4;
          param_4[7] = param_4[7] + iVar9 * 4;
        }
        if (uVar12 == 0x17) {
          if (uVar13 == 0xffffffff) {
            iVar9 = 0;
            iVar8 = 0;
          }
          else {
            lVar3 = *(longlong *)(param_1 + 0x2e0);
            uVar12 = uVar13;
            if (*(longlong *)(param_2 + 0x78) != 0) {
              if (*(uint *)(param_2 + 0x68) <= uVar13) {
                uVar12 = *(uint *)(param_2 + 0x68) - 1;
              }
              uVar20 = *(undefined4 *)((ulonglong)uVar12 * 4 + *(longlong *)(param_2 + 0x70));
              uVar12 = *(uint *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar12 * 4);
            }
            iVar10 = (**(code **)(lVar3 + 0x70))(param_1,param_2 + 0x48,uVar20,uVar12);
            uVar12 = uVar13 + 1;
            if (*(longlong *)(param_2 + 0x78) == 0) {
              uVar20 = 0;
            }
            else {
              uVar11 = *(uint *)(param_2 + 0x68) - 1;
              if (uVar12 < *(uint *)(param_2 + 0x68)) {
                uVar11 = uVar12;
              }
              uVar20 = *(undefined4 *)(*(longlong *)(param_2 + 0x70) + (ulonglong)uVar11 * 4);
              uVar12 = *(uint *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar11 * 4);
            }
            iVar9 = (**(code **)(lVar3 + 0x70))(param_1,param_2 + 0x48,uVar20,uVar12);
            uVar13 = uVar13 + 2;
            if (*(longlong *)(param_2 + 0x78) == 0) {
              uVar20 = 0;
            }
            else {
              uVar12 = *(uint *)(param_2 + 0x68) - 1;
              if (uVar13 < *(uint *)(param_2 + 0x68)) {
                uVar12 = uVar13;
              }
              uVar20 = *(undefined4 *)(*(longlong *)(param_2 + 0x70) + (ulonglong)uVar12 * 4);
              uVar13 = *(uint *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar12 * 4);
            }
            iVar8 = (**(code **)(lVar3 + 0x70))(param_1,param_2 + 0x48,uVar20,uVar13);
          }
          param_4[6] = param_4[6] + iVar10 * 4;
          param_4[7] = param_4[7] + iVar10 * 4;
          param_4[8] = param_4[8] + iVar9 * 0x10000;
          param_4[9] = param_4[9] + iVar8 * 0x10000;
        }
      }
      *param_4 = 0x10;
    }
    goto LAB_14034b7ed;
  }
  if (3 < bVar1 - 0x18) {
    if (bVar1 - 0x1c < 4) {
      *(byte **)(param_4 + 2) = pbVar16;
      *(undefined1 *)(param_4 + 4) = 0;
      if ((*(byte **)(param_2 + 0x40) <= pbVar19) &&
         (pbVar19 <=
          (byte *)(((ulonglong)*(uint *)(param_2 + 0x88) - 4) + *(longlong *)(param_2 + 0x80)))) {
        pbVar16 = param_3 + 8;
        param_4[6] = ((int)(short)((ushort)*pbVar19 << 8) | (uint)param_3[5]) << 2;
        param_4[7] = ((int)(short)((ushort)param_3[6] << 8) | (uint)param_3[7]) << 2;
        if (bVar1 - 0x1e < 2) {
          if ((pbVar16 < *(byte **)(param_2 + 0x40)) ||
             ((byte *)(((ulonglong)*(uint *)(param_2 + 0x88) - 4) + *(longlong *)(param_2 + 0x80)) <
              pbVar16)) goto LAB_14034b7ed;
          bVar2 = *pbVar16;
          pbVar16 = param_3 + 0xc;
          param_4[8] = ((int)(short)((ushort)bVar2 << 8) | (uint)param_3[9]) << 0x10;
          uVar11 = ((int)(short)((ushort)param_3[10] << 8) | (uint)param_3[0xb]) << 0x10;
        }
        else {
          param_4[8] = 0;
        }
        param_4[9] = uVar11;
        if ((bVar1 - 0x1d & 0xfffffffd) == 0) {
          if ((pbVar16 < *(byte **)(param_2 + 0x40)) ||
             ((byte *)(((ulonglong)*(uint *)(param_2 + 0x88) - 4) + *(longlong *)(param_2 + 0x80)) <
              pbVar16)) goto LAB_14034b7ed;
          uVar13 = CONCAT31(CONCAT21(CONCAT11(*pbVar16,pbVar16[1]),pbVar16[2]),pbVar16[3]);
          if (bVar1 == 0x1d) {
            iVar10 = iVar9;
            if (uVar13 != 0xffffffff) {
              lVar3 = *(longlong *)(param_1 + 0x2e0);
              uVar12 = uVar13;
              uVar14 = uVar20;
              if (*(longlong *)(param_2 + 0x78) != 0) {
                uVar11 = uVar13;
                if (*(uint *)(param_2 + 0x68) <= uVar13) {
                  uVar11 = *(uint *)(param_2 + 0x68) - 1;
                }
                uVar12 = *(uint *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar11 * 4);
                uVar14 = *(undefined4 *)((ulonglong)uVar11 * 4 + *(longlong *)(param_2 + 0x70));
              }
              iVar9 = (**(code **)(lVar3 + 0x70))(param_1,param_2 + 0x48,uVar14,uVar12);
              uVar12 = uVar13 + 1;
              uVar14 = uVar20;
              if (*(longlong *)(param_2 + 0x78) != 0) {
                uVar11 = *(uint *)(param_2 + 0x68) - 1;
                if (uVar12 < *(uint *)(param_2 + 0x68)) {
                  uVar11 = uVar12;
                }
                uVar12 = *(uint *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar11 * 4);
                uVar14 = *(undefined4 *)(*(longlong *)(param_2 + 0x70) + (ulonglong)uVar11 * 4);
              }
              iVar10 = (**(code **)(lVar3 + 0x70))(param_1,param_2 + 0x48,uVar14,uVar12);
              uVar12 = *param_4;
            }
            param_4[6] = param_4[6] + iVar9 * 4;
            param_4[7] = param_4[7] + iVar10 * 4;
          }
          if (uVar12 == 0x1f) {
            if (uVar13 == 0xffffffff) {
              iVar7 = 0;
              iVar10 = 0;
              iVar9 = 0;
              iVar8 = 0;
            }
            else {
              lVar3 = *(longlong *)(param_1 + 0x2e0);
              uVar12 = uVar13;
              uVar14 = uVar20;
              if (*(longlong *)(param_2 + 0x78) != 0) {
                uVar11 = uVar13;
                if (*(uint *)(param_2 + 0x68) <= uVar13) {
                  uVar11 = *(uint *)(param_2 + 0x68) - 1;
                }
                uVar12 = *(uint *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar11 * 4);
                uVar14 = *(undefined4 *)((ulonglong)uVar11 * 4 + *(longlong *)(param_2 + 0x70));
              }
              local_78 = (**(code **)(lVar3 + 0x70))(param_1,param_2 + 0x48,uVar14,uVar12);
              uVar12 = uVar13 + 1;
              if (*(longlong *)(param_2 + 0x78) != 0) {
                uVar11 = *(uint *)(param_2 + 0x68) - 1;
                if (uVar12 < *(uint *)(param_2 + 0x68)) {
                  uVar11 = uVar12;
                }
                uVar20 = *(undefined4 *)(*(longlong *)(param_2 + 0x70) + (ulonglong)uVar11 * 4);
                uVar12 = *(uint *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar11 * 4);
              }
              iVar10 = (**(code **)(lVar3 + 0x70))(param_1,param_2 + 0x48,uVar20,uVar12);
              uVar12 = uVar13 + 2;
              if (*(longlong *)(param_2 + 0x78) == 0) {
                uVar20 = 0;
              }
              else {
                uVar11 = *(uint *)(param_2 + 0x68) - 1;
                if (uVar12 < *(uint *)(param_2 + 0x68)) {
                  uVar11 = uVar12;
                }
                uVar20 = *(undefined4 *)(*(longlong *)(param_2 + 0x70) + (ulonglong)uVar11 * 4);
                uVar12 = *(uint *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar11 * 4);
              }
              iVar9 = (**(code **)(lVar3 + 0x70))(param_1,param_2 + 0x48,uVar20,uVar12);
              uVar13 = uVar13 + 3;
              if (*(longlong *)(param_2 + 0x78) == 0) {
                uVar20 = 0;
              }
              else {
                uVar12 = *(uint *)(param_2 + 0x68) - 1;
                if (uVar13 < *(uint *)(param_2 + 0x68)) {
                  uVar12 = uVar13;
                }
                uVar20 = *(undefined4 *)(*(longlong *)(param_2 + 0x70) + (ulonglong)uVar12 * 4);
                uVar13 = *(uint *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar12 * 4);
              }
              iVar7 = (**(code **)(lVar3 + 0x70))(param_1,param_2 + 0x48,uVar20,uVar13);
              iVar8 = local_78;
            }
            param_4[6] = param_4[6] + iVar8 * 4;
            param_4[7] = param_4[7] + iVar10 * 4;
            param_4[8] = param_4[8] + iVar9 * 0x10000;
            param_4[9] = param_4[9] + iVar7 * 0x10000;
          }
        }
        *param_4 = 0x1c;
      }
    }
    else if (bVar1 == 0x20) {
      *(byte **)(param_4 + 2) = pbVar16;
      *(undefined1 *)(param_4 + 4) = 0;
      if (((*(byte **)(param_2 + 0x40) <= pbVar19) &&
          (pbVar19 <=
           (byte *)(((ulonglong)*(uint *)(param_2 + 0x88) - 1) + *(longlong *)(param_2 + 0x80)))) &&
         (*pbVar19 < 0x1c)) {
        param_4[6] = (uint)*pbVar19;
        pbVar16 = param_3 + 5;
        if (((*(byte **)(param_2 + 0x40) <= pbVar16) &&
            (pbVar17 = (byte *)((ulonglong)*(uint *)(param_2 + 0x88) + *(longlong *)(param_2 + 0x80)
                               ), pbVar16 <= pbVar17 + -4)) &&
           ((uVar13 = (uint)CONCAT21(CONCAT11(*pbVar16,param_3[6]),param_3[7]), uVar13 != 0 &&
            ((param_3 = param_3 + uVar13, *(byte **)(param_2 + 0x40) <= param_3 &&
             (param_3 < pbVar17)))))) {
          *(byte **)(param_4 + 8) = param_3;
          *(undefined1 *)(param_4 + 10) = 0;
        }
      }
    }
    goto LAB_14034b7ed;
  }
  *(byte **)(param_4 + 2) = pbVar16;
  *(undefined1 *)(param_4 + 4) = 0;
  if ((pbVar19 < *(byte **)(param_2 + 0x40)) ||
     ((byte *)(((ulonglong)*(uint *)(param_2 + 0x88) - 2) + *(longlong *)(param_2 + 0x80)) < pbVar19
     )) goto LAB_14034b7ed;
  pbVar16 = param_3 + 6;
  param_4[6] = ((int)(short)((ushort)*pbVar19 << 8) | (uint)param_3[5]) << 2;
  if (uVar12 - 0x1a < 2) {
    if ((pbVar16 < *(byte **)(param_2 + 0x40)) ||
       ((byte *)(((ulonglong)*(uint *)(param_2 + 0x88) - 4) + *(longlong *)(param_2 + 0x80)) <
        pbVar16)) goto LAB_14034b7ed;
    bVar1 = *pbVar16;
    pbVar16 = param_3 + 10;
    param_4[7] = ((int)(short)((ushort)bVar1 << 8) | (uint)param_3[7]) << 0x10;
    uVar11 = ((int)(short)((ushort)param_3[8] << 8) | (uint)param_3[9]) << 0x10;
  }
  else {
    param_4[7] = 0;
  }
  param_4[8] = uVar11;
  uVar13 = *param_4;
  if ((uVar13 - 0x19 & 0xfffffffd) == 0) {
    if ((pbVar16 < *(byte **)(param_2 + 0x40)) ||
       ((byte *)(((ulonglong)*(uint *)(param_2 + 0x88) - 4) + *(longlong *)(param_2 + 0x80)) <
        pbVar16)) goto LAB_14034b7ed;
    iVar10 = 3;
    if (uVar13 != 0x1b) {
      iVar10 = 0;
    }
    if (uVar13 == 0x19) {
      iVar10 = 1;
    }
    else if (uVar13 != 0x1b) goto LAB_14034a96a;
    local_88 = &local_68;
    cVar4 = func_0x0001403493a0(param_1,param_2,
                                CONCAT31(CONCAT21(CONCAT11(*pbVar16,pbVar16[1]),pbVar16[2]),
                                         pbVar16[3]),iVar10);
    if (cVar4 == '\0') goto LAB_14034b7ed;
    param_4[6] = param_4[6] + (int)local_68 * 4;
    if (iVar10 == 3) {
      param_4[7] = param_4[7] + local_68._4_4_ * 0x10000;
      param_4[8] = param_4[8] + local_60 * 0x10000;
    }
  }
LAB_14034a96a:
  *param_4 = 0x18;
LAB_14034b7ed:
  func_0x0001402ed2f0(local_50 ^ (ulonglong)auStack_a8);
  return;
}

