// Function: FUN_1403287d0
// Addr: 1403287d0
// Size: 1197 bytes


void FUN_1403287d0(longlong param_1,longlong *param_2)

{
  byte bVar1;
  byte *pbVar2;
  bool bVar3;
  uint uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  byte *pbVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  int local_res10 [2];
  uint local_res18;
  int local_res20;
  uint local_68 [2];
  longlong local_60;
  byte *local_58;
  longlong local_50;
  
  lVar15 = param_2[4];
  pbVar12 = (byte *)param_2[2];
  local_60 = 0;
  bVar3 = false;
  local_58 = pbVar12;
  local_50 = lVar15;
  FUN_1402f7f90(lVar15,*(undefined8 *)(param_1 + 0x2a8));
  *(undefined8 *)(param_1 + 0x2a8) = 0;
  *(undefined4 *)(param_1 + 0x2b0) = 0;
  (*(code *)param_2[7])(param_2);
  pbVar2 = (byte *)*param_2;
  if ((pbVar2 < pbVar12) && (bVar1 = *pbVar2, *param_2 = (longlong)(pbVar2 + 1), bVar1 == 0x5b)) {
    (*(code *)param_2[7])(param_2);
    iVar9 = 0xc;
    uVar5 = FUN_1402f7fa0(lVar15,0xc);
    *(undefined8 *)(param_1 + 0x2a8) = uVar5;
    if (local_res10[0] != 0) goto LAB_140328c17;
    pbVar12 = (byte *)*param_2;
    if (pbVar12 < local_58) {
      iVar16 = 0;
      iVar14 = 0;
      local_res18 = 0;
      local_res20 = 0;
      iVar13 = 0;
      lVar15 = 0;
      do {
        bVar1 = *pbVar12;
        if (bVar1 == 0x5d) {
          *param_2 = (longlong)(pbVar12 + 1);
          *(int *)(param_1 + 0x2b0) = iVar13;
          goto LAB_140328c20;
        }
        if (bVar1 == 0x3c) {
          if ((lVar15 != 0) && (!bVar3)) break;
          (*(code *)param_2[8])(param_2);
          if ((int)param_2[3] != 0) goto LAB_140328c27;
          uVar6 = (longlong)(~(ulonglong)pbVar12 + *param_2) / 2;
          if ((int)uVar6 == 0) break;
          local_60 = FUN_1402f7ff0(local_50,1,local_res20,uVar6 & 0xffffffff,local_60,local_res10);
          if (local_res10[0] != 0) goto LAB_140328c17;
          bVar3 = true;
          *param_2 = (longlong)pbVar12;
          (*(code *)param_2[0xb])(param_2,local_60,uVar6 & 0xffffffff,local_68,1);
          local_res18 = local_68[0];
          local_res20 = (int)uVar6;
        }
        else if (bVar1 - 0x30 < 10) {
          if ((bVar3) || (local_res18 = (*(code *)param_2[9])(param_2), (int)local_res18 < 0))
          break;
          (*(code *)param_2[8])(param_2);
          if ((int)param_2[3] != 0) {
            return;
          }
          lVar15 = *param_2;
          local_60 = lVar15 + 1;
          if ((uint)((int)local_58 - (int)lVar15) <= local_res18) break;
          *param_2 = (ulonglong)(local_res18 + 1) + lVar15;
        }
        if (local_60 == 0) break;
        if (((local_res18 & 1) != 0) && (*(char *)((ulonglong)(local_res18 - 1) + local_60) == '\0')
           ) {
          local_res18 = local_res18 - 1;
        }
        if (local_res18 == 0) break;
        uVar6 = 0;
        uVar11 = (int)local_58 - (int)*param_2;
        lVar15 = local_60;
        uVar4 = local_res18;
        if (local_res18 != 0) {
          do {
            if (iVar14 == 0) {
              if (0xb < iVar13) {
                lVar15 = *(longlong *)(param_1 + 0x2a8);
                iVar16 = (uint)*(byte *)(lVar15 + 4) * 0x10 + (uint)*(byte *)(lVar15 + 5);
                iVar10 = iVar16 * 0x10 + 0xc;
                if (iVar10 <= (int)uVar11) {
                  iVar14 = 1;
                  uVar5 = FUN_1402f7ff0(local_50,1,iVar9,iVar10,lVar15,local_res10);
                  *(undefined8 *)(param_1 + 0x2a8) = uVar5;
                  lVar15 = local_60;
                  iVar9 = iVar10;
                  uVar4 = local_res18;
                  if (local_res10[0] == 0) goto LAB_140328aed;
                  goto LAB_140328c17;
                }
                goto LAB_140328c0b;
              }
LAB_140328bb4:
              lVar8 = (longlong)iVar13;
              iVar13 = iVar13 + 1;
              *(undefined1 *)(lVar8 + *(longlong *)(param_1 + 0x2a8)) =
                   *(undefined1 *)(uVar6 + lVar15);
            }
            else {
              if (iVar14 == 1) {
LAB_140328aed:
                if (iVar13 < iVar9) goto LAB_140328bb4;
                iVar10 = iVar9;
                if (iVar16 != 0) {
                  iVar14 = 0;
                  do {
                    puVar7 = (undefined1 *)
                             ((longlong)(iVar14 << 4) + *(longlong *)(param_1 + 0x2a8) + 0x18);
                    uVar4 = CONCAT31(CONCAT21(CONCAT11(*puVar7,puVar7[1]),puVar7[2]),puVar7[3]);
                    if ((uVar11 < uVar4) || ((int)(uVar11 - uVar4) < iVar10)) goto LAB_140328c0b;
                    iVar14 = iVar14 + 1;
                    iVar10 = iVar10 + (uVar4 + 3 & 0xfffffffc);
                  } while (iVar14 < iVar16);
                }
                uVar5 = FUN_1402f7ff0(local_50,1,iVar9,iVar10 + 1,*(undefined8 *)(param_1 + 0x2a8),
                                      local_res10);
                *(undefined8 *)(param_1 + 0x2a8) = uVar5;
                if (local_res10[0] == 0) {
                  iVar14 = 2;
                  lVar15 = local_60;
                  iVar9 = iVar10 + 1;
                  uVar4 = local_res18;
                  goto LAB_140328bb0;
                }
                goto LAB_140328c17;
              }
              if (iVar14 == 2) {
LAB_140328bb0:
                if (iVar13 < iVar9) goto LAB_140328bb4;
                goto LAB_140328c0b;
              }
            }
            uVar17 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar17;
          } while (uVar17 < uVar4);
        }
        (*(code *)param_2[7])(param_2);
        pbVar12 = (byte *)*param_2;
        lVar15 = local_60;
        if (local_58 <= pbVar12) break;
      } while( true );
    }
  }
LAB_140328c0b:
  local_res10[0] = 3;
LAB_140328c17:
  *(int *)(param_2 + 3) = local_res10[0];
  lVar15 = local_60;
LAB_140328c20:
  lVar8 = local_50;
  if ((int)param_2[3] != 0) {
LAB_140328c27:
    lVar8 = local_50;
    FUN_1402f7f90(local_50,*(undefined8 *)(param_1 + 0x2a8));
    *(undefined8 *)(param_1 + 0x2a8) = 0;
    *(undefined4 *)(param_1 + 0x2b0) = 0;
  }
  if (bVar3) {
    FUN_1402f7f90(lVar8,lVar15);
  }
  return;
}

