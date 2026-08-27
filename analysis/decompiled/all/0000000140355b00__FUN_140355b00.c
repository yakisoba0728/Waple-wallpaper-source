// Function: FUN_140355b00
// Addr: 140355b00
// Size: 1546 bytes


/* WARNING: Removing unreachable block (ram,0x000140355e70) */

int FUN_140355b00(longlong param_1,longlong *param_2,int param_3,uint *param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  char cVar14;
  char cVar15;
  int iVar16;
  undefined2 uVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  int iVar21;
  int iVar22;
  int local_res10 [2];
  int local_res18;
  int local_a0;
  int iStack_9c;
  int local_98;
  undefined8 local_88;
  longlong local_70;
  
  local_res10[0] = 0;
  local_70 = 0;
  lVar20 = 0;
  lVar8 = 0;
  local_res18 = param_3;
  if ((((param_2 == (longlong *)0x0) || (lVar8 = lVar20, param_4 == (uint *)0x0)) ||
      (0x1e < param_3 - 2U)) || (local_70 = *param_2, local_70 == 0)) {
LAB_140355f81:
    local_res10[0] = 6;
  }
  else if ((uint)(0x7fffffff / (ulonglong)param_4[1]) < *param_4) {
    local_res10[0] = 10;
    lVar8 = 0;
  }
  else {
    lVar8 = FUN_1402f80b0(local_70,0xc,0,*param_4 * param_4[1],0,local_res10);
    if (local_res10[0] == 0) {
      uVar2 = param_4[1];
      if ((uVar2 == 0) || (uVar3 = *param_4, uVar3 == 0)) {
        local_res10[0] = 0x13;
      }
      else {
        lVar20 = *(longlong *)(param_4 + 4);
        param_3 = param_3 << 0x10;
        uVar17 = DAT_140451b39;
        uVar10 = DAT_140451b3b;
        for (lVar4 = param_2[1]; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x10)) {
          for (piVar5 = *(int **)(lVar4 + 8); piVar5 != (int *)0x0; piVar5 = *(int **)(piVar5 + 10))
          {
            iVar6 = piVar5[8];
            iVar16 = *piVar5;
            iVar21 = piVar5[1];
            iVar19 = piVar5[4];
            iVar22 = piVar5[5];
            iVar18 = iVar16;
            iVar13 = iVar16;
            iVar12 = iVar21;
            iVar11 = iVar21;
            if (iVar6 == 1) {
LAB_140355caf:
              iVar6 = piVar5[2];
              iVar16 = piVar5[3];
              if (iVar6 < iVar18) {
                iVar18 = iVar6;
              }
              if (iVar13 < iVar6) {
                iVar13 = iVar6;
              }
              if (iVar16 < iVar12) {
                iVar12 = iVar16;
              }
              if (iVar11 < iVar16) {
                iVar11 = iVar16;
              }
            }
            else {
              iVar13 = iVar19;
              iVar11 = iVar22;
              if (iVar6 == 2) {
LAB_140355c7b:
                iVar12 = iVar11;
                iVar11 = iVar22;
LAB_140355c7e:
                iVar18 = iVar19;
                if (iVar16 < iVar19) {
                  iVar18 = iVar16;
                }
                if (iVar13 < iVar16) {
                  iVar13 = iVar16;
                }
                if (iVar21 < iVar12) {
                  iVar12 = iVar21;
                }
                if (iVar11 < iVar21) {
                  iVar11 = iVar21;
                }
                goto LAB_140355caf;
              }
              if (iVar6 == 3) {
                iVar13 = piVar5[6];
                iVar11 = piVar5[7];
                iVar6 = iVar19;
                if ((iVar13 <= iVar19) && (iVar6 = iVar13, iVar13 < iVar19)) {
                  iVar13 = iVar19;
                }
                iVar19 = iVar6;
                iVar12 = iVar22;
                if ((iVar11 <= iVar22) && (iVar12 = iVar11, iVar11 < iVar22)) goto LAB_140355c7b;
                goto LAB_140355c7e;
              }
              iVar12 = 0;
              iVar13 = 0;
              iVar18 = 0;
              iVar11 = 0;
            }
            iVar6 = iVar11 + 0x3f;
            iVar16 = ((int)((iVar12 + -0x3f >> 0x1f & 0x3fU) + iVar12 + -0x3f) >> 6) - local_res18;
            if (iVar6 < 0) {
              iVar6 = iVar11 + 0x7e;
            }
            iVar6 = (iVar6 >> 6) + local_res18;
            if (iVar16 < iVar6) {
              iVar19 = ((int)((iVar18 + -0x3f >> 0x1f & 0x3fU) + iVar18 + -0x3f) >> 6) - local_res18
              ;
              iVar22 = ((int)((iVar13 + 0x3f >> 0x1f & 0x3fU) + iVar13 + 0x3f) >> 6) + local_res18;
              iVar21 = iVar19;
              do {
                for (; iVar21 < iVar22; iVar21 = iVar21 + 1) {
                  if ((((-1 < iVar21) && (iVar21 < (int)uVar2)) && (-1 < iVar16)) &&
                     (iVar16 < (int)uVar3)) {
                    iVar13 = piVar5[8];
                    local_88 = CONCAT44(iVar16 * 0x40 + 0x20,iVar21 * 0x40 + 0x20);
                    if (iVar13 == 1) {
                      FUN_1403558c0(piVar5,local_88);
                    }
                    else if (iVar13 == 2) {
                      FUN_140354d90(piVar5,local_88);
                    }
                    else {
                      if (iVar13 != 3) goto LAB_140355f81;
                      FUN_140355280(piVar5,local_88);
                    }
                    local_res10[0] = 0;
                    local_98 = (uint)CONCAT12(uVar10,uVar17) << 8;
                    local_a0 = 0x7fffffff;
                    uVar10 = DAT_140451b3b;
                    uVar17 = DAT_140451b39;
                    if (0x7ffffffe < param_3) {
                      iVar13 = iVar16;
                      if (*(char *)(param_1 + 5) == '\0') {
                        iVar13 = (uVar3 - iVar16) + -1;
                      }
                      uVar9 = (ulonglong)(iVar13 * uVar2 + iVar21);
                      piVar1 = (int *)(lVar8 + uVar9 * 0xc);
                      if (*(char *)(lVar8 + 8 + uVar9 * 0xc) == '\0') {
LAB_140355e9f:
                        piVar1[0] = 0x7fffffff;
                        piVar1[1] = 0;
                        piVar1[2] = local_98;
                        uVar10 = DAT_140451b3b;
                        uVar17 = DAT_140451b39;
                      }
                      else {
                        iVar13 = *piVar1;
                        iVar11 = iVar13 + -0x7fffffff;
                        if (iVar11 < 0) {
                          iVar11 = 0x7fffffff - iVar13;
                        }
                        if (iVar11 < 0x21) {
                          iVar11 = piVar1[1];
                          iStack_9c = 0;
                          iVar12 = -iVar11;
                          if (-iVar11 < 0) {
                            iVar12 = iVar11;
                          }
                          if (0 < iVar12) {
                            local_98 = piVar1[2];
                            local_a0 = iVar13;
                            iStack_9c = iVar11;
                          }
                          *(ulonglong *)piVar1 = CONCAT44(iStack_9c,local_a0);
                          piVar1[2] = local_98;
                          uVar10 = DAT_140451b3b;
                          uVar17 = DAT_140451b39;
                        }
                        else if (0x7fffffff < iVar13) goto LAB_140355e9f;
                      }
                    }
                  }
                }
                iVar16 = iVar16 + 1;
                iVar21 = iVar19;
              } while (iVar16 < iVar6);
            }
          }
        }
        if (0 < (int)uVar3) {
          iVar6 = *(int *)(param_1 + 8);
          local_res18 = 0;
          do {
            cVar14 = -1;
            if (iVar6 != 0) {
              cVar14 = '\x01';
              if (iVar6 < 0) {
                cVar14 = -1;
              }
            }
            if (0 < (int)uVar2) {
              iVar16 = 0;
              if (*(char *)(param_1 + 4) == '\0') {
                iVar21 = uVar2 * local_res18;
                do {
                  uVar7 = iVar21 + iVar16;
                  piVar5 = (int *)(lVar8 + (ulonglong)uVar7 * 0xc);
                  cVar15 = *(char *)(lVar8 + 8 + (ulonglong)uVar7 * 0xc);
                  if (cVar15 == '\0') {
                    *piVar5 = param_3;
                    cVar15 = cVar14;
                  }
                  cVar14 = cVar15;
                  iVar19 = *piVar5;
                  if (param_3 < *piVar5) {
                    iVar19 = param_3;
                  }
                  *piVar5 = cVar14 * iVar19;
                  iVar22 = FUN_1402efa10(cVar14 * iVar19,param_3);
                  iVar19 = -iVar22;
                  if (-iVar22 < 0) {
                    iVar19 = iVar22;
                  }
                  iVar19 = iVar19 >> 9;
                  if (iVar22 < 1) {
                    if ((iVar22 < 0) && (0x80 < iVar19)) {
                      iVar19 = 0x80;
                    }
                  }
                  else if (0x7f < iVar19) {
                    iVar19 = 0x7f;
                  }
                  cVar15 = -(char)iVar19;
                  if (-1 < iVar22) {
                    cVar15 = (char)iVar19;
                  }
                  iVar16 = iVar16 + 1;
                  *(char *)(lVar20 + (ulonglong)uVar7) = cVar15 + -0x80;
                } while (iVar16 < (int)uVar2);
              }
              else {
                iVar21 = local_res18 * uVar2;
                do {
                  uVar7 = iVar21 + iVar16;
                  piVar5 = (int *)(lVar8 + (ulonglong)uVar7 * 0xc);
                  cVar15 = *(char *)(lVar8 + 8 + (ulonglong)uVar7 * 0xc);
                  if (cVar15 == '\0') {
                    *piVar5 = param_3;
                    cVar15 = cVar14;
                  }
                  iVar19 = *piVar5;
                  if (param_3 < *piVar5) {
                    iVar19 = param_3;
                  }
                  *piVar5 = -(cVar15 * iVar19);
                  iVar22 = FUN_1402efa10(-(cVar15 * iVar19),param_3);
                  iVar19 = -iVar22;
                  if (-iVar22 < 0) {
                    iVar19 = iVar22;
                  }
                  iVar19 = iVar19 >> 9;
                  if (iVar22 < 1) {
                    if ((iVar22 < 0) && (0x80 < iVar19)) {
                      iVar19 = 0x80;
                    }
                  }
                  else if (0x7f < iVar19) {
                    iVar19 = 0x7f;
                  }
                  cVar14 = -(char)iVar19;
                  if (-1 < iVar22) {
                    cVar14 = (char)iVar19;
                  }
                  iVar16 = iVar16 + 1;
                  *(char *)(lVar20 + (ulonglong)uVar7) = cVar14 + -0x80;
                  cVar14 = cVar15;
                } while (iVar16 < (int)uVar2);
              }
            }
            local_res18 = local_res18 + 1;
          } while (local_res18 < (int)uVar3);
        }
      }
    }
  }
  FUN_1402f7f90(local_70,lVar8);
  return local_res10[0];
}

