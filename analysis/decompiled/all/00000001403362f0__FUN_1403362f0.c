// Function: FUN_1403362f0
// Addr: 1403362f0
// Size: 251 bytes


/* WARNING: Removing unreachable block (ram,0x00014033656b) */
/* WARNING: Removing unreachable block (ram,0x0001403369b9) */
/* WARNING: Removing unreachable block (ram,0x000140336592) */
/* WARNING: Removing unreachable block (ram,0x0001403369e0) */

void FUN_1403362f0(longlong *param_1,longlong param_2,longlong param_3,undefined8 *param_4,
                  int param_5,char param_6)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  char *pcVar15;
  longlong lVar16;
  byte bVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined1 auStack_128 [32];
  int local_108;
  undefined1 local_100;
  byte bStack_f8;
  longlong local_f0;
  ulonglong uStack_e8;
  ulonglong uStack_e0;
  longlong *local_d8;
  byte *pbStack_d0;
  undefined8 *local_c8;
  ulonglong uStack_c0;
  ulonglong uStack_b8;
  undefined8 uStack_b0;
  ulonglong uStack_a8;
  ulonglong uStack_a0;
  ulonglong uStack_98;
  undefined8 uStack_90;
  ulonglong uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  ulonglong uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_1404dc110 ^ (ulonglong)auStack_128;
  lVar12 = *param_1;
  local_f0 = lVar12;
  local_d8 = param_1;
  local_c8 = param_4;
  if ((param_6 == '\0') && (*(char *)(param_1[1] + 0x18) == '\0')) {
    local_80 = *param_4;
    local_100 = 1;
    local_78 = 0;
    uStack_70 = 0;
    local_58 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_108 = param_5;
    FUN_1403362f0(param_1[1],0,param_3,&local_80);
  }
  uVar19 = 0;
  if (*(char *)(param_4 + 1) == '\0') {
    uVar11 = *(longlong *)(param_3 + 0x20) + *(longlong *)(param_2 + 0x20);
    if (uVar11 < 0x61) {
      param_4[2] = uVar11;
      uVar13 = uVar11 + 7 >> 3;
      param_4[3] = uVar13;
      *(undefined2 *)(param_4 + 1) = 0x101;
      if (uVar11 != 0) {
        uVar14 = 0;
        if (uVar13 != 0) {
          do {
            *(undefined1 *)((longlong)param_4 + uVar19 + 0x20) = 0xff;
            uVar19 = uVar19 + 1;
            uVar14 = param_4[3];
          } while (uVar19 < uVar14);
        }
        pbVar6 = (byte *)(uVar14 + 0x1f + (longlong)param_4);
        *pbVar6 = *pbVar6 & ~((char)(1 << (-(char)uVar11 & 7U)) - 1U);
      }
    }
    else {
      piVar2 = (int *)*param_4;
      if ((piVar2 != (int *)0x0) && (*piVar2 == 0)) {
        *piVar2 = 0x12;
      }
    }
    if (*(char *)(param_4 + 1) == '\0') {
      if (*(char *)(lVar12 + 0xc) != '\0') {
        *(undefined4 *)*param_4 = 0;
        *(undefined1 *)((longlong)param_1 + 0x19) = 0;
      }
      goto code_r0x000140336bd8;
    }
  }
  param_1[4] = 0;
  local_80 = *param_4;
  local_78 = param_4[1];
  uStack_e0 = *(ulonglong *)(param_2 + 0x20);
  uStack_70 = param_4[2];
  local_68 = param_4[3];
  uStack_60 = param_4[4];
  local_58 = param_4[5];
  if (uStack_e0 <= (ulonglong)param_4[2]) {
    pbStack_d0 = (byte *)&uStack_60;
    if (*(char *)(lVar12 + 0x141) != '\0') {
      uStack_c0 = 0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      uStack_a8 = 0;
      func_0x000140336c00(param_1,lVar12 + 0x178,&uStack_c0);
      func_0x000140336c00(param_1,&uStack_c0,lVar12 + 0x158);
    }
    pbVar6 = (byte *)&uStack_60;
    bStack_f8 = 0x80;
    uStack_e8 = 0;
    uVar19 = uStack_e0;
    if (uStack_e0 != 0) {
      do {
        uVar11 = uStack_e8;
        uVar13 = 0;
        if ((*pbVar6 & bStack_f8) != 0) {
          uVar8 = *(uint *)((longlong)param_1 + 0x1c);
          uVar19 = uStack_e8;
          if (((*(ulonglong *)(param_2 + 0x20) <= uStack_e8) &&
              (piVar2 = *(int **)(param_2 + 8), uVar19 = uVar13, piVar2 != (int *)0x0)) &&
             (*piVar2 == 0)) {
            *piVar2 = 0x82;
          }
          pcVar15 = (char *)(*(longlong *)(param_2 + 0x30) + uVar19 * *(longlong *)(param_2 + 0x10))
          ;
          uStack_b0._0_4_ = *(int *)(pcVar15 + 8);
          iVar3 = (int)uStack_b0 - *(int *)(pcVar15 + 4);
          if (iVar3 == -0x150000) {
            uStack_c0 = 1;
          }
          else if (iVar3 == -0x140000) {
            uStack_b0._0_4_ = 0;
            uStack_c0 = 0;
          }
          else {
            uStack_c0 = 4;
            if (-1 < iVar3) {
              uStack_b0._0_4_ = *(int *)(pcVar15 + 4);
            }
          }
          uVar18 = (uint)uStack_c0;
          uStack_b0._0_4_ = (int)uStack_b0 + param_5;
          uStack_a8 = (ulonglong)uVar8;
          if ((uVar18 == 0) || (*pcVar15 == '\0')) {
            lVar16 = (longlong)(int)uStack_b0 * (longlong)(int)uVar8;
            iVar3 = (int)((ulonglong)(lVar16 + 0x8000 + (lVar16 >> 0x3f)) >> 0x10);
          }
          else {
            iVar3 = *(int *)(pcVar15 + 0xc);
            uVar18 = uVar18 | 0x10;
            uStack_c0 = uStack_c0 | 0x10;
          }
          uStack_b0 = CONCAT44(iVar3,(int)uStack_b0);
          uVar8 = *(uint *)((longlong)local_d8 + 0x1c);
          uVar19 = uStack_e8;
          if (((*(ulonglong *)(param_2 + 0x20) <= uStack_e8) &&
              (piVar2 = *(int **)(param_2 + 8), uVar19 = uVar13, piVar2 != (int *)0x0)) &&
             (*piVar2 == 0)) {
            *piVar2 = 0x82;
          }
          pcVar15 = (char *)(*(longlong *)(param_2 + 0x30) + uVar19 * *(longlong *)(param_2 + 0x10))
          ;
          uStack_90._0_4_ = *(int *)(pcVar15 + 4);
          iVar4 = *(int *)(pcVar15 + 8) - (int)uStack_90;
          if (iVar4 == -0x150000) {
            uStack_90._0_4_ = 0;
            uStack_a0 = 0;
          }
          else if (iVar4 == -0x140000) {
            uStack_a0 = 2;
          }
          else {
            uStack_a0 = 8;
            if (-1 < iVar4) {
              uStack_90._0_4_ = *(int *)(pcVar15 + 8);
            }
          }
          uVar5 = (uint)uStack_a0;
          if (uStack_a0 != 0) {
            uStack_90._0_4_ = (int)uStack_90 + *(int *)(lVar12 + 0x130) * 2;
          }
          uStack_90._0_4_ = (int)uStack_90 + param_5;
          uStack_88 = (ulonglong)uVar8;
          if ((uVar5 == 0) || (*pcVar15 == '\0')) {
            lVar12 = (longlong)(int)uStack_90 * (longlong)(int)uVar8;
            iVar4 = (int)((ulonglong)(lVar12 + 0x8000 + (lVar12 >> 0x3f)) >> 0x10);
            uVar14 = uStack_a0;
          }
          else if (uStack_a0 == 0) {
            iVar4 = *(int *)(pcVar15 + 0xc);
            uStack_a0 = 0x10;
            uVar14 = 0x10;
          }
          else {
            iVar4 = *(int *)(pcVar15 + 0x10);
            uStack_a0 = uStack_a0 | 0x10;
            uVar14 = (ulonglong)(uVar5 | 0x10);
          }
          uStack_90 = CONCAT44(iVar4,(int)uStack_90);
          param_1 = local_d8;
          uStack_b8 = uStack_e8;
          uStack_98 = uStack_e8;
          if ((((uint)uVar14 | uVar18) & 0x10) == 0) {
            iVar7 = *(int *)(local_f0 + 0x14c);
            pbVar6 = pbStack_d0;
            uVar19 = uStack_e0;
            if (*(uint *)(local_f0 + 0x13c) != 0) {
              do {
                lVar16 = uVar13 * 5 + 0x4e;
                lVar12 = local_f0 + lVar16 * 4;
                if (*(char *)(local_f0 + 0x70 + lVar16 * 4) == '\0') {
                  if ((((uVar14 & 10) != 0) && (*(int *)(lVar12 + 0x60) - iVar7 <= (int)uStack_90))
                     && ((int)uStack_90 <= *(int *)(local_f0 + 0x19c + uVar13 * 0x14) + iVar7)) {
                    if (*(char *)(local_f0 + 0x140) == '\0') {
                      if ((int)uStack_90 - *(int *)(lVar12 + 0x60) < *(int *)(local_f0 + 0x148)) {
                        uVar8 = iVar4 + 0x8000U & 0xffff0000;
                      }
                      else {
                        uVar8 = iVar4 + 0x8000U & 0xffff0000;
                        uVar5 = *(int *)(lVar12 + 0x6c) + 0x10000;
                        if ((int)uVar8 <= (int)uVar5) {
                          uVar8 = uVar5;
                        }
                      }
                    }
                    else {
                      uVar8 = *(uint *)(lVar12 + 0x6c);
                    }
                    iVar7 = uVar8 - iVar4;
                    goto code_r0x000140336825;
                  }
                }
                else if ((((uVar18 & 5) != 0) && (*(int *)(lVar12 + 0x60) - iVar7 <= (int)uStack_b0)
                         ) && (iVar1 = *(int *)(local_f0 + 0x19c + uVar13 * 0x14),
                              (int)uStack_b0 <= iVar7 + iVar1)) {
                  if (*(char *)(local_f0 + 0x140) == '\0') {
                    if (iVar1 - (int)uStack_b0 < *(int *)(local_f0 + 0x148)) {
                      iVar7 = (iVar3 + 0x8000U & 0xffff0000) - iVar3;
                    }
                    else {
                      uVar8 = iVar3 + 0x8000U & 0xffff0000;
                      uVar5 = *(int *)(lVar12 + 0x6c) - 0x10000;
                      if ((int)uVar5 <= (int)uVar8) {
                        uVar8 = uVar5;
                      }
                      iVar7 = uVar8 - iVar3;
                    }
                  }
                  else {
                    iVar7 = *(int *)(lVar12 + 0x6c) - iVar3;
                  }
code_r0x000140336825:
                  if (uVar18 != 0) {
                    uStack_b0 = CONCAT44(iVar3 + iVar7,(int)uStack_b0);
                    uStack_c0 = (ulonglong)uVar18 | 0x10;
                  }
                  if ((uint)uVar14 != 0) {
                    uStack_90 = CONCAT44(iVar4 + iVar7,(int)uStack_90);
                    uStack_a0 = uVar14 | 0x10;
                  }
                  goto code_r0x00014033684d;
                }
                uVar8 = (int)uVar13 + 1;
                uVar13 = (ulonglong)uVar8;
              } while (uVar8 < *(uint *)(local_f0 + 0x13c));
            }
          }
          else {
code_r0x00014033684d:
            func_0x000140336c00(local_d8,&uStack_c0,&uStack_a0);
            *pbStack_d0 = *pbStack_d0 & ~bStack_f8;
            pbVar6 = pbStack_d0;
            uVar19 = uStack_e0;
          }
        }
        if (((uint)uVar11 & 7) == 7) {
          bStack_f8 = 0x80;
          pbVar6 = pbVar6 + 1;
        }
        else {
          bStack_f8 = bStack_f8 >> 1;
        }
        uStack_e8 = uVar11 + 1;
        param_4 = local_c8;
        lVar12 = local_f0;
        pbStack_d0 = pbVar6;
      } while (uStack_e8 < uVar19);
    }
    uVar11 = 0;
    if (param_6 == '\0') {
      pbVar6 = (byte *)&uStack_60;
      bVar17 = 0x80;
      if (uVar19 != 0) {
        do {
          uVar13 = 0;
          if ((*pbVar6 & bVar17) != 0) {
            uVar18 = 0;
            uVar8 = *(uint *)((longlong)param_1 + 0x1c);
            uVar19 = uVar11;
            if (((*(ulonglong *)(param_2 + 0x20) <= uVar11) &&
                (piVar2 = *(int **)(param_2 + 8), uVar19 = uVar13, piVar2 != (int *)0x0)) &&
               (*piVar2 == 0)) {
              *piVar2 = 0x82;
            }
            pcVar15 = (char *)(*(longlong *)(param_2 + 0x30) +
                              uVar19 * *(longlong *)(param_2 + 0x10));
            uVar5 = *(uint *)(pcVar15 + 8);
            iVar3 = uVar5 - *(uint *)(pcVar15 + 4);
            if (iVar3 == -0x150000) {
              uVar19 = (ulonglong)uVar5;
              uVar9 = 1;
            }
            else {
              uVar19 = uVar13;
              uVar9 = uVar18;
              if (iVar3 != -0x140000) {
                if (-1 < iVar3) {
                  uVar5 = *(uint *)(pcVar15 + 4);
                }
                uVar19 = (ulonglong)uVar5;
                uVar9 = 4;
              }
            }
            uStack_a0 = (ulonglong)uVar9;
            iVar3 = (int)uVar19 + param_5;
            uStack_88 = (ulonglong)uVar8;
            if ((uVar9 == 0) || (*pcVar15 == '\0')) {
              lVar16 = (longlong)iVar3 * (longlong)(int)uVar8;
              uVar10 = (undefined4)((ulonglong)(lVar16 + 0x8000 + (lVar16 >> 0x3f)) >> 0x10);
            }
            else {
              uVar10 = *(undefined4 *)(pcVar15 + 0xc);
              uStack_a0 = (ulonglong)uVar9 | 0x10;
            }
            uStack_90 = CONCAT44(uVar10,iVar3);
            uVar8 = *(uint *)((longlong)param_1 + 0x1c);
            uVar19 = uVar11;
            if (((*(ulonglong *)(param_2 + 0x20) <= uVar11) &&
                (piVar2 = *(int **)(param_2 + 8), uVar19 = uVar13, piVar2 != (int *)0x0)) &&
               (*piVar2 == 0)) {
              *piVar2 = 0x82;
            }
            pcVar15 = (char *)(*(longlong *)(param_2 + 0x30) +
                              uVar19 * *(longlong *)(param_2 + 0x10));
            iVar3 = *(uint *)(pcVar15 + 8) - *(uint *)(pcVar15 + 4);
            if (iVar3 != -0x150000) {
              uVar13 = (ulonglong)*(uint *)(pcVar15 + 4);
              if (iVar3 == -0x140000) {
                uVar18 = 2;
              }
              else {
                if (-1 < iVar3) {
                  uVar13 = (ulonglong)*(uint *)(pcVar15 + 8);
                }
                uVar18 = 8;
              }
            }
            iVar3 = (int)uVar13;
            uStack_c0 = (ulonglong)uVar18;
            if (uVar18 != 0) {
              iVar3 = iVar3 + *(int *)(lVar12 + 0x130) * 2;
            }
            iVar3 = iVar3 + param_5;
            uStack_a8 = (ulonglong)uVar8;
            if ((uVar18 == 0) || (*pcVar15 == '\0')) {
              lVar16 = (longlong)iVar3 * (longlong)(int)uVar8;
              uStack_b0 = CONCAT44((int)((ulonglong)(lVar16 + 0x8000 + (lVar16 >> 0x3f)) >> 0x10),
                                   iVar3);
            }
            else if (uVar18 == 0) {
              uStack_c0 = 0x10;
              uStack_b0 = CONCAT44(*(undefined4 *)(pcVar15 + 0xc),iVar3);
            }
            else {
              uStack_c0 = (ulonglong)uVar18 | 0x10;
              uStack_b0 = CONCAT44(*(undefined4 *)(pcVar15 + 0x10),iVar3);
            }
            uStack_b8 = uVar11;
            uStack_98 = uVar11;
            func_0x000140336c00(param_1,&uStack_a0,&uStack_c0);
            uVar19 = uStack_e0;
          }
          if (((uint)uVar11 & 7) == 7) {
            bVar17 = 0x80;
            pbVar6 = pbVar6 + 1;
          }
          else {
            bVar17 = bVar17 >> 1;
          }
          uVar11 = uVar11 + 1;
          param_4 = local_c8;
        } while (uVar11 < uVar19);
      }
      FUN_140336020(param_1);
      uVar19 = 0;
      if ((int)param_1[4] != 0) {
        do {
          uVar8 = *(uint *)(param_1 + uVar19 * 4 + 5);
          if ((uVar8 & 0x20) == 0) {
            uVar11 = param_1[uVar19 * 4 + 6];
            if (*(ulonglong *)(param_2 + 0x20) <= uVar11) {
              piVar2 = *(int **)(param_2 + 8);
              if ((piVar2 != (int *)0x0) && (*piVar2 == 0)) {
                *piVar2 = 0x82;
                uVar8 = *(uint *)(param_1 + uVar19 * 4 + 5);
              }
              uVar11 = 0;
            }
            lVar16 = uVar11 * *(longlong *)(param_2 + 0x10);
            lVar12 = *(longlong *)(param_2 + 0x30);
            uVar10 = *(undefined4 *)((longlong)param_1 + uVar19 * 0x20 + 0x3c);
            if ((uVar8 & 10) == 0) {
              *(undefined4 *)(lVar16 + 0xc + lVar12) = uVar10;
            }
            else {
              *(undefined4 *)(lVar16 + 0x10 + lVar12) = uVar10;
            }
            *(undefined1 *)(lVar16 + lVar12) = 1;
          }
          uVar19 = uVar19 + 1;
        } while (uVar19 < *(uint *)(param_1 + 4));
      }
    }
    else {
      if ((((int)param_1[4] == 0) || (0 < (int)param_1[7])) ||
         ((int)param_1[(ulonglong)((int)param_1[4] - 1) * 4 + 7] < 0)) {
        uStack_b8 = 0;
        uStack_c0 = 0x31;
        uStack_b0 = 0;
        uStack_a8 = (ulonglong)*(uint *)((longlong)param_1 + 0x1c);
        uStack_a0 = 0;
        uStack_98 = 0;
        uStack_90 = 0;
        uStack_88 = 0;
        func_0x000140336c00(param_1,&uStack_c0,&uStack_a0);
      }
      FUN_140336020(param_1);
    }
    *(undefined1 *)(param_1 + 3) = 1;
    *(undefined1 *)((longlong)param_4 + 9) = 0;
  }
code_r0x000140336bd8:
  func_0x0001402ed2f0(local_50 ^ (ulonglong)auStack_128);
  return;
}

