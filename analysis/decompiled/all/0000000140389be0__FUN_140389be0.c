// Function: FUN_140389be0
// Addr: 140389be0
// Size: 2029 bytes


undefined8
FUN_140389be0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined4 *param_5,longlong param_6,undefined8 param_7)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  int *piVar12;
  longlong lVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  char cVar16;
  undefined8 uVar17;
  float *pfVar18;
  ulonglong uVar19;
  float *pfVar20;
  float *pfVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  float fVar26;
  float fVar27;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined1 local_78 [80];
  
  if ((uint)param_3 < *(uint *)(param_1 + 0x1c)) {
    piVar12 = (int *)param_4[1];
    uVar19 = 0;
    local_98 = *param_5;
    uStack_94 = param_5[1];
    uStack_90 = param_5[2];
    uStack_8c = param_5[3];
    local_88 = *(undefined8 *)(param_5 + 4);
    *(undefined4 *)(param_6 + 4) = 0;
    uVar17 = FUN_1403d0210(local_98,local_78,param_3,0);
    cVar16 = FUN_140387630(uVar17,param_2,param_1,param_6,param_6,0,0,0,1,1,piVar12 == (int *)0x0,
                           &local_98,param_7,0,0);
    if (cVar16 != '\0') {
      iVar11 = *(int *)(param_6 + 4);
      uVar22 = iVar11 - 4;
      if (piVar12 != (int *)0x0) {
        lVar13 = *(longlong *)(param_6 + 8);
        if (uVar22 != 0) {
          do {
            uVar23 = (uint)uVar19;
            uVar24 = uVar23;
            uVar15 = uVar19;
            if ((*(byte *)(lVar13 + 8 + uVar19 * 0xc) & 1) == 0) {
              while ((uVar24 < uVar22 &&
                     (uVar24 = (uint)uVar15, *(char *)(lVar13 + 9 + uVar15 * 0xc) == '\0'))) {
                uVar24 = uVar24 + 1;
                uVar15 = (ulonglong)uVar24;
              }
              pfVar1 = (float *)((longlong)param_4 + 0x1c);
              pfVar2 = (float *)(param_4 + 4);
              pfVar3 = (float *)((longlong)param_4 + 0x24);
              pfVar4 = (float *)(param_4 + 5);
              if (uVar24 < uVar22) {
                fVar27 = *(float *)(lVar13 + (ulonglong)uVar24 * 0xc);
                pfVar18 = (float *)(lVar13 + (ulonglong)uVar24 * 0xc);
                pfVar21 = pfVar18 + 1;
                fVar6 = *pfVar21;
                pfVar20 = pfVar18;
                if (*pfVar1 <= fVar27) {
                  pfVar20 = pfVar1;
                }
                *pfVar1 = *pfVar20;
                pfVar20 = pfVar21;
                if (*pfVar2 <= fVar6) {
                  pfVar20 = pfVar2;
                }
                *pfVar2 = *pfVar20;
                if (fVar27 <= *pfVar3) {
                  pfVar18 = pfVar3;
                }
                *pfVar3 = *pfVar18;
                if (fVar6 <= *pfVar4) {
                  pfVar21 = pfVar4;
                }
                *pfVar4 = *pfVar21;
              }
              if (uVar23 < uVar24) {
                if (3 < uVar24 - uVar23) {
                  do {
                    iVar25 = (int)uVar19;
                    fVar27 = *(float *)(lVar13 + uVar19 * 0xc);
                    pfVar21 = (float *)(lVar13 + uVar19 * 0xc);
                    pfVar18 = (float *)(lVar13 + (uVar19 * 3 + 1) * 4);
                    fVar6 = *pfVar18;
                    pfVar20 = pfVar21;
                    if (*pfVar1 <= fVar27) {
                      pfVar20 = pfVar1;
                    }
                    fVar26 = *pfVar20;
                    *pfVar1 = fVar26;
                    pfVar20 = pfVar18;
                    if (*pfVar2 <= fVar6) {
                      pfVar20 = pfVar2;
                    }
                    fVar7 = *pfVar20;
                    uVar19 = (ulonglong)(iVar25 + 1);
                    *pfVar2 = fVar7;
                    if (fVar27 <= *pfVar3) {
                      pfVar21 = pfVar3;
                    }
                    fVar27 = *pfVar21;
                    *pfVar3 = fVar27;
                    if (fVar6 <= *pfVar4) {
                      pfVar18 = pfVar4;
                    }
                    fVar6 = *pfVar18;
                    fVar8 = *(float *)(lVar13 + uVar19 * 0xc);
                    pfVar21 = (float *)(lVar13 + uVar19 * 0xc);
                    *pfVar4 = fVar6;
                    lVar5 = uVar19 * 3 + 1;
                    fVar9 = *(float *)(lVar13 + lVar5 * 4);
                    pfVar18 = (float *)(lVar13 + lVar5 * 4);
                    pfVar20 = pfVar21;
                    if (fVar26 <= fVar8) {
                      pfVar20 = pfVar1;
                    }
                    fVar26 = *pfVar20;
                    *pfVar1 = fVar26;
                    pfVar20 = pfVar18;
                    if (fVar7 <= fVar9) {
                      pfVar20 = pfVar2;
                    }
                    fVar7 = *pfVar20;
                    uVar19 = (ulonglong)(iVar25 + 2);
                    *pfVar2 = fVar7;
                    fVar10 = *(float *)(lVar13 + uVar19 * 0xc);
                    if (fVar8 <= fVar27) {
                      pfVar21 = pfVar3;
                    }
                    fVar27 = *pfVar21;
                    pfVar21 = (float *)(lVar13 + uVar19 * 0xc);
                    *pfVar3 = fVar27;
                    lVar5 = uVar19 * 3 + 1;
                    fVar8 = *(float *)(lVar13 + lVar5 * 4);
                    if (fVar9 <= fVar6) {
                      pfVar18 = pfVar4;
                    }
                    fVar6 = *pfVar18;
                    pfVar18 = (float *)(lVar13 + lVar5 * 4);
                    *pfVar4 = fVar6;
                    pfVar20 = pfVar21;
                    if (fVar26 <= fVar10) {
                      pfVar20 = pfVar1;
                    }
                    fVar26 = *pfVar20;
                    *pfVar1 = fVar26;
                    pfVar20 = pfVar18;
                    if (fVar7 <= fVar8) {
                      pfVar20 = pfVar2;
                    }
                    fVar7 = *pfVar20;
                    uVar19 = (ulonglong)(iVar25 + 3);
                    *pfVar2 = fVar7;
                    fVar9 = *(float *)(lVar13 + uVar19 * 0xc);
                    if (fVar10 <= fVar27) {
                      pfVar21 = pfVar3;
                    }
                    fVar27 = *pfVar21;
                    pfVar21 = (float *)(lVar13 + uVar19 * 0xc);
                    *pfVar3 = fVar27;
                    if (fVar8 <= fVar6) {
                      pfVar18 = pfVar4;
                    }
                    fVar6 = *pfVar18;
                    *pfVar4 = fVar6;
                    pfVar18 = (float *)(lVar13 + 4 + uVar19 * 0xc);
                    fVar8 = *pfVar18;
                    pfVar20 = pfVar21;
                    if (fVar26 <= fVar9) {
                      pfVar20 = pfVar1;
                    }
                    *pfVar1 = *pfVar20;
                    pfVar20 = pfVar18;
                    if (fVar7 <= fVar8) {
                      pfVar20 = pfVar2;
                    }
                    *pfVar2 = *pfVar20;
                    if (fVar9 <= fVar27) {
                      pfVar21 = pfVar3;
                    }
                    *pfVar3 = *pfVar21;
                    if (fVar8 <= fVar6) {
                      pfVar18 = pfVar4;
                    }
                    uVar19 = (ulonglong)(iVar25 + 4U);
                    *pfVar4 = *pfVar18;
                  } while (iVar25 + 4U < uVar24 - 3);
                }
                uVar23 = (uint)uVar19;
                if (uVar23 < uVar24) {
                  pfVar2 = (float *)(param_4 + 4);
                  pfVar3 = (float *)((longlong)param_4 + 0x24);
                  pfVar4 = (float *)(param_4 + 5);
                  do {
                    fVar27 = *(float *)(lVar13 + uVar19 * 0xc);
                    pfVar21 = (float *)(lVar13 + uVar19 * 0xc);
                    pfVar18 = (float *)(lVar13 + 4 + uVar19 * 0xc);
                    fVar6 = *pfVar18;
                    pfVar20 = pfVar21;
                    if (*pfVar1 <= fVar27) {
                      pfVar20 = pfVar1;
                    }
                    *pfVar1 = *pfVar20;
                    pfVar20 = pfVar18;
                    if (*pfVar2 <= fVar6) {
                      pfVar20 = pfVar2;
                    }
                    *pfVar2 = *pfVar20;
                    if (fVar27 <= *pfVar3) {
                      pfVar21 = pfVar3;
                    }
                    *pfVar3 = *pfVar21;
                    if (fVar6 <= *pfVar4) {
                      pfVar18 = pfVar4;
                    }
                    uVar23 = (int)uVar19 + 1;
                    uVar19 = (ulonglong)uVar23;
                    *pfVar4 = *pfVar18;
                  } while (uVar23 < uVar24);
                }
              }
            }
            else if (uVar23 < uVar22) {
              if (3 < uVar22 - uVar23) {
                pfVar1 = (float *)((longlong)param_4 + 0x1c);
                pfVar2 = (float *)(param_4 + 4);
                pfVar3 = (float *)((longlong)param_4 + 0x24);
                pfVar4 = (float *)(param_4 + 5);
                do {
                  uVar24 = (uint)uVar19;
                  fVar27 = *(float *)(lVar13 + uVar19 * 0xc);
                  pfVar21 = (float *)(lVar13 + uVar19 * 0xc);
                  pfVar18 = (float *)(lVar13 + 4 + uVar19 * 0xc);
                  fVar6 = *pfVar18;
                  pfVar20 = pfVar21;
                  if (*pfVar1 <= fVar27) {
                    pfVar20 = pfVar1;
                  }
                  fVar26 = *pfVar20;
                  *pfVar1 = fVar26;
                  pfVar20 = pfVar18;
                  if (*pfVar2 <= fVar6) {
                    pfVar20 = pfVar2;
                  }
                  fVar7 = *pfVar20;
                  *pfVar2 = fVar7;
                  pfVar20 = pfVar21;
                  if (fVar27 <= *pfVar3) {
                    pfVar20 = pfVar3;
                  }
                  fVar27 = *pfVar20;
                  *pfVar3 = fVar27;
                  if (fVar6 <= *pfVar4) {
                    pfVar18 = pfVar4;
                  }
                  cVar16 = *(char *)((longlong)pfVar21 + 9);
                  fVar6 = *pfVar18;
                  *pfVar4 = fVar6;
                  uVar23 = uVar24;
                  if (cVar16 != '\0') goto LAB_14038a237;
                  uVar23 = uVar24 + 1;
                  fVar8 = *(float *)(lVar13 + (ulonglong)uVar23 * 0xc);
                  pfVar21 = (float *)(lVar13 + (ulonglong)uVar23 * 0xc);
                  fVar9 = pfVar21[1];
                  pfVar18 = pfVar21;
                  if (fVar26 <= fVar8) {
                    pfVar18 = pfVar1;
                  }
                  fVar26 = *pfVar18;
                  *pfVar1 = fVar26;
                  pfVar18 = pfVar21 + 1;
                  if (fVar7 <= fVar9) {
                    pfVar18 = pfVar2;
                  }
                  fVar7 = *pfVar18;
                  *pfVar2 = fVar7;
                  pfVar18 = pfVar21;
                  if (fVar8 <= fVar27) {
                    pfVar18 = pfVar3;
                  }
                  fVar27 = *pfVar18;
                  *pfVar3 = fVar27;
                  pfVar18 = pfVar21 + 1;
                  if (fVar9 <= fVar6) {
                    pfVar18 = pfVar4;
                  }
                  cVar16 = *(char *)((longlong)pfVar21 + 9);
                  fVar6 = *pfVar18;
                  *pfVar4 = fVar6;
                  if (cVar16 != '\0') goto LAB_14038a237;
                  uVar23 = uVar24 + 2;
                  fVar8 = *(float *)(lVar13 + (ulonglong)uVar23 * 0xc);
                  pfVar21 = (float *)(lVar13 + (ulonglong)uVar23 * 0xc);
                  fVar9 = pfVar21[1];
                  pfVar18 = pfVar21;
                  if (fVar26 <= fVar8) {
                    pfVar18 = pfVar1;
                  }
                  fVar26 = *pfVar18;
                  *pfVar1 = fVar26;
                  pfVar18 = pfVar21 + 1;
                  if (fVar7 <= fVar9) {
                    pfVar18 = pfVar2;
                  }
                  fVar7 = *pfVar18;
                  *pfVar2 = fVar7;
                  pfVar18 = pfVar21;
                  if (fVar8 <= fVar27) {
                    pfVar18 = pfVar3;
                  }
                  fVar27 = *pfVar18;
                  *pfVar3 = fVar27;
                  pfVar18 = pfVar21 + 1;
                  if (fVar9 <= fVar6) {
                    pfVar18 = pfVar4;
                  }
                  cVar16 = *(char *)((longlong)pfVar21 + 9);
                  fVar6 = *pfVar18;
                  *pfVar4 = fVar6;
                  if (cVar16 != '\0') goto LAB_14038a237;
                  uVar23 = uVar24 + 3;
                  fVar8 = *(float *)(lVar13 + (ulonglong)uVar23 * 0xc);
                  pfVar21 = (float *)(lVar13 + (ulonglong)uVar23 * 0xc);
                  fVar9 = pfVar21[1];
                  pfVar18 = pfVar21;
                  if (fVar26 <= fVar8) {
                    pfVar18 = pfVar1;
                  }
                  *pfVar1 = *pfVar18;
                  pfVar18 = pfVar21 + 1;
                  if (fVar7 <= fVar9) {
                    pfVar18 = pfVar2;
                  }
                  *pfVar2 = *pfVar18;
                  pfVar18 = pfVar21;
                  if (fVar8 <= fVar27) {
                    pfVar18 = pfVar3;
                  }
                  *pfVar3 = *pfVar18;
                  pfVar18 = pfVar21 + 1;
                  if (fVar9 <= fVar6) {
                    pfVar18 = pfVar4;
                  }
                  cVar16 = *(char *)((longlong)pfVar21 + 9);
                  *pfVar4 = *pfVar18;
                  if (cVar16 != '\0') goto LAB_14038a237;
                  uVar19 = (ulonglong)(uVar24 + 4);
                } while (uVar24 + 4 < iVar11 - 7U);
              }
              uVar23 = (uint)uVar19;
              if (uVar23 < uVar22) {
                pfVar1 = (float *)((longlong)param_4 + 0x1c);
                pfVar2 = (float *)(param_4 + 4);
                pfVar3 = (float *)((longlong)param_4 + 0x24);
                pfVar4 = (float *)(param_4 + 5);
                do {
                  uVar23 = (uint)uVar19;
                  fVar27 = *(float *)(lVar13 + 4 + uVar19 * 0xc);
                  pfVar21 = (float *)(lVar13 + uVar19 * 0xc);
                  fVar6 = *pfVar21;
                  pfVar18 = (float *)(lVar13 + 4 + uVar19 * 0xc);
                  pfVar20 = pfVar21;
                  if (*pfVar1 <= fVar6) {
                    pfVar20 = pfVar1;
                  }
                  *pfVar1 = *pfVar20;
                  pfVar20 = pfVar18;
                  if (*pfVar2 <= fVar27) {
                    pfVar20 = pfVar2;
                  }
                  *pfVar2 = *pfVar20;
                  pfVar20 = pfVar21;
                  if (fVar6 <= *pfVar3) {
                    pfVar20 = pfVar3;
                  }
                  *pfVar3 = *pfVar20;
                  if (fVar27 <= *pfVar4) {
                    pfVar18 = pfVar4;
                  }
                  cVar16 = *(char *)((longlong)pfVar21 + 9);
                  *pfVar4 = *pfVar18;
                  if (cVar16 != '\0') break;
                  uVar23 = uVar23 + 1;
                  uVar19 = (ulonglong)uVar23;
                } while (uVar23 < uVar22);
              }
            }
LAB_14038a237:
            uVar19 = (ulonglong)(uVar23 + 1);
          } while (uVar23 + 1 < uVar22);
        }
        fVar6 = DAT_1404926c0;
        fVar27 = *(float *)((longlong)param_4 + 0x24);
        if ((fVar27 <= *(float *)((longlong)param_4 + 0x1c)) ||
           (*(float *)(param_4 + 5) <= *(float *)(param_4 + 4))) {
          piVar12[2] = 0;
          piVar12[3] = 0;
          piVar12[0] = 0;
          piVar12[1] = 0;
        }
        else {
          fVar26 = (float)FUN_14041a5c0(*(float *)((longlong)param_4 + 0x1c) + DAT_1404926c0);
          *piVar12 = (int)fVar26;
          fVar26 = (float)FUN_14041a5c0((fVar27 - (float)(int)fVar26) + fVar6);
          fVar27 = *(float *)(param_4 + 5);
          piVar12[2] = (int)fVar26;
          fVar26 = (float)FUN_14041a5c0(fVar27 + fVar6);
          fVar27 = *(float *)(param_4 + 4);
          piVar12[1] = (int)fVar26;
          fVar27 = (float)FUN_14041a5c0((fVar27 - (float)(int)fVar26) + fVar6);
          cVar16 = *(char *)(param_4 + 3);
          piVar12[3] = (int)fVar27;
          if (cVar16 != '\0') {
            FUN_14040a0f0(*param_4,piVar12);
          }
        }
      }
      puVar14 = (undefined8 *)param_4[2];
      if (puVar14 != (undefined8 *)0x0) {
        lVar13 = *(longlong *)(param_6 + 8);
        *puVar14 = *(undefined8 *)(lVar13 + (ulonglong)uVar22 * 0xc);
        *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(lVar13 + 8 + (ulonglong)uVar22 * 0xc);
        lVar13 = *(longlong *)(param_6 + 8);
        *(undefined8 *)((longlong)puVar14 + 0xc) =
             *(undefined8 *)(lVar13 + (ulonglong)(iVar11 - 3) * 0xc);
        *(undefined4 *)((longlong)puVar14 + 0x14) =
             *(undefined4 *)(lVar13 + 8 + (ulonglong)(iVar11 - 3) * 0xc);
        lVar13 = *(longlong *)(param_6 + 8);
        puVar14[3] = *(undefined8 *)(lVar13 + (ulonglong)(iVar11 - 2) * 0xc);
        *(undefined4 *)(puVar14 + 4) = *(undefined4 *)(lVar13 + 8 + (ulonglong)(iVar11 - 2) * 0xc);
        lVar13 = *(longlong *)(param_6 + 8);
        *(undefined8 *)((longlong)puVar14 + 0x24) =
             *(undefined8 *)(lVar13 + (ulonglong)(iVar11 - 1) * 0xc);
        *(undefined4 *)((longlong)puVar14 + 0x2c) =
             *(undefined4 *)(lVar13 + 8 + (ulonglong)(iVar11 - 1) * 0xc);
      }
      return 1;
    }
  }
  return 0;
}

