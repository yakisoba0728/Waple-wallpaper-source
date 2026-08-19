// Function: FUN_1403aff20
// Addr: 1403aff20
// Size: 813 bytes


/* WARNING: Type propagation algorithm not settling */

void FUN_1403aff20(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  double dVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  int *piVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  undefined1 auStack_1e8 [32];
  undefined4 local_1c8;
  int *local_1c0;
  undefined4 local_1b8;
  int *local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  uint local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  int local_158 [64];
  ulonglong local_58;
  
  dVar4 = DAT_140471b48;
  local_58 = DAT_1404dc110 ^ (ulonglong)auStack_1e8;
  local_198 = *(uint *)(param_2 + 0x60);
  if (local_198 != 0) {
    uVar14 = 0;
    bVar2 = false;
    iVar6 = 0;
    do {
      iVar13 = (int)uVar14;
      uVar15 = 0x20;
      if (local_198 - iVar13 < 0x21) {
        uVar15 = local_198 - iVar13;
      }
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x90) + 0x10);
      local_1a0 = 0;
      if (lVar1 != 0) {
        local_1a0 = *(undefined8 *)(lVar1 + 0x60);
      }
      local_1a8 = 8;
      local_1b0 = local_158 + 1;
      local_1c0 = local_158;
      local_1b8 = 8;
      local_1c8 = 0x14;
      iVar5 = (**(code **)(*(longlong *)(param_1 + 0x90) + 0x80))
                        (param_1,*(undefined8 *)(param_1 + 0x98),uVar15);
      if (*(char *)(param_1 + 0x30) == '\0') {
        if (iVar5 == 0) goto LAB_1403b00ca;
LAB_1403b0074:
        if (param_3 == 1) {
          uVar14 = 0;
          if (uVar15 != 0) {
            do {
              iVar5 = local_158[uVar14 * 2 + 1];
              uVar9 = (ulonglong)(uint)((int)uVar14 + iVar13);
              lVar1 = *(longlong *)(param_2 + 0x80);
              lVar3 = uVar14 * 2;
              uVar12 = (int)uVar14 + 1;
              uVar14 = (ulonglong)uVar12;
              piVar11 = (int *)(lVar1 + 8 + uVar9 * 0x14);
              *piVar11 = *piVar11 + local_158[lVar3];
              piVar11 = (int *)(lVar1 + 0xc + uVar9 * 0x14);
              *piVar11 = *piVar11 + iVar5;
            } while (uVar12 < uVar15);
          }
        }
        else if ((param_3 == -1) && (uVar14 = 0, uVar15 != 0)) {
          do {
            iVar5 = local_158[uVar14 * 2 + 1];
            uVar9 = (ulonglong)(uint)((int)uVar14 + iVar13);
            lVar1 = *(longlong *)(param_2 + 0x80);
            lVar3 = uVar14 * 2;
            uVar12 = (int)uVar14 + 1;
            uVar14 = (ulonglong)uVar12;
            piVar11 = (int *)(lVar1 + 8 + uVar9 * 0x14);
            *piVar11 = *piVar11 - local_158[lVar3];
            piVar11 = (int *)(lVar1 + 0xc + uVar9 * 0x14);
            *piVar11 = *piVar11 - iVar5;
          } while (uVar12 < uVar15);
        }
      }
      else {
        if (iVar5 != 0) {
          iVar5 = -*(int *)(param_1 + 0x40);
          if (-1 < *(int *)(param_1 + 0x28)) {
            iVar5 = *(int *)(param_1 + 0x40);
          }
          iVar7 = -*(int *)(param_1 + 0x44);
          if (-1 < *(int *)(param_1 + 0x2c)) {
            iVar7 = *(int *)(param_1 + 0x44);
          }
          if (uVar15 != 0) {
            uVar12 = 0;
            piVar10 = local_158 + 1;
            piVar11 = local_158;
            if (*(char *)(param_1 + 0x3c) == '\0') {
              do {
                *piVar11 = *piVar11 + iVar5;
                piVar11 = piVar11 + 2;
                *piVar10 = *piVar10 + iVar7;
                piVar10 = piVar10 + 2;
                uVar12 = uVar12 + 1;
              } while (uVar12 < uVar15);
            }
          }
          goto LAB_1403b0074;
        }
LAB_1403b00ca:
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x90) + 0x10);
        local_1a0 = 0;
        if (lVar1 != 0) {
          local_1a0 = *(undefined8 *)(lVar1 + 0x58);
        }
        local_1a8 = 8;
        local_1b0 = local_158 + 1;
        local_1c0 = local_158;
        local_1b8 = 8;
        local_1c8 = 0x14;
        iVar5 = (**(code **)(*(longlong *)(param_1 + 0x90) + 0x78))
                          (param_1,*(undefined8 *)(param_1 + 0x98),uVar15,
                           *(longlong *)(param_2 + 0x70) + uVar14 * 0x14);
        if (iVar5 != 0) {
          iVar5 = -*(int *)(param_1 + 0x40);
          if (-1 < *(int *)(param_1 + 0x28)) {
            iVar5 = *(int *)(param_1 + 0x40);
          }
          iVar7 = -*(int *)(param_1 + 0x44);
          if (-1 < *(int *)(param_1 + 0x2c)) {
            iVar7 = *(int *)(param_1 + 0x44);
          }
          if (uVar15 != 0) {
            uVar12 = 0;
            piVar10 = local_158 + 1;
            piVar11 = local_158;
            if (*(char *)(param_1 + 0x3c) == '\0') {
              do {
                *piVar11 = *piVar11 + iVar5;
                piVar11 = piVar11 + 2;
                *piVar10 = *piVar10 + iVar7;
                piVar10 = piVar10 + 2;
                uVar12 = uVar12 + 1;
              } while (uVar12 < uVar15);
            }
          }
          if (!bVar2) {
            local_190 = 0;
            uStack_188 = 0;
            local_180 = 0;
            uStack_178 = 0;
            local_170 = 0;
            uStack_168 = 0;
            iVar6 = (**(code **)(*(longlong *)(param_1 + 0x90) + 0x20))
                              (param_1,*(undefined8 *)(param_1 + 0x98),&local_190);
            if (iVar6 == 0) {
              iVar6 = (int)((double)*(int *)(param_1 + 0x2c) * dVar4);
            }
            else {
              iVar6 = -*(int *)(param_1 + 0x44);
              if (-1 < *(int *)(param_1 + 0x2c)) {
                iVar6 = *(int *)(param_1 + 0x44);
              }
              iVar6 = (int)local_190 + iVar6;
            }
            bVar2 = true;
          }
          uVar14 = 0;
          if (uVar15 != 0) {
            do {
              iVar7 = (**(code **)(*(longlong *)(param_1 + 0x90) + 0x48))
                                (param_1,*(undefined8 *)(param_1 + 0x98),
                                 *(undefined4 *)
                                  (*(longlong *)(param_2 + 0x70) +
                                  (ulonglong)(uint)((int)uVar14 + iVar13) * 0x14));
              iVar5 = *(int *)(param_1 + 0x40);
              if ((iVar5 != 0) && (*(char *)(param_1 + 0x3c) == '\0')) {
                if (*(int *)(param_1 + 0x28) < 0) {
                  iVar5 = -iVar5;
                }
                iVar8 = 0;
                if (iVar7 != 0) {
                  iVar8 = iVar5;
                }
                iVar7 = iVar7 + iVar8;
              }
              local_158[uVar14 * 2 + 1] = local_158[uVar14 * 2 + 1] + iVar6;
              local_158[uVar14 * 2] = local_158[uVar14 * 2] + iVar7 / 2;
              uVar12 = (int)uVar14 + 1;
              uVar14 = (ulonglong)uVar12;
            } while (uVar12 < uVar15);
          }
          goto LAB_1403b0074;
        }
        param_3 = 0;
      }
      uVar14 = (ulonglong)(iVar13 + uVar15);
    } while (iVar13 + uVar15 < local_198);
  }
  func_0x0001402ed2f0(local_58 ^ (ulonglong)auStack_1e8);
  return;
}

