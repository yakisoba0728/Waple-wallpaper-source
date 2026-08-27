// Function: FUN_14020cff0
// Addr: 14020cff0
// Size: 1698 bytes


void FUN_14020cff0(longlong param_1)

{
  ulonglong uVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  code *pcVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  ulonglong *puVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  ulonglong *puVar15;
  undefined1 *puVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong *puVar19;
  ulonglong *puVar20;
  uint uVar21;
  longlong lVar22;
  ulonglong uVar23;
  undefined4 uVar24;
  int local_res8;
  undefined4 uStackX_1c;
  ulonglong *local_res20;
  undefined1 auStack_118 [8];
  undefined1 auStack_110 [24];
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  
  puVar19 = (ulonglong *)0x0;
  local_res20 = (ulonglong *)0x0;
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x4b8) + 0x18);
  uVar21 = *(uint *)(lVar6 + 0x18);
  *(undefined1 *)(*(longlong *)(param_1 + 200) + 0x12ea) = 0;
  *(undefined4 *)(*(longlong *)(param_1 + 200) + 0x1330) = *(undefined4 *)(lVar6 + 0x60);
  lVar12 = *(longlong *)(param_1 + 0x4b8);
  puVar11 = puVar19;
  puVar10 = puVar19;
  puVar20 = puVar19;
  if (*(longlong *)(lVar12 + 0x3a8) - *(longlong *)(lVar12 + 0x3a0) >> 2 != 0) {
    do {
      puVar15 = (ulonglong *)0x0;
      iVar13 = (int)puVar20;
      if ((*(ulonglong *)(lVar12 + 0x398) >> ((ulonglong)puVar20 & 0x3f) & 1) != 0) {
        pcVar2 = (char *)(*(longlong *)(param_1 + 200) + 0x12ea);
        *pcVar2 = *pcVar2 + '\x01';
        uVar3 = *(undefined4 *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x4b8) + 0x3a0) + (longlong)puVar20 * 4);
        if (puVar11 == puVar19) {
          uVar18 = (longlong)puVar11 - (longlong)puVar10;
          if ((longlong)uVar18 >> 3 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            FUN_140013050();
          }
          uVar17 = (longlong)puVar19 - (longlong)puVar10 >> 3;
          if (0x1fffffffffffffff - (uVar17 >> 1) < uVar17) {
LAB_14020d68e:
                    /* WARNING: Subroutine does not return */
            FUN_140017370();
          }
          uVar1 = ((longlong)uVar18 >> 3) + 1;
          uVar9 = (uVar17 >> 1) + uVar17;
          uVar23 = uVar1;
          if (uVar1 <= uVar9) {
            uVar23 = uVar9;
          }
          if (0x1fffffffffffffff < uVar23) goto LAB_14020d68e;
          uVar9 = uVar23 * 8;
          if (uVar9 != 0) {
            if (uVar9 < 0x1000) {
              puVar15 = (ulonglong *)FUN_14028af20(uVar9);
            }
            else {
              if (uVar9 + 0x27 <= uVar9) goto LAB_14020d68e;
              uVar9 = FUN_14028af20();
              puVar19 = puVar10;
              if (uVar9 == 0) goto LAB_14020d65d;
              puVar15 = (ulonglong *)(uVar9 + 0x27 & 0xffffffffffffffe0);
              puVar15[-1] = uVar9;
            }
          }
          *(undefined4 *)((longlong)puVar15 + (uVar18 & 0xfffffffffffffff8) + 4) = uVar3;
          *(int *)((longlong)puVar15 + (uVar18 & 0xfffffffffffffff8)) = iVar13;
          FUN_1404210f0(puVar15,puVar10,uVar18);
          if (puVar10 != (ulonglong *)0x0) {
            uVar17 = uVar17 * 8;
            if (0xfff < uVar17) {
              puVar19 = (ulonglong *)((longlong)puVar10 + (-8 - (longlong)puVar10[-1]));
              if ((ulonglong *)0x1f < puVar19) goto LAB_14020d65d;
              uVar17 = uVar17 + 0x27;
              puVar10 = (ulonglong *)puVar10[-1];
            }
            thunk_FUN_14028af80(puVar10,uVar17);
          }
          puVar19 = puVar15 + uVar23;
          puVar11 = puVar15 + uVar1;
          local_res20 = puVar19;
        }
        else {
          *(int *)puVar11 = iVar13;
          *(undefined4 *)((longlong)puVar11 + 4) = uVar3;
          puVar11 = puVar11 + 1;
          puVar15 = puVar10;
        }
        puVar10 = puVar15;
        if (10 < *(byte *)(*(longlong *)(param_1 + 200) + 0x12ea)) break;
      }
      lVar12 = *(longlong *)(param_1 + 0x4b8);
      puVar20 = (ulonglong *)(ulonglong)(iVar13 + 1);
    } while ((ulonglong *)(ulonglong)(iVar13 + 1) <
             (ulonglong *)(*(longlong *)(lVar12 + 0x3a8) - *(longlong *)(lVar12 + 0x3a0) >> 2));
  }
  uVar18 = 0;
  uVar21 = uVar21 >> 0xd;
  if (puVar10 != puVar11) {
    FUN_140215600(puVar10,puVar11);
    uVar3 = DAT_140492704;
    puVar20 = puVar10;
    if ((uVar21 & 1) == 0) {
      do {
        puVar15 = puVar20 + 1;
        local_res8 = (int)uVar18;
        uStackX_1c = (undefined4)(*puVar20 >> 0x20);
        *(int *)(*(longlong *)(param_1 + 200) + 0x1334 + uVar18 * 4) =
             (int)*puVar20 * *(int *)(lVar6 + 100);
        *(undefined4 *)(*(longlong *)(param_1 + 200) + 0x1360 + uVar18 * 4) = uStackX_1c;
        uVar18 = (ulonglong)(local_res8 + 1);
        local_res20 = puVar19;
        puVar20 = puVar15;
      } while (puVar15 != puVar11);
    }
    else {
      do {
        uVar17 = *puVar20;
        uStackX_1c = (undefined4)(uVar17 >> 0x20);
        local_res8 = (int)uVar18;
        lVar22 = (uVar17 & 0xffffffff) * 0x40;
        *(int *)(*(longlong *)(param_1 + 200) + 0x1334 + uVar18 * 4) =
             (int)uVar17 * *(int *)(lVar6 + 100);
        *(undefined4 *)(*(longlong *)(param_1 + 200) + 0x1360 + uVar18 * 4) = uStackX_1c;
        lVar12 = *(longlong *)(lVar6 + 0x68);
        FUN_14005f730(&local_f8,
                      (ulonglong)*(uint *)(lVar12 + 0x34 + lVar22) * 0x40 +
                      *(longlong *)(*(longlong *)(param_1 + 0x4b8) + 0x2c8));
        lVar7 = *(longlong *)(param_1 + 200);
        *(undefined4 *)(lVar7 + 0xcb0 + uVar18 * 0x30) = local_f8;
        *(undefined4 *)(lVar7 + 0xcb4 + uVar18 * 0x30) = local_f4;
        *(undefined4 *)(lVar7 + 0xcb8 + uVar18 * 0x30) = local_f0;
        *(undefined4 *)(lVar7 + 0xcbc + uVar18 * 0x30) = local_e8;
        *(undefined4 *)(lVar7 + 0xcc0 + uVar18 * 0x30) = local_e4;
        *(undefined4 *)(lVar7 + 0xcc4 + uVar18 * 0x30) = local_e0;
        *(undefined4 *)(lVar7 + 0xcc8 + uVar18 * 0x30) = local_d8;
        *(undefined4 *)(lVar7 + 0xccc + uVar18 * 0x30) = local_d4;
        *(undefined4 *)(lVar7 + 0xcd0 + uVar18 * 0x30) = local_d0;
        *(undefined4 *)(lVar7 + 0xcd4 + uVar18 * 0x30) = local_c8;
        *(undefined4 *)(lVar7 + 0xcd8 + uVar18 * 0x30) = local_c4;
        *(undefined4 *)(lVar7 + 0xcdc + uVar18 * 0x30) = local_c0;
        uVar24 = uVar3;
        if ((*(byte *)(lVar12 + 0x30 + lVar22) & 2) == 0) {
          uVar24 = 0;
        }
        uVar4 = *(undefined4 *)(lVar12 + 0x3c + lVar22);
        uVar5 = *(undefined4 *)(lVar12 + 0x38 + lVar22);
        lVar12 = *(longlong *)(param_1 + 200);
        puVar20 = puVar20 + 1;
        *(undefined4 *)(lVar12 + 0x138c + uVar18 * 0xc) = uVar24;
        *(undefined4 *)(lVar12 + 0x1390 + uVar18 * 0xc) = uVar5;
        *(undefined4 *)(lVar12 + 0x1394 + uVar18 * 0xc) = uVar4;
        uVar18 = (ulonglong)(local_res8 + 1);
      } while (puVar20 != puVar11);
    }
    uVar18 = (ulonglong)(local_res8 + 1U);
    puVar19 = local_res20;
    if (10 < local_res8 + 1U) goto LAB_14020d629;
  }
  local_res20 = puVar19;
  uVar14 = (uint)uVar18;
  if ((uVar21 & 1) == 0) {
    if (3 < 0xb - uVar14) {
      lVar6 = *(longlong *)(param_1 + 200);
      do {
        iVar13 = (int)uVar18;
        *(undefined4 *)(lVar6 + 0x1360 + uVar18 * 4) = 0;
        *(undefined4 *)(lVar6 + 0x1360 + (ulonglong)(iVar13 + 1) * 4) = 0;
        *(undefined4 *)(lVar6 + 0x1360 + (ulonglong)(iVar13 + 2) * 4) = 0;
        uVar14 = iVar13 + 4;
        uVar18 = (ulonglong)uVar14;
        *(undefined4 *)(lVar6 + 0x1360 + (ulonglong)(iVar13 + 3) * 4) = 0;
      } while (uVar14 < 8);
    }
    if (uVar14 < 0xb) {
      FUN_1404217a0(*(longlong *)(param_1 + 200) + 0x1360 + (ulonglong)uVar14 * 4,0,
                    (ulonglong)(0xb - uVar14) << 2);
    }
  }
  else {
    do {
      lVar6 = *(longlong *)(param_1 + 200);
      uVar21 = (int)uVar18 + 1;
      *(undefined4 *)(lVar6 + 0x1360 + uVar18 * 4) = 0;
      *(undefined8 *)(lVar6 + 0xcb0 + uVar18 * 0x30) = 0x3f800000;
      *(undefined8 *)(lVar6 + 0xcb8 + uVar18 * 0x30) = 0;
      *(undefined8 *)(lVar6 + 0xcc0 + uVar18 * 0x30) = 0x3f800000;
      *(undefined8 *)(lVar6 + 0xcc8 + uVar18 * 0x30) = 0;
      *(undefined8 *)(lVar6 + 0xcd0 + uVar18 * 0x30) = 0x3f800000;
      *(undefined8 *)(lVar6 + 0xcd8 + uVar18 * 0x30) = 0;
      lVar6 = *(longlong *)(param_1 + 200);
      *(undefined4 *)(lVar6 + 0x138c + uVar18 * 0xc) = 0;
      *(undefined4 *)(lVar6 + 0x1390 + uVar18 * 0xc) = 0xbf800000;
      *(undefined4 *)(lVar6 + 0x1394 + uVar18 * 0xc) = 0;
      uVar18 = (ulonglong)uVar21;
    } while (uVar21 < 0xb);
  }
LAB_14020d629:
  if (puVar10 != (ulonglong *)0x0) {
    puVar11 = puVar10;
    puVar16 = auStack_118;
    if (0xfff < (ulonglong)(((longlong)local_res20 - (longlong)puVar10 >> 3) * 8)) {
      puVar11 = (ulonglong *)puVar10[-1];
      puVar19 = (ulonglong *)((longlong)puVar10 + (-8 - (longlong)puVar11));
      puVar16 = auStack_118;
      if ((ulonglong *)0x1f < puVar19) {
LAB_14020d65d:
        puVar11 = puVar19;
        pcVar8 = (code *)swi(0x29);
        (*pcVar8)(5);
        puVar16 = auStack_110;
      }
    }
    *(undefined8 *)(puVar16 + -8) = 0x14020d66c;
    thunk_FUN_14028af80(puVar11);
  }
  return;
}

