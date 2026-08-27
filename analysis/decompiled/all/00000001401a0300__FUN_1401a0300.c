// Function: FUN_1401a0300
// Addr: 1401a0300
// Size: 2660 bytes


void FUN_1401a0300(undefined8 *param_1,undefined8 *param_2,longlong param_3,code *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  char cVar18;
  longlong lVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  ulonglong uVar23;
  undefined8 *puVar24;
  longlong lVar25;
  longlong lVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  longlong lVar29;
  undefined8 *local_res10;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  
  lVar19 = (longlong)param_2 - (longlong)param_1;
  puVar27 = param_2;
joined_r0x0001401a0345:
  if (lVar19 < 0xc60) {
    if (param_1 != puVar27) {
      for (puVar24 = param_1 + 0xc; puVar24 != puVar27; puVar24 = puVar24 + 0xc) {
        local_b8 = *puVar24;
        uStack_b0 = puVar24[1];
        local_a8 = puVar24[2];
        uStack_a0 = puVar24[3];
        local_98 = puVar24[4];
        uStack_90 = puVar24[5];
        local_88 = puVar24[6];
        uStack_80 = puVar24[7];
        local_78 = puVar24[8];
        uStack_70 = puVar24[9];
        local_68 = puVar24[10];
        uStack_60 = puVar24[0xb];
        cVar18 = (*param_4)(&local_b8,param_1);
        if (cVar18 == '\0') {
          cVar18 = (*param_4)(&local_b8,puVar24 + -0xc);
          puVar20 = puVar24 + -0xc;
          puVar21 = puVar24;
          while (puVar28 = puVar20, cVar18 != '\0') {
            uVar4 = puVar28[1];
            *puVar21 = *puVar28;
            puVar21[1] = uVar4;
            uVar4 = puVar28[3];
            puVar21[2] = puVar28[2];
            puVar21[3] = uVar4;
            uVar4 = puVar28[5];
            puVar21[4] = puVar28[4];
            puVar21[5] = uVar4;
            uVar4 = puVar28[7];
            puVar21[6] = puVar28[6];
            puVar21[7] = uVar4;
            uVar1 = *(undefined4 *)((longlong)puVar28 + 0x44);
            uVar2 = *(undefined4 *)(puVar28 + 9);
            uVar3 = *(undefined4 *)((longlong)puVar28 + 0x4c);
            *(undefined4 *)(puVar21 + 8) = *(undefined4 *)(puVar28 + 8);
            *(undefined4 *)((longlong)puVar21 + 0x44) = uVar1;
            *(undefined4 *)(puVar21 + 9) = uVar2;
            *(undefined4 *)((longlong)puVar21 + 0x4c) = uVar3;
            uVar1 = *(undefined4 *)((longlong)puVar28 + 0x54);
            uVar2 = *(undefined4 *)(puVar28 + 0xb);
            uVar3 = *(undefined4 *)((longlong)puVar28 + 0x5c);
            *(undefined4 *)(puVar21 + 10) = *(undefined4 *)(puVar28 + 10);
            *(undefined4 *)((longlong)puVar21 + 0x54) = uVar1;
            *(undefined4 *)(puVar21 + 0xb) = uVar2;
            *(undefined4 *)((longlong)puVar21 + 0x5c) = uVar3;
            cVar18 = (*param_4)(&local_b8,puVar28 + -0xc);
            puVar20 = puVar28 + -0xc;
            puVar21 = puVar28;
          }
          *puVar21 = local_b8;
          puVar21[1] = uStack_b0;
          puVar21[2] = local_a8;
          puVar21[3] = uStack_a0;
          puVar21[4] = local_98;
          puVar21[5] = uStack_90;
          puVar21[6] = local_88;
          puVar21[7] = uStack_80;
          puVar21[8] = local_78;
          puVar21[9] = uStack_70;
          puVar21[10] = local_68;
          puVar21[0xb] = uStack_60;
        }
        else {
          FUN_1404210f0(param_1 + 0xc,param_1,(longlong)puVar24 - (longlong)param_1);
          *param_1 = local_b8;
          param_1[1] = uStack_b0;
          param_1[2] = local_a8;
          param_1[3] = uStack_a0;
          param_1[4] = local_98;
          param_1[5] = uStack_90;
          param_1[6] = local_88;
          param_1[7] = uStack_80;
          param_1[8] = local_78;
          param_1[9] = uStack_70;
          param_1[10] = local_68;
          param_1[0xb] = uStack_60;
        }
      }
    }
  }
  else {
    lVar19 = ((longlong)puVar27 - (longlong)param_1) / 6 +
             ((longlong)puVar27 - (longlong)param_1 >> 0x3f);
    uVar23 = (lVar19 >> 4) - (lVar19 >> 0x3f);
    lVar19 = (longlong)uVar23 >> 1;
    if (0 < param_3) {
      lVar26 = ((longlong)puVar27 + (-0x60 - (longlong)param_1) >> 5) * -0x5555555555555555;
      puVar24 = param_1 + lVar19 * 0xc;
      if (lVar26 < 0x29) {
        puVar21 = puVar27 + -0xc;
        puVar20 = param_1;
      }
      else {
        lVar26 = lVar26 + 1 >> 3;
        FUN_1401a32e0(param_1,param_1 + lVar26 * 0xc,param_1 + lVar26 * 0x18,param_4);
        FUN_1401a32e0(puVar24 + lVar26 * -0xc,puVar24,param_1 + (lVar19 + lVar26) * 0xc,param_4);
        puVar20 = puVar27 + -0xc;
        puVar21 = puVar20 + lVar26 * -0xc;
        FUN_1401a32e0(puVar20 + lVar26 * -0x18,puVar21,puVar20,param_4);
        puVar20 = param_1 + lVar26 * 0xc;
      }
      FUN_1401a32e0(puVar20,puVar24,puVar21,param_4);
      puVar21 = puVar24;
      while (puVar20 = puVar21, param_1 < puVar20) {
        puVar21 = puVar20 + -0xc;
        cVar18 = (*param_4)(puVar21,puVar20);
        if ((cVar18 != '\0') || (cVar18 = (*param_4)(puVar20,puVar21), cVar18 != '\0')) break;
      }
      do {
        puVar24 = puVar24 + 0xc;
        puVar21 = puVar24;
        puVar28 = puVar20;
        if (puVar27 <= puVar24) goto joined_r0x0001401a04a3;
        cVar18 = (*param_4)(puVar24,puVar20);
        if ((cVar18 != '\0') || (cVar18 = (*param_4)(puVar20,puVar24), cVar18 != '\0'))
        goto joined_r0x0001401a04a3;
      } while( true );
    }
    if (0 < lVar19) {
      lVar26 = (longlong)(uVar23 - 1) >> 1;
      do {
        lVar29 = lVar19 + -1;
        local_b8 = param_1[lVar19 * 0xc + -0xc];
        uStack_b0 = (param_1 + lVar19 * 0xc + -0xc)[1];
        local_a8 = param_1[lVar19 * 0xc + -10];
        uStack_a0 = (param_1 + lVar19 * 0xc + -10)[1];
        local_98 = param_1[lVar19 * 0xc + -8];
        uStack_90 = (param_1 + lVar19 * 0xc + -8)[1];
        local_88 = param_1[lVar19 * 0xc + -6];
        uStack_80 = (param_1 + lVar19 * 0xc + -6)[1];
        local_78 = param_1[lVar19 * 0xc + -4];
        uStack_70 = (param_1 + lVar19 * 0xc + -4)[1];
        local_68 = param_1[lVar19 * 0xc + -2];
        uStack_60 = (param_1 + lVar19 * 0xc + -2)[1];
        lVar19 = lVar29;
        while (lVar19 < lVar26) {
          cVar18 = (*param_4)(param_1 + lVar19 * 0x18 + 0x18,param_1 + lVar19 * 0x18 + 0xc);
          lVar25 = (2 - (ulonglong)(cVar18 != '\0')) + lVar19 * 2;
          uVar4 = (param_1 + lVar25 * 0xc)[1];
          param_1[lVar19 * 0xc] = param_1[lVar25 * 0xc];
          (param_1 + lVar19 * 0xc)[1] = uVar4;
          uVar4 = (param_1 + lVar25 * 0xc + 2)[1];
          param_1[lVar19 * 0xc + 2] = param_1[lVar25 * 0xc + 2];
          (param_1 + lVar19 * 0xc + 2)[1] = uVar4;
          uVar4 = (param_1 + lVar25 * 0xc + 4)[1];
          param_1[lVar19 * 0xc + 4] = param_1[lVar25 * 0xc + 4];
          (param_1 + lVar19 * 0xc + 4)[1] = uVar4;
          uVar4 = (param_1 + lVar25 * 0xc + 6)[1];
          param_1[lVar19 * 0xc + 6] = param_1[lVar25 * 0xc + 6];
          (param_1 + lVar19 * 0xc + 6)[1] = uVar4;
          puVar27 = param_1 + lVar25 * 0xc + 8;
          uVar1 = *(undefined4 *)((longlong)puVar27 + 4);
          uVar2 = *(undefined4 *)(puVar27 + 1);
          uVar3 = *(undefined4 *)((longlong)puVar27 + 0xc);
          puVar24 = param_1 + lVar19 * 0xc + 8;
          *(undefined4 *)puVar24 = *(undefined4 *)puVar27;
          *(undefined4 *)((longlong)puVar24 + 4) = uVar1;
          *(undefined4 *)(puVar24 + 1) = uVar2;
          *(undefined4 *)((longlong)puVar24 + 0xc) = uVar3;
          puVar27 = param_1 + lVar25 * 0xc + 10;
          uVar1 = *(undefined4 *)((longlong)puVar27 + 4);
          uVar2 = *(undefined4 *)(puVar27 + 1);
          uVar3 = *(undefined4 *)((longlong)puVar27 + 0xc);
          puVar24 = param_1 + lVar19 * 0xc + 10;
          *(undefined4 *)puVar24 = *(undefined4 *)puVar27;
          *(undefined4 *)((longlong)puVar24 + 4) = uVar1;
          *(undefined4 *)(puVar24 + 1) = uVar2;
          *(undefined4 *)((longlong)puVar24 + 0xc) = uVar3;
          lVar19 = lVar25;
        }
        if ((lVar19 == lVar26) && ((uVar23 & 1) == 0)) {
          uVar4 = (param_1 + uVar23 * 0xc + -0xc)[1];
          param_1[lVar19 * 0xc] = param_1[uVar23 * 0xc + -0xc];
          (param_1 + lVar19 * 0xc)[1] = uVar4;
          uVar4 = (param_1 + uVar23 * 0xc + -10)[1];
          param_1[lVar19 * 0xc + 2] = param_1[uVar23 * 0xc + -10];
          (param_1 + lVar19 * 0xc + 2)[1] = uVar4;
          uVar4 = (param_1 + uVar23 * 0xc + -8)[1];
          param_1[lVar19 * 0xc + 4] = param_1[uVar23 * 0xc + -8];
          (param_1 + lVar19 * 0xc + 4)[1] = uVar4;
          uVar4 = (param_1 + uVar23 * 0xc + -6)[1];
          param_1[lVar19 * 0xc + 6] = param_1[uVar23 * 0xc + -6];
          (param_1 + lVar19 * 0xc + 6)[1] = uVar4;
          puVar27 = param_1 + uVar23 * 0xc + -4;
          uVar1 = *(undefined4 *)((longlong)puVar27 + 4);
          uVar2 = *(undefined4 *)(puVar27 + 1);
          uVar3 = *(undefined4 *)((longlong)puVar27 + 0xc);
          puVar24 = param_1 + lVar19 * 0xc + 8;
          *(undefined4 *)puVar24 = *(undefined4 *)puVar27;
          *(undefined4 *)((longlong)puVar24 + 4) = uVar1;
          *(undefined4 *)(puVar24 + 1) = uVar2;
          *(undefined4 *)((longlong)puVar24 + 0xc) = uVar3;
          puVar27 = param_1 + uVar23 * 0xc + -2;
          uVar1 = *(undefined4 *)((longlong)puVar27 + 4);
          uVar2 = *(undefined4 *)(puVar27 + 1);
          uVar3 = *(undefined4 *)((longlong)puVar27 + 0xc);
          puVar24 = param_1 + lVar19 * 0xc + 10;
          *(undefined4 *)puVar24 = *(undefined4 *)puVar27;
          *(undefined4 *)((longlong)puVar24 + 4) = uVar1;
          *(undefined4 *)(puVar24 + 1) = uVar2;
          *(undefined4 *)((longlong)puVar24 + 0xc) = uVar3;
          lVar19 = uVar23 - 1;
        }
        while (lVar29 < lVar19) {
          lVar25 = lVar19 + -1 >> 1;
          puVar27 = param_1 + lVar25 * 0xc;
          cVar18 = (*param_4)(puVar27,&local_b8);
          if (cVar18 == '\0') break;
          uVar4 = puVar27[1];
          param_1[lVar19 * 0xc] = *puVar27;
          (param_1 + lVar19 * 0xc)[1] = uVar4;
          uVar4 = puVar27[3];
          param_1[lVar19 * 0xc + 2] = puVar27[2];
          (param_1 + lVar19 * 0xc + 2)[1] = uVar4;
          uVar4 = puVar27[5];
          param_1[lVar19 * 0xc + 4] = puVar27[4];
          (param_1 + lVar19 * 0xc + 4)[1] = uVar4;
          uVar4 = puVar27[7];
          param_1[lVar19 * 0xc + 6] = puVar27[6];
          (param_1 + lVar19 * 0xc + 6)[1] = uVar4;
          uVar1 = *(undefined4 *)((longlong)puVar27 + 0x44);
          uVar2 = *(undefined4 *)(puVar27 + 9);
          uVar3 = *(undefined4 *)((longlong)puVar27 + 0x4c);
          puVar24 = param_1 + lVar19 * 0xc + 8;
          *(undefined4 *)puVar24 = *(undefined4 *)(puVar27 + 8);
          *(undefined4 *)((longlong)puVar24 + 4) = uVar1;
          *(undefined4 *)(puVar24 + 1) = uVar2;
          *(undefined4 *)((longlong)puVar24 + 0xc) = uVar3;
          uVar1 = *(undefined4 *)((longlong)puVar27 + 0x54);
          uVar2 = *(undefined4 *)(puVar27 + 0xb);
          uVar3 = *(undefined4 *)((longlong)puVar27 + 0x5c);
          puVar24 = param_1 + lVar19 * 0xc + 10;
          *(undefined4 *)puVar24 = *(undefined4 *)(puVar27 + 10);
          *(undefined4 *)((longlong)puVar24 + 4) = uVar1;
          *(undefined4 *)(puVar24 + 1) = uVar2;
          *(undefined4 *)((longlong)puVar24 + 0xc) = uVar3;
          lVar19 = lVar25;
        }
        param_1[lVar19 * 0xc] = local_b8;
        (param_1 + lVar19 * 0xc)[1] = uStack_b0;
        param_1[lVar19 * 0xc + 2] = local_a8;
        (param_1 + lVar19 * 0xc + 2)[1] = uStack_a0;
        param_1[lVar19 * 0xc + 4] = local_98;
        (param_1 + lVar19 * 0xc + 4)[1] = uStack_90;
        param_1[lVar19 * 0xc + 6] = local_88;
        (param_1 + lVar19 * 0xc + 6)[1] = uStack_80;
        param_1[lVar19 * 0xc + 8] = local_78;
        (param_1 + lVar19 * 0xc + 8)[1] = uStack_70;
        param_1[lVar19 * 0xc + 10] = local_68;
        (param_1 + lVar19 * 0xc + 10)[1] = uStack_60;
        puVar27 = param_2;
        lVar19 = lVar29;
      } while (0 < lVar29);
    }
    if (1 < (longlong)uVar23) {
      do {
        if (1 < ((longlong)puVar27 - (longlong)param_1 >> 5) * -0x5555555555555555) {
          local_b8 = puVar27[-0xc];
          uStack_b0 = puVar27[-0xb];
          local_a8 = puVar27[-10];
          uStack_a0 = puVar27[-9];
          local_98 = puVar27[-8];
          uStack_90 = puVar27[-7];
          local_88 = puVar27[-6];
          uStack_80 = puVar27[-5];
          local_78 = puVar27[-4];
          uStack_70 = puVar27[-3];
          local_68 = puVar27[-2];
          uStack_60 = puVar27[-1];
          uVar4 = param_1[1];
          puVar27[-0xc] = *param_1;
          puVar27[-0xb] = uVar4;
          uVar4 = param_1[3];
          puVar27[-10] = param_1[2];
          puVar27[-9] = uVar4;
          uVar4 = param_1[5];
          puVar27[-8] = param_1[4];
          puVar27[-7] = uVar4;
          uVar4 = param_1[7];
          puVar27[-6] = param_1[6];
          puVar27[-5] = uVar4;
          uVar1 = *(undefined4 *)((longlong)param_1 + 0x44);
          uVar2 = *(undefined4 *)(param_1 + 9);
          uVar3 = *(undefined4 *)((longlong)param_1 + 0x4c);
          *(undefined4 *)(puVar27 + -4) = *(undefined4 *)(param_1 + 8);
          *(undefined4 *)((longlong)puVar27 + -0x1c) = uVar1;
          *(undefined4 *)(puVar27 + -3) = uVar2;
          *(undefined4 *)((longlong)puVar27 + -0x14) = uVar3;
          uVar1 = *(undefined4 *)((longlong)param_1 + 0x54);
          uVar2 = *(undefined4 *)(param_1 + 0xb);
          uVar3 = *(undefined4 *)((longlong)param_1 + 0x5c);
          *(undefined4 *)(puVar27 + -2) = *(undefined4 *)(param_1 + 10);
          *(undefined4 *)((longlong)puVar27 + -0xc) = uVar1;
          *(undefined4 *)(puVar27 + -1) = uVar2;
          *(undefined4 *)((longlong)puVar27 + -4) = uVar3;
          FUN_1401a2c60(param_1,0,
                        ((longlong)(puVar27 + -0xc) - (longlong)param_1 >> 5) * -0x5555555555555555,
                        &local_b8,param_4);
        }
        puVar27 = puVar27 + -0xc;
      } while (0xbf < (longlong)puVar27 - (longlong)param_1);
    }
  }
  return;
joined_r0x0001401a04a3:
  if (puVar21 < puVar27) {
    cVar18 = (*param_4)(puVar28,puVar21);
    if (cVar18 == '\0') {
      cVar18 = (*param_4)(puVar21,puVar28);
      if (cVar18 != '\0') goto joined_r0x0001401a053f;
      if (puVar24 != puVar21) {
        uVar4 = puVar21[1];
        uVar5 = *puVar24;
        uVar6 = puVar24[1];
        uVar7 = puVar24[2];
        uVar8 = puVar24[3];
        uVar9 = puVar24[4];
        uVar10 = puVar24[5];
        uVar11 = puVar24[6];
        uVar12 = puVar24[7];
        uVar13 = puVar24[8];
        uVar14 = puVar24[9];
        uVar15 = puVar24[10];
        uVar16 = puVar24[0xb];
        *puVar24 = *puVar21;
        puVar24[1] = uVar4;
        uVar4 = puVar21[3];
        puVar24[2] = puVar21[2];
        puVar24[3] = uVar4;
        uVar4 = puVar21[5];
        puVar24[4] = puVar21[4];
        puVar24[5] = uVar4;
        uVar4 = puVar21[7];
        puVar24[6] = puVar21[6];
        puVar24[7] = uVar4;
        uVar1 = *(undefined4 *)((longlong)puVar21 + 0x44);
        uVar2 = *(undefined4 *)(puVar21 + 9);
        uVar3 = *(undefined4 *)((longlong)puVar21 + 0x4c);
        *(undefined4 *)(puVar24 + 8) = *(undefined4 *)(puVar21 + 8);
        *(undefined4 *)((longlong)puVar24 + 0x44) = uVar1;
        *(undefined4 *)(puVar24 + 9) = uVar2;
        *(undefined4 *)((longlong)puVar24 + 0x4c) = uVar3;
        uVar4 = puVar21[0xb];
        puVar24[10] = puVar21[10];
        puVar24[0xb] = uVar4;
        *puVar21 = uVar5;
        puVar21[1] = uVar6;
        puVar21[2] = uVar7;
        puVar21[3] = uVar8;
        puVar21[4] = uVar9;
        puVar21[5] = uVar10;
        puVar21[6] = uVar11;
        puVar21[7] = uVar12;
        puVar21[8] = uVar13;
        puVar21[9] = uVar14;
        puVar21[10] = uVar15;
        puVar21[0xb] = uVar16;
      }
      puVar24 = puVar24 + 0xc;
    }
    puVar21 = puVar21 + 0xc;
    goto joined_r0x0001401a04a3;
  }
joined_r0x0001401a053f:
  while (puVar17 = puVar20, param_1 < puVar17) {
    puVar20 = puVar17 + -0xc;
    cVar18 = (*param_4)(puVar20,puVar28);
    puVar27 = param_2;
    if (cVar18 == '\0') {
      cVar18 = (*param_4)(puVar28,puVar20);
      if (cVar18 != '\0') break;
      if (puVar17 != puVar28) {
        uVar4 = puVar17[-0xb];
        uVar5 = puVar28[-0xc];
        uVar6 = puVar28[-0xb];
        uVar7 = puVar28[-10];
        uVar8 = puVar28[-9];
        uVar9 = puVar28[-8];
        uVar10 = puVar28[-7];
        uVar11 = puVar28[-6];
        uVar12 = puVar28[-5];
        uVar13 = puVar28[-4];
        uVar14 = puVar28[-3];
        uVar15 = puVar28[-2];
        uVar16 = puVar28[-1];
        puVar28[-0xc] = *puVar20;
        puVar28[-0xb] = uVar4;
        uVar4 = puVar17[-9];
        puVar28[-10] = puVar17[-10];
        puVar28[-9] = uVar4;
        uVar4 = puVar17[-7];
        puVar28[-8] = puVar17[-8];
        puVar28[-7] = uVar4;
        uVar4 = puVar17[-5];
        puVar28[-6] = puVar17[-6];
        puVar28[-5] = uVar4;
        uVar1 = *(undefined4 *)((longlong)puVar17 + -0x1c);
        uVar2 = *(undefined4 *)(puVar17 + -3);
        uVar3 = *(undefined4 *)((longlong)puVar17 + -0x14);
        *(undefined4 *)(puVar28 + -4) = *(undefined4 *)(puVar17 + -4);
        *(undefined4 *)((longlong)puVar28 + -0x1c) = uVar1;
        *(undefined4 *)(puVar28 + -3) = uVar2;
        *(undefined4 *)((longlong)puVar28 + -0x14) = uVar3;
        uVar4 = puVar17[-1];
        puVar28[-2] = puVar17[-2];
        puVar28[-1] = uVar4;
        *puVar20 = uVar5;
        puVar17[-0xb] = uVar6;
        puVar17[-10] = uVar7;
        puVar17[-9] = uVar8;
        puVar17[-8] = uVar9;
        puVar17[-7] = uVar10;
        puVar17[-6] = uVar11;
        puVar17[-5] = uVar12;
        puVar17[-4] = uVar13;
        puVar17[-3] = uVar14;
        puVar17[-2] = uVar15;
        puVar17[-1] = uVar16;
      }
      puVar28 = puVar28 + -0xc;
    }
  }
  if (puVar17 != param_1) {
    puVar20 = puVar17 + -0xc;
    if (puVar21 == puVar27) {
      puVar22 = puVar28 + -0xc;
      if (puVar28 != puVar17) {
        uVar4 = puVar28[-0xb];
        uVar5 = *puVar20;
        uVar6 = puVar17[-0xb];
        uVar7 = puVar17[-10];
        uVar8 = puVar17[-9];
        uVar9 = puVar17[-8];
        uVar10 = puVar17[-7];
        uVar11 = puVar17[-6];
        uVar12 = puVar17[-5];
        uVar13 = puVar17[-4];
        uVar14 = puVar17[-3];
        uVar15 = puVar17[-2];
        uVar16 = puVar17[-1];
        *puVar20 = *puVar22;
        puVar17[-0xb] = uVar4;
        uVar4 = puVar28[-9];
        puVar17[-10] = puVar28[-10];
        puVar17[-9] = uVar4;
        uVar4 = puVar28[-7];
        puVar17[-8] = puVar28[-8];
        puVar17[-7] = uVar4;
        uVar4 = puVar28[-5];
        puVar17[-6] = puVar28[-6];
        puVar17[-5] = uVar4;
        uVar4 = puVar28[-3];
        puVar17[-4] = puVar28[-4];
        puVar17[-3] = uVar4;
        uVar4 = puVar28[-1];
        puVar17[-2] = puVar28[-2];
        puVar17[-1] = uVar4;
        *puVar22 = uVar5;
        puVar28[-0xb] = uVar6;
        puVar28[-10] = uVar7;
        puVar28[-9] = uVar8;
        puVar28[-8] = uVar9;
        puVar28[-7] = uVar10;
        puVar28[-6] = uVar11;
        puVar28[-5] = uVar12;
        puVar28[-4] = uVar13;
        puVar28[-3] = uVar14;
        puVar28[-2] = uVar15;
        puVar28[-1] = uVar16;
      }
      uVar4 = puVar24[-0xb];
      uVar5 = *puVar22;
      uVar6 = puVar28[-0xb];
      uVar7 = puVar28[-10];
      uVar8 = puVar28[-9];
      uVar9 = puVar28[-8];
      uVar10 = puVar28[-7];
      uVar11 = puVar28[-6];
      uVar12 = puVar28[-5];
      uVar13 = puVar28[-4];
      uVar14 = puVar28[-3];
      uVar15 = puVar28[-2];
      uVar16 = puVar28[-1];
      *puVar22 = puVar24[-0xc];
      puVar28[-0xb] = uVar4;
      uVar4 = puVar24[-9];
      puVar28[-10] = puVar24[-10];
      puVar28[-9] = uVar4;
      uVar4 = puVar24[-7];
      puVar28[-8] = puVar24[-8];
      puVar28[-7] = uVar4;
      uVar4 = puVar24[-5];
      puVar28[-6] = puVar24[-6];
      puVar28[-5] = uVar4;
      uVar1 = *(undefined4 *)((longlong)puVar24 + -0x1c);
      uVar2 = *(undefined4 *)(puVar24 + -3);
      uVar3 = *(undefined4 *)((longlong)puVar24 + -0x14);
      *(undefined4 *)(puVar28 + -4) = *(undefined4 *)(puVar24 + -4);
      *(undefined4 *)((longlong)puVar28 + -0x1c) = uVar1;
      *(undefined4 *)(puVar28 + -3) = uVar2;
      *(undefined4 *)((longlong)puVar28 + -0x14) = uVar3;
      uVar4 = puVar24[-1];
      puVar28[-2] = puVar24[-2];
      puVar28[-1] = uVar4;
      puVar24[-0xc] = uVar5;
      puVar24[-0xb] = uVar6;
      puVar24[-10] = uVar7;
      puVar24[-9] = uVar8;
      puVar24[-8] = uVar9;
      puVar24[-7] = uVar10;
      puVar24[-6] = uVar11;
      puVar24[-5] = uVar12;
      puVar24[-4] = uVar13;
      puVar24[-3] = uVar14;
      puVar24[-2] = uVar15;
      puVar24[-1] = uVar16;
      puVar24 = puVar24 + -0xc;
      puVar28 = puVar22;
    }
    else {
      uVar4 = puVar17[-0xb];
      uVar5 = *puVar21;
      uVar6 = puVar21[1];
      uVar7 = puVar21[2];
      uVar8 = puVar21[3];
      uVar9 = puVar21[4];
      uVar10 = puVar21[5];
      uVar11 = puVar21[6];
      uVar12 = puVar21[7];
      uVar13 = puVar21[8];
      uVar14 = puVar21[9];
      uVar15 = puVar21[10];
      uVar16 = puVar21[0xb];
      *puVar21 = *puVar20;
      puVar21[1] = uVar4;
      uVar4 = puVar17[-9];
      puVar21[2] = puVar17[-10];
      puVar21[3] = uVar4;
      uVar4 = puVar17[-7];
      puVar21[4] = puVar17[-8];
      puVar21[5] = uVar4;
      uVar4 = puVar17[-5];
      puVar21[6] = puVar17[-6];
      puVar21[7] = uVar4;
      uVar1 = *(undefined4 *)((longlong)puVar17 + -0x1c);
      uVar2 = *(undefined4 *)(puVar17 + -3);
      uVar3 = *(undefined4 *)((longlong)puVar17 + -0x14);
      *(undefined4 *)(puVar21 + 8) = *(undefined4 *)(puVar17 + -4);
      *(undefined4 *)((longlong)puVar21 + 0x44) = uVar1;
      *(undefined4 *)(puVar21 + 9) = uVar2;
      *(undefined4 *)((longlong)puVar21 + 0x4c) = uVar3;
      uVar4 = puVar17[-1];
      puVar21[10] = puVar17[-2];
      puVar21[0xb] = uVar4;
      *puVar20 = uVar5;
      puVar17[-0xb] = uVar6;
      puVar17[-10] = uVar7;
      puVar17[-9] = uVar8;
      puVar17[-8] = uVar9;
      puVar17[-7] = uVar10;
      puVar17[-6] = uVar11;
      puVar17[-5] = uVar12;
      puVar17[-4] = uVar13;
      puVar17[-3] = uVar14;
      puVar17[-2] = uVar15;
      puVar17[-1] = uVar16;
      puVar21 = puVar21 + 0xc;
    }
    goto joined_r0x0001401a04a3;
  }
  if (puVar21 != puVar27) {
    if (puVar24 != puVar21) {
      uVar4 = puVar24[1];
      uVar5 = *puVar28;
      uVar6 = puVar28[1];
      uVar7 = puVar28[2];
      uVar8 = puVar28[3];
      uVar9 = puVar28[4];
      uVar10 = puVar28[5];
      uVar11 = puVar28[6];
      uVar12 = puVar28[7];
      uVar13 = puVar28[8];
      uVar14 = puVar28[9];
      uVar15 = puVar28[10];
      uVar16 = puVar28[0xb];
      *puVar28 = *puVar24;
      puVar28[1] = uVar4;
      uVar4 = puVar24[3];
      puVar28[2] = puVar24[2];
      puVar28[3] = uVar4;
      uVar4 = puVar24[5];
      puVar28[4] = puVar24[4];
      puVar28[5] = uVar4;
      uVar4 = puVar24[7];
      puVar28[6] = puVar24[6];
      puVar28[7] = uVar4;
      uVar4 = puVar24[9];
      puVar28[8] = puVar24[8];
      puVar28[9] = uVar4;
      uVar4 = puVar24[0xb];
      puVar28[10] = puVar24[10];
      puVar28[0xb] = uVar4;
      *puVar24 = uVar5;
      puVar24[1] = uVar6;
      puVar24[2] = uVar7;
      puVar24[3] = uVar8;
      puVar24[4] = uVar9;
      puVar24[5] = uVar10;
      puVar24[6] = uVar11;
      puVar24[7] = uVar12;
      puVar24[8] = uVar13;
      puVar24[9] = uVar14;
      puVar24[10] = uVar15;
      puVar24[0xb] = uVar16;
    }
    uVar4 = puVar21[1];
    uVar5 = *puVar28;
    uVar6 = puVar28[1];
    uVar7 = puVar28[2];
    uVar8 = puVar28[3];
    uVar9 = puVar28[4];
    uVar10 = puVar28[5];
    uVar11 = puVar28[6];
    uVar12 = puVar28[7];
    uVar13 = puVar28[8];
    uVar14 = puVar28[9];
    uVar15 = puVar28[10];
    uVar16 = puVar28[0xb];
    *puVar28 = *puVar21;
    puVar28[1] = uVar4;
    uVar4 = puVar21[3];
    puVar28[2] = puVar21[2];
    puVar28[3] = uVar4;
    uVar4 = puVar21[5];
    puVar28[4] = puVar21[4];
    puVar28[5] = uVar4;
    uVar4 = puVar21[7];
    puVar28[6] = puVar21[6];
    puVar28[7] = uVar4;
    uVar1 = *(undefined4 *)((longlong)puVar21 + 0x44);
    uVar2 = *(undefined4 *)(puVar21 + 9);
    uVar3 = *(undefined4 *)((longlong)puVar21 + 0x4c);
    *(undefined4 *)(puVar28 + 8) = *(undefined4 *)(puVar21 + 8);
    *(undefined4 *)((longlong)puVar28 + 0x44) = uVar1;
    *(undefined4 *)(puVar28 + 9) = uVar2;
    *(undefined4 *)((longlong)puVar28 + 0x4c) = uVar3;
    uVar4 = puVar21[0xb];
    puVar28[10] = puVar21[10];
    puVar28[0xb] = uVar4;
    *puVar21 = uVar5;
    puVar21[1] = uVar6;
    puVar21[2] = uVar7;
    puVar21[3] = uVar8;
    puVar21[4] = uVar9;
    puVar21[5] = uVar10;
    puVar21[6] = uVar11;
    puVar21[7] = uVar12;
    puVar21[8] = uVar13;
    puVar21[9] = uVar14;
    puVar21[10] = uVar15;
    puVar21[0xb] = uVar16;
    puVar24 = puVar24 + 0xc;
    puVar21 = puVar21 + 0xc;
    puVar20 = puVar17;
    puVar28 = puVar28 + 0xc;
    goto joined_r0x0001401a04a3;
  }
  param_3 = (param_3 >> 1) + (param_3 >> 2);
  puVar21 = puVar24;
  puVar20 = puVar27;
  local_res10 = puVar28;
  if (((longlong)puVar28 - (longlong)param_1 >> 5) * -0x5555555555555555 <
      ((longlong)puVar27 - (longlong)puVar24 >> 5) * -0x5555555555555555) {
    puVar21 = param_1;
    puVar20 = puVar28;
    puVar28 = puVar27;
    param_1 = puVar24;
    local_res10 = param_2;
  }
  FUN_1401a0300(puVar21,puVar20,param_3,param_4);
  lVar19 = (longlong)puVar28 - (longlong)param_1;
  puVar27 = puVar28;
  param_2 = local_res10;
  goto joined_r0x0001401a0345;
}

