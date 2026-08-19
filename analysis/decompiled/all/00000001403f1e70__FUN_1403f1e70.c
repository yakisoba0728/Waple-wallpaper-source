// Function: FUN_1403f1e70
// Addr: 1403f1e70
// Size: 951 bytes


void FUN_1403f1e70(char *param_1,code *param_2,char param_3,char param_4,longlong param_5)

{
  uint *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  char cVar11;
  longlong lVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  int iVar20;
  ulonglong uVar21;
  uint uVar22;
  ulonglong uVar23;
  undefined1 auStack_d8 [32];
  char local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  undefined8 local_a8;
  longlong local_a0;
  longlong local_98;
  code *local_90;
  undefined1 local_88 [64];
  ulonglong local_48;
  
  local_48 = DAT_1404dc110 ^ (ulonglong)auStack_d8;
  local_b8 = param_4;
  local_90 = param_2;
  if (*param_1 == '\0') goto LAB_1403f22a5;
  param_1[4] = -1;
  param_1[5] = -1;
  param_1[6] = -1;
  param_1[7] = -1;
  uVar22 = *(uint *)(param_1 + 0x24);
  uVar4 = *(uint *)(param_5 + 0x24);
  uVar14 = (ulonglong)uVar4;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  if (param_3 == '\0') {
    uVar19 = uVar22;
    if ((int)uVar22 < 0) {
      uVar19 = 0;
    }
    if (uVar19 == 0) {
LAB_1403f1f39:
      local_a8 = CONCAT44(uVar19,(uint)local_a8);
      goto LAB_1403f1f3d;
    }
    if ((uVar19 < 0x3fffffff) && (lVar12 = func_0x0001402cb2b0(), lVar12 != 0)) {
      local_a8 = CONCAT44(local_a8._4_4_,uVar19);
      local_b0 = uVar19;
      local_a0 = lVar12;
      if ((uVar19 != 0) && (uVar19 * 4 != 0)) {
        func_0x000140421870(lVar12,0,uVar19 * 4);
        return;
      }
      goto LAB_1403f1f39;
    }
    *param_1 = '\0';
    lVar12 = 0;
    uVar22 = 0xffffffff;
  }
  else {
LAB_1403f1f3d:
    uVar21 = 0;
    uVar16 = 0;
    uVar15 = 0;
    uVar23 = 0;
    if (uVar22 != 0) {
      do {
        if (uVar4 <= (uint)uVar15) break;
        uVar19 = *(uint *)(*(longlong *)(param_5 + 0x18) + uVar15 * 8);
        puVar1 = (uint *)(*(longlong *)(param_1 + 0x18) + uVar16 * 8);
        uVar5 = *puVar1;
        uVar17 = (uint)uVar16;
        if (uVar5 == uVar19) {
          if (param_3 == '\0') {
            if ((uint)uVar23 < uVar17) {
              *(undefined8 *)(*(longlong *)(param_1 + 0x18) + uVar23 * 8) = *(undefined8 *)puVar1;
            }
            uVar23 = (ulonglong)((uint)uVar23 + 1);
          }
          uVar16 = (ulonglong)(uVar17 + 1);
LAB_1403f1fa2:
          uVar21 = (ulonglong)((int)uVar21 + 1);
LAB_1403f1fa4:
          uVar15 = (ulonglong)((uint)uVar15 + 1);
        }
        else {
          if (uVar19 <= uVar5) {
            if (param_4 != '\0') goto LAB_1403f1fa2;
            goto LAB_1403f1fa4;
          }
          if (param_3 != '\0') {
            uVar21 = (ulonglong)((int)uVar21 + 1);
          }
          uVar16 = (ulonglong)(uVar17 + 1);
        }
      } while ((uint)uVar16 < uVar22);
    }
    if (param_3 != '\0') {
      uVar21 = (ulonglong)((int)uVar21 + (uVar22 - (int)uVar16));
    }
    if (param_4 != '\0') {
      uVar21 = (ulonglong)((int)uVar21 + (uVar4 - (int)uVar15));
    }
    uVar16 = (ulonglong)uVar22;
    if (param_3 == '\0') {
      FUN_1403b4990(param_1,&local_a8,uVar23);
      local_b0 = (uint)local_a8;
      uVar16 = uVar23;
    }
    cVar11 = FUN_1403f8810(param_1,uVar21,1,0);
    lVar12 = local_a0;
    uVar22 = local_b0;
    if (cVar11 != '\0') {
      uVar15 = uVar16;
      uVar18 = uVar21;
      uVar23 = uVar14;
      uVar22 = (uint)uVar16;
      local_ac = (uint)uVar21;
      if ((uint)uVar16 != 0) {
        do {
          local_b4 = uVar22;
          uVar23 = uVar14;
          if ((int)uVar14 == 0) break;
          uVar23 = (ulonglong)((int)uVar14 - 1);
          lVar12 = uVar23 * 8;
          uVar22 = *(uint *)(lVar12 + *(longlong *)(param_5 + 0x18));
          uVar18 = (ulonglong)((int)uVar16 - 1);
          local_98 = uVar18 * 8;
          lVar6 = *(longlong *)(param_1 + 0x18);
          iVar20 = (int)uVar21;
          if (*(uint *)(local_98 + lVar6) == uVar22) {
            uVar21 = (ulonglong)(iVar20 - 1);
            lVar3 = uVar21 * 8;
            *(undefined8 *)(lVar3 + lVar6) = *(undefined8 *)(local_98 + lVar6);
            lVar6 = *(longlong *)(param_1 + 0x28) +
                    (ulonglong)*(uint *)(lVar3 + 4 + *(longlong *)(param_1 + 0x18)) * 0x48;
            puVar13 = (undefined8 *)
                      (*local_90)(local_88,*(longlong *)(param_1 + 0x28) +
                                           (ulonglong)
                                           *(uint *)(local_98 + 4 + *(longlong *)(param_1 + 0x18)) *
                                           0x48 + 8,
                                  *(longlong *)(param_5 + 0x28) +
                                  (ulonglong)*(uint *)(*(longlong *)(param_5 + 0x18) + 4 + lVar12) *
                                  0x48 + 8);
            uVar10 = puVar13[1];
            *(undefined8 *)(lVar6 + 8) = *puVar13;
            *(undefined8 *)(lVar6 + 0x10) = uVar10;
            uVar10 = puVar13[3];
            *(undefined8 *)(lVar6 + 0x18) = puVar13[2];
            *(undefined8 *)(lVar6 + 0x20) = uVar10;
            uVar7 = *(undefined4 *)((longlong)puVar13 + 0x24);
            uVar8 = *(undefined4 *)(puVar13 + 5);
            uVar9 = *(undefined4 *)((longlong)puVar13 + 0x2c);
            *(undefined4 *)(lVar6 + 0x28) = *(undefined4 *)(puVar13 + 4);
            *(undefined4 *)(lVar6 + 0x2c) = uVar7;
            *(undefined4 *)(lVar6 + 0x30) = uVar8;
            *(undefined4 *)(lVar6 + 0x34) = uVar9;
            uVar10 = puVar13[7];
            *(undefined8 *)(lVar6 + 0x38) = puVar13[6];
            *(undefined8 *)(lVar6 + 0x40) = uVar10;
            *(undefined4 *)
             (*(longlong *)(param_1 + 0x28) +
             (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x18) + 4 + lVar3) * 0x48) = 0xffffffff;
            uVar16 = uVar18;
            param_4 = local_b8;
LAB_1403f2191:
            uVar15 = (ulonglong)local_b4;
          }
          else if (uVar22 < *(uint *)(local_98 + lVar6)) {
            uVar16 = uVar18;
            uVar23 = uVar14;
            if (param_3 != '\0') {
              uVar21 = (ulonglong)(iVar20 - 1);
              *(undefined8 *)(lVar6 + uVar21 * 8) = *(undefined8 *)(local_98 + lVar6);
            }
          }
          else if (param_4 != '\0') {
            uVar21 = (ulonglong)(iVar20 - 1);
            lVar3 = uVar21 * 8;
            *(uint *)(lVar3 + lVar6) = uVar22;
            *(int *)(*(longlong *)(param_1 + 0x18) + 4 + lVar3) = (int)uVar15;
            local_b4 = (int)uVar15 + 1;
            uVar14 = (ulonglong)*(uint *)(*(longlong *)(param_5 + 0x18) + 4 + lVar12);
            lVar12 = *(longlong *)(param_5 + 0x28);
            uVar15 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x18) + 4 + lVar3);
            lVar6 = *(longlong *)(param_1 + 0x28);
            puVar13 = (undefined8 *)(lVar12 + uVar14 * 0x48);
            uVar10 = puVar13[1];
            puVar2 = (undefined8 *)(lVar6 + uVar15 * 0x48);
            *puVar2 = *puVar13;
            puVar2[1] = uVar10;
            puVar13 = (undefined8 *)(lVar12 + 0x10 + uVar14 * 0x48);
            uVar10 = puVar13[1];
            puVar2 = (undefined8 *)(lVar6 + 0x10 + uVar15 * 0x48);
            *puVar2 = *puVar13;
            puVar2[1] = uVar10;
            puVar13 = (undefined8 *)(lVar12 + 0x20 + uVar14 * 0x48);
            uVar10 = puVar13[1];
            puVar2 = (undefined8 *)(lVar6 + 0x20 + uVar15 * 0x48);
            *puVar2 = *puVar13;
            puVar2[1] = uVar10;
            puVar13 = (undefined8 *)(lVar12 + 0x30 + uVar14 * 0x48);
            uVar10 = puVar13[1];
            puVar2 = (undefined8 *)(lVar6 + 0x30 + uVar15 * 0x48);
            *puVar2 = *puVar13;
            puVar2[1] = uVar10;
            *(undefined8 *)(lVar6 + 0x40 + uVar15 * 0x48) =
                 *(undefined8 *)(lVar12 + 0x40 + uVar14 * 0x48);
            goto LAB_1403f2191;
          }
          uVar14 = uVar23;
          uVar22 = local_b4;
        } while ((int)uVar16 != 0);
        uVar18 = (ulonglong)local_ac;
      }
      if (param_3 != '\0') {
        uVar22 = (uint)uVar16;
        while (uVar22 != 0) {
          uVar22 = (int)uVar16 - 1;
          uVar16 = (ulonglong)uVar22;
          uVar21 = (ulonglong)((int)uVar21 - 1);
          *(undefined8 *)(*(longlong *)(param_1 + 0x18) + uVar21 * 8) =
               *(undefined8 *)(*(longlong *)(param_1 + 0x18) + uVar16 * 8);
        }
      }
      if (param_4 != '\0') {
        uVar22 = (uint)uVar23;
        while (uVar22 != 0) {
          uVar22 = (int)uVar23 - 1;
          uVar23 = (ulonglong)uVar22;
          uVar21 = (ulonglong)((int)uVar21 - 1);
          lVar12 = uVar21 * 8;
          *(undefined4 *)(lVar12 + *(longlong *)(param_1 + 0x18)) =
               *(undefined4 *)(uVar23 * 8 + *(longlong *)(param_5 + 0x18));
          *(int *)(*(longlong *)(param_1 + 0x18) + 4 + lVar12) = (int)uVar15;
          local_b4 = (int)uVar15 + 1;
          uVar14 = (ulonglong)*(uint *)(*(longlong *)(param_5 + 0x18) + 4 + uVar23 * 8);
          lVar6 = *(longlong *)(param_5 + 0x28);
          uVar16 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x18) + 4 + lVar12);
          lVar12 = *(longlong *)(param_1 + 0x28);
          puVar13 = (undefined8 *)(lVar6 + uVar14 * 0x48);
          uVar10 = puVar13[1];
          puVar2 = (undefined8 *)(lVar12 + uVar16 * 0x48);
          *puVar2 = *puVar13;
          puVar2[1] = uVar10;
          puVar13 = (undefined8 *)(lVar6 + 0x10 + uVar14 * 0x48);
          uVar10 = puVar13[1];
          puVar2 = (undefined8 *)(lVar12 + 0x10 + uVar16 * 0x48);
          *puVar2 = *puVar13;
          puVar2[1] = uVar10;
          puVar13 = (undefined8 *)(lVar6 + 0x20 + uVar14 * 0x48);
          uVar10 = puVar13[1];
          puVar2 = (undefined8 *)(lVar12 + 0x20 + uVar16 * 0x48);
          *puVar2 = *puVar13;
          puVar2[1] = uVar10;
          puVar13 = (undefined8 *)(lVar6 + 0x30 + uVar14 * 0x48);
          uVar10 = puVar13[1];
          puVar2 = (undefined8 *)(lVar12 + 0x30 + uVar16 * 0x48);
          *puVar2 = *puVar13;
          puVar2[1] = uVar10;
          *(undefined8 *)(lVar12 + 0x40 + uVar16 * 0x48) =
               *(undefined8 *)(lVar6 + 0x40 + uVar14 * 0x48);
          uVar15 = (ulonglong)local_b4;
        }
      }
      FUN_1403f8810(param_1,uVar18,1,0);
      lVar12 = local_a0;
      uVar22 = local_b0;
    }
  }
  if (1 < uVar22 + 1) {
    func_0x0001402bf8e0(lVar12);
    return;
  }
LAB_1403f22a5:
  func_0x0001402ed2f0(local_48 ^ (ulonglong)auStack_d8);
  return;
}

