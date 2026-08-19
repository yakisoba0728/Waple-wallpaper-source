// Function: FUN_1401312d0
// Addr: 1401312d0
// Size: 3901 bytes


void FUN_1401312d0(undefined4 *param_1,undefined4 *param_2,longlong param_3,code *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  code *pcVar7;
  char cVar8;
  longlong lVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined4 *local_res8;
  undefined4 *local_res10;
  undefined4 *local_138;
  undefined4 *local_130;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  longlong local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f8;
  ulonglong local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  ulonglong local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 *local_98;
  undefined4 *local_90;
  undefined4 *local_80;
  undefined4 *local_70;
  undefined4 *local_58;
  
  lVar9 = (longlong)param_2 - (longlong)param_1;
  local_res8 = param_1;
  while (0x1187 < lVar9) {
    lVar9 = ((longlong)param_2 - (longlong)param_1) / 0x88;
    lVar14 = lVar9 >> 1;
    if (param_3 < 1) goto joined_r0x000140131b9f;
    puVar17 = param_1 + lVar14 * 0x22;
    lVar9 = ((longlong)param_2 + (-0x88 - (longlong)param_1) >> 3) * -0xf0f0f0f0f0f0f0f;
    if (lVar9 < 0x29) {
      puVar11 = param_2 + -0x22;
      puVar10 = param_1;
    }
    else {
      lVar9 = lVar9 + 1 >> 3;
      FUN_1401342b0(param_1,param_1 + lVar9 * 0x22,param_1 + lVar9 * 0x44,param_4);
      FUN_1401342b0(puVar17 + lVar9 * -0x22,puVar17,param_1 + (lVar14 + lVar9) * 0x22,param_4);
      puVar10 = param_2 + -0x22;
      puVar11 = puVar10 + lVar9 * -0x22;
      FUN_1401342b0(puVar10 + lVar9 * -0x44,puVar11,puVar10,param_4);
      puVar10 = param_1 + lVar9 * 0x22;
    }
    FUN_1401342b0(puVar10,puVar17,puVar11,param_4);
    puVar11 = puVar17 + 0x22;
    local_98 = puVar11;
    while (puVar10 = puVar17, puVar15 = local_98, param_1 < puVar10) {
      puVar17 = puVar10 + -0x22;
      cVar8 = (*param_4)(puVar17,puVar10);
      puVar15 = local_98;
      if ((cVar8 != '\0') ||
         (cVar8 = (*param_4)(puVar10,puVar17), puVar15 = local_98, cVar8 != '\0')) break;
    }
    while ((puVar17 = puVar11, puVar16 = puVar10, local_130 = puVar11, puVar18 = puVar10,
           puVar11 < param_2 &&
           ((cVar8 = (*param_4)(puVar11,puVar10), puVar15 = puVar11, cVar8 == '\0' &&
            (cVar8 = (*param_4)(puVar10,puVar11), cVar8 == '\0'))))) {
      puVar11 = puVar11 + 0x22;
      puVar15 = puVar11;
    }
LAB_1401314a0:
    local_90 = puVar18;
    local_98 = puVar15;
    puVar15 = local_98;
    if (puVar11 < param_2) {
      do {
        cVar8 = (*param_4)(puVar16,puVar11);
        if (cVar8 == '\0') {
          cVar8 = (*param_4)(puVar11,puVar16);
          puVar10 = local_90;
          param_1 = local_res8;
          local_130 = puVar11;
          puVar15 = puVar17;
          if (cVar8 != '\0') break;
          if (puVar17 != puVar11) {
            FUN_140133a50(&local_128,puVar17);
            FUN_140132c10(puVar17,puVar11);
            FUN_140132c10(puVar11,&local_128);
                    /* WARNING: Subroutine does not return */
            FUN_140017310(&local_d0);
          }
          puVar17 = puVar17 + 0x22;
        }
        puVar11 = puVar11 + 0x22;
        puVar10 = local_90;
        param_1 = local_res8;
        local_130 = puVar11;
        puVar15 = puVar17;
      } while (puVar11 < param_2);
    }
    local_98 = puVar15;
    puVar15 = puVar10;
    local_res10 = puVar16;
    if (param_1 < puVar10) {
      do {
        puVar18 = puVar10 + -0x22;
        cVar8 = (*param_4)(puVar18,puVar16);
        local_res10 = puVar16;
        puVar11 = local_130;
        if (cVar8 == '\0') {
          cVar8 = (*param_4)(puVar16);
          puVar15 = puVar10;
          puVar17 = local_98;
          if (cVar8 != '\0') break;
          local_res10 = puVar16 + -0x22;
          if (local_res10 != puVar18) {
            local_110 = *(longlong *)(puVar16 + -0x1c);
            uVar1 = puVar16[-0x21];
            uVar2 = puVar16[-0x20];
            uVar3 = puVar16[-0x1f];
            uVar4 = puVar16[-0x1e];
            uVar5 = puVar16[-0x1d];
            uVar6 = *local_res10;
            uStack_108 = *(undefined8 *)(puVar16 + -0x1a);
            local_100 = *(undefined8 *)(puVar16 + -0x18);
            local_f8 = *(ulonglong *)(puVar16 + -0x16);
            *(undefined8 *)(puVar16 + -0x18) = 0;
            *(undefined1 *)(puVar16 + -0x1c) = 0;
            *(undefined8 *)(puVar16 + -0x16) = 0xf;
            local_f0 = *(ulonglong *)(puVar16 + -0x14);
            uStack_e8 = *(undefined8 *)(puVar16 + -0x12);
            local_e0 = *(undefined8 *)(puVar16 + -0x10);
            local_d8 = *(ulonglong *)(puVar16 + -0xe);
            *(undefined8 *)(puVar16 + -0x10) = 0;
            *(undefined1 *)(puVar16 + -0x14) = 0;
            *(undefined8 *)(puVar16 + -0xe) = 0xf;
            local_d0 = *(ulonglong *)(puVar16 + -0xc);
            uStack_c8 = *(undefined8 *)(puVar16 + -10);
            local_c0 = *(undefined8 *)(puVar16 + -8);
            local_b8 = *(ulonglong *)(puVar16 + -6);
            *(undefined8 *)(puVar16 + -8) = 0;
            *(undefined1 *)(puVar16 + -0xc) = 0;
            *(undefined8 *)(puVar16 + -6) = 0xf;
            local_a8 = puVar16[-2];
            local_b0 = *(undefined8 *)(puVar16 + -4);
            local_128 = uVar6;
            local_124 = uVar1;
            local_120 = uVar2;
            local_11c = uVar3;
            local_118 = uVar4;
            local_114 = uVar5;
            FUN_140132c10(local_res10,puVar18);
            puVar17 = local_90;
            *puVar18 = uVar6;
            local_90[-0x21] = uVar1;
            local_90[-0x20] = uVar2;
            local_90[-0x1f] = uVar3;
            local_90[-0x1e] = uVar4;
            local_90[-0x1d] = uVar5;
            FUN_14000df10(local_90 + -0x1c,&local_110);
            FUN_14000df10(puVar17 + -0x14,&local_f0);
            FUN_14000df10(puVar17 + -0xc,&local_d0);
            puVar17[-2] = local_a8;
            *(undefined8 *)(puVar17 + -4) = local_b0;
            if (0xf < local_b8) {
              uVar12 = local_b8 + 1;
              uVar13 = local_d0;
              if (0xfff < uVar12) {
                uVar13 = *(ulonglong *)(local_d0 - 8);
                if (0x1f < (local_d0 - uVar13) - 8) goto LAB_140132234;
                uVar12 = local_b8 + 0x28;
              }
              func_0x00014028b040(uVar13,uVar12);
              return;
            }
            if (0xf < local_d8) {
              uVar12 = local_d8 + 1;
              uVar13 = local_f0;
              if (0xfff < uVar12) {
                uVar13 = *(ulonglong *)(local_f0 - 8);
                if (0x1f < (local_f0 - uVar13) - 8) goto LAB_140132234;
                uVar12 = local_d8 + 0x28;
              }
              func_0x00014028b040(uVar13,uVar12);
              return;
            }
            param_1 = local_res8;
            if (0xf < local_f8) {
              uVar13 = local_f8 + 1;
              lVar9 = local_110;
              if (0xfff < uVar13) {
                lVar9 = *(longlong *)(local_110 + -8);
                if (0x1f < (local_110 - lVar9) - 8U) goto LAB_140132234;
                uVar13 = local_f8 + 0x28;
              }
              func_0x00014028b040(lVar9,uVar13);
              return;
            }
          }
        }
        puVar10 = puVar18;
        puVar15 = puVar18;
        puVar17 = local_98;
        puVar16 = local_res10;
        local_90 = puVar18;
      } while (param_1 < puVar18);
    }
    if (puVar15 != param_1) {
      puVar10 = puVar15 + -0x22;
      puVar16 = puVar10;
      puVar18 = puVar11;
      local_90 = puVar10;
      if (puVar11 != param_2) goto LAB_14013185c;
      puVar16 = local_res10 + -0x22;
      if (puVar15 != local_res10) {
        FUN_140134320(puVar10,puVar16);
      }
      puVar17 = puVar17 + -0x22;
      local_98 = puVar17;
      FUN_140134320(puVar16,puVar17);
      puVar15 = local_98;
      puVar18 = local_90;
      goto LAB_1401314a0;
    }
    if (puVar11 != param_2) {
      if (puVar17 != puVar11) {
        FUN_140134320(local_res10,puVar17);
      }
      puVar17 = puVar17 + 0x22;
      puVar10 = puVar11;
      puVar16 = puVar15;
      puVar18 = local_res10;
      local_res10 = local_res10 + 0x22;
      local_98 = puVar17;
LAB_14013185c:
      puVar11 = puVar11 + 0x22;
      FUN_140134320(puVar18,puVar10);
      puVar10 = puVar16;
      puVar16 = local_res10;
      local_130 = puVar11;
      puVar15 = local_98;
      puVar18 = local_90;
      goto LAB_1401314a0;
    }
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    puVar11 = puVar17;
    puVar10 = param_2;
    if (((longlong)local_res10 - (longlong)param_1 >> 3) * -0xf0f0f0f0f0f0f0f <
        ((longlong)param_2 - (longlong)puVar17 >> 3) * -0xf0f0f0f0f0f0f0f) {
      puVar11 = param_1;
      puVar10 = local_res10;
      param_1 = puVar17;
      local_res8 = puVar17;
      local_res10 = param_2;
    }
    FUN_1401312d0(puVar11,puVar10,param_3,param_4);
    param_2 = local_res10;
    lVar9 = (longlong)local_res10 - (longlong)param_1;
  }
  puVar17 = param_1;
  if (param_1 == param_2) {
    return;
  }
  do {
    puVar17 = puVar17 + 0x22;
    if (puVar17 == param_2) {
      return;
    }
    local_128 = *puVar17;
    local_124 = puVar17[1];
    local_120 = puVar17[2];
    local_11c = puVar17[3];
    local_118 = puVar17[4];
    local_114 = puVar17[5];
    local_110 = *(longlong *)(puVar17 + 6);
    uStack_108 = *(undefined8 *)(puVar17 + 8);
    local_100 = *(undefined8 *)(puVar17 + 10);
    local_f8 = *(ulonglong *)(puVar17 + 0xc);
    *(undefined8 *)(puVar17 + 10) = 0;
    *(undefined8 *)(puVar17 + 0xc) = 0xf;
    *(undefined1 *)(puVar17 + 6) = 0;
    local_f0 = *(ulonglong *)(puVar17 + 0xe);
    uStack_e8 = *(undefined8 *)(puVar17 + 0x10);
    local_e0 = *(undefined8 *)(puVar17 + 0x12);
    local_d8 = *(ulonglong *)(puVar17 + 0x14);
    *(undefined8 *)(puVar17 + 0x12) = 0;
    *(undefined8 *)(puVar17 + 0x14) = 0xf;
    *(undefined1 *)(puVar17 + 0xe) = 0;
    local_d0 = *(ulonglong *)(puVar17 + 0x16);
    uStack_c8 = *(undefined8 *)(puVar17 + 0x18);
    local_c0 = *(undefined8 *)(puVar17 + 0x1a);
    local_b8 = *(ulonglong *)(puVar17 + 0x1c);
    *(undefined8 *)(puVar17 + 0x1a) = 0;
    *(undefined8 *)(puVar17 + 0x1c) = 0xf;
    *(undefined1 *)(puVar17 + 0x16) = 0;
    local_a8 = puVar17[0x20];
    local_b0 = *(undefined8 *)(puVar17 + 0x1e);
    cVar8 = (*param_4)(&local_128,param_1);
    if (cVar8 == '\0') {
      cVar8 = (*param_4)(&local_128,puVar17 + -0x22);
      puVar10 = puVar17 + -0x22;
      puVar11 = puVar17;
      while (puVar15 = puVar10, cVar8 != '\0') {
        *puVar11 = *puVar15;
        puVar11[1] = puVar15[1];
        puVar11[2] = puVar15[2];
        puVar11[3] = puVar15[3];
        puVar11[4] = puVar15[4];
        puVar11[5] = puVar15[5];
        FUN_14000df10(puVar11 + 6,puVar15 + 6);
        FUN_14000df10(puVar11 + 0xe,puVar15 + 0xe);
        FUN_14000df10(puVar11 + 0x16,puVar15 + 0x16);
        *(undefined8 *)(puVar11 + 0x1e) = *(undefined8 *)(puVar15 + 0x1e);
        puVar11[0x20] = puVar15[0x20];
        cVar8 = (*param_4)(&local_128,puVar15 + -0x22);
        puVar10 = puVar15 + -0x22;
        puVar11 = puVar15;
      }
      *puVar11 = local_128;
      puVar11[1] = local_124;
      puVar11[2] = local_120;
      puVar11[3] = local_11c;
      puVar11[4] = local_118;
      puVar11[5] = local_114;
      FUN_14000df10(puVar11 + 6,&local_110);
      FUN_14000df10(puVar11 + 0xe,&local_f0);
      FUN_14000df10(puVar11 + 0x16,&local_d0);
      puVar11[0x20] = local_a8;
      *(undefined8 *)(puVar11 + 0x1e) = local_b0;
    }
    else {
      puVar11 = puVar17;
      local_138 = puVar17 + 0x22;
      if (puVar17 != param_1) {
        do {
          local_58 = puVar11 + -0x22;
          local_98 = local_138;
          local_80 = local_138;
          local_70 = local_138;
          local_138[-0x22] = *local_58;
          local_138[-0x21] = puVar11[-0x21];
          local_138[-0x20] = puVar11[-0x20];
          local_138[-0x1f] = puVar11[-0x1f];
          local_138[-0x1e] = puVar11[-0x1e];
          local_138[-0x1d] = puVar11[-0x1d];
          FUN_14000df10(local_138 + -0x1c,puVar11 + -0x1c,puVar11,local_138);
          FUN_14000df10(local_98 + -0x14,puVar11 + -0x14);
          FUN_14000df10(local_80 + -0xc,puVar11 + -0xc);
          *(undefined8 *)(local_70 + -4) = *(undefined8 *)(puVar11 + -4);
          local_70[-2] = puVar11[-2];
          puVar11 = local_58;
          param_1 = local_res8;
          local_138 = local_138 + -0x22;
        } while (local_58 != local_res8);
      }
      *param_1 = local_128;
      param_1[1] = local_124;
      param_1[2] = local_120;
      param_1[3] = local_11c;
      param_1[4] = local_118;
      param_1[5] = local_114;
      FUN_14000df10(param_1 + 6,&local_110);
      FUN_14000df10(param_1 + 0xe,&local_f0);
      FUN_14000df10(param_1 + 0x16,&local_d0);
      param_1[0x20] = local_a8;
      *(undefined8 *)(param_1 + 0x1e) = local_b0;
    }
    if (0xf < local_b8) {
      uVar12 = local_b8 + 1;
      uVar13 = local_d0;
      if (0xfff < uVar12) {
        uVar13 = *(ulonglong *)(local_d0 - 8);
        if (0x1f < (local_d0 - uVar13) - 8) goto LAB_140132234;
        uVar12 = local_b8 + 0x28;
      }
      func_0x00014028b040(uVar13,uVar12);
    }
    local_c0 = 0;
    local_b8 = 0xf;
    local_d0 = local_d0 & 0xffffffffffffff00;
    if (0xf < local_d8) {
      uVar12 = local_d8 + 1;
      uVar13 = local_f0;
      if (0xfff < uVar12) {
        uVar13 = *(ulonglong *)(local_f0 - 8);
        if (0x1f < (local_f0 - uVar13) - 8) goto LAB_140132234;
        uVar12 = local_d8 + 0x28;
      }
      func_0x00014028b040(uVar13,uVar12);
      return;
    }
    local_e0 = 0;
    local_d8 = 0xf;
    local_f0 = local_f0 & 0xffffffffffffff00;
  } while (local_f8 < 0x10);
  uVar13 = local_f8 + 1;
  lVar9 = local_110;
  if (0xfff < uVar13) {
    lVar9 = *(longlong *)(local_110 + -8);
    if (0x1f < (local_110 - lVar9) - 8U) {
LAB_140132234:
      pcVar7 = (code *)swi(0x29);
      (*pcVar7)(5);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar13 = local_f8 + 0x28;
  }
  func_0x00014028b040(lVar9,uVar13);
  return;
LAB_140131de0:
  if (1 < ((longlong)param_2 - (longlong)param_1 >> 3) * -0xf0f0f0f0f0f0f0f) {
    puVar17 = param_2 + -0x22;
    local_128 = *puVar17;
    local_124 = param_2[-0x21];
    local_120 = param_2[-0x20];
    local_11c = param_2[-0x1f];
    local_118 = param_2[-0x1e];
    local_114 = param_2[-0x1d];
    local_110 = *(longlong *)(param_2 + -0x1c);
    uStack_108 = *(undefined8 *)(param_2 + -0x1a);
    local_100 = *(undefined8 *)(param_2 + -0x18);
    local_f8 = *(ulonglong *)(param_2 + -0x16);
    *(undefined8 *)(param_2 + -0x18) = 0;
    *(undefined8 *)(param_2 + -0x16) = 0xf;
    *(undefined1 *)(param_2 + -0x1c) = 0;
    local_f0 = *(ulonglong *)(param_2 + -0x14);
    uStack_e8 = *(undefined8 *)(param_2 + -0x12);
    local_e0 = *(undefined8 *)(param_2 + -0x10);
    local_d8 = *(ulonglong *)(param_2 + -0xe);
    *(undefined8 *)(param_2 + -0x10) = 0;
    *(undefined8 *)(param_2 + -0xe) = 0xf;
    *(undefined1 *)(param_2 + -0x14) = 0;
    local_d0 = *(ulonglong *)(param_2 + -0xc);
    uStack_c8 = *(undefined8 *)(param_2 + -10);
    local_c0 = *(undefined8 *)(param_2 + -8);
    local_b8 = *(ulonglong *)(param_2 + -6);
    *(undefined8 *)(param_2 + -8) = 0;
    *(undefined8 *)(param_2 + -6) = 0xf;
    *(undefined1 *)(param_2 + -0xc) = 0;
    local_a8 = param_2[-2];
    local_b0 = *(undefined8 *)(param_2 + -4);
    FUN_140132c10(puVar17,param_1);
    FUN_140133b20(param_1,0,((longlong)puVar17 - (longlong)param_1 >> 3) * -0xf0f0f0f0f0f0f0f,
                  &local_128,param_4);
    if (0xf < local_b8) {
      uVar12 = local_b8 + 1;
      uVar13 = local_d0;
      if (0xfff < uVar12) {
        uVar13 = *(ulonglong *)(local_d0 - 8);
        if (0x1f < (local_d0 - uVar13) - 8) goto LAB_140132234;
        uVar12 = local_b8 + 0x28;
      }
      func_0x00014028b040(uVar13,uVar12);
      return;
    }
    local_c0 = 0;
    local_b8 = 0xf;
    local_d0 = local_d0 & 0xffffffffffffff00;
    if (0xf < local_d8) {
      uVar12 = local_d8 + 1;
      uVar13 = local_f0;
      if (0xfff < uVar12) {
        uVar13 = *(ulonglong *)(local_f0 - 8);
        if (0x1f < (local_f0 - uVar13) - 8) goto LAB_140132234;
        uVar12 = local_d8 + 0x28;
      }
      func_0x00014028b040(uVar13,uVar12);
      return;
    }
    local_e0 = 0;
    local_d8 = 0xf;
    local_f0 = local_f0 & 0xffffffffffffff00;
    if (0xf < local_f8) {
      uVar13 = local_f8 + 1;
      lVar9 = local_110;
      if (0xfff < uVar13) {
        lVar9 = *(longlong *)(local_110 + -8);
        if (0x1f < (local_110 - lVar9) - 8U) goto LAB_140132234;
        uVar13 = local_f8 + 0x28;
      }
      func_0x00014028b040(lVar9,uVar13);
      return;
    }
  }
  param_2 = param_2 + -0x22;
  if ((longlong)param_2 - (longlong)param_1 < 0x110) {
    return;
  }
  goto LAB_140131de0;
  while( true ) {
    local_c0 = 0;
    local_b8 = 0xf;
    local_d0 = local_d0 & 0xffffffffffffff00;
    if (0xf < local_d8) {
      uVar12 = local_d8 + 1;
      uVar13 = local_f0;
      if (0xfff < uVar12) {
        uVar13 = *(ulonglong *)(local_f0 - 8);
        if (0x1f < (local_f0 - uVar13) - 8) goto LAB_140132234;
        uVar12 = local_d8 + 0x28;
      }
      func_0x00014028b040(uVar13,uVar12);
      return;
    }
    local_e0 = 0;
    local_d8 = 0xf;
    local_f0 = local_f0 & 0xffffffffffffff00;
    lVar14 = lVar14 + -1;
    if (0xf < local_f8) break;
joined_r0x000140131b9f:
    if (lVar14 < 1) {
      if (lVar9 < 2) {
        return;
      }
      goto LAB_140131de0;
    }
    local_128 = param_1[lVar14 * 0x22 + -0x22];
    local_124 = param_1[lVar14 * 0x22 + -0x21];
    local_120 = param_1[lVar14 * 0x22 + -0x20];
    local_11c = param_1[lVar14 * 0x22 + -0x1f];
    local_118 = param_1[lVar14 * 0x22 + -0x1e];
    local_114 = param_1[lVar14 * 0x22 + -0x1d];
    local_110 = *(longlong *)(param_1 + lVar14 * 0x22 + -0x1c);
    uStack_108 = *(undefined8 *)(param_1 + lVar14 * 0x22 + -0x1a);
    local_100 = *(undefined8 *)(param_1 + lVar14 * 0x22 + -0x18);
    local_f8 = *(ulonglong *)(param_1 + lVar14 * 0x22 + -0x16);
    *(undefined8 *)(param_1 + lVar14 * 0x22 + -0x18) = 0;
    *(undefined8 *)(param_1 + lVar14 * 0x22 + -0x16) = 0xf;
    *(undefined1 *)(param_1 + lVar14 * 0x22 + -0x1c) = 0;
    local_f0 = *(ulonglong *)(param_1 + lVar14 * 0x22 + -0x14);
    uStack_e8 = *(undefined8 *)(param_1 + lVar14 * 0x22 + -0x12);
    local_e0 = *(undefined8 *)(param_1 + lVar14 * 0x22 + -0x10);
    local_d8 = *(ulonglong *)(param_1 + lVar14 * 0x22 + -0xe);
    *(undefined8 *)(param_1 + lVar14 * 0x22 + -0x10) = 0;
    *(undefined8 *)(param_1 + lVar14 * 0x22 + -0xe) = 0xf;
    *(undefined1 *)(param_1 + lVar14 * 0x22 + -0x14) = 0;
    local_d0 = *(ulonglong *)(param_1 + lVar14 * 0x22 + -0xc);
    uStack_c8 = *(undefined8 *)(param_1 + lVar14 * 0x22 + -10);
    local_c0 = *(undefined8 *)(param_1 + lVar14 * 0x22 + -8);
    local_b8 = *(ulonglong *)(param_1 + lVar14 * 0x22 + -6);
    *(undefined8 *)(param_1 + lVar14 * 0x22 + -8) = 0;
    *(undefined8 *)(param_1 + lVar14 * 0x22 + -6) = 0xf;
    *(undefined1 *)(param_1 + lVar14 * 0x22 + -0xc) = 0;
    local_a8 = param_1[lVar14 * 0x22 + -2];
    local_b0 = *(undefined8 *)(param_1 + lVar14 * 0x22 + -4);
    FUN_140133b20(param_1,lVar14 + -1,lVar9,&local_128,param_4);
    if (0xf < local_b8) {
      uVar12 = local_b8 + 1;
      uVar13 = local_d0;
      if (0xfff < uVar12) {
        uVar13 = *(ulonglong *)(local_d0 - 8);
        if (0x1f < (local_d0 - uVar13) - 8) goto LAB_140132234;
        uVar12 = local_b8 + 0x28;
      }
      func_0x00014028b040(uVar13,uVar12);
      return;
    }
  }
  uVar13 = local_f8 + 1;
  lVar9 = local_110;
  if (0xfff < uVar13) {
    lVar9 = *(longlong *)(local_110 + -8);
    if (0x1f < (local_110 - lVar9) - 8U) goto LAB_140132234;
    uVar13 = local_f8 + 0x28;
  }
  func_0x00014028b040(lVar9,uVar13);
  return;
}

