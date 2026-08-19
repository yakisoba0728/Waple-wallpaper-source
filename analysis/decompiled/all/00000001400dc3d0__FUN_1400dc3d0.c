// Function: FUN_1400dc3d0
// Addr: 1400dc3d0
// Size: 15 bytes


/* WARNING: Removing unreachable block (ram,0x0001400dca39) */
/* WARNING: Removing unreachable block (ram,0x0001400dca6d) */
/* WARNING: Removing unreachable block (ram,0x0001400dca52) */
/* WARNING: Removing unreachable block (ram,0x0001400dca67) */
/* WARNING: Removing unreachable block (ram,0x0001400dca70) */

undefined8
FUN_1400dc3d0(undefined8 *param_1,undefined8 *param_2,longlong *param_3,undefined4 param_4)

{
  char *pcVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined1 **ppuVar4;
  undefined8 uVar5;
  char cVar6;
  undefined2 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  undefined8 unaff_R12;
  undefined8 uVar20;
  undefined1 *puStackX_8;
  ulonglong uStackX_10;
  char acStackX_18 [8];
  undefined8 local_res20;
  longlong lStack_10d8;
  longlong lStack_10d0;
  undefined8 uStack_10c8;
  longlong lStack_10c0;
  longlong lStack_10b8;
  undefined8 uStack_10b0;
  undefined1 *puStack_10a8;
  undefined1 *puStack_10a0;
  undefined1 *puStack_1098;
  undefined8 uStack_1090;
  undefined8 uStack_1088;
  ulonglong uStack_1080;
  undefined8 uStack_1078;
  longlong *plStack_1070;
  undefined8 *puStack_1068;
  undefined8 *puStack_1060;
  uint uStack_1058;
  uint uStack_1054;
  uint uStack_1050;
  undefined4 uStack_104c;
  undefined2 uStack_1048;
  char cStack_1046;
  byte bStack_1045;
  undefined1 uStack_1044;
  undefined1 auStack_1038 [4088];
  undefined *puStack_40;
  
  puStack_40 = &UNK_1400dc3f1;
  local_res20._0_4_ = param_4;
  lVar8 = func_0x0001402ed390();
  lVar8 = -lVar8;
  puVar14 = &stack0xffffffffffffffc8 + lVar8;
  plVar16 = param_1 + 2;
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  puVar15 = (undefined8 *)(*plVar16 + (longlong)param_1);
  if (param_2 != (undefined8 *)0x0) {
    *(undefined1 *)(param_2 + 1) = 1;
    *(undefined **)((longlong)&puStack_40 + lVar8) = &UNK_1400dc42c;
    func_0x0001400e12a0(param_2);
  }
  lVar11 = *param_3;
  if (lVar11 == 0) {
    return 0;
  }
  uStack_1050 = *(uint *)(lVar11 + 0x28);
  param_3 = param_3 + 1;
  uVar18 = *(uint *)(lVar11 + 0x20);
  *(undefined8 *)(&stack0x00000040 + lVar8) = 0;
  *(undefined8 *)(&stack0x00000048 + lVar8) = 0;
  pcVar1 = acStackX_18 + lVar8;
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  pcVar1[4] = '\0';
  pcVar1[5] = '\0';
  pcVar1[6] = '\0';
  pcVar1[7] = '\0';
  *(undefined8 *)(&stack0x00000030 + lVar8) = 0;
  *(undefined8 *)((longlong)&local_res20 + lVar8) = 0;
  *(undefined8 *)(&stack0x00000028 + lVar8) = 0;
  acStackX_18[lVar8] = '\0';
  (&stack0x00000030)[lVar8] = 0;
  uStack_10c8 = 0;
  uStack_10b0 = 0;
  uStack_1090 = 0;
  *(undefined8 *)((longlong)&puStackX_8 + lVar8) = 0;
  pcVar1 = acStackX_18 + lVar8 + -8;
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  pcVar1[4] = '\0';
  pcVar1[5] = '\0';
  pcVar1[6] = '\0';
  pcVar1[7] = '\0';
  lStack_10d8 = 0;
  lStack_10d0 = 0;
  puStack_10a8 = (undefined1 *)0x0;
  puStack_10a0 = (undefined1 *)0x0;
  cStack_1046 = 0;
  *(undefined8 *)(&stack0x00001148 + lVar8) = unaff_R12;
  plStack_1070 = param_3;
  puStack_1068 = param_1;
  puStack_1060 = puVar15;
  uStack_1058 = uVar18;
  *(undefined8 *)(&stack0x00000000 + lVar8) = 0;
  *(undefined8 *)((longlong)&local_res20 + lVar8) = 0;
  *(undefined8 *)(&stack0x00000028 + lVar8) = 0;
  *(undefined8 *)(&stack0x00000038 + lVar8) = 0;
  *(undefined8 *)(&stack0x00000040 + lVar8) = 0;
  lStack_10c0 = 0;
  lStack_10b8 = 0;
  puStack_1098 = (undefined1 *)0x0;
  uStack_1054 = 0;
  uStack_104c = 0;
  uStack_1048 = 0;
  bStack_1045 = *(byte *)(lVar11 + 0xc) >> 3 & 1;
  if ((*(uint *)(lVar11 + 0xc) & 0x100) != 0) {
    local_res20._0_4_ = CONCAT31(local_res20._1_3_,0x57);
    *(undefined **)((longlong)&puStack_40 + lVar8) = &UNK_1400dc529;
    uVar7 = FUN_1400e5340(param_3,&local_res20,(longlong)&local_res20 + 1,uVar18 >> 8 & 0xffffff01);
    uStack_104c = CONCAT22(uStack_104c._2_2_,uVar7);
    param_3 = plStack_1070;
    uVar18 = uStack_1058;
  }
  if ((*(uint *)(lVar11 + 0xc) & 0x200) != 0) {
    local_res20._0_4_ = CONCAT31(local_res20._1_3_,0x53);
    *(undefined **)((longlong)&puStack_40 + lVar8) = &UNK_1400dc560;
    uVar7 = FUN_1400e5340(param_3,&local_res20,(longlong)&local_res20 + 1,uVar18 >> 8 & 0xffffff01);
    uStack_104c = CONCAT22(uVar7,(undefined2)uStack_104c);
    param_3 = plStack_1070;
    uVar18 = uStack_1058;
  }
  if ((*(uint *)(lVar11 + 0xc) & 0x400) != 0) {
    local_res20._0_4_ = CONCAT31(local_res20._1_3_,0x44);
    *(undefined **)((longlong)&puStack_40 + lVar8) = &UNK_1400dc597;
    uStack_1048 = FUN_1400e5340(param_3,&local_res20,(longlong)&local_res20 + 1,
                                uVar18 >> 8 & 0xffffff01);
  }
  lVar17 = (longlong)puVar15 - (longlong)param_1;
  uVar12 = lVar17 / 3 + 0x4c4b4;
  uStack_1080 = 0x7ffffffffffffff;
  if (uVar12 < 0x7ffffffffffffff) {
    uStack_1080 = uVar12;
  }
  if (lVar17 < 0x7ffffffffffb6d) {
    lVar17 = lVar17 * 0x100 + 300000;
  }
  else {
    lVar17 = 0x7fffffffffffffff;
  }
  *(longlong *)(&stack0xfffffffffffffff8 + lVar8) = lVar17;
  uStackX_10 = 0x1000;
  uStack_1078 = *(undefined8 *)(*(longlong *)(lVar11 + 0x10) + 0x10);
  puStackX_8 = auStack_1038;
  uVar2 = *(undefined4 *)(lVar11 + 0x24);
  *(undefined **)((longlong)&puStack_40 + lVar8) = &UNK_1400dc63c;
  func_0x0001400e43b0(&lStack_10c0,&puStackX_8,&uStackX_10,uVar2);
  if (1 < uStack_1050) {
    *(undefined **)((longlong)&puStack_40 + lVar8) = &UNK_1400dc664;
    func_0x0001400e4270((longlong)&puStackX_8 + lVar8,&puStackX_8,&uStackX_10,uStack_1050 - 1);
    if (bStack_1045 != 0) {
      *(undefined **)((longlong)&puStack_40 + lVar8) = &UNK_1400dc689;
      func_0x0001400e4270(&stack0x00000040 + lVar8,&puStackX_8,&uStackX_10,uStack_1050 - 1);
    }
    *(undefined **)((longlong)&puStack_40 + lVar8) = &UNK_1400dc6a8;
    func_0x0001400e4520((longlong)&local_res20 + lVar8,&puStackX_8,&uStackX_10,uStack_1050 - 1);
    if (bStack_1045 != 0) {
      *(undefined **)((longlong)&puStack_40 + lVar8) = &UNK_1400dc6cc;
      func_0x0001400e4520(&lStack_10d8,&puStackX_8,&uStackX_10,uStack_1050 - 1);
    }
  }
  uVar20 = uStack_1078;
  uVar9 = (ulonglong)((uint)puStackX_8 & 7);
  uVar12 = 8 - uVar9;
  if (uVar9 == 0) {
    uVar12 = 0;
  }
  if (((uVar12 <= uStackX_10) && (0x1f < uStackX_10 - uVar12)) &&
     (puVar13 = puStackX_8 + uVar12, puVar13 != (undefined1 *)0x0)) {
    puStack_1098 = puVar13 + (uStackX_10 - uVar12 & 0xffffffffffffffe0);
    puStack_10a8 = puVar13;
    puStack_10a0 = puVar13;
  }
  if ((uStack_1058 & 0x3e) != 0) {
    uStack_1058 = uStack_1058 & 0xffffefff;
  }
  *(undefined8 **)(&stack0x00000000 + lVar8) = puStack_1068;
  uStack_1044 = 0;
  uStack_1088 = 0;
  cStack_1046 = '\0';
  *(undefined **)((longlong)&puStack_40 + lVar8) = &UNK_1400dc746;
  cVar6 = FUN_1400e1cd0(&stack0xfffffffffffffff8 + lVar8,uVar20);
  if ((cVar6 == '\0') && (cStack_1046 == '\0')) {
    uVar20 = 0;
    if (param_1 != puVar15) {
      *(undefined4 *)(&stack0xfffffffffffffff0 + lVar8) = 0;
      uStack_1054 = uStack_1054 & 0xffffdfff | 0x100;
      *(undefined8 *)(&stack0xffffffffffffffe8 + lVar8) = 0;
      *(undefined **)((longlong)&puStack_40 + lVar8) = &UNK_1400dc794;
      puVar10 = (undefined8 *)
                func_0x0001400dff20(&stack0xfffffffffffffff8 + lVar8,&puStackX_8,
                                    (longlong)param_1 + 1,puVar15);
      uVar5 = uStack_1078;
      for (puVar10 = (undefined8 *)*puVar10; uStack_1078 = uVar5, puVar10 != puVar15;
          puVar10 = (undefined8 *)*puVar10) {
        puStack_1068 = puVar10;
        *(undefined8 **)(&stack0x00000000 + lVar8) = puVar10;
        uStack_1044 = 0;
        uStack_1088 = 0;
        cStack_1046 = '\0';
        *(undefined **)((longlong)&puStack_40 + lVar8) = &UNK_1400dc7c3;
        cVar6 = FUN_1400e1cd0(&stack0xfffffffffffffff8 + lVar8,uVar5);
        if ((cVar6 != '\0') || (cStack_1046 != '\0')) goto code_r0x0001400dc828;
        *(undefined4 *)(&stack0xfffffffffffffff0 + lVar8) = 0;
        *(undefined8 *)(&stack0xffffffffffffffe8 + lVar8) = 0;
        *(undefined **)((longlong)&puStack_40 + lVar8) = &UNK_1400dc7ef;
        puVar10 = (undefined8 *)
                  func_0x0001400dff20(&stack0xfffffffffffffff8 + lVar8,&puStackX_8,
                                      (longlong)puVar10 + 1,puVar15);
        uVar5 = uStack_1078;
      }
      puStack_1068 = puVar15;
      *(undefined8 **)(&stack0x00000000 + lVar8) = puVar15;
      uStack_1044 = 0;
      uStack_1088 = 0;
      cStack_1046 = '\0';
      *(undefined **)((longlong)&puStack_40 + lVar8) = &UNK_1400dc81a;
      cVar6 = FUN_1400e1cd0(&stack0xfffffffffffffff8 + lVar8,uVar5);
      if ((cVar6 != '\0') || (cStack_1046 != '\0')) goto code_r0x0001400dc828;
    }
  }
  else {
code_r0x0001400dc828:
    uVar20 = 1;
    if (param_2 != (undefined8 *)0x0) {
      *(undefined **)((longlong)&puStack_40 + lVar8) = &UNK_1400dc83f;
      func_0x0001400e12a0(param_2,uStack_1050);
      if (bStack_1045 == 0) {
        plVar16 = (longlong *)((longlong)&local_res20 + lVar8);
        ppuVar4 = &puStackX_8;
        puVar13 = (undefined1 *)register0x00000020;
      }
      else {
        plVar16 = &lStack_10d8;
        ppuVar4 = (undefined1 **)&stack0x00000040;
        puVar13 = &stack0x00000038;
      }
      puVar15 = (undefined8 *)param_2[2];
      uVar18 = 1;
      *(undefined1 *)(puVar15 + 2) = 1;
      *puVar15 = puStack_1068;
      puVar15[1] = *(undefined8 *)(puVar13 + lVar8);
      if (1 < uStack_1050) {
        do {
          uVar19 = uVar18 - 1;
          uVar12 = (ulonglong)uVar18;
          if ((*(ulonglong *)(*plVar16 + (ulonglong)(uVar19 >> 6) * 8) >> ((byte)uVar19 & 0x3f) & 1)
              == 0) {
            *(undefined1 *)(param_2[2] + 0x10 + uVar12 * 0x18) = 0;
            *(undefined8 **)(param_2[2] + uVar12 * 0x18) = puStack_1060;
            puVar15 = puStack_1060;
          }
          else {
            *(undefined1 *)(param_2[2] + 0x10 + uVar12 * 0x18) = 1;
            *(undefined8 *)(param_2[2] + uVar12 * 0x18) =
                 *(undefined8 *)
                  (*(longlong *)((longlong)ppuVar4 + lVar8) + (ulonglong)uVar19 * 0x10);
            puVar15 = *(undefined8 **)
                       (*(longlong *)((longlong)ppuVar4 + lVar8) + 8 + (ulonglong)uVar19 * 0x10);
          }
          uVar18 = uVar18 + 1;
          *(undefined8 **)(param_2[2] + 8 + uVar12 * 0x18) = puVar15;
        } while (uVar18 < uStack_1050);
      }
      puVar15 = *(undefined8 **)param_2[2];
      param_2[6] = puVar15;
      puVar10 = (undefined8 *)((undefined8 *)param_2[2])[1];
      param_2[8] = puVar10;
      param_2[9] = puStack_1060;
      param_2[0xb] = puStack_1060;
      param_2[0xc] = puStack_1060;
      *(bool *)(param_2 + 10) = puVar10 != puStack_1060;
      *param_2 = param_1;
      *(bool *)(param_2 + 7) = param_1 != puVar15;
      param_2[5] = param_1;
    }
  }
  if ((char)uStack_1090 == '\0') {
code_r0x0001400dc989:
    if ((char)uStack_10b0 != '\0') {
      uVar12 = (lStack_10b8 - lStack_10c0 >> 3) * 8;
      lVar11 = lStack_10c0;
      if (0xfff < uVar12) {
        if (0x1f < (lStack_10c0 - *(longlong *)(lStack_10c0 + -8)) - 8U) goto code_r0x0001400dcaf8;
        uVar12 = uVar12 + 0x27;
        lVar11 = *(longlong *)(lStack_10c0 + -8);
      }
      *(undefined **)((longlong)&puStack_40 + lVar8) = &UNK_1400dc9e7;
      func_0x00014028b040(lVar11,uVar12);
    }
    if ((char)uStack_10c8 != '\0') {
      uVar12 = (lStack_10d0 - lStack_10d8 >> 3) * 8;
      lVar11 = lStack_10d8;
      if (0xfff < uVar12) {
        if (0x1f < (lStack_10d8 - *(longlong *)(lStack_10d8 + -8)) - 8U) goto code_r0x0001400dcaf8;
        uVar12 = uVar12 + 0x27;
        lVar11 = *(longlong *)(lStack_10d8 + -8);
      }
      *(undefined **)((longlong)&puStack_40 + lVar8) = &UNK_1400dca33;
      func_0x00014028b040(lVar11,uVar12);
    }
    if ((&stack0x00000030)[lVar8] != '\0') {
      lVar11 = *(longlong *)((longlong)&local_res20 + lVar8);
      uVar12 = (*(longlong *)(&stack0x00000028 + lVar8) - lVar11 >> 3) * 8;
      if (0xfff < uVar12) {
        if (0x1f < (lVar11 - *(longlong *)(lVar11 + -8)) - 8U) goto code_r0x0001400dcaf8;
        uVar12 = uVar12 + 0x27;
        lVar11 = *(longlong *)(lVar11 + -8);
      }
      *(undefined **)((longlong)&puStack_40 + lVar8) = &UNK_1400dcac0;
      func_0x00014028b040(lVar11,uVar12);
    }
    if (acStackX_18[lVar8] == '\0') {
      return uVar20;
    }
    lVar11 = *(longlong *)((longlong)&puStackX_8 + lVar8);
    if (((*(longlong *)(acStackX_18 + lVar8 + -8) - lVar11 & 0xfffffffffffffff0U) < 0x1000) ||
       (lVar17 = lVar11 - *(longlong *)(lVar11 + -8), lVar11 = *(longlong *)(lVar11 + -8),
       puVar14 = &stack0xffffffffffffffc8 + lVar8, lVar17 - 8U < 0x20)) goto code_r0x0001400dcb02;
  }
  else {
    uVar12 = (longlong)puStack_1098 - (longlong)puStack_10a8 & 0xffffffffffffffe0;
    puVar13 = puStack_10a8;
    if (uVar12 < 0x1000) {
code_r0x0001400dc984:
      *(undefined **)((longlong)&puStack_40 + lVar8) = &UNK_1400dc989;
      func_0x00014028b040(puVar13,uVar12);
      goto code_r0x0001400dc989;
    }
    if (puStack_10a8 + (-8 - (longlong)*(undefined1 **)(puStack_10a8 + -8)) < (undefined1 *)0x20) {
      uVar12 = uVar12 + 0x27;
      puVar13 = *(undefined1 **)(puStack_10a8 + -8);
      goto code_r0x0001400dc984;
    }
  }
code_r0x0001400dcaf8:
  pcVar3 = (code *)swi(0x29);
  lVar11 = (*pcVar3)(5);
  puVar14 = &stack0xffffffffffffffd0 + lVar8;
code_r0x0001400dcb02:
  *(undefined8 *)(puVar14 + -8) = 0x1400dcb07;
  func_0x00014028b040(lVar11);
  return uVar20;
}

