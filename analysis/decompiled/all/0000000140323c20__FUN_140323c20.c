// Function: FUN_140323c20
// Addr: 140323c20
// Size: 1057 bytes


int FUN_140323c20(longlong param_1)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint *puVar8;
  int *piVar9;
  undefined8 uVar10;
  byte *pbVar11;
  uint uVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  uint uVar16;
  int local_res8 [2];
  uint local_res10;
  uint local_res18;
  int local_res20;
  
  lVar3 = *(longlong *)(param_1 + 0xe0);
  uVar4 = *(undefined8 *)(param_1 + 0x98);
  piVar9 = (int *)0x0;
  lVar5 = *(longlong *)(param_1 + 0x1e8);
  puVar8 = (uint *)FUN_1402f80b0(uVar4,0x10,0,*(undefined4 *)(param_1 + 0x1b0),0,local_res8);
  *(uint **)(param_1 + 0x1d0) = puVar8;
  if (local_res8[0] == 0) {
    uVar7 = 0;
    uVar15 = 0;
    local_res10 = 0;
    local_res18 = 0;
    if (*(int *)(param_1 + 0x1b0) != 0) {
      do {
        lVar13 = uVar15 * 0xfc + *(longlong *)(param_1 + 0x1b8);
        uVar2 = *(uint *)(lVar13 + 0xf0);
        if (uVar2 != 0) {
          local_res20 = *(int *)(lVar13 + 4);
          uVar16 = uVar2 + 1;
          uVar12 = local_res10;
          if (uVar7 < uVar16) {
            uVar12 = uVar2 + 4 & 0xfffffffc;
            if (uVar7 < uVar12) {
              piVar9 = (int *)FUN_1402f7ff0(uVar4,4,uVar7,uVar12,piVar9,local_res8);
              if (local_res8[0] == 0) goto LAB_140323d4f;
            }
            else {
              local_res8[0] = 0xa0;
            }
          }
          else {
LAB_140323d4f:
            local_res10 = uVar12;
            local_res8[0] = FUN_1402f5c50(lVar5,*(int *)(lVar13 + 0xf4) + *(int *)(param_1 + 0x1c0))
            ;
            if ((local_res8[0] == 0) &&
               (local_res8[0] = FUN_1402f4fe0(lVar5,uVar16 * *(int *)(lVar13 + 0xf8)),
               local_res8[0] == 0)) {
              pbVar11 = *(byte **)(lVar5 + 0x38);
              uVar15 = 0;
              do {
                uVar7 = 0;
                for (iVar14 = *(int *)(lVar13 + 0xf8); iVar14 != 0; iVar14 = iVar14 + -1) {
                  bVar1 = *pbVar11;
                  pbVar11 = pbVar11 + 1;
                  uVar7 = uVar7 << 8 | (uint)bVar1;
                }
                piVar9[uVar15] = uVar7;
                uVar7 = (int)uVar15 + 1;
                uVar15 = (ulonglong)uVar7;
              } while (uVar7 <= uVar2);
              FUN_1402f5100(lVar5);
              uVar15 = 1;
              if (uVar2 != 0) {
                do {
                  if ((uint)piVar9[uVar15] < (uint)piVar9[(int)uVar15 - 1]) goto LAB_140323f7c;
                  uVar7 = (int)uVar15 + 1;
                  uVar15 = (ulonglong)uVar7;
                } while (uVar7 <= uVar2);
              }
              uVar7 = piVar9[uVar2];
              if ((uint)(*(int *)(lVar5 + 8) - *(int *)(param_1 + 0x1c0)) < uVar7) {
LAB_140323f7c:
                local_res8[0] = 3;
              }
              else {
                iVar14 = *piVar9;
                uVar10 = FUN_1402f7ff0(uVar4,8,0,uVar16,0,local_res8);
                *(undefined8 *)(puVar8 + 2) = uVar10;
                if (local_res8[0] == 0) {
                  iVar14 = uVar7 - iVar14;
                  uVar10 = FUN_1402f7fa0(uVar4,iVar14,local_res8);
                  **(undefined8 **)(puVar8 + 2) = uVar10;
                  if (((local_res8[0] == 0) &&
                      (local_res8[0] = FUN_1402f5c50(lVar5,*(int *)(param_1 + 0x1c0) + *piVar9),
                      local_res8[0] == 0)) &&
                     (local_res8[0] = FUN_1402f54b0(lVar5,**(undefined8 **)(puVar8 + 2),iVar14),
                     local_res8[0] == 0)) {
                    uVar7 = 1;
                    if (uVar2 != 0) {
                      do {
                        uVar12 = uVar7 - 1;
                        uVar15 = (ulonglong)uVar7;
                        uVar7 = uVar7 + 1;
                        *(ulonglong *)(*(longlong *)(puVar8 + 2) + uVar15 * 8) =
                             (ulonglong)(uint)(piVar9[uVar15] - piVar9[uVar12]) +
                             *(longlong *)(*(longlong *)(puVar8 + 2) + (ulonglong)uVar12 * 8);
                      } while (uVar7 <= uVar2);
                    }
                    if ((-1 < local_res20) && (uVar7 = 0, uVar2 != 0)) {
                      do {
                        uVar12 = uVar7 + 1;
                        (**(code **)(lVar3 + 0x20))
                                  (*(undefined8 *)(*(longlong *)(puVar8 + 2) + (ulonglong)uVar7 * 8)
                                   ,piVar9[uVar12] - piVar9[uVar7],0x10ea);
                        uVar7 = uVar12;
                      } while (uVar12 < uVar2);
                    }
                    *puVar8 = uVar2;
                    uVar7 = local_res10;
                    goto LAB_140323f49;
                  }
                }
              }
            }
          }
          if (*(longlong *)(param_1 + 0x1d0) != 0) {
            uVar15 = 0;
            if (*(int *)(param_1 + 0x1b0) != 0) {
              do {
                puVar6 = *(undefined8 **)(*(longlong *)(param_1 + 0x1d0) + 8 + uVar15 * 0x10);
                if (puVar6 != (undefined8 *)0x0) {
                  FUN_1402f7f90(uVar4,*puVar6);
                  **(undefined8 **)(*(longlong *)(param_1 + 0x1d0) + 8 + uVar15 * 0x10) = 0;
                }
                FUN_1402f7f90(uVar4,*(undefined8 *)
                                     (*(longlong *)(param_1 + 0x1d0) + 8 + uVar15 * 0x10));
                uVar7 = (int)uVar15 + 1;
                *(undefined8 *)(*(longlong *)(param_1 + 0x1d0) + 8 + uVar15 * 0x10) = 0;
                uVar15 = (ulonglong)uVar7;
              } while (uVar7 < *(uint *)(param_1 + 0x1b0));
            }
            FUN_1402f7f90(uVar4,*(undefined8 *)(param_1 + 0x1d0));
            *(undefined8 *)(param_1 + 0x1d0) = 0;
          }
          break;
        }
LAB_140323f49:
        puVar8 = puVar8 + 4;
        local_res18 = local_res18 + 1;
        uVar15 = (ulonglong)local_res18;
      } while (local_res18 < *(uint *)(param_1 + 0x1b0));
    }
  }
  FUN_1402f7f90(uVar4,piVar9);
  return local_res8[0];
}

