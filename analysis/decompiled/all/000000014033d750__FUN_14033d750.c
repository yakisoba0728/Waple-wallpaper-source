// Function: FUN_14033d750
// Addr: 14033d750
// Size: 1537 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_14033d750(undefined8 param_1,short *param_2,longlong param_3,int param_4)

{
  int *piVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  byte bVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  int *piVar11;
  longlong lVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  char local_128;
  int local_124;
  int local_120;
  uint local_118;
  uint local_114;
  longlong local_110;
  longlong local_108;
  undefined8 local_100;
  longlong local_f8;
  longlong local_f0;
  int local_e8 [2];
  longlong local_e0 [3];
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined2 local_58;
  undefined1 local_56;
  undefined1 local_55;
  bool local_54;
  ulonglong local_48;
  
  local_48 = DAT_1404dc040 ^ (ulonglong)auStack_158;
  if ((param_2[1] == 0) || (*param_2 == 0)) {
    return 0;
  }
  local_120 = FUN_14033f190(&local_118,param_2,param_1,param_3);
  if (local_120 != 0) goto LAB_14033dc89;
  local_124 = *(int *)(local_f0 + 0x198);
  iVar3 = *(int *)(local_f0 + 0xcc);
  piVar1 = (int *)(param_3 + 0x1a0);
  local_128 = '\0';
  if (*piVar1 != 0) {
    lVar9 = (longlong)*(int *)(param_3 + 0x1a4) * (longlong)local_124;
    uVar20 = (uint)((ulonglong)(lVar9 + 0x8000 + (lVar9 >> 0x3f)) >> 0x10);
    uVar17 = uVar20 + 0x20 & 0xffffffc0;
    if ((uVar17 != 0) && (uVar20 != uVar17)) {
      local_128 = '\x01';
      uVar8 = FUN_1402f20b0(local_124,uVar17,uVar20);
      iVar22 = iVar3;
      if ((int)uVar17 < (int)uVar20) {
        iVar22 = iVar3 - iVar3 / 0x32;
      }
      local_138 = 0;
      FUN_14033ef80(local_f0,iVar22,uVar8,0);
    }
  }
  uVar15 = 0;
  local_58 = 0x101;
  if (param_4 - 2U < 2) {
    local_56 = 1;
    if (param_4 != 2) goto LAB_14033d88c;
LAB_14033d895:
    local_55 = 1;
  }
  else {
    local_56 = 0;
LAB_14033d88c:
    if (param_4 == 4) goto LAB_14033d895;
    local_55 = 0;
  }
  local_54 = param_4 != 1;
  do {
    lVar9 = local_f0;
    uVar18 = 0;
    iVar22 = (int)uVar15;
    if (local_118 != 0) {
      lVar19 = local_110;
      puVar13 = *(undefined4 **)(local_f8 + 8);
      uVar20 = local_118;
      if (iVar22 == 0) {
        do {
          *(undefined4 *)(lVar19 + 0x1c) = 0;
          *(undefined8 *)(lVar19 + 0x28) = 0;
          *(undefined4 *)(lVar19 + 0x30) = *puVar13;
          *(undefined4 *)(lVar19 + 0x34) = puVar13[1];
          uVar20 = uVar20 - 1;
          lVar19 = lVar19 + 0x40;
          puVar13 = puVar13 + 2;
        } while (uVar20 != 0);
      }
      else {
        do {
          *(undefined4 *)(lVar19 + 0x1c) = 0;
          *(undefined8 *)(lVar19 + 0x28) = 0;
          *(undefined4 *)(lVar19 + 0x30) = puVar13[1];
          *(undefined4 *)(lVar19 + 0x34) = *puVar13;
          uVar20 = uVar20 - 1;
          lVar19 = lVar19 + 0x40;
          puVar13 = puVar13 + 2;
        } while (uVar20 != 0);
      }
    }
    if (local_114 != 0) {
      do {
        if (2 < *(uint *)(local_108 + 8 + uVar18 * 0x10)) {
          puVar5 = *(undefined8 **)(local_108 + uVar18 * 0x10);
          puVar10 = (undefined8 *)*puVar5;
          puVar14 = puVar5;
          do {
            iVar16 = *(int *)(puVar14 + 6);
            puVar6 = (undefined8 *)puVar14[1];
            if (*(int *)(puVar10 + 6) < iVar16) {
              if (*(int *)(puVar6 + 6) <= iVar16) {
LAB_14033d961:
                *(uint *)((longlong)puVar14 + 0x1c) = *(uint *)((longlong)puVar14 + 0x1c) | 0x40;
                if (*(int *)((longlong)puVar10 + 0x34) < *(int *)((longlong)puVar6 + 0x34)) {
                  uVar20 = *(uint *)((longlong)puVar14 + 0x1c) | 0x80;
                }
                else {
                  if (*(int *)((longlong)puVar10 + 0x34) <= *(int *)((longlong)puVar6 + 0x34))
                  goto LAB_14033d982;
                  uVar20 = *(uint *)((longlong)puVar14 + 0x1c) | 0x100;
                }
                *(uint *)((longlong)puVar14 + 0x1c) = uVar20;
              }
            }
            else if ((*(int *)(puVar10 + 6) <= iVar16) || (iVar16 <= *(int *)(puVar6 + 6)))
            goto LAB_14033d961;
LAB_14033d982:
            puVar10 = puVar14;
            puVar14 = puVar6;
          } while (puVar6 != puVar5);
        }
        uVar20 = (int)uVar18 + 1;
        uVar18 = (ulonglong)uVar20;
      } while (uVar20 < local_114);
    }
    lVar19 = local_e0[uVar15 * 9];
    for (iVar16 = local_e8[uVar15 * 0x12]; iVar16 != 0; iVar16 = iVar16 + -1) {
      FUN_14033f9e0(lVar19,lVar9,uVar15,&local_118);
      lVar19 = lVar19 + 0x28;
    }
    FUN_14033f010(&local_118,uVar15);
    uVar20 = local_118;
    lVar9 = local_110;
    if (iVar22 == 1) {
      for (; uVar20 != 0; uVar20 = uVar20 - 1) {
        if ((((*(byte *)(lVar9 + 0x20) & 0xc) != 0) || ((*(byte *)(lVar9 + 0x24) & 0xc) != 0)) &&
           ((*(byte *)(lVar9 + 0x1c) & 0x10) == 0)) {
          lVar19 = param_3 + 0x1a4;
          iVar4 = *(int *)(lVar9 + 0x30);
          for (iVar16 = *piVar1; iVar16 != 0; iVar16 = iVar16 + -1) {
            iVar21 = iVar4 - *(int *)(lVar19 + 0xc);
            if (iVar21 < -*(int *)(param_3 + 0x9bc)) break;
            if ((iVar4 <= *(int *)(param_3 + 0x9bc) + *(int *)(lVar19 + 8)) &&
               ((*(char *)(param_3 + 0x9c0) != '\0' || (iVar21 <= *(int *)(param_3 + 0x9b8))))) {
              uVar8 = *(undefined4 *)(lVar19 + 0x18);
              *(uint *)(lVar9 + 0x1c) = *(uint *)(lVar9 + 0x1c) | 0x30;
              *(undefined4 *)(lVar9 + 0x38) = uVar8;
            }
            lVar19 = lVar19 + 0x20;
          }
          uVar17 = *(uint *)(param_3 + 0x3a4);
          piVar11 = piVar1 + (ulonglong)uVar17 * 8 + 0x7a;
          for (; uVar17 != 0; uVar17 = uVar17 - 1) {
            if (piVar11[2] - iVar4 < -*(int *)(param_3 + 0x9bc)) break;
            if ((piVar11[3] - *(int *)(param_3 + 0x9bc) <= iVar4) &&
               ((*(char *)(param_3 + 0x9c0) != '\0' ||
                (piVar11[2] - iVar4 < *(int *)(param_3 + 0x9b8))))) {
              iVar16 = piVar11[7];
              *(uint *)(lVar9 + 0x1c) = *(uint *)(lVar9 + 0x1c) | 0x30;
              *(int *)(lVar9 + 0x38) = iVar16;
            }
            piVar11 = piVar11 + -8;
          }
        }
        lVar9 = lVar9 + 0x40;
      }
    }
    lVar19 = (longlong)*(int *)((uVar15 + 1) * 0xcc + local_f0);
    lVar9 = local_110;
    for (uVar20 = local_118; uVar20 != 0; uVar20 = uVar20 - 1) {
      piVar11 = *(int **)(lVar9 + 0x28);
      if (piVar11 != (int *)0x0) {
        if ((*(uint *)(lVar9 + 0x1c) >> 9 & 1) == 0) {
          if ((*(uint *)(lVar9 + 0x1c) >> 10 & 1) == 0) {
            iVar16 = *(int *)(lVar9 + 0x30) - *piVar11;
            if (iVar16 < 1) {
              lVar12 = iVar16 * lVar19;
              iVar16 = (int)((ulonglong)(lVar12 + 0x8000 + (lVar12 >> 0x3f)) >> 0x10) + piVar11[2];
            }
            else if (iVar16 < piVar11[1]) {
              iVar16 = FUN_1402f20b0(iVar16,piVar11[3]);
              iVar16 = piVar11[2] + iVar16;
            }
            else {
              lVar12 = (iVar16 - piVar11[1]) * lVar19;
              iVar16 = (int)((ulonglong)(lVar12 + 0x8000 + (lVar12 >> 0x3f)) >> 0x10) + piVar11[3] +
                       piVar11[2];
            }
          }
          else {
            iVar16 = piVar11[3] + piVar11[2];
          }
        }
        else {
          iVar16 = piVar11[2];
        }
        *(int *)(lVar9 + 0x38) = iVar16;
        *(uint *)(lVar9 + 0x1c) = *(uint *)(lVar9 + 0x1c) | 0x20;
      }
      lVar9 = lVar9 + 0x40;
    }
    FUN_14033f4e0(&local_118,uVar15);
    FUN_14033f770(&local_118,uVar15);
    uVar15 = 0;
    lVar9 = *(longlong *)(local_f8 + 8);
    lVar19 = *(longlong *)(local_f8 + 0x10);
    lVar12 = local_110;
    if (local_118 != 0) {
      do {
        if (iVar22 == 0) {
          *(undefined4 *)(lVar9 + uVar15 * 8) = *(undefined4 *)(lVar12 + 0x38);
        }
        else {
          *(undefined4 *)(lVar9 + 4 + uVar15 * 8) = *(undefined4 *)(lVar12 + 0x38);
        }
        if ((*(byte *)(lVar12 + 0x1c) & 0x10) != 0) {
          bVar7 = 0x40;
          if (iVar22 == 0) {
            bVar7 = 0x20;
          }
          pbVar2 = (byte *)(uVar15 + lVar19);
          *pbVar2 = *pbVar2 | bVar7;
        }
        uVar20 = (int)uVar15 + 1;
        uVar15 = (ulonglong)uVar20;
        lVar12 = lVar12 + 0x40;
      } while (uVar20 < local_118);
    }
    if (local_128 != '\0') {
      local_138 = 0;
      FUN_14033ef80(local_f0,iVar3,local_124,0);
    }
    uVar15 = (ulonglong)(iVar22 + 1U);
  } while ((int)(iVar22 + 1U) < 2);
LAB_14033dc89:
  FUN_1402f7f90(local_100,local_78);
  local_78 = 0;
  local_80 = 0;
  local_70 = 0;
  FUN_1402f7f90(local_100,local_90);
  local_90 = 0;
  FUN_1402f7f90(local_100,local_98);
  local_98 = 0;
  local_a0 = 0;
  local_88 = 0;
  FUN_1402f7f90(local_100,local_c0);
  local_c0 = 0;
  local_c8 = 0;
  local_b8 = 0;
  FUN_1402f7f90(local_100,local_e0[1]);
  local_e0[1] = 0;
  FUN_1402f7f90(local_100,local_e0[0]);
  local_e0[0] = 0;
  local_e8[0] = 0;
  local_e8[1] = 0;
  local_e0[2] = 0;
  FUN_1402f7f90(local_100,local_110);
  local_110 = 0;
  FUN_1402f7f90(local_100,local_108);
  return local_120;
}

