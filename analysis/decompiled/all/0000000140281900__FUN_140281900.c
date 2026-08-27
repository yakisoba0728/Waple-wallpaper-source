// Function: FUN_140281900
// Addr: 140281900
// Size: 1687 bytes


void FUN_140281900(longlong *param_1)

{
  int *piVar1;
  double dVar2;
  longlong *plVar3;
  undefined8 uVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined1 *puVar17;
  uint uVar18;
  uint uVar19;
  ulonglong unaff_R15;
  ulonglong uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  uint local_res8;
  ulonglong local_res10;
  longlong local_res18;
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [24];
  undefined8 *local_108;
  undefined8 *puStack_100;
  undefined8 *local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  int local_e4;
  undefined4 local_e0 [4];
  undefined8 local_d0 [3];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [96];
  
  puVar17 = auStack_128;
  if (DAT_1404927e8 < 0.0) {
    dVar6 = (double)FUN_14041f780(SUB84(DAT_1404927e8,0));
  }
  else {
    dVar6 = SQRT(DAT_1404927e8);
  }
  if (param_1[1] - *param_1 == 0) {
    local_res18 = 0;
    local_res10 = 0;
LAB_140281a15:
    uVar16 = 0;
    lVar9 = param_1[1];
    lVar11 = *param_1;
    local_f8 = (undefined8 *)0x0;
    local_108 = (undefined8 *)0x0;
    puStack_100 = (undefined8 *)0x0;
    puVar12 = (undefined8 *)0x0;
    if (0 < (int)(lVar9 - lVar11 >> 3) * -0x55555555) {
      local_res8 = 0;
      dVar6 = (dVar6 - DAT_140492778) * DAT_140492758;
      dVar7 = DAT_140492778 - dVar6;
      uVar20 = uVar16;
      do {
        uVar18 = (uint)uVar20;
        lVar9 = (longlong)(int)uVar18;
        if ((*(int *)(local_res10 + lVar9 * 4) == 0) &&
           (puVar13 = *(undefined8 **)(lVar11 + lVar9 * 0x18),
           puVar13 != *(undefined8 **)(lVar11 + 8 + lVar9 * 0x18))) {
          plVar3 = (longlong *)*puVar13;
          lVar10 = (**(code **)(*plVar3 + 0x20))(plVar3,local_b8,0);
          lVar11 = *param_1;
          dVar2 = *(double *)(lVar10 + 8);
          uVar21 = SUB84(dVar2,0);
          uVar22 = (undefined4)((ulonglong)dVar2 >> 0x20);
          puVar12 = *(undefined8 **)(lVar11 + lVar9 * 0x18);
          if (puVar12 != *(undefined8 **)(lVar11 + 8 + lVar9 * 0x18)) {
            do {
              if (dVar2 != (double)CONCAT44(uVar22,uVar21)) break;
              lVar10 = (**(code **)(*(longlong *)*puVar12 + 0x20))((longlong *)*puVar12,local_a8);
              lVar11 = *param_1;
              puVar12 = puVar12 + 1;
              uVar21 = (undefined4)*(undefined8 *)(lVar10 + 8);
              uVar22 = (undefined4)((ulonglong)*(undefined8 *)(lVar10 + 8) >> 0x20);
            } while (puVar12 != *(undefined8 **)(lVar11 + 8 + lVar9 * 0x18));
          }
          puVar12 = *(undefined8 **)(lVar11 + lVar9 * 0x18);
          if (puVar12 != *(undefined8 **)(lVar11 + 8 + lVar9 * 0x18)) {
            do {
              if (dVar2 != (double)CONCAT44(uVar22,uVar21)) break;
              lVar10 = (**(code **)(*(longlong *)*puVar12 + 0x20))((longlong *)*puVar12,local_98);
              lVar11 = *param_1;
              puVar12 = puVar12 + 1;
              uVar21 = (undefined4)*(undefined8 *)(lVar10 + 8);
              uVar22 = (undefined4)((ulonglong)*(undefined8 *)(lVar10 + 8) >> 0x20);
            } while (puVar12 != *(undefined8 **)(lVar11 + 8 + lVar9 * 0x18));
          }
          puVar13 = puStack_100;
          uVar20 = uVar16;
          if (0 < (int)(param_1[1] - lVar11 >> 3) * -0x55555555) {
            do {
              iVar14 = (int)uVar20;
              lVar9 = (longlong)iVar14;
              puVar12 = *(undefined8 **)(lVar11 + lVar9 * 0x18);
              if (puVar12 != *(undefined8 **)(lVar11 + 8 + lVar9 * 0x18)) {
                do {
                  iVar8 = (**(code **)(*(longlong *)*puVar12 + 0x48))
                                    ((longlong *)*puVar12,local_d0,local_e0,
                                     SUB84(dVar7 * dVar2 + (double)CONCAT44(uVar22,uVar21) * dVar6,0
                                          ));
                  uVar20 = uVar16;
                  if (0 < iVar8) {
                    do {
                      local_f0 = local_d0[uVar20];
                      local_e8 = local_e0[uVar20];
                      local_e4 = iVar14;
                      if (puStack_100 == local_f8) {
                        FUN_140282270(&local_108,puStack_100,&local_f0);
                      }
                      else {
                        *puStack_100 = local_f0;
                        *(undefined4 *)(puStack_100 + 1) = local_e8;
                        *(int *)((longlong)puStack_100 + 0xc) = iVar14;
                        puStack_100 = puStack_100 + 2;
                      }
                      uVar18 = (int)uVar20 + 1;
                      uVar20 = (ulonglong)uVar18;
                    } while ((int)uVar18 < iVar8);
                  }
                  lVar11 = *param_1;
                  puVar12 = puVar12 + 1;
                  puVar13 = puStack_100;
                } while (puVar12 != *(undefined8 **)(lVar11 + 8 + lVar9 * 0x18));
              }
              uVar20 = (ulonglong)(iVar14 + 1U);
              uVar18 = local_res8;
            } while ((int)(iVar14 + 1U) < (int)(param_1[1] - lVar11 >> 3) * -0x55555555);
          }
          puVar12 = local_108;
          if (local_108 != puVar13) {
            FUN_1402ea670(local_108,(longlong)puVar13 - (longlong)local_108 >> 4,0x10,&LAB_140281fa0
                         );
            iVar14 = 1;
            if (1 < (int)((longlong)puStack_100 - (longlong)local_108 >> 4)) {
              do {
                if ((double)local_108[(longlong)iVar14 * 2] ==
                    (double)local_108[((longlong)iVar14 + -1) * 2]) {
                  *(undefined4 *)(local_108 + ((longlong)iVar14 + -1) * 2 + 1) = 0;
                  *(undefined4 *)(local_108 + (longlong)iVar14 * 2 + 1) = 0;
                }
                iVar14 = iVar14 + 1;
              } while (iVar14 < (int)((longlong)puStack_100 - (longlong)local_108 >> 4));
            }
            uVar20 = uVar16;
            if (0 < (int)((longlong)puStack_100 - (longlong)local_108 >> 4)) {
              do {
                uVar19 = (uint)uVar20;
                if (*(int *)(local_108 + (longlong)(int)uVar19 * 2 + 1) != 0) {
                  piVar1 = (int *)(local_res10 +
                                  (longlong)
                                  *(int *)((longlong)local_108 + (longlong)(int)uVar19 * 0x10 + 0xc)
                                  * 4);
                  *piVar1 = *piVar1 + ((uint)(0 < *(int *)(local_108 + (longlong)(int)uVar19 * 2 + 1
                                                          )) ^ uVar19 & 1) * 2 + -1;
                }
                uVar20 = (ulonglong)(uVar19 + 1);
              } while ((int)(uVar19 + 1) < (int)((longlong)puStack_100 - (longlong)local_108 >> 4));
            }
            puVar12 = local_108;
            if (local_108 != puStack_100) {
              puStack_100 = local_108;
            }
          }
        }
        lVar9 = param_1[1];
        local_res8 = uVar18 + 1;
        uVar20 = (ulonglong)local_res8;
        lVar11 = *param_1;
      } while ((int)local_res8 < (int)(lVar9 - lVar11 >> 3) * -0x55555555);
    }
    if (0 < (int)(lVar9 - lVar11 >> 3) * -0x55555555) {
      do {
        lVar9 = (longlong)(int)uVar16;
        if (*(int *)(local_res10 + lVar9 * 4) < 0) {
          for (uVar18 = (int)(*(longlong *)(lVar11 + 8 + lVar9 * 0x18) -
                              *(longlong *)(lVar11 + lVar9 * 0x18) >> 3) / 2; 0 < (int)uVar18;
              uVar18 = uVar18 - 1) {
            lVar10 = *(longlong *)(lVar11 + lVar9 * 0x18);
            lVar15 = (*(longlong *)(lVar11 + 8 + lVar9 * 0x18) - lVar10 >> 3) - (ulonglong)uVar18;
            uVar4 = *(undefined8 *)(lVar10 + -8 + (ulonglong)uVar18 * 8);
            *(undefined8 *)(lVar10 + -8 + (ulonglong)uVar18 * 8) =
                 *(undefined8 *)(lVar10 + lVar15 * 8);
            *(undefined8 *)(lVar10 + lVar15 * 8) = uVar4;
          }
          puVar12 = *(undefined8 **)(lVar11 + lVar9 * 0x18);
          if (puVar12 != *(undefined8 **)(lVar11 + 8 + lVar9 * 0x18)) {
            do {
              (**(code **)(*(longlong *)*puVar12 + 0x58))();
              puVar12 = puVar12 + 1;
            } while (puVar12 != *(undefined8 **)(lVar11 + 8 + lVar9 * 0x18));
          }
        }
        lVar11 = *param_1;
        uVar18 = (int)uVar16 + 1;
        uVar16 = (ulonglong)uVar18;
        puVar12 = local_108;
      } while ((int)uVar18 < (int)(param_1[1] - lVar11 >> 3) * -0x55555555);
    }
    if (puVar12 != (undefined8 *)0x0) {
      uVar16 = (longlong)local_f8 - (longlong)puVar12 & 0xfffffffffffffff0;
      puVar13 = puVar12;
      if (0xfff < uVar16) {
        puVar13 = (undefined8 *)puVar12[-1];
        uVar20 = local_res10;
        if (0x1f < (ulonglong)((longlong)puVar12 + (-8 - (longlong)puVar13))) goto LAB_140281f50;
        uVar16 = uVar16 + 0x27;
      }
      thunk_FUN_14028af80(puVar13,uVar16);
      local_f8 = (undefined8 *)0x0;
      local_108 = (undefined8 *)0x0;
      puStack_100 = (undefined8 *)0x0;
    }
    if (local_res10 == 0) {
      return;
    }
    if ((ulonglong)(((longlong)(local_res18 - local_res10) >> 2) * 4) < 0x1000) goto LAB_140281f5a;
    uVar20 = (local_res10 - *(ulonglong *)(local_res10 - 8)) - 8;
    local_res10 = *(ulonglong *)(local_res10 - 8);
    puVar17 = auStack_128;
    if (uVar20 < 0x20) goto LAB_140281f5a;
  }
  else {
    lVar9 = param_1[1] - *param_1 >> 3;
    if (0x3fffffffffffffff < (ulonglong)(lVar9 * -0x5555555555555555)) {
                    /* WARNING: Subroutine does not return */
      FUN_140013050();
    }
    uVar16 = lVar9 * -0x5555555555555554;
    if (uVar16 == 0) {
      local_res10 = 0;
LAB_1402819f0:
      local_res18 = uVar16 + local_res10;
      FUN_1404217a0(local_res10,0,uVar16);
      goto LAB_140281a15;
    }
    if (uVar16 < 0x1000) {
      local_res10 = FUN_14028af20(uVar16);
      goto LAB_1402819f0;
    }
    if (uVar16 + 0x27 <= uVar16) {
                    /* WARNING: Subroutine does not return */
      FUN_140017370();
    }
    lVar9 = FUN_14028af20();
    uVar20 = unaff_R15;
    if (lVar9 != 0) {
      local_res10 = lVar9 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(local_res10 - 8) = lVar9;
      goto LAB_1402819f0;
    }
  }
LAB_140281f50:
  local_res10 = uVar20;
  pcVar5 = (code *)swi(0x29);
  (*pcVar5)(5);
  puVar17 = auStack_120;
LAB_140281f5a:
  *(undefined8 *)(puVar17 + -8) = 0x140281f5f;
  thunk_FUN_14028af80(local_res10);
  return;
}

