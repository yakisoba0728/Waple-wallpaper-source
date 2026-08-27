// Function: FUN_1401ddbb0
// Addr: 1401ddbb0
// Size: 1514 bytes


undefined8 * FUN_1401ddbb0(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  code *pcVar5;
  longlong *plVar6;
  char cVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  undefined1 *puVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  char cVar17;
  float fVar18;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  ulonglong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  plVar15 = (longlong *)0x0;
  param_1[2] = param_2 + 0x1c88;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = &PTR_FUN_1404903b8;
  FUN_140153760(param_1 + 9);
  param_1[0x19] = param_2;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1c] = 0x3f800000;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x21] = 0x3f800000;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x24) = 0x2001;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x27) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x164) = 0;
  *(undefined4 *)((longlong)param_1 + 0x16c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2e) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0x3f800000;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0xffffffff;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  FUN_140085090(param_1 + 0x36,param_3);
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0xf;
  *(undefined1 *)(param_1 + 0x3b) = 0;
  FUN_1400786b0(param_1 + 0x3f);
  FUN_1401a38f0(param_1 + 1,param_3);
  local_40 = 0xf;
  local_48 = 0xc;
  local_58._0_1_ = s_dependencies_140490248[0];
  local_58._1_1_ = s_dependencies_140490248[1];
  local_58._2_1_ = s_dependencies_140490248[2];
  local_58._3_1_ = s_dependencies_140490248[3];
  local_58._4_1_ = s_dependencies_140490248[4];
  local_58._5_1_ = s_dependencies_140490248[5];
  local_58._6_1_ = s_dependencies_140490248[6];
  local_58._7_1_ = s_dependencies_140490248[7];
  uStack_50 = (ulonglong)(uint)s_dependencies_140490248._8_4_;
  plVar8 = (longlong *)FUN_140087490(param_3,&local_58,(longlong)&uStack_50 + 4);
  if (local_40 < 0x10) {
LAB_1401dddf2:
    local_48 = 0;
    local_40 = 0xf;
    local_58 = local_58 & 0xffffffffffffff00;
    if (plVar8 == (longlong *)0x0) {
      return param_1;
    }
    uVar11 = *(uint *)(plVar8 + 1) & 0xff;
    if (((uVar11 == 6) || (puVar14 = auStack_78, uVar11 == 7)) &&
       (puVar14 = auStack_78, (undefined8 *)*plVar8 != (undefined8 *)0x0)) {
      cVar7 = '\0';
      plVar13 = (longlong *)**(undefined8 **)*plVar8;
      puVar14 = auStack_78;
      goto LAB_1401dde47;
    }
  }
  else {
    uVar12 = local_40 + 1;
    uVar9 = local_58;
    if (uVar12 < 0x1000) {
LAB_1401ddded:
      thunk_FUN_14028af80(uVar9,uVar12);
      goto LAB_1401dddf2;
    }
    uVar9 = *(ulonglong *)(local_58 - 8);
    if ((local_58 - uVar9) - 8 < 0x20) {
      uVar12 = local_40 + 0x28;
      goto LAB_1401ddded;
    }
    uVar11 = 5;
    pcVar5 = (code *)swi(0x29);
    (*pcVar5)();
    puVar14 = auStack_70;
  }
  cVar7 = '\x01';
  plVar13 = plVar15;
