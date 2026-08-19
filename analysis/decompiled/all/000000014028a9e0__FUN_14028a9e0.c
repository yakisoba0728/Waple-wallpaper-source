// Function: FUN_14028a9e0
// Addr: 14028a9e0
// Size: 327 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14028a9e0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,char *param_4)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  int iVar4;
  int iVar5;
  float *pfVar6;
  undefined1 (*pauVar7) [16];
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  int iVar12;
  float *pfVar13;
  float fVar14;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_b8;
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
  
  auVar3 = _DAT_140492de0;
  if (*(int *)(param_4 + 8) != 0) {
    local_b8 = 0;
    if (*(longlong *)(param_4 + 0x20) == 0) {
      FUN_14028b190((longlong)(*(int *)((longlong)param_1 + 0xc) * *(int *)(param_1 + 1)));
      func_0x00014028b040(0);
      return;
    }
    local_90 = *param_3;
    uStack_88 = param_3[1];
    local_a0 = *(uint *)(param_1 + 1);
    local_9c = *(int *)((longlong)param_1 + 0xc);
    local_80 = *(undefined1 (*) [16])(param_3 + 2);
    local_a8 = (byte *)0x0;
    if (*(byte **)(param_4 + 0x20) != (byte *)0x0) {
      local_a8 = *(byte **)(param_4 + 0x20);
    }
    local_94 = 0;
    local_70 = param_3[4];
    uStack_68 = param_3[5];
    local_98 = local_a0;
    if (0 < local_9c) {
      func_0x000140421870(local_a8,0,(longlong)(int)local_a0);
      return;
    }
    local_60 = *(undefined1 (*) [16])(param_4 + 0x10);
    if (*(int *)(param_4 + 8) == 2) {
      FUN_14027b830(&local_a8,param_2);
      local_d8 = *param_1;
      local_d0 = *(undefined4 *)(param_1 + 1);
      local_cc = *(undefined4 *)((longlong)param_1 + 0xc);
      local_c8 = *(undefined4 *)(param_1 + 2);
      local_c4 = *(undefined4 *)((longlong)param_1 + 0x14);
      FUN_14027bba0(&local_a8,&local_d8);
    }
    else if ((*(int *)(param_4 + 8) == 3) && (iVar12 = 0, 0 < local_9c)) {
      do {
        if (0 < (int)local_a0) {
          iVar4 = 0;
          pauVar7 = (undefined1 (*) [16])(local_a8 + (int)(local_a0 * iVar12));
          if (0x3f < local_a0) {
            uVar8 = local_a0 & 0x8000003f;
            if ((int)uVar8 < 0) {
              uVar8 = (uVar8 - 1 | 0xffffffc0) + 1;
            }
            do {
              iVar4 = iVar4 + 0x40;
              *pauVar7 = auVar3 | *pauVar7;
              pauVar7[1] = auVar3 | pauVar7[1];
              pauVar7[2] = auVar3 | pauVar7[2];
              pauVar7[3] = auVar3 | pauVar7[3];
              pauVar7 = pauVar7 + 4;
            } while (iVar4 < (int)(local_a0 - uVar8));
            if ((int)local_a0 <= iVar4) goto code_r0x00014028abbf;
          }
          do {
            (*pauVar7)[0] = (*pauVar7)[0] | 2;
            pauVar7 = (undefined1 (*) [16])(*pauVar7 + 1);
            iVar4 = iVar4 + 1;
          } while (iVar4 < (int)local_a0);
        }
code_r0x00014028abbf:
        iVar12 = iVar12 + 1;
      } while (iVar12 < local_9c);
    }
    if ((*(int *)(param_4 + 0xc) == 0) ||
       ((*(int *)(param_4 + 0xc) == 1 && (*(int *)(param_4 + 8) != 3)))) {
      local_d8 = *param_1;
      local_d0 = *(undefined4 *)(param_1 + 1);
      local_cc = *(undefined4 *)((longlong)param_1 + 0xc);
      local_c8 = *(undefined4 *)(param_1 + 2);
      local_c4 = *(undefined4 *)((longlong)param_1 + 0x14);
      func_0x00014027c430(&local_a8,&local_d8);
      if ((*(int *)(param_4 + 0xc) == 1) && (iVar12 = 0, 0 < local_9c)) {
        do {
          if (0 < (int)local_a0) {
            iVar4 = 0;
            pauVar7 = (undefined1 (*) [16])(local_a8 + (int)(local_98 * iVar12));
            if (0x3f < local_a0) {
              uVar8 = local_a0 & 0x8000003f;
              if ((int)uVar8 < 0) {
                uVar8 = (uVar8 - 1 | 0xffffffc0) + 1;
              }
              do {
                iVar4 = iVar4 + 0x40;
                *pauVar7 = auVar3 | *pauVar7;
                pauVar7[1] = auVar3 | pauVar7[1];
                pauVar7[2] = auVar3 | pauVar7[2];
                pauVar7[3] = auVar3 | pauVar7[3];
                pauVar7 = pauVar7 + 4;
              } while (iVar4 < (int)(local_a0 - uVar8));
            }
            for (; iVar4 < (int)local_a0; iVar4 = iVar4 + 1) {
              (*pauVar7)[0] = (*pauVar7)[0] | 2;
              pauVar7 = (undefined1 (*) [16])(*pauVar7 + 1);
            }
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 < local_9c);
      }
    }
    if (*(int *)(param_4 + 0xc) - 1U < 2) {
      local_d0 = *(undefined4 *)(param_1 + 1);
      local_cc = *(undefined4 *)((longlong)param_1 + 0xc);
      local_c8 = *(undefined4 *)(param_1 + 2);
      local_d8 = *param_1;
      local_c4 = *(undefined4 *)((longlong)param_1 + 0x14);
      if (*param_4 == '\0') {
        func_0x00014027c9a0(&local_a8,&local_d8);
      }
      else {
        func_0x00014027d1a0();
      }
    }
    pfVar13 = (float *)*param_1;
    iVar12 = *(int *)(param_1 + 1);
    iVar4 = *(int *)((longlong)param_1 + 0xc);
    iVar9 = *(int *)(param_1 + 2);
    if (*(int *)((longlong)param_1 + 0x14) != local_94) {
      iVar5 = (iVar4 + -1) * iVar9;
      iVar9 = -iVar9;
      pfVar13 = pfVar13 + iVar5;
    }
    if (0 < iVar4) {
      pbVar11 = local_a8;
      do {
        iVar5 = 0;
        pfVar6 = pfVar13;
        pbVar10 = pbVar11;
        if (3 < iVar12) {
          do {
            if ((*pbVar10 & 1) != 0) {
              fVar1 = pfVar6[1];
              fVar14 = *pfVar6;
              fVar2 = fVar1;
              if (fVar1 <= fVar14) {
                fVar2 = fVar14;
              }
              if (fVar14 <= fVar1) {
                fVar1 = fVar14;
              }
              fVar14 = pfVar6[2];
              if (fVar2 <= pfVar6[2]) {
                fVar14 = fVar2;
              }
              if (fVar14 <= fVar1) {
                fVar14 = fVar1;
              }
              *pfVar6 = fVar14;
              pfVar6[1] = fVar14;
              pfVar6[2] = fVar14;
            }
            if ((pbVar10[1] & 1) != 0) {
              fVar1 = pfVar6[4];
              fVar14 = pfVar6[3];
              fVar2 = fVar1;
              if (fVar1 <= fVar14) {
                fVar2 = fVar14;
              }
              if (fVar14 <= fVar1) {
                fVar1 = fVar14;
              }
              fVar14 = pfVar6[5];
              if (fVar2 <= pfVar6[5]) {
                fVar14 = fVar2;
              }
              if (fVar14 <= fVar1) {
                fVar14 = fVar1;
              }
              pfVar6[3] = fVar14;
              pfVar6[4] = fVar14;
              pfVar6[5] = fVar14;
            }
            if ((pbVar10[2] & 1) != 0) {
              fVar1 = pfVar6[7];
              fVar14 = pfVar6[6];
              fVar2 = fVar1;
              if (fVar1 <= fVar14) {
                fVar2 = fVar14;
              }
              if (fVar14 <= fVar1) {
                fVar1 = fVar14;
              }
              fVar14 = pfVar6[8];
              if (fVar2 <= pfVar6[8]) {
                fVar14 = fVar2;
              }
              if (fVar14 <= fVar1) {
                fVar14 = fVar1;
              }
              pfVar6[6] = fVar14;
              pfVar6[7] = fVar14;
              pfVar6[8] = fVar14;
            }
            if ((pbVar10[3] & 1) != 0) {
              fVar1 = pfVar6[10];
              fVar14 = pfVar6[9];
              fVar2 = fVar1;
              if (fVar1 <= fVar14) {
                fVar2 = fVar14;
              }
              if (fVar14 <= fVar1) {
                fVar1 = fVar14;
              }
              fVar14 = pfVar6[0xb];
              if (fVar2 <= pfVar6[0xb]) {
                fVar14 = fVar2;
              }
              if (fVar14 <= fVar1) {
                fVar14 = fVar1;
              }
              pfVar6[9] = fVar14;
              pfVar6[10] = fVar14;
              pfVar6[0xb] = fVar14;
            }
            pfVar6 = pfVar6 + 0xc;
            pbVar10 = pbVar10 + 4;
            iVar5 = iVar5 + 4;
          } while (iVar5 < iVar12 + -3);
        }
        for (; iVar5 < iVar12; iVar5 = iVar5 + 1) {
          if ((*pbVar10 & 1) != 0) {
            fVar1 = pfVar6[1];
            fVar14 = *pfVar6;
            fVar2 = fVar1;
            if (fVar1 <= fVar14) {
              fVar2 = fVar14;
            }
            if (fVar14 <= fVar1) {
              fVar1 = fVar14;
            }
            fVar14 = pfVar6[2];
            if (fVar2 <= pfVar6[2]) {
              fVar14 = fVar2;
            }
            if (fVar14 <= fVar1) {
              fVar14 = fVar1;
            }
            *pfVar6 = fVar14;
            pfVar6[1] = fVar14;
            pfVar6[2] = fVar14;
          }
          pfVar6 = pfVar6 + 3;
          pbVar10 = pbVar10 + 1;
        }
        pfVar13 = pfVar13 + iVar9;
        pbVar11 = pbVar11 + (int)local_98;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    func_0x00014028b040(local_b8);
  }
  return;
}

