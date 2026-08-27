// Function: FUN_14032b250
// Addr: 14032b250
// Size: 729 bytes


ulonglong FUN_14032b250(longlong param_1,longlong param_2)

{
  ushort *puVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  ushort uVar5;
  ushort uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  short sVar12;
  short sVar13;
  ulonglong uVar14;
  short *psVar15;
  uint uVar16;
  undefined *puVar17;
  undefined1 *puVar18;
  ushort uVar19;
  ushort uVar20;
  int iVar21;
  ushort uVar22;
  ushort uVar23;
  uint local_res10 [6];
  
  uVar16 = 0;
  if (*(uint *)(param_2 + 0x13c) != 0) {
    do {
      if (*(int *)(*(longlong *)(param_2 + 0x140) + (ulonglong)uVar16 * 0x10) == 0x20) {
        uVar7 = *(undefined8 *)(param_2 + 0x98);
        uVar16 = *(uint *)(*(longlong *)(param_2 + 0x140) + 0xc + (ulonglong)uVar16 * 0x10);
        if ((uVar16 < *(uint *)(param_1 + 0xc)) ||
           (local_res10[0] = FUN_1402f5c90(param_1,uVar16 - *(uint *)(param_1 + 0xc)),
           local_res10[0] != 0)) {
          return 0x53;
        }
        uVar16 = FUN_1402f5970(param_1,local_res10);
        if (local_res10[0] != 0) {
          return (ulonglong)local_res10[0];
        }
        if ((uVar16 & 0xffffff00) != 0) {
          return 3;
        }
        puVar1 = (ushort *)(param_2 + 0x1b8);
        puVar17 = &DAT_14043fe68;
        uVar16 = uVar16 & 4;
        if (uVar16 == 0) {
          puVar17 = &DAT_14043fe48;
        }
        uVar14 = FUN_1402f5610(param_1,puVar17,puVar1);
        local_res10[0] = (uint)uVar14;
        if (local_res10[0] != 0) {
          return uVar14;
        }
        uVar23 = *(ushort *)(param_2 + 0x1ba);
        uVar19 = *puVar1;
        if ((uVar19 <= uVar23) && (uVar23 < 0x100)) {
          uVar5 = *(ushort *)(param_2 + 0x1be);
          uVar6 = *(ushort *)(param_2 + 0x1bc);
          if ((uVar6 <= uVar5) && (uVar5 < 0x100)) {
            uVar22 = *(ushort *)(param_2 + 0x1c0) >> 8;
            if ((((uVar22 < uVar6) || (uVar5 < uVar22)) ||
                (uVar20 = *(ushort *)(param_2 + 0x1c0) & 0xff, uVar20 < uVar19)) ||
               (uVar23 < uVar20)) {
              *(ushort *)(param_2 + 0x1c0) = uVar6 * 0x100 + uVar19;
              uVar22 = uVar6;
              uVar20 = uVar19;
            }
            iVar21 = (((uint)uVar5 - (uint)uVar6) + 1) * (((uint)uVar23 - (uint)uVar19) + 1);
            uVar14 = FUN_1402f4fe0(param_1,iVar21 * 2);
            local_res10[0] = (uint)uVar14;
            if (local_res10[0] == 0) {
              puVar18 = (undefined1 *)
                        ((longlong)
                         (int)((((((uint)*(ushort *)(param_2 + 0x1ba) - (uint)*puVar1) + 1) *
                                 ((uint)uVar22 - (uint)*(ushort *)(param_2 + 0x1bc)) - (uint)*puVar1
                                ) + (uint)uVar20) * 2) + *(longlong *)(param_1 + 0x38));
              if (uVar16 == 0) {
                uVar3 = puVar18[1];
                uVar4 = *puVar18;
              }
              else {
                uVar3 = *puVar18;
                uVar4 = puVar18[1];
              }
              if (CONCAT11(uVar3,uVar4) == -1) {
                uVar23 = 1;
              }
              else {
                uVar19 = CONCAT11(uVar3,uVar4) + 1;
                uVar23 = 1;
                if ((uint)uVar19 < *(uint *)(param_2 + 0x1a8)) {
                  uVar23 = uVar19;
                }
              }
              puVar8 = *(undefined4 **)(param_2 + 0x1b0);
              puVar2 = puVar8 + (ulonglong)uVar23 * 4;
              uVar9 = puVar2[1];
              uVar10 = puVar2[2];
              uVar11 = puVar2[3];
              *puVar8 = *puVar2;
              puVar8[1] = uVar9;
              puVar8[2] = uVar10;
              puVar8[3] = uVar11;
              psVar15 = (short *)FUN_1402f7ff0(uVar7,2,0,iVar21,0,local_res10);
              *(short **)(param_2 + 0x1c8) = psVar15;
              if (local_res10[0] == 0) {
                uVar23 = *(ushort *)(param_2 + 0x1bc);
                if (uVar23 <= *(ushort *)(param_2 + 0x1be)) {
                  do {
                    uVar19 = *puVar1;
                    if (uVar19 <= *(ushort *)(param_2 + 0x1ba)) {
                      do {
                        if (uVar16 == 0) {
                          sVar12 = FUN_1402f52d0(param_1);
                        }
                        else {
                          sVar12 = FUN_1402f52a0();
                        }
                        sVar13 = -1;
                        if (sVar12 != -1) {
                          sVar13 = sVar12 + 1;
                        }
                        *psVar15 = sVar13;
                        uVar19 = uVar19 + 1;
                        psVar15 = psVar15 + 1;
                      } while (uVar19 <= *(ushort *)(param_2 + 0x1ba));
                    }
                    uVar23 = uVar23 + 1;
                  } while (uVar23 <= *(ushort *)(param_2 + 0x1be));
                }
                FUN_1402f5100(param_1);
                return (ulonglong)local_res10[0];
              }
              return (ulonglong)local_res10[0];
            }
            return uVar14;
          }
        }
        return 8;
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 < *(uint *)(param_2 + 0x13c));
  }
  return 3;
}