LAB_1401dde47:
  puVar14[0x88] = cVar7;
  if (((uVar11 == 6) || (uVar11 == 7)) && ((undefined8 *)*plVar8 != (undefined8 *)0x0)) {
    plVar15 = *(longlong **)*plVar8;
    cVar17 = '\0';
  }
  else {
    cVar17 = '\x01';
  }
  puVar14[0x80] = cVar17;
  do {
    if (cVar7 == '\0') {
      cVar17 = plVar13 == plVar15;
    }
    if (cVar17 != '\0') {
      return param_1;
    }
    *(undefined8 *)(puVar14 + -8) = 0x1401ddea2;
    cVar7 = FUN_140088800(plVar13 + 6);
    if (cVar7 != '\0') {
      *(undefined8 *)(puVar14 + -8) = 0x1401ddeb3;
      uVar9 = FUN_140086000(plVar13 + 6);
      uVar12 = ((((((((uVar9 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ uVar9 >> 8 & 0xff) *
                     0x100000001b3 ^ uVar9 >> 0x10 & 0xff) * 0x100000001b3 ^ uVar9 >> 0x18 & 0xff) *
                   0x100000001b3 ^ uVar9 >> 0x20 & 0xff) * 0x100000001b3 ^ uVar9 >> 0x28 & 0xff) *
                 0x100000001b3 ^ uVar9 >> 0x30 & 0xff) * 0x100000001b3 ^ uVar9 >> 0x38) *
               0x100000001b3;
      puVar16 = (undefined8 *)param_1[0x40];
      puVar10 = *(undefined8 **)(param_1[0x42] + 8 + (uVar12 & param_1[0x45]) * 0x10);
      if (puVar10 == puVar16) {
LAB_1401ddf8e:
        if (param_1[0x41] == 0xaaaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
          *(undefined **)(puVar14 + -8) = &UNK_1401de19a;
          FUN_14028c2e0("unordered_map/set too long");
        }
        *(undefined8 *)(puVar14 + -8) = 0x1401ddfa5;
        puVar10 = (undefined8 *)FUN_14028af20(0x18);
        puVar10[2] = uVar9;
        fVar18 = (float)(param_1[0x41] + 1) / (float)(ulonglong)param_1[0x46];
        if (*(float *)(param_1 + 0x3f) <= fVar18 && fVar18 != *(float *)(param_1 + 0x3f)) {
          *(undefined8 *)(puVar14 + -8) = 0x1401de01d;
          FUN_14007cea0(param_1 + 0x3f);
          puVar16 = (undefined8 *)param_1[0x40];
          puVar2 = *(undefined8 **)(param_1[0x42] + 8 + (uVar12 & param_1[0x45]) * 0x10);
          if (puVar2 != puVar16) {
            lVar3 = puVar2[2];
            puVar16 = puVar2;
            while (puVar10[2] != lVar3) {
              if (puVar16 == *(undefined8 **)(param_1[0x42] + (uVar12 & param_1[0x45]) * 0x10))
              goto LAB_1401de06c;
              puVar16 = (undefined8 *)puVar16[1];
              lVar3 = puVar16[2];
            }
            puVar16 = (undefined8 *)*puVar16;
          }
        }
LAB_1401de06c:
        puVar2 = (undefined8 *)puVar16[1];
        param_1[0x41] = param_1[0x41] + 1;
        *puVar10 = puVar16;
        puVar10[1] = puVar2;
        *puVar2 = puVar10;
        puVar16[1] = puVar10;
        uVar12 = uVar12 & param_1[0x45];
        lVar3 = param_1[0x42];
        puVar4 = *(undefined8 **)(lVar3 + uVar12 * 0x10);
        if (puVar4 == (undefined8 *)param_1[0x40]) {
          *(undefined8 **)(lVar3 + uVar12 * 0x10) = puVar10;
          *(undefined8 **)(lVar3 + 8 + uVar12 * 0x10) = puVar10;
        }
        else if (puVar4 == puVar16) {
          *(undefined8 **)(lVar3 + uVar12 * 0x10) = puVar10;
        }
        else if (*(undefined8 **)(lVar3 + 8 + uVar12 * 0x10) == puVar2) {
          *(undefined8 **)(lVar3 + 8 + uVar12 * 0x10) = puVar10;
        }
      }
      else {
        uVar1 = puVar10[2];
        puVar16 = puVar10;
        while (uVar9 != uVar1) {
          if (puVar16 == *(undefined8 **)(param_1[0x42] + (uVar12 & param_1[0x45]) * 0x10))
          goto LAB_1401ddf8e;
          puVar16 = (undefined8 *)puVar16[1];
          uVar1 = puVar16[2];
        }
      }
    }
    plVar8 = (longlong *)plVar13[2];
    if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
      cVar7 = *(char *)(*plVar8 + 0x19);
      plVar13 = plVar8;
      while (cVar7 == '\0') {
        plVar13 = (longlong *)*plVar13;
        cVar7 = *(char *)(*plVar13 + 0x19);
      }
      cVar17 = puVar14[0x80];
      cVar7 = puVar14[0x88];
    }
    else {
      cVar7 = *(char *)(plVar13[1] + 0x19);
      plVar6 = (longlong *)plVar13[1];
      plVar8 = plVar13;
      while ((plVar13 = plVar6, cVar7 == '\0' && (plVar8 == (longlong *)plVar13[2]))) {
        cVar7 = *(char *)(plVar13[1] + 0x19);
        plVar6 = (longlong *)plVar13[1];
        plVar8 = plVar13;
      }
      cVar7 = puVar14[0x88];
      cVar17 = puVar14[0x80];
    }
  } while( true );
}

