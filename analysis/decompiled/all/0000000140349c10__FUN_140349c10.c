// Function: FUN_140349c10
// Addr: 140349c10
// Size: 6955 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140349c10(longlong param_1,longlong param_2,byte *param_3,uint *param_4)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  char cVar4;
  char cVar5;
  short sVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  byte *pbVar17;
  byte *pbVar18;
  ulonglong uVar19;
  byte *pbVar20;
  byte *pbVar21;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  int local_78;
  int local_74;
  int local_70;
  undefined8 local_68;
  int local_60;
  ulonglong local_50;
  
  local_50 = DAT_1404dc040 ^ (ulonglong)auStack_a8;
  iVar11 = 0;
  iVar9 = 0;
  uVar7 = 0;
  local_68 = 0;
  uVar14 = 0;
  local_60 = 0;
  if ((((param_3 != (byte *)0x0) && (param_2 != 0)) && (*(longlong *)(param_2 + 0x80) != 0)) &&
     ((*(byte **)(param_2 + 0x40) <= param_3 &&
      (param_3 <=
       (byte *)((ulonglong)*(uint *)(param_2 + 0x88) + *(longlong *)(param_2 + 0x80) + -2))))) {
    bVar1 = *param_3;
    uVar13 = (uint)bVar1;
    *param_4 = (uint)bVar1;
    if (bVar1 < 0x21) {
      pbVar17 = param_3 + 1;
      if (bVar1 == 1) {
        if ((*(byte **)(param_2 + 0x40) <= pbVar17) &&
           (pbVar17 <=
            (byte *)(((ulonglong)*(uint *)(param_2 + 0x88) - 5) + *(longlong *)(param_2 + 0x80)))) {
          bVar1 = *pbVar17;
          if (((uint)bVar1 <= *(uint *)(param_2 + 0x28)) &&
             (iVar11 = CONCAT31(CONCAT21(CONCAT11(param_3[2],param_3[3]),param_3[4]),param_3[5]),
             (uint)bVar1 + iVar11 <= *(uint *)(param_2 + 0x28))) {
            param_4[2] = (uint)bVar1;
            param_4[3] = 0;
            *(ulonglong *)(param_4 + 4) =
                 (ulonglong)(uint)(iVar11 * 4) + *(longlong *)(param_2 + 0x30) + 4;
            return 1;
          }
        }
      }
      else if (bVar1 - 2 < 2) {
        if ((*(byte **)(param_2 + 0x40) <= pbVar17) &&
           (pbVar17 <=
            (byte *)(((ulonglong)*(uint *)(param_2 + 0x88) - 4) + *(longlong *)(param_2 + 0x80)))) {
          pbVar18 = param_3 + 5;
          *(ushort *)(param_4 + 2) = CONCAT11(*pbVar17,param_3[2]);
          *(ushort *)((longlong)param_4 + 10) = CONCAT11(param_3[3],param_3[4]);
          if (bVar1 == 3) {
            if (pbVar18 < *(byte **)(param_2 + 0x40)) {
              return 0;
            }
            if ((byte *)(((ulonglong)*(uint *)(param_2 + 0x88) - 4) + *(longlong *)(param_2 + 0x80))
                < pbVar18) {
              return 0;
            }
            uVar7 = CONCAT31(CONCAT21(CONCAT11(*pbVar18,param_3[6]),param_3[7]),param_3[8]);
            uVar19 = (ulonglong)uVar7;
            if (uVar7 == 0xffffffff) {
              *param_4 = 2;
              *(undefined2 *)((longlong)param_4 + 10) = *(undefined2 *)((longlong)param_4 + 10);
              return 1;
            }
            if (*(longlong *)(param_2 + 0x78) != 0) {
              if (*(uint *)(param_2 + 0x68) <= uVar7) {
                uVar19 = (ulonglong)(*(uint *)(param_2 + 0x68) - 1);
              }
              lVar3 = uVar19 * 4;
              uVar19 = (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x78) + uVar19 * 4);
              iVar11 = *(int *)(lVar3 + *(longlong *)(param_2 + 0x70));
            }
            sVar6 = (**(code **)(*(longlong *)(param_1 + 0x2e0) + 0x70))
                              (param_1,param_2 + 0x48,iVar11,uVar19);
            *(short *)((longlong)param_4 + 10) = *(short *)((longlong)param_4 + 10) + sVar6;
          }
          *param_4 = 2;
          return 1;
        }
      }
      else if (bVar1 == 0xb) {
        if ((*(byte **)(param_2 + 0x40) <= pbVar17) &&
           (pbVar17 <=
            (byte *)(((ulonglong)*(uint *)(param_2 + 0x88) - 2) + *(longlong *)(param_2 + 0x80)))) {
          param_4[2] = (uint)CONCAT11(*pbVar17,param_3[2]);
          return 1;
        }
      }
      else {
        pbVar18 = *(byte **)(param_2 + 0x40);
        if ((pbVar18 <= pbVar17) &&
           (pbVar21 = (byte *)((ulonglong)*(uint *)(param_2 + 0x88) + *(longlong *)(param_2 + 0x80))
           , pbVar17 <= pbVar21 + -4)) {
          pbVar20 = param_3 + 4;
          uVar12 = (uint)CONCAT21(CONCAT11(*pbVar17,param_3[2]),param_3[3]);
          if ((uVar12 != 0) &&
             ((pbVar17 = param_3 + uVar12, pbVar18 <= pbVar17 && (pbVar17 < pbVar21)))) {
            cVar4 = '\0';
            if ((bVar1 == 4) || (cVar4 = '\x01', bVar1 == 5)) {
              cVar5 = FUN_140349bb0(param_2,pbVar17,param_4 + 2,cVar4);
              if (((cVar5 != '\0') && (*(byte **)(param_2 + 0x40) <= pbVar20)) &&
                 (pbVar20 <=
                  (byte *)(((ulonglong)*(uint *)(param_2 + 0x88) - 0xc) +
                          *(longlong *)(param_2 + 0x80)))) {
                param_4[10] = ((int)(short)((ushort)*pbVar20 << 8) | (uint)pbVar20[1]) << 0x10;
                param_4[0xb] = ((int)(short)((ushort)pbVar20[2] << 8) | (uint)pbVar20[3]) << 0x10;
                param_4[0xc] = ((int)(short)((ushort)pbVar20[4] << 8) | (uint)pbVar20[5]) << 0x10;
                param_4[0xd] = ((int)(short)((ushort)pbVar20[6] << 8) | (uint)pbVar20[7]) << 0x10;
                pbVar17 = pbVar20 + 0xc;
                param_4[0xe] = ((int)(short)((ushort)pbVar20[8] << 8) | (uint)pbVar20[9]) << 0x10;
                param_4[0xf] = ((int)(short)((ushort)pbVar20[10] << 8) | (uint)pbVar20[0xb]) << 0x10
                ;
                if (cVar4 != '\0') {
                  if (pbVar17 < *(byte **)(param_2 + 0x40)) {
                    return 0;
                  }
                  if ((byte *)(((ulonglong)*(uint *)(param_2 + 0x88) - 4) +
                              *(longlong *)(param_2 + 0x80)) < pbVar17) {
                    return 0;
                  }
                  uVar14 = CONCAT31(CONCAT21(CONCAT11(*pbVar17,pbVar20[0xd]),pbVar20[0xe]),
                                    pbVar20[0xf]);
                  if (uVar14 == 0xffffffff) {
                    iVar11 = 0;
                    local_70 = 0;
                    local_74 = 0;
                    local_78 = 0;
                    uVar14 = uVar7;
                  }
                  else {
                    lVar3 = *(longlong *)(param_1 + 0x2e0);
                    uVar7 = uVar14;
                    iVar9 = iVar11;
                    if (*(longlong *)(param_2 + 0x78) != 0) {
                      uVar13 = uVar14;
                      if (*(uint *)(param_2 + 0x68) <= uVar14) {
                        uVar13 = *(uint *)(param_2 + 0x68) - 1;
                      }
                      uVar7 = *(uint *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar13 * 4);
                      iVar9 = *(int *)((ulonglong)uVar13 * 4 + *(longlong *)(param_2 + 0x70));
                    }
                    local_78 = (**(code **)(lVar3 + 0x70))(param_1,param_2 + 0x48,iVar9,uVar7);
                    uVar7 = uVar14 + 1;
                    iVar9 = iVar11;
                    if (*(longlong *)(param_2 + 0x78) != 0) {
                      uVar13 = *(uint *)(param_2 + 0x68) - 1;
                      if (uVar7 < *(uint *)(param_2 + 0x68)) {
                        uVar13 = uVar7;
                      }
                      uVar7 = *(uint *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar13 * 4);
                      iVar9 = *(int *)(*(longlong *)(param_2 + 0x70) + (ulonglong)uVar13 * 4);
                    }
                    local_70 = (**(code **)(lVar3 + 0x70))(param_1,param_2 + 0x48,iVar9,uVar7);
                    uVar7 = uVar14 + 2;
                    iVar9 = iVar11;
                    if (*(longlong *)(param_2 + 0x78) != 0) {
                      uVar13 = *(uint *)(param_2 + 0x68) - 1;
                      if (uVar7 < *(uint *)(param_2 + 0x68)) {
                        uVar13 = uVar7;
                      }
                      uVar7 = *(uint *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar13 * 4);
                      iVar9 = *(int *)(*(longlong *)(param_2 + 0x70) + (ulonglong)uVar13 * 4);
                    }
                    local_74 = (**(code **)(lVar3 + 0x70))(param_1,param_2 + 0x48,iVar9,uVar7);
                    uVar7 = uVar14 + 3;
                    if (*(longlong *)(param_2 + 0x78) != 0) {
                      uVar13 = *(uint *)(param_2 + 0x68) - 1;
                      if (uVar7 < *(uint *)(param_2 + 0x68)) {
                        uVar13 = uVar7;
                      }
                      iVar11 = *(int *)(*(longlong *)(param_2 + 0x70) + (ulonglong)uVar13 * 4);
                      uVar7 = *(uint *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar13 * 4);
                    }
                    iVar11 = (**(code **)(lVar3 + 0x70))(param_1,param_2 + 0x48,iVar11,uVar7);
                    uVar7 = uVar14 + 4;
                    if (*(longlong *)(param_2 + 0x78) == 0) {
                      uVar15 = 0;
                    }
                    else {
                      uVar13 = *(uint *)(param_2 + 0x68) - 1;
                      if (uVar7 < *(uint *)(param_2 + 0x68)) {
                        uVar13 = uVar7;
                      }
                      uVar15 = *(undefined4 *)
                                (*(longlong *)(param_2 + 0x70) + (ulonglong)uVar13 * 4);
                      uVar7 = *(uint *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar13 * 4);
                    }
                    uVar7 = (**(code **)(lVar3 + 0x70))(param_1,param_2 + 0x48,uVar15,uVar7);
                    uVar14 = uVar14 + 5;
                    if (*(longlong *)(param_2 + 0x78) == 0) {
                      uVar15 = 0;
                    }
                    else {
                      uVar13 = *(uint *)(param_2 + 0x68) - 1;
                      if (uVar14 < *(uint *)(param_2 + 0x68)) {
                        uVar13 = uVar14;
                      }
                      uVar15 = *(undefined4 *)
                                (*(longlong *)(param_2 + 0x70) + (ulonglong)uVar13 * 4);
                      uVar14 = *(uint *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar13 * 4);
                    }
                    uVar14 = (**(code **)(lVar3 + 0x70))(param_1,param_2 + 0x48,uVar15,uVar14);
                  }
                  param_4[10] = param_4[10] + local_78 * 0x10000;
                  param_4[0xb] = param_4[0xb] + local_70 * 0x10000;
                  param_4[0xc] = param_4[0xc] + local_74 * 0x10000;
                  param_4[0xd] = param_4[0xd] + iVar11 * 0x10000;
                  param_4[0xe] = param_4[0xe] + uVar7 * 0x10000;
                  param_4[0xf] = param_4[0xf] + uVar14 * 0x10000;
                }
                *param_4 = 4;
                return 1;
              }
            }
            else {
              cVar4 = '\0';
              if ((bVar1 == 6) || (cVar4 = '\x01', bVar1 == 7)) {
                cVar5 = FUN_140349bb0(param_2,pbVar17,param_4 + 2,cVar4);
                if ((cVar5 != '\0') &&
                   ((*(byte **)(param_2 + 0x40) <= pbVar20 &&
                    (pbVar20 <=
                     (byte *)(((ulonglong)*(uint *)(param_2 + 0x88) - 0xc) +
                             *(longlong *)(param_2 + 0x80)))))) {
                  param_4[10] = ((int)(short)((ushort)*pbVar20 << 8) | (uint)pbVar20[1]) << 0x10;
                  param_4[0xb] = ((int)(short)((ushort)pbVar20[2] << 8) | (uint)pbVar20[3]) << 0x10;
                  uVar14 = (int)(short)((ushort)pbVar20[4] << 8) | (uint)pbVar20[5];
                  uVar13 = uVar14 << 0x10;
                  if ((int)(uVar14 << 0x10) < 0) {
                    uVar13 = 0x7fffffff;
                  }
                  param_4[0xc] = uVar13;
                  param_4[0xd] = ((int)(short)((ushort)pbVar20[6] << 8) | (uint)pbVar20[7]) << 0x10;
                  pbVar17 = pbVar20 + 0xc;
                  param_4[0xe] = ((int)(short)((ushort)pbVar20[8] << 8) | (uint)pbVar20[9]) << 0x10;
                  uVar14 = (int)(short)((ushort)pbVar20[10] << 8) | (uint)pbVar20[0xb];
                  uVar13 = uVar14 << 0x10;
                  if ((int)(uVar14 << 0x10) < 0) {
                    uVar13 = 0x7fffffff;
                  }
                  param_4[0xf] = uVar13;
                  if (cVar4 != '\0') {
                    if (pbVar17 < *(byte **)(param_2 + 0x40)) {
                      return 0;
                    }
                    if ((byte *)(((ulonglong)*(uint *)(param_2 + 0x88) - 4) +
                                *(longlong *)(param_2 + 0x80)) < pbVar17) {
                      return 0;
                    }
                    uVar14 = CONCAT31(CONCAT21(CONCAT11(*pbVar17,pbVar20[0xd]),pbVar20[0xe]),
                                      pbVar20[0xf]);
                    if (uVar14 == 0xffffffff) {
                      iVar11 = 0;
                      local_70 = 0;
                      local_74 = 0;
                      local_78 = 0;
                      uVar14 = uVar7;
                    }
                    else {
                      lVar3 = *(longlong *)(param_1 + 0x2e0);
                      uVar7 = uVar14;
                      iVar9 = iVar11;
                      if (*(longlong *)(param_2 + 0x78) != 0) {
                        uVar13 = uVar14;
                        if (*(uint *)(param_2 + 0x68) <= uVar14) {
                          uVar13 = *(uint *)(param_2 + 0x68) - 1;
                        }
                        uVar7 = *(uint *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar13 * 4);
                        iVar9 = *(int *)((ulonglong)uVar13 * 4 + *(longlong *)(param_2 + 0x70));
                      }
                      local_78 = (**(code **)(lVar3 + 0x70))(param_1,param_2 + 0x48,iVar9,uVar7);
                      uVar7 = uVar14 + 1;
                      iVar9 = iVar11;
                      if (*(longlong *)(param_2 + 0x78) != 0) {
                        uVar13 = *(uint *)(param_2 + 0x68) - 1;
                        if (uVar7 < *(uint *)(param_2 + 0x68)) {
                          uVar13 = uVar7;
                        }
                        uVar7 = *(uint *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar13 * 4);
                        iVar9 = *(int *)(*(longlong *)(param_2 + 0x70) + (ulonglong)uVar13 * 4);
                      }
                      local_70 = (**(code **)(lVar3 + 0x70))(param_1,param_2 + 0x48,iVar9,uVar7);
                      uVar7 = uVar14 + 2;
                      iVar9 = iVar11;
                      if (*(longlong *)(param_2 + 0x78) != 0) {
                        uVar13 = *(uint *)(param_2 + 0x68) - 1;
                        if (uVar7 < *(uint *)(param_2 + 0x68)) {
                          uVar13 = uVar7;
                        }
                        uVar7 = *(uint *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar13 * 4);
                        iVar9 = *(int *)(*(longlong *)(param_2 + 0x70) + (ulonglong)uVar13 * 4);
                      }
                      local_74 = (**(code **)(lVar3 + 0x70))(param_1,param_2 + 0x48,iVar9,uVar7);
                      uVar7 = uVar14 + 3;
                      if (*(longlong *)(param_2 + 0x78) != 0) {
                        uVar13 = *(uint *)(param_2 + 0x68) - 1;
                        if (uVar7 < *(uint *)(param_2 + 0x68)) {
                          uVar13 = uVar7;
                        }
                        iVar11 = *(int *)(*(longlong *)(param_2 + 0x70) + (ulonglong)uVar13 * 4);
                        uVar7 = *(uint *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar13 * 4);
                      }
                      iVar11 = (**(code **)(lVar3 + 0x70))(param_1,param_2 + 0x48,iVar11,uVar7);
                      uVar7 = uVar14 + 4;
                      if (*(longlong *)(param_2 + 0x78) == 0) {
                        uVar15 = 0;
                      }
                      else {
                        uVar13 = *(uint *)(param_2 + 0x68) - 1;
                        if (uVar7 < *(uint *)(param_2 + 0x68)) {
                          uVar13 = uVar7;
                        }
                        uVar15 = *(undefined4 *)
                                  (*(longlong *)(param_2 + 0x70) + (ulonglong)uVar13 * 4);
                        uVar7 = *(uint *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar13 * 4);
                      }
                      uVar7 = (**(code **)(lVar3 + 0x70))(param_1,param_2 + 0x48,uVar15,uVar7);
                      uVar14 = uVar14 + 5;
                      if (*(longlong *)(param_2 + 0x78) == 0) {
                        uVar15 = 0;
                      }
                      else {
                        uVar13 = *(uint *)(param_2 + 0x68) - 1;
                        if (uVar14 < *(uint *)(param_2 + 0x68)) {
                          uVar13 = uVar14;
                        }
                        uVar15 = *(undefined4 *)
                                  (*(longlong *)(param_2 + 0x70) + (ulonglong)uVar13 * 4);
                        uVar14 = *(uint *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar13 * 4);
                      }
                      uVar14 = (**(code **)(lVar3 + 0x70))(param_1,param_2 + 0x48,uVar15,uVar14);
                    }
                    param_4[10] = param_4[10] + local_78 * 0x10000;
                    param_4[0xb] = param_4[0xb] + local_70 * 0x10000;
                    param_4[0xc] = param_4[0xc] + local_74 * 0x10000;
                    param_4[0xd] = param_4[0xd] + iVar11 * 0x10000;
                    param_4[0xe] = param_4[0xe] + uVar7 * 0x10000;
                    param_4[0xf] = param_4[0xf] + uVar14 * 0x10000;
                  }
                  *param_4 = 6;
                  return 1;
                }
              }
              else {
                cVar4 = '\0';
                if ((bVar1 == 8) || (cVar4 = '\x01', bVar1 == 9)) {
                  cVar5 = FUN_140349bb0(param_2,pbVar17,param_4 + 2,cVar4);
                  if ((cVar5 != '\0') &&
                     ((*(byte **)(param_2 + 0x40) <= pbVar20 &&
                      (pbVar20 <=
                       (byte *)(((ulonglong)*(uint *)(param_2 + 0x88) - 8) +
                               *(longlong *)(param_2 + 0x80)))))) {
                    param_4[10] = ((int)(short)((ushort)*pbVar20 << 8) | (uint)pbVar20[1]) << 0x10;
                    param_4[0xb] = ((int)(short)((ushort)pbVar20[2] << 8) | (uint)pbVar20[3]) <<
                                   0x10;
                    pbVar17 = pbVar20 + 8;
                    param_4[0xc] = ((int)(short)((ushort)pbVar20[4] << 8) | (uint)pbVar20[5]) << 2;
                    param_4[0xd] = ((int)(short)((ushort)pbVar20[6] << 8) | (uint)pbVar20[7]) << 2;
                    if (cVar4 != '\0') {
                      if (pbVar17 < *(byte **)(param_2 + 0x40)) {
                        return 0;
                      }
                      if ((byte *)(((ulonglong)*(uint *)(param_2 + 0x88) - 4) +
                                  *(longlong *)(param_2 + 0x80)) < pbVar17) {
                        return 0;
                      }
                      uVar7 = CONCAT31(CONCAT21(CONCAT11(*pbVar17,pbVar20[9]),pbVar20[10]),
                                       pbVar20[0xb]);
                      if (uVar7 == 0xffffffff) {
                        iVar10 = 0;
                        iVar9 = 0;
                        local_74 = 0;
                        iVar11 = 0;
                      }
                      else {
                        lVar3 = *(longlong *)(param_1 + 0x2e0);
                        uVar14 = uVar7;
                        if (*(longlong *)(param_2 + 0x78) != 0) {
                          if (*(uint *)(param_2 + 0x68) <= uVar7) {
                            uVar14 = *(uint *)(param_2 + 0x68) - 1;
                          }
                          iVar11 = *(int *)((ulonglong)uVar14 * 4 + *(longlong *)(param_2 + 0x70));
                          uVar14 = *(uint *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar14 * 4);
                        }
                        iVar11 = (**(code **)(lVar3 + 0x70))(param_1,param_2 + 0x48,iVar11,uVar14);
                        uVar14 = uVar7 + 1;
                        if (*(longlong *)(param_2 + 0x78) == 0) {
                          uVar15 = 0;
                        }
                        else {
                          uVar13 = *(uint *)(param_2 + 0x68) - 1;
                          if (uVar14 < *(uint *)(param_2 + 0x68)) {
                            uVar13 = uVar14;
                          }
                          uVar15 = *(undefined4 *)
                                    (*(longlong *)(param_2 + 0x70) + (ulonglong)uVar13 * 4);
                          uVar14 = *(uint *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar13 * 4);
                        }
                        iVar9 = (**(code **)(lVar3 + 0x70))(param_1,param_2 + 0x48,uVar15,uVar14);
                        uVar14 = uVar7 + 2;
                        if (*(longlong *)(param_2 + 0x78) == 0) {
                          uVar15 = 0;
                        }
                        else {
                          uVar13 = *(uint *)(param_2 + 0x68) - 1;
                          if (uVar14 < *(uint *)(param_2 + 0x68)) {
                            uVar13 = uVar14;
                          }
                          uVar15 = *(undefined4 *)
                                    (*(longlong *)(param_2 + 0x70) + (ulonglong)uVar13 * 4);
                          uVar14 = *(uint *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar13 * 4);
                        }
                        local_74 = (**(code **)(lVar3 + 0x70))(param_1,param_2 + 0x48,uVar15,uVar14)
                        ;
                        uVar7 = uVar7 + 3;
                        if (*(longlong *)(param_2 + 0x78) == 0) {
                          uVar15 = 0;
                        }
                        else {
                          uVar14 = *(uint *)(param_2 + 0x68) - 1;
                          if (uVar7 < *(uint *)(param_2 + 0x68)) {
                            uVar14 = uVar7;
                          }
                          uVar15 = *(undefined4 *)
                                    (*(longlong *)(param_2 + 0x70) + (ulonglong)uVar14 * 4);
                          uVar7 = *(uint *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar14 * 4);
                        }
                        iVar10 = (**(code **)(lVar3 + 0x70))(param_1,param_2 + 0x48,uVar15,uVar7);
                      }
                      param_4[10] = param_4[10] + iVar11 * 0x10000;
                      param_4[0xc] = param_4[0xc] + local_74 * 4;
                      param_4[0xb] = param_4[0xb] + iVar9 * 0x10000;
                      param_4[0xd] = param_4[0xd] + iVar10 * 4;
                    }
                    *param_4 = 8;
                    return 1;
                  }
                }
                else if (bVar1 == 10) {
                  if ((pbVar18 <= pbVar20) && (pbVar20 <= pbVar21 + -2)) {
                    *(byte **)(param_4 + 2) = pbVar17;
                    *(undefined1 *)(param_4 + 4) = 0;
                    param_4[6] = (uint)CONCAT11(*pbVar20,param_3[5]);
                    return 1;
                  }
                }
                else if (bVar1 - 0xc < 2) {
                  *(byte **)(param_4 + 2) = pbVar17;
                  *(undefined1 *)(param_4 + 4) = 0;
                  if ((((*(byte **)(param_2 + 0x40) <= pbVar20) &&
                       (pbVar17 = (byte *)((ulonglong)*(uint *)(param_2 + 0x88) +
                                          *(longlong *)(param_2 + 0x80)), pbVar20 <= pbVar17 + -4))
                      && (uVar14 = (uint)CONCAT21(CONCAT11(*pbVar20,param_3[5]),param_3[6]),
                         uVar14 != 0)) &&
                     (((param_3 = param_3 + uVar14, *(byte **)(param_2 + 0x40) <= param_3 &&
                       (param_3 < pbVar17)) && (param_3 <= pbVar17 + -0x18)))) {
                    param_4[6] = CONCAT31(CONCAT21(CONCAT11(*param_3,param_3[1]),param_3[2]),
                                          param_3[3]);
                    param_4[9] = CONCAT31(CONCAT21(CONCAT11(param_3[4],param_3[5]),param_3[6]),
                                          param_3[7]);
                    param_4[7] = CONCAT31(CONCAT21(CONCAT11(param_3[8],param_3[9]),param_3[10]),
                                          param_3[0xb]);
                    param_4[10] = CONCAT31(CONCAT21(CONCAT11(param_3[0xc],param_3[0xd]),param_3[0xe]
                                                   ),param_3[0xf]);
                    pbVar17 = param_3 + 0x18;
                    param_4[8] = CONCAT31(CONCAT21(CONCAT11(param_3[0x10],param_3[0x11]),
                                                   param_3[0x12]),param_3[0x13]);
                    param_4[0xb] = CONCAT31(CONCAT21(CONCAT11(param_3[0x14],param_3[0x15]),
                                                     param_3[0x16]),param_3[0x17]);
                    if (bVar1 == 0xd) {
                      if (pbVar17 < *(byte **)(param_2 + 0x40)) {
                        return 0;
                      }
                      if ((byte *)(((ulonglong)*(uint *)(param_2 + 0x88) - 4) +
                                  *(longlong *)(param_2 + 0x80)) < pbVar17) {
                        return 0;
                      }
                      uVar14 = CONCAT31(CONCAT21(CONCAT11(*pbVar17,param_3[0x19]),param_3[0x1a]),
                                        param_3[0x1b]);
                      if (uVar14 == 0xffffffff) {
                        iVar9 = 0;
                        local_70 = 0;
                        local_78 = 0;
                        local_74 = 0;
                      }
                      else {
                        lVar3 = *(longlong *)(param_1 + 0x2e0);
                        uVar7 = uVar14;
                        iVar9 = iVar11;
                        if (*(longlong *)(param_2 + 0x78) != 0) {
                          uVar13 = uVar14;
                          if (*(uint *)(param_2 + 0x68) <= uVar14) {
                            uVar13 = *(uint *)(param_2 + 0x68) - 1;
                          }
                          uVar7 = *(uint *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar13 * 4);
                          iVar9 = *(int *)((ulonglong)uVar13 * 4 + *(longlong *)(param_2 + 0x70));
                        }
                        local_74 = (**(code **)(lVar3 + 0x70))(param_1,param_2 + 0x48,iVar9,uVar7);
                        uVar7 = uVar14 + 1;
                        iVar9 = iVar11;
                        if (*(longlong *)(param_2 + 0x78) != 0) {
                          uVar13 = *(uint *)(param_2 + 0x68) - 1;
                          if (uVar7 < *(uint *)(param_2 + 0x68)) {
                            uVar13 = uVar7;
                          }
                          uVar7 = *(uint *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar13 * 4);
                          iVar9 = *(int *)(*(longlong *)(param_2 + 0x70) + (ulonglong)uVar13 * 4);
                        }
                        local_70 = (**(code **)(lVar3 + 0x70))(param_1,param_2 + 0x48,iVar9,uVar7);
                        uVar7 = uVar14 + 2;
                        iVar9 = iVar11;
                        if (*(longlong *)(param_2 + 0x78) != 0) {
                          uVar13 = *(uint *)(param_2 + 0x68) - 1;
                          if (uVar7 < *(uint *)(param_2 + 0x68)) {
                            uVar13 = uVar7;
                          }
                          uVar7 = *(uint *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar13 * 4);
                          iVar9 = *(int *)(*(longlong *)(param_2 + 0x70) + (ulonglong)uVar13 * 4);
                        }
                        local_78 = (**(code **)(lVar3 + 0x70))(param_1,param_2 + 0x48,iVar9,uVar7);
                        uVar7 = uVar14 + 3;
                        if (*(longlong *)(param_2 + 0x78) != 0) {
                          uVar13 = *(uint *)(param_2 + 0x68) - 1;
                          if (uVar7 < *(uint *)(param_2 + 0x68)) {
                            uVar13 = uVar7;
                          }
                          iVar11 = *(int *)(*(longlong *)(param_2 + 0x70) + (ulonglong)uVar13 * 4);
                          uVar7 = *(uint *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar13 * 4);
                        }
                        iVar9 = (**(code **)(lVar3 + 0x70))(param_1,param_2 + 0x48,iVar11,uVar7);
                        uVar7 = uVar14 + 4;
                        if (*(longlong *)(param_2 + 0x78) == 0) {
                          uVar15 = 0;
                        }
                        else {
                          uVar13 = *(uint *)(param_2 + 0x68) - 1;
                          if (uVar7 < *(uint *)(param_2 + 0x68)) {
                            uVar13 = uVar7;
                          }
                          uVar15 = *(undefined4 *)
                                    (*(longlong *)(param_2 + 0x70) + (ulonglong)uVar13 * 4);
                          uVar7 = *(uint *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar13 * 4);
                        }
                        uVar7 = (**(code **)(lVar3 + 0x70))(param_1,param_2 + 0x48,uVar15,uVar7);
                        uVar14 = uVar14 + 5;
                        if (*(longlong *)(param_2 + 0x78) == 0) {
                          uVar15 = 0;
                        }
                        else {
                          uVar13 = *(uint *)(param_2 + 0x68) - 1;
                          if (uVar14 < *(uint *)(param_2 + 0x68)) {
                            uVar13 = uVar14;
                          }
                          uVar15 = *(undefined4 *)
                                    (*(longlong *)(param_2 + 0x70) + (ulonglong)uVar13 * 4);
                          uVar14 = *(uint *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar13 * 4);
                        }
                        iVar11 = (**(code **)(lVar3 + 0x70))(param_1,param_2 + 0x48,uVar15,uVar14);
                      }
                      param_4[10] = param_4[10] + iVar9;
                      param_4[0xb] = param_4[0xb] + iVar11;
                      param_4[6] = local_74 + param_4[6];
                      param_4[7] = local_78 + param_4[7];
                      param_4[8] = uVar7 + param_4[8];
                      param_4[9] = local_70 + param_4[9];
                    }
                    *param_4 = 0xc;
                    return 1;
                  }
                }
                else if (bVar1 - 0xe < 2) {
                  *(byte **)(param_4 + 2) = pbVar17;
                  *(undefined1 *)(param_4 + 4) = 0;
                  if ((*(byte **)(param_2 + 0x40) <= pbVar20) &&
                     (pbVar20 <=
                      (byte *)(((ulonglong)*(uint *)(param_2 + 0x88) - 4) +
                              *(longlong *)(param_2 + 0x80)))) {
                    pbVar17 = param_3 + 8;
                    param_4[6] = ((int)(short)((ushort)*pbVar20 << 8) | (uint)param_3[5]) << 0x10;
                    param_4[7] = ((int)(short)((ushort)param_3[6] << 8) | (uint)param_3[7]) << 0x10;
                    if (bVar1 == 0xf) {
                      if (pbVar17 < *(byte **)(param_2 + 0x40)) {
                        return 0;
                      }
                      if ((byte *)(((ulonglong)*(uint *)(param_2 + 0x88) - 4) +
                                  *(longlong *)(param_2 + 0x80)) < pbVar17) {
                        return 0;
                      }
                      uVar14 = CONCAT31(CONCAT21(CONCAT11(*pbVar17,param_3[9]),param_3[10]),
                                        param_3[0xb]);
                      uVar13 = uVar7;
                      if (uVar14 != 0xffffffff) {
                        lVar3 = *(longlong *)(param_1 + 0x2e0);
                        uVar7 = uVar14;
                        iVar9 = iVar11;
                        if (*(longlong *)(param_2 + 0x78) != 0) {
                          uVar13 = uVar14;
                          if (*(uint *)(param_2 + 0x68) <= uVar14) {
                            uVar13 = *(uint *)(param_2 + 0x68) - 1;
                          }
                          uVar7 = *(uint *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar13 * 4);
                          iVar9 = *(int *)((ulonglong)uVar13 * 4 + *(longlong *)(param_2 + 0x70));
                        }
                        uVar7 = (**(code **)(lVar3 + 0x70))(param_1,param_2 + 0x48,iVar9,uVar7);
                        uVar14 = uVar14 + 1;
                        if (*(longlong *)(param_2 + 0x78) != 0) {
                          uVar13 = *(uint *)(param_2 + 0x68) - 1;
                          if (uVar14 < *(uint *)(param_2 + 0x68)) {
                            uVar13 = uVar14;
                          }
                          iVar11 = *(int *)(*(longlong *)(param_2 + 0x70) + (ulonglong)uVar13 * 4);
                          uVar14 = *(uint *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar13 * 4);
                        }
                        uVar13 = (**(code **)(lVar3 + 0x70))(param_1,param_2 + 0x48,iVar11,uVar14);
                      }
                      param_4[6] = param_4[6] + uVar7 * 0x10000;
                      param_4[7] = param_4[7] + uVar13 * 0x10000;
                    }
                    *param_4 = 0xe;
                    return 1;
                  }
                }
                else if (bVar1 - 0x10 < 8) {
                  *(byte **)(param_4 + 2) = pbVar17;
                  *(undefined1 *)(param_4 + 4) = 0;
                  if ((*(byte **)(param_2 + 0x40) <= pbVar20) &&
                     (pbVar20 <=
                      (byte *)(((ulonglong)*(uint *)(param_2 + 0x88) - 2) +
                              *(longlong *)(param_2 + 0x80)))) {
                    pbVar17 = param_3 + 6;
                    uVar13 = ((int)(short)((ushort)*pbVar20 << 8) | (uint)param_3[5]) << 2;
                    param_4[6] = uVar13;
                    if (bVar1 - 0x10 < 4) {
                      if (pbVar17 < *(byte **)(param_2 + 0x40)) {
                        return 0;
                      }
                      if ((byte *)(((ulonglong)*(uint *)(param_2 + 0x88) - 2) +
                                  *(longlong *)(param_2 + 0x80)) < pbVar17) {
                        return 0;
                      }
                      bVar2 = *pbVar17;
                      pbVar17 = param_3 + 8;
                      uVar13 = ((int)(short)((ushort)bVar2 << 8) | (uint)param_3[7]) << 2;
                    }
                    param_4[7] = uVar13;
                    if ((bVar1 - 0x12 & 0xfffffffa) == 0) {
                      if (pbVar17 < *(byte **)(param_2 + 0x40)) {
                        return 0;
                      }
                      if ((byte *)(((ulonglong)*(uint *)(param_2 + 0x88) - 4) +
                                  *(longlong *)(param_2 + 0x80)) < pbVar17) {
                        return 0;
                      }
                      pbVar18 = pbVar17 + 4;
                      param_4[8] = ((int)(short)((ushort)*pbVar17 << 8) | (uint)pbVar17[1]) << 0x10;
                      uVar14 = ((int)(short)((ushort)pbVar17[2] << 8) | (uint)pbVar17[3]) << 0x10;
                    }
                    else {
                      param_4[8] = 0;
                      pbVar18 = pbVar17;
                    }
                    param_4[9] = uVar14;
                    if ((bVar1 - 0x11 & 0xfffffff9) == 0) {
                      if (pbVar18 < *(byte **)(param_2 + 0x40)) {
                        return 0;
                      }
                      if ((byte *)(((ulonglong)*(uint *)(param_2 + 0x88) - 4) +
                                  *(longlong *)(param_2 + 0x80)) < pbVar18) {
                        return 0;
                      }
                      uVar14 = CONCAT31(CONCAT21(CONCAT11(*pbVar18,pbVar18[1]),pbVar18[2]),
                                        pbVar18[3]);
                      if (bVar1 == 0x11) {
                        if (uVar14 != 0xffffffff) {
                          lVar3 = *(longlong *)(param_1 + 0x2e0);
                          uVar7 = uVar14;
                          iVar9 = iVar11;
                          if (*(longlong *)(param_2 + 0x78) != 0) {
                            uVar13 = uVar14;
                            if (*(uint *)(param_2 + 0x68) <= uVar14) {
                              uVar13 = *(uint *)(param_2 + 0x68) - 1;
                            }
                            uVar7 = *(uint *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar13 * 4)
                            ;
                            iVar9 = *(int *)((ulonglong)uVar13 * 4 + *(longlong *)(param_2 + 0x70));
                          }
                          iVar9 = (**(code **)(lVar3 + 0x70))(param_1,param_2 + 0x48,iVar9,uVar7);
                          uVar7 = uVar14 + 1;
                          iVar10 = iVar11;
                          if (*(longlong *)(param_2 + 0x78) != 0) {
                            uVar13 = *(uint *)(param_2 + 0x68) - 1;
                            if (uVar7 < *(uint *)(param_2 + 0x68)) {
                              uVar13 = uVar7;
                            }
                            uVar7 = *(uint *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar13 * 4)
                            ;
                            iVar10 = *(int *)(*(longlong *)(param_2 + 0x70) + (ulonglong)uVar13 * 4)
                            ;
                          }
                          uVar7 = (**(code **)(lVar3 + 0x70))(param_1,param_2 + 0x48,iVar10,uVar7);
                        }
                        param_4[6] = param_4[6] + iVar9 * 4;
                        param_4[7] = param_4[7] + uVar7 * 4;
                      }
                      uVar7 = *param_4;
                      if (uVar7 == 0x13) {
                        if (uVar14 == 0xffffffff) {
                          iVar8 = 0;
                          iVar11 = 0;
                          iVar9 = 0;
                          iVar10 = 0;
                        }
                        else {
                          lVar3 = *(longlong *)(param_1 + 0x2e0);
                          uVar7 = uVar14;
                          iVar9 = iVar11;
                          if (*(longlong *)(param_2 + 0x78) != 0) {
                            uVar13 = uVar14;
                            if (*(uint *)(param_2 + 0x68) <= uVar14) {
                              uVar13 = *(uint *)(param_2 + 0x68) - 1;
                            }
                            uVar7 = *(uint *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar13 * 4)
                            ;
                            iVar9 = *(int *)((ulonglong)uVar13 * 4 + *(longlong *)(param_2 + 0x70));
                          }
                          local_78 = (**(code **)(lVar3 + 0x70))(param_1,param_2 + 0x48,iVar9,uVar7)
                          ;
                          uVar7 = uVar14 + 1;
                          if (*(longlong *)(param_2 + 0x78) != 0) {
                            uVar13 = *(uint *)(param_2 + 0x68) - 1;
                            if (uVar7 < *(uint *)(param_2 + 0x68)) {
                              uVar13 = uVar7;
                            }
                            iVar11 = *(int *)(*(longlong *)(param_2 + 0x70) + (ulonglong)uVar13 * 4)
                            ;
                            uVar7 = *(uint *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar13 * 4)
                            ;
                          }
                          iVar11 = (**(code **)(lVar3 + 0x70))(param_1,param_2 + 0x48,iVar11,uVar7);
                          uVar7 = uVar14 + 2;
                          if (*(longlong *)(param_2 + 0x78) == 0) {
                            uVar15 = 0;
                          }
                          else {
                            uVar13 = *(uint *)(param_2 + 0x68) - 1;
                            if (uVar7 < *(uint *)(param_2 + 0x68)) {
                              uVar13 = uVar7;
                            }
                            uVar15 = *(undefined4 *)
                                      (*(longlong *)(param_2 + 0x70) + (ulonglong)uVar13 * 4);
                            uVar7 = *(uint *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar13 * 4)
                            ;
                          }
                          iVar9 = (**(code **)(lVar3 + 0x70))(param_1,param_2 + 0x48,uVar15,uVar7);
                          uVar7 = uVar14 + 3;
                          if (*(longlong *)(param_2 + 0x78) == 0) {
                            uVar15 = 0;
                          }
                          else {
                            uVar13 = *(uint *)(param_2 + 0x68) - 1;
                            if (uVar7 < *(uint *)(param_2 + 0x68)) {
                              uVar13 = uVar7;
                            }
                            uVar15 = *(undefined4 *)
                                      (*(longlong *)(param_2 + 0x70) + (ulonglong)uVar13 * 4);
                            uVar7 = *(uint *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar13 * 4)
                            ;
                          }
                          iVar8 = (**(code **)(lVar3 + 0x70))(param_1,param_2 + 0x48,uVar15,uVar7);
                          uVar7 = *param_4;
                          iVar10 = local_78;
                        }
                        param_4[6] = param_4[6] + iVar10 * 4;
                        param_4[7] = param_4[7] + iVar11 * 4;
                        param_4[8] = param_4[8] + iVar9 * 0x10000;
                        param_4[9] = param_4[9] + iVar8 * 0x10000;
                      }
                      uVar15 = 0;
                      iVar11 = 0;
                      if (uVar7 == 0x15) {
                        iVar9 = iVar11;
                        if (uVar14 != 0xffffffff) {
                          uVar7 = uVar14;
                          uVar16 = uVar15;
                          if (*(longlong *)(param_2 + 0x78) != 0) {
                            uVar13 = uVar14;
                            if (*(uint *)(param_2 + 0x68) <= uVar14) {
                              uVar13 = *(uint *)(param_2 + 0x68) - 1;
                            }
                            uVar7 = *(uint *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar13 * 4)
                            ;
                            uVar16 = *(undefined4 *)
                                      ((ulonglong)uVar13 * 4 + *(longlong *)(param_2 + 0x70));
                          }
                          iVar9 = (**(code **)(*(longlong *)(param_1 + 0x2e0) + 0x70))
                                            (param_1,param_2 + 0x48,uVar16,uVar7);
                          uVar7 = *param_4;
                        }
                        param_4[6] = param_4[6] + iVar9 * 4;
                        param_4[7] = param_4[7] + iVar9 * 4;
                      }
                      if (uVar7 == 0x17) {
                        if (uVar14 == 0xffffffff) {
                          iVar9 = 0;
                          iVar10 = 0;
                        }
                        else {
                          lVar3 = *(longlong *)(param_1 + 0x2e0);
                          uVar7 = uVar14;
                          if (*(longlong *)(param_2 + 0x78) != 0) {
                            if (*(uint *)(param_2 + 0x68) <= uVar14) {
                              uVar7 = *(uint *)(param_2 + 0x68) - 1;
                            }
                            uVar15 = *(undefined4 *)
                                      ((ulonglong)uVar7 * 4 + *(longlong *)(param_2 + 0x70));
                            uVar7 = *(uint *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar7 * 4);
                          }
                          iVar11 = (**(code **)(lVar3 + 0x70))(param_1,param_2 + 0x48,uVar15,uVar7);
                          uVar7 = uVar14 + 1;
                          if (*(longlong *)(param_2 + 0x78) == 0) {
                            uVar15 = 0;
                          }
                          else {
                            uVar13 = *(uint *)(param_2 + 0x68) - 1;
                            if (uVar7 < *(uint *)(param_2 + 0x68)) {
                              uVar13 = uVar7;
                            }
                            uVar15 = *(undefined4 *)
                                      (*(longlong *)(param_2 + 0x70) + (ulonglong)uVar13 * 4);
                            uVar7 = *(uint *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar13 * 4)
                            ;
                          }
                          iVar9 = (**(code **)(lVar3 + 0x70))(param_1,param_2 + 0x48,uVar15,uVar7);
                          uVar14 = uVar14 + 2;
                          if (*(longlong *)(param_2 + 0x78) == 0) {
                            uVar15 = 0;
                          }
                          else {
                            uVar7 = *(uint *)(param_2 + 0x68) - 1;
                            if (uVar14 < *(uint *)(param_2 + 0x68)) {
                              uVar7 = uVar14;
                            }
                            uVar15 = *(undefined4 *)
                                      (*(longlong *)(param_2 + 0x70) + (ulonglong)uVar7 * 4);
                            uVar14 = *(uint *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar7 * 4)
                            ;
                          }
                          iVar10 = (**(code **)(lVar3 + 0x70))(param_1,param_2 + 0x48,uVar15,uVar14)
                          ;
                        }
                        param_4[6] = param_4[6] + iVar11 * 4;
                        param_4[7] = param_4[7] + iVar11 * 4;
                        param_4[8] = param_4[8] + iVar9 * 0x10000;
                        param_4[9] = param_4[9] + iVar10 * 0x10000;
                      }
                    }
                    *param_4 = 0x10;
                    return 1;
                  }
                }
                else if (bVar1 - 0x18 < 4) {
                  *(byte **)(param_4 + 2) = pbVar17;
                  *(undefined1 *)(param_4 + 4) = 0;
                  if ((*(byte **)(param_2 + 0x40) <= pbVar20) &&
                     (pbVar20 <=
                      (byte *)(((ulonglong)*(uint *)(param_2 + 0x88) - 2) +
                              *(longlong *)(param_2 + 0x80)))) {
                    pbVar17 = param_3 + 6;
                    param_4[6] = ((int)(short)((ushort)*pbVar20 << 8) | (uint)param_3[5]) << 2;
                    if (uVar13 - 0x1a < 2) {
                      if (pbVar17 < *(byte **)(param_2 + 0x40)) {
                        return 0;
                      }
                      if ((byte *)(((ulonglong)*(uint *)(param_2 + 0x88) - 4) +
                                  *(longlong *)(param_2 + 0x80)) < pbVar17) {
                        return 0;
                      }
                      bVar1 = *pbVar17;
                      pbVar17 = param_3 + 10;
                      param_4[7] = ((int)(short)((ushort)bVar1 << 8) | (uint)param_3[7]) << 0x10;
                      uVar14 = ((int)(short)((ushort)param_3[8] << 8) | (uint)param_3[9]) << 0x10;
                    }
                    else {
                      param_4[7] = 0;
                      uVar14 = uVar7;
                    }
                    param_4[8] = uVar14;
                    uVar14 = *param_4;
                    if ((uVar14 - 0x19 & 0xfffffffd) != 0) {
LAB_14034a89a:
                      *param_4 = 0x18;
                      return 1;
                    }
                    if ((*(byte **)(param_2 + 0x40) <= pbVar17) &&
                       (pbVar17 <=
                        (byte *)(((ulonglong)*(uint *)(param_2 + 0x88) - 4) +
                                *(longlong *)(param_2 + 0x80)))) {
                      uVar13 = 3;
                      if (uVar14 != 0x1b) {
                        uVar13 = uVar7;
                      }
                      if (uVar14 == 0x19) {
                        uVar13 = 1;
                      }
                      else if (uVar14 != 0x1b) goto LAB_14034a89a;
                      local_88 = &local_68;
                      cVar4 = FUN_1403492d0(param_1,param_2,
                                            CONCAT31(CONCAT21(CONCAT11(*pbVar17,pbVar17[1]),
                                                              pbVar17[2]),pbVar17[3]),uVar13);
                      if (cVar4 != '\0') {
                        param_4[6] = param_4[6] + (int)local_68 * 4;
                        if (uVar13 == 3) {
                          param_4[7] = param_4[7] + local_68._4_4_ * 0x10000;
                          param_4[8] = param_4[8] + local_60 * 0x10000;
                        }
                        goto LAB_14034a89a;
                      }
                    }
                  }
                }
                else if (bVar1 - 0x1c < 4) {
                  *(byte **)(param_4 + 2) = pbVar17;
                  *(undefined1 *)(param_4 + 4) = 0;
                  if ((*(byte **)(param_2 + 0x40) <= pbVar20) &&
                     (pbVar20 <=
                      (byte *)(((ulonglong)*(uint *)(param_2 + 0x88) - 4) +
                              *(longlong *)(param_2 + 0x80)))) {
                    pbVar17 = param_3 + 8;
                    param_4[6] = ((int)(short)((ushort)*pbVar20 << 8) | (uint)param_3[5]) << 2;
                    param_4[7] = ((int)(short)((ushort)param_3[6] << 8) | (uint)param_3[7]) << 2;
                    if (bVar1 - 0x1e < 2) {
                      if (pbVar17 < *(byte **)(param_2 + 0x40)) {
                        return 0;
                      }
                      if ((byte *)(((ulonglong)*(uint *)(param_2 + 0x88) - 4) +
                                  *(longlong *)(param_2 + 0x80)) < pbVar17) {
                        return 0;
                      }
                      bVar2 = *pbVar17;
                      pbVar17 = param_3 + 0xc;
                      param_4[8] = ((int)(short)((ushort)bVar2 << 8) | (uint)param_3[9]) << 0x10;
                      uVar14 = ((int)(short)((ushort)param_3[10] << 8) | (uint)param_3[0xb]) << 0x10
                      ;
                    }
                    else {
                      param_4[8] = 0;
                      uVar14 = uVar7;
                    }
                    param_4[9] = uVar14;
                    if ((bVar1 - 0x1d & 0xfffffffd) == 0) {
                      if (pbVar17 < *(byte **)(param_2 + 0x40)) {
                        return 0;
                      }
                      if ((byte *)(((ulonglong)*(uint *)(param_2 + 0x88) - 4) +
                                  *(longlong *)(param_2 + 0x80)) < pbVar17) {
                        return 0;
                      }
                      uVar14 = CONCAT31(CONCAT21(CONCAT11(*pbVar17,pbVar17[1]),pbVar17[2]),
                                        pbVar17[3]);
                      if (bVar1 == 0x1d) {
                        uVar12 = uVar7;
                        if (uVar14 != 0xffffffff) {
                          lVar3 = *(longlong *)(param_1 + 0x2e0);
                          uVar7 = uVar14;
                          iVar9 = iVar11;
                          if (*(longlong *)(param_2 + 0x78) != 0) {
                            uVar13 = uVar14;
                            if (*(uint *)(param_2 + 0x68) <= uVar14) {
                              uVar13 = *(uint *)(param_2 + 0x68) - 1;
                            }
                            uVar7 = *(uint *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar13 * 4)
                            ;
                            iVar9 = *(int *)((ulonglong)uVar13 * 4 + *(longlong *)(param_2 + 0x70));
                          }
                          uVar7 = (**(code **)(lVar3 + 0x70))(param_1,param_2 + 0x48,iVar9,uVar7);
                          uVar13 = uVar14 + 1;
                          iVar9 = iVar11;
                          if (*(longlong *)(param_2 + 0x78) != 0) {
                            uVar12 = *(uint *)(param_2 + 0x68) - 1;
                            if (uVar13 < *(uint *)(param_2 + 0x68)) {
                              uVar12 = uVar13;
                            }
                            uVar13 = *(uint *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar12 * 4
                                              );
                            iVar9 = *(int *)(*(longlong *)(param_2 + 0x70) + (ulonglong)uVar12 * 4);
                          }
                          uVar12 = (**(code **)(lVar3 + 0x70))(param_1,param_2 + 0x48,iVar9,uVar13);
                          uVar13 = *param_4;
                        }
                        param_4[6] = param_4[6] + uVar7 * 4;
                        param_4[7] = param_4[7] + uVar12 * 4;
                      }
                      if (uVar13 == 0x1f) {
                        if (uVar14 == 0xffffffff) {
                          iVar10 = 0;
                          iVar11 = 0;
                          iVar9 = 0;
                          local_78 = 0;
                        }
                        else {
                          lVar3 = *(longlong *)(param_1 + 0x2e0);
                          uVar7 = uVar14;
                          iVar9 = iVar11;
                          if (*(longlong *)(param_2 + 0x78) != 0) {
                            uVar13 = uVar14;
                            if (*(uint *)(param_2 + 0x68) <= uVar14) {
                              uVar13 = *(uint *)(param_2 + 0x68) - 1;
                            }
                            uVar7 = *(uint *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar13 * 4)
                            ;
                            iVar9 = *(int *)((ulonglong)uVar13 * 4 + *(longlong *)(param_2 + 0x70));
                          }
                          local_78 = (**(code **)(lVar3 + 0x70))(param_1,param_2 + 0x48,iVar9,uVar7)
                          ;
                          uVar7 = uVar14 + 1;
                          if (*(longlong *)(param_2 + 0x78) != 0) {
                            uVar13 = *(uint *)(param_2 + 0x68) - 1;
                            if (uVar7 < *(uint *)(param_2 + 0x68)) {
                              uVar13 = uVar7;
                            }
                            iVar11 = *(int *)(*(longlong *)(param_2 + 0x70) + (ulonglong)uVar13 * 4)
                            ;
                            uVar7 = *(uint *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar13 * 4)
                            ;
                          }
                          iVar11 = (**(code **)(lVar3 + 0x70))(param_1,param_2 + 0x48,iVar11,uVar7);
                          uVar7 = uVar14 + 2;
                          if (*(longlong *)(param_2 + 0x78) == 0) {
                            uVar15 = 0;
                          }
                          else {
                            uVar13 = *(uint *)(param_2 + 0x68) - 1;
                            if (uVar7 < *(uint *)(param_2 + 0x68)) {
                              uVar13 = uVar7;
                            }
                            uVar15 = *(undefined4 *)
                                      (*(longlong *)(param_2 + 0x70) + (ulonglong)uVar13 * 4);
                            uVar7 = *(uint *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar13 * 4)
                            ;
                          }
                          iVar9 = (**(code **)(lVar3 + 0x70))(param_1,param_2 + 0x48,uVar15,uVar7);
                          uVar14 = uVar14 + 3;
                          if (*(longlong *)(param_2 + 0x78) == 0) {
                            uVar15 = 0;
                          }
                          else {
                            uVar7 = *(uint *)(param_2 + 0x68) - 1;
                            if (uVar14 < *(uint *)(param_2 + 0x68)) {
                              uVar7 = uVar14;
                            }
                            uVar15 = *(undefined4 *)
                                      (*(longlong *)(param_2 + 0x70) + (ulonglong)uVar7 * 4);
                            uVar14 = *(uint *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar7 * 4)
                            ;
                          }
                          iVar10 = (**(code **)(lVar3 + 0x70))(param_1,param_2 + 0x48,uVar15,uVar14)
                          ;
                        }
                        param_4[6] = param_4[6] + local_78 * 4;
                        param_4[7] = param_4[7] + iVar11 * 4;
                        param_4[8] = param_4[8] + iVar9 * 0x10000;
                        param_4[9] = param_4[9] + iVar10 * 0x10000;
                      }
                    }
                    *param_4 = 0x1c;
                    return 1;
                  }
                }
                else if (bVar1 == 0x20) {
                  *(byte **)(param_4 + 2) = pbVar17;
                  *(undefined1 *)(param_4 + 4) = 0;
                  if (((*(byte **)(param_2 + 0x40) <= pbVar20) &&
                      (pbVar20 <=
                       (byte *)(((ulonglong)*(uint *)(param_2 + 0x88) - 1) +
                               *(longlong *)(param_2 + 0x80)))) && (*pbVar20 < 0x1c)) {
                    param_4[6] = (uint)*pbVar20;
                    pbVar17 = param_3 + 5;
                    if (((*(byte **)(param_2 + 0x40) <= pbVar17) &&
                        (pbVar18 = (byte *)((ulonglong)*(uint *)(param_2 + 0x88) +
                                           *(longlong *)(param_2 + 0x80)), pbVar17 <= pbVar18 + -4))
                       && ((uVar7 = (uint)CONCAT21(CONCAT11(*pbVar17,param_3[6]),param_3[7]),
                           uVar7 != 0 &&
                           ((param_3 = param_3 + uVar7, *(byte **)(param_2 + 0x40) <= param_3 &&
                            (param_3 < pbVar18)))))) {
                      *(byte **)(param_4 + 8) = param_3;
                      *(undefined1 *)(param_4 + 10) = 0;
                      return 1;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

