// Function: FUN_14028a910
// Addr: 14028a910
// Size: 1431 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14028a910(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,char *param_4)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  byte *pbVar7;
  float *pfVar8;
  undefined1 (*pauVar9) [16];
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  float *pfVar16;
  float fVar17;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  byte *local_b8;
  byte *local_a8;
  uint local_a0;
  int local_9c;
  uint local_98;
  int local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60 [16];
  
  if (*(int *)(param_4 + 8) != 0) {
    pbVar7 = (byte *)0x0;
    local_b8 = (byte *)0x0;
    if (*(longlong *)(param_4 + 0x20) == 0) {
      lVar13 = (longlong)(*(int *)((longlong)param_1 + 0xc) * *(int *)(param_1 + 1));
      uVar6 = thunk_FUN_14028af20(lVar13);
      thunk_FUN_14028af80(0);
      pbVar7 = (byte *)thunk_FUN_14028af20(lVar13);
      local_b8 = pbVar7;
      FUN_1404210f0(pbVar7,uVar6);
      thunk_FUN_14028af80(uVar6);
    }
    local_90 = *param_3;
    uStack_88 = param_3[1];
    uVar11 = *(uint *)(param_1 + 1);
    iVar15 = *(int *)((longlong)param_1 + 0xc);
    local_80 = *(undefined1 (*) [16])(param_3 + 2);
    if (*(byte **)(param_4 + 0x20) != (byte *)0x0) {
      pbVar7 = *(byte **)(param_4 + 0x20);
    }
    iVar14 = 0;
    local_94 = 0;
    local_70 = param_3[4];
    uStack_68 = param_3[5];
    local_a8 = pbVar7;
    local_a0 = uVar11;
    local_9c = iVar15;
    local_98 = uVar11;
    if (0 < iVar15) {
      do {
        FUN_1404217a0(pbVar7 + (int)(uVar11 * iVar14),0);
        iVar14 = iVar14 + 1;
      } while (iVar14 < iVar15);
    }
    auVar3 = _DAT_140492d10;
    local_60 = *(undefined1 (*) [16])(param_4 + 0x10);
    if (*(int *)(param_4 + 8) == 2) {
      FUN_14027b760(&local_a8,param_2);
      local_d8 = *param_1;
      local_d0 = *(undefined4 *)(param_1 + 1);
      local_cc = *(undefined4 *)((longlong)param_1 + 0xc);
      local_c8 = *(undefined4 *)(param_1 + 2);
      local_c4 = *(undefined4 *)((longlong)param_1 + 0x14);
      FUN_14027bad0(&local_a8,&local_d8);
    }
    else if ((*(int *)(param_4 + 8) == 3) && (iVar14 = 0, 0 < iVar15)) {
      do {
        if (0 < (int)uVar11) {
          iVar4 = 0;
          pauVar9 = (undefined1 (*) [16])(pbVar7 + (int)(uVar11 * iVar14));
          if (0x3f < uVar11) {
            uVar10 = uVar11 & 0x8000003f;
            if ((int)uVar10 < 0) {
              uVar10 = (uVar10 - 1 | 0xffffffc0) + 1;
            }
            do {
              iVar4 = iVar4 + 0x40;
              *pauVar9 = auVar3 | *pauVar9;
              pauVar9[1] = auVar3 | pauVar9[1];
              pauVar9[2] = auVar3 | pauVar9[2];
              pauVar9[3] = auVar3 | pauVar9[3];
              pauVar9 = pauVar9 + 4;
            } while (iVar4 < (int)(uVar11 - uVar10));
            if ((int)uVar11 <= iVar4) goto LAB_14028aaef;
          }
          do {
            (*pauVar9)[0] = (*pauVar9)[0] | 2;
            pauVar9 = (undefined1 (*) [16])(*pauVar9 + 1);
            iVar4 = iVar4 + 1;
          } while (iVar4 < (int)uVar11);
        }
LAB_14028aaef:
        iVar14 = iVar14 + 1;
      } while (iVar14 < iVar15);
    }
    if ((*(int *)(param_4 + 0xc) == 0) ||
       ((*(int *)(param_4 + 0xc) == 1 && (*(int *)(param_4 + 8) != 3)))) {
      local_d8 = *param_1;
      local_d0 = *(undefined4 *)(param_1 + 1);
      local_cc = *(undefined4 *)((longlong)param_1 + 0xc);
      local_c8 = *(undefined4 *)(param_1 + 2);
      local_c4 = *(undefined4 *)((longlong)param_1 + 0x14);
      FUN_14027c360(&local_a8,&local_d8);
      if ((*(int *)(param_4 + 0xc) == 1) && (iVar15 = 0, 0 < local_9c)) {
        do {
          if (0 < (int)local_a0) {
            iVar14 = 0;
            pauVar9 = (undefined1 (*) [16])(local_a8 + (int)(local_98 * iVar15));
            if (0x3f < local_a0) {
              uVar11 = local_a0 & 0x8000003f;
              if ((int)uVar11 < 0) {
                uVar11 = (uVar11 - 1 | 0xffffffc0) + 1;
              }
              do {
                iVar14 = iVar14 + 0x40;
                *pauVar9 = auVar3 | *pauVar9;
                pauVar9[1] = auVar3 | pauVar9[1];
                pauVar9[2] = auVar3 | pauVar9[2];
                pauVar9[3] = auVar3 | pauVar9[3];
                pauVar9 = pauVar9 + 4;
              } while (iVar14 < (int)(local_a0 - uVar11));
            }
            for (; iVar14 < (int)local_a0; iVar14 = iVar14 + 1) {
              (*pauVar9)[0] = (*pauVar9)[0] | 2;
              pauVar9 = (undefined1 (*) [16])(*pauVar9 + 1);
            }
          }
          iVar15 = iVar15 + 1;
        } while (iVar15 < local_9c);
      }
    }
    if (*(int *)(param_4 + 0xc) - 1U < 2) {
      local_d0 = *(undefined4 *)(param_1 + 1);
      local_cc = *(undefined4 *)((longlong)param_1 + 0xc);
      local_c8 = *(undefined4 *)(param_1 + 2);
      local_d8 = *param_1;
      local_c4 = *(undefined4 *)((longlong)param_1 + 0x14);
      if (*param_4 == '\0') {
        FUN_14027c8d0(&local_a8,&local_d8);
      }
      else {
        FUN_14027d0d0();
      }
    }
    pfVar16 = (float *)*param_1;
    iVar15 = *(int *)(param_1 + 1);
    iVar14 = *(int *)((longlong)param_1 + 0xc);
    iVar4 = *(int *)(param_1 + 2);
    if (*(int *)((longlong)param_1 + 0x14) != local_94) {
      iVar5 = (iVar14 + -1) * iVar4;
      iVar4 = -iVar4;
      pfVar16 = pfVar16 + iVar5;
    }
    if (0 < iVar14) {
      pbVar7 = local_a8;
      do {
        iVar5 = 0;
        pfVar8 = pfVar16;
        pbVar12 = pbVar7;
        if (3 < iVar15) {
          do {
            if ((*pbVar12 & 1) != 0) {
              fVar1 = pfVar8[1];
              fVar17 = *pfVar8;
              fVar2 = fVar1;
              if (fVar1 <= fVar17) {
                fVar2 = fVar17;
              }
              if (fVar17 <= fVar1) {
                fVar1 = fVar17;
              }
              fVar17 = pfVar8[2];
              if (fVar2 <= pfVar8[2]) {
                fVar17 = fVar2;
              }
              if (fVar17 <= fVar1) {
                fVar17 = fVar1;
              }
              *pfVar8 = fVar17;
              pfVar8[1] = fVar17;
              pfVar8[2] = fVar17;
            }
            if ((pbVar12[1] & 1) != 0) {
              fVar1 = pfVar8[4];
              fVar17 = pfVar8[3];
              fVar2 = fVar1;
              if (fVar1 <= fVar17) {
                fVar2 = fVar17;
              }
              if (fVar17 <= fVar1) {
                fVar1 = fVar17;
              }
              fVar17 = pfVar8[5];
              if (fVar2 <= pfVar8[5]) {
                fVar17 = fVar2;
              }
              if (fVar17 <= fVar1) {
                fVar17 = fVar1;
              }
              pfVar8[3] = fVar17;
              pfVar8[4] = fVar17;
              pfVar8[5] = fVar17;
            }
            if ((pbVar12[2] & 1) != 0) {
              fVar1 = pfVar8[7];
              fVar17 = pfVar8[6];
              fVar2 = fVar1;
              if (fVar1 <= fVar17) {
                fVar2 = fVar17;
              }
              if (fVar17 <= fVar1) {
                fVar1 = fVar17;
              }
              fVar17 = pfVar8[8];
              if (fVar2 <= pfVar8[8]) {
                fVar17 = fVar2;
              }
              if (fVar17 <= fVar1) {
                fVar17 = fVar1;
              }
              pfVar8[6] = fVar17;
              pfVar8[7] = fVar17;
              pfVar8[8] = fVar17;
            }
            if ((pbVar12[3] & 1) != 0) {
              fVar1 = pfVar8[10];
              fVar17 = pfVar8[9];
              fVar2 = fVar1;
              if (fVar1 <= fVar17) {
                fVar2 = fVar17;
              }
              if (fVar17 <= fVar1) {
                fVar1 = fVar17;
              }
              fVar17 = pfVar8[0xb];
              if (fVar2 <= pfVar8[0xb]) {
                fVar17 = fVar2;
              }
              if (fVar17 <= fVar1) {
                fVar17 = fVar1;
              }
              pfVar8[9] = fVar17;
              pfVar8[10] = fVar17;
              pfVar8[0xb] = fVar17;
            }
            pfVar8 = pfVar8 + 0xc;
            pbVar12 = pbVar12 + 4;
            iVar5 = iVar5 + 4;
          } while (iVar5 < iVar15 + -3);
        }
        for (; iVar5 < iVar15; iVar5 = iVar5 + 1) {
          if ((*pbVar12 & 1) != 0) {
            fVar1 = pfVar8[1];
            fVar17 = *pfVar8;
            fVar2 = fVar1;
            if (fVar1 <= fVar17) {
              fVar2 = fVar17;
            }
            if (fVar17 <= fVar1) {
              fVar1 = fVar17;
            }
            fVar17 = pfVar8[2];
            if (fVar2 <= pfVar8[2]) {
              fVar17 = fVar2;
            }
            if (fVar17 <= fVar1) {
              fVar17 = fVar1;
            }
            *pfVar8 = fVar17;
            pfVar8[1] = fVar17;
            pfVar8[2] = fVar17;
          }
          pfVar8 = pfVar8 + 3;
          pbVar12 = pbVar12 + 1;
        }
        pfVar16 = pfVar16 + iVar4;
        pbVar7 = pbVar7 + (int)local_98;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
    }
    thunk_FUN_14028af80(local_b8);
  }
  return;
}

