// Function: FUN_140307e50
// Addr: 140307e50
// Size: 1423 bytes


int FUN_140307e50(longlong param_1,int param_2,uint *param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  short sVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  ushort uVar13;
  uint uVar14;
  undefined1 *puVar15;
  byte *pbVar16;
  byte *pbVar17;
  ulonglong uVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  ulonglong uVar22;
  uint uVar23;
  char cVar24;
  uint uVar25;
  int local_res20 [2];
  longlong local_58;
  
  lVar3 = *(longlong *)(param_1 + 0xa0);
  uVar18 = 0;
  lVar4 = *(longlong *)(param_1 + 0x408);
  local_58 = 0;
  uVar5 = *(undefined8 *)(lVar3 + 0x30);
  local_res20[0] = FUN_1402f5c50(lVar3);
  if ((local_res20[0] == 0) && (sVar6 = FUN_1402f5ac0(lVar3,local_res20), local_res20[0] == 0)) {
    if (sVar6 == 1) {
      iVar10 = FUN_1402f58c0(lVar3,local_res20);
      if ((local_res20[0] == 0) && (uVar7 = FUN_1402f5ac0(lVar3,local_res20), local_res20[0] == 0))
      {
        uVar25 = (uint)uVar7;
        if (uVar25 != 0) {
          local_58 = FUN_1402f7ff0(uVar5,4,0,uVar7,0,local_res20);
          if ((local_res20[0] != 0) ||
             (local_res20[0] = FUN_1402f4fe0(lVar3,(uint)uVar7 * 4), local_res20[0] != 0))
          goto LAB_1403083c1;
          puVar15 = *(undefined1 **)(lVar3 + 0x38);
          if (uVar7 != 0) {
            do {
              uVar20 = (int)uVar18 + 1;
              *(uint *)(local_58 + uVar18 * 4) =
                   CONCAT31(CONCAT21(CONCAT11(*puVar15,puVar15[1]),puVar15[2]),puVar15[3]);
              puVar15 = puVar15 + 4;
              uVar18 = (ulonglong)uVar20;
            } while (uVar20 < uVar7);
          }
          FUN_1402f5100(lVar3);
          local_res20[0] = FUN_1402f5c50(lVar3,iVar10 + param_2);
          if (local_res20[0] != 0) goto LAB_1403083c1;
          uVar8 = FUN_1402f5ac0(lVar3,local_res20);
          if ((local_res20[0] != 0) ||
             (uVar9 = FUN_1402f5ac0(lVar3,local_res20), local_res20[0] != 0)) goto LAB_1403083c1;
          if (((uint)uVar8 == **(uint **)(lVar4 + 0x18)) &&
             (*(ushort *)(param_3 + 4) = uVar8, uVar9 < 0x8000)) {
            uVar12 = FUN_1402f80b0(uVar5,8,0,uVar9,0,local_res20);
            *(undefined8 *)(param_3 + 6) = uVar12;
            if (local_res20[0] != 0) goto LAB_1403083c1;
            uVar20 = (uint)uVar9;
            param_3[5] = uVar20;
            iVar10 = FUN_1402f4fe0(lVar3,uVar8 * uVar20 * 6);
            if (iVar10 == 0) {
              pbVar17 = *(byte **)(lVar3 + 0x38);
              uVar18 = 0;
              local_res20[0] = 0;
              if (uVar20 != 0) {
                do {
                  uVar12 = FUN_1402f80b0(uVar5,0xc,0,(uint)uVar8,0,local_res20);
                  *(undefined8 *)(uVar18 * 8 + *(longlong *)(param_3 + 6)) = uVar12;
                  if (local_res20[0] != 0) {
                    FUN_1402f5100(lVar3);
                    goto LAB_1403083c1;
                  }
                  uVar22 = 0;
                  lVar4 = *(longlong *)(uVar18 * 8 + *(longlong *)(param_3 + 6));
                  pbVar16 = pbVar17;
                  if ((short)param_3[4] != 0) {
                    do {
                      pbVar17 = pbVar16 + 6;
                      uVar21 = (int)(short)((ushort)*pbVar16 << 8) | (uint)pbVar16[1];
                      uVar20 = (int)(short)((ushort)pbVar16[4] << 8) | (uint)pbVar16[5];
                      if (((((int)uVar21 < 0) && (0 < (int)uVar20)) ||
                          (uVar14 = (int)(short)((ushort)pbVar16[2] << 8) | (uint)pbVar16[3],
                          (int)uVar14 < (int)uVar21)) || ((int)uVar20 < (int)uVar14)) {
                        uVar14 = 0;
                      }
                      uVar23 = (int)uVar22 + 1;
                      *(uint *)(lVar4 + uVar22 * 0xc) = uVar21 * 4;
                      *(uint *)(lVar4 + 4 + uVar22 * 0xc) = uVar14 * 4;
                      *(uint *)(lVar4 + 8 + uVar22 * 0xc) = uVar20 * 4;
                      pbVar16 = pbVar17;
                      uVar22 = (ulonglong)uVar23;
                    } while (uVar23 < (ushort)param_3[4]);
                  }
                  uVar20 = (int)uVar18 + 1;
                  uVar18 = (ulonglong)uVar20;
                } while (uVar20 < uVar9);
              }
              FUN_1402f5100(lVar3);
              uVar12 = FUN_1402f80b0(uVar5,0x20,0,(uint)uVar7,0,local_res20);
              *(undefined8 *)(param_3 + 2) = uVar12;
              if (local_res20[0] == 0) {
                *param_3 = (uint)uVar7;
                uVar18 = 0;
                if (uVar25 != 0) {
                  while( true ) {
                    lVar4 = *(longlong *)(param_3 + 2);
                    local_res20[0] = FUN_1402f5c50(lVar3,param_2 + *(int *)(local_58 + uVar18 * 4));
                    if (((local_res20[0] != 0) ||
                        (uVar7 = FUN_1402f5ac0(lVar3,local_res20), local_res20[0] != 0)) ||
                       ((uVar8 = FUN_1402f5ac0(lVar3,local_res20), local_res20[0] != 0 ||
                        (uVar9 = FUN_1402f5ac0(lVar3,local_res20), local_res20[0] != 0)))) break;
                    uVar13 = uVar8 & 0x7fff;
                    uVar20 = (uint)uVar9;
                    if ((uVar20 <= uVar13 && uVar13 != uVar20) ||
                       (uVar21 = (uint)uVar9, param_3[5] <= uVar20 && uVar21 != param_3[5]))
                    goto LAB_1403083b0;
                    lVar19 = uVar18 * 0x20;
                    uVar12 = FUN_1402f80b0(uVar5,4,0,uVar21,0,local_res20);
                    *(undefined8 *)(lVar19 + 8 + lVar4) = uVar12;
                    if (local_res20[0] != 0) break;
                    cVar24 = -(char)((short)uVar8 >> 0xf);
                    *(char *)(lVar19 + 0x1a + lVar4) = cVar24;
                    *(uint *)(lVar19 + 4 + lVar4) = uVar21;
                    *(ushort *)(lVar19 + 0x18 + lVar4) = uVar13;
                    local_res20[0] = FUN_1402f4fe0(lVar3,(uint)uVar9 + (uint)uVar9);
                    if (local_res20[0] != 0) goto LAB_1403083b0;
                    puVar15 = *(undefined1 **)(lVar3 + 0x38);
                    uVar22 = 0;
                    if (*(int *)(lVar19 + 4 + lVar4) != 0) {
                      do {
                        uVar2 = *puVar15;
                        puVar1 = puVar15 + 1;
                        puVar15 = puVar15 + 2;
                        *(uint *)(uVar22 * 4 + *(longlong *)(lVar19 + 8 + lVar4)) =
                             (uint)CONCAT11(uVar2,*puVar1);
                        if (param_3[5] <= *(uint *)(uVar22 * 4 + *(longlong *)(lVar19 + 8 + lVar4)))
                        {
                          FUN_1402f5100(lVar3);
                          goto LAB_1403083b0;
                        }
                        uVar20 = (int)uVar22 + 1;
                        uVar22 = (ulonglong)uVar20;
                      } while (uVar20 < *(uint *)(lVar19 + 4 + lVar4));
                    }
                    FUN_1402f5100(lVar3);
                    iVar11 = uVar13 + uVar21;
                    iVar10 = iVar11 * 2;
                    if (cVar24 == '\0') {
                      iVar10 = iVar11;
                    }
                    uVar12 = FUN_1402f7ff0(uVar5,iVar10,0,uVar7,0,local_res20);
                    *(undefined8 *)(lVar19 + 0x10 + lVar4) = uVar12;
                    if (local_res20[0] != 0) break;
                    iVar10 = FUN_1402f54b0(lVar3,uVar12);
                    if (iVar10 != 0) goto LAB_1403083b0;
                    uVar20 = (int)uVar18 + 1;
                    uVar18 = (ulonglong)uVar20;
                    *(uint *)(lVar19 + lVar4) = (uint)uVar7;
                    local_res20[0] = 0;
                    if (uVar25 <= uVar20) break;
                    local_res20[0] = 0;
                  }
                }
              }
              goto LAB_1403083c1;
            }
          }
        }
LAB_1403083b0:
        local_res20[0] = 8;
      }
    }
    else {
      local_res20[0] = 8;
    }
  }
LAB_1403083c1:
  FUN_1402f7f90(uVar5,local_58);
  return local_res20[0];
}

