// Function: FUN_140228440
// Addr: 140228440
// Size: 1726 bytes


void FUN_140228440(undefined8 *param_1,undefined8 *param_2,longlong param_3,code *param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  char cVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  longlong lVar17;
  longlong lVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *local_res10;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  lVar10 = (longlong)param_2 - (longlong)param_1;
  puVar20 = param_2;
joined_r0x000140228476:
  if (lVar10 < 0x318) {
    if (param_1 != puVar20) {
      for (puVar16 = param_1 + 3; puVar16 != puVar20; puVar16 = puVar16 + 3) {
        local_50 = *puVar16;
        uStack_48 = puVar16[1];
        local_40 = puVar16[2];
        cVar9 = (*param_4)(&local_50,param_1);
        if (cVar9 == '\0') {
          cVar9 = (*param_4)(&local_50,puVar16 + -3);
          puVar11 = puVar16 + -3;
          puVar12 = puVar16;
          while (puVar19 = puVar11, cVar9 != '\0') {
            uVar2 = *(undefined4 *)((longlong)puVar19 + 4);
            uVar3 = *(undefined4 *)(puVar19 + 1);
            uVar4 = *(undefined4 *)((longlong)puVar19 + 0xc);
            *(undefined4 *)puVar12 = *(undefined4 *)puVar19;
            *(undefined4 *)((longlong)puVar12 + 4) = uVar2;
            *(undefined4 *)(puVar12 + 1) = uVar3;
            *(undefined4 *)((longlong)puVar12 + 0xc) = uVar4;
            puVar12[2] = puVar19[2];
            cVar9 = (*param_4)(&local_50,puVar19 + -3);
            puVar11 = puVar19 + -3;
            puVar12 = puVar19;
          }
          *puVar12 = local_50;
          puVar12[1] = uStack_48;
          puVar12[2] = local_40;
        }
        else {
          FUN_1404210f0(param_1 + 3,param_1,(longlong)puVar16 - (longlong)param_1);
          *param_1 = local_50;
          param_1[1] = uStack_48;
          param_1[2] = local_40;
        }
      }
    }
  }
  else {
    lVar10 = ((longlong)puVar20 - (longlong)param_1) / 6 +
             ((longlong)puVar20 - (longlong)param_1 >> 0x3f);
    uVar15 = (lVar10 >> 2) - (lVar10 >> 0x3f);
    lVar10 = (longlong)uVar15 >> 1;
    if (0 < param_3) {
      lVar17 = ((longlong)puVar20 + (-0x18 - (longlong)param_1) >> 3) * -0x5555555555555555;
      puVar16 = param_1 + lVar10 * 3;
      if (lVar17 < 0x29) {
        puVar12 = puVar20 + -3;
        puVar11 = param_1;
      }
      else {
        lVar17 = lVar17 + 1 >> 3;
        FUN_140229020(param_1,param_1 + lVar17 * 3,param_1 + lVar17 * 6,param_4);
        FUN_140229020(puVar16 + lVar17 * -3,puVar16,param_1 + (lVar10 + lVar17) * 3,param_4);
        puVar12 = puVar20 + lVar17 * -3 + -3;
        FUN_140229020(puVar20 + lVar17 * -6 + -3,puVar12,puVar20 + -3,param_4);
        puVar11 = param_1 + lVar17 * 3;
      }
      FUN_140229020(puVar11,puVar16,puVar12,param_4);
      puVar12 = puVar16;
      while (puVar11 = puVar12, param_1 < puVar11) {
        puVar12 = puVar11 + -3;
        cVar9 = (*param_4)(puVar12,puVar11);
        if ((cVar9 != '\0') || (cVar9 = (*param_4)(puVar11,puVar12), cVar9 != '\0')) break;
      }
      do {
        puVar16 = puVar16 + 3;
        puVar12 = puVar16;
        puVar19 = puVar11;
        if (puVar20 <= puVar16) goto joined_r0x0001402285e3;
        cVar9 = (*param_4)(puVar16,puVar11);
        if ((cVar9 != '\0') || (cVar9 = (*param_4)(puVar11,puVar16), cVar9 != '\0'))
        goto joined_r0x0001402285e3;
      } while( true );
    }
    if (0 < lVar10) {
      lVar17 = (longlong)(uVar15 - 1) >> 1;
      do {
        lVar14 = lVar10 + -1;
        local_40 = param_1[lVar10 * 3 + -1];
        local_50 = param_1[lVar10 * 3 + -3];
        uStack_48 = (param_1 + lVar10 * 3 + -3)[1];
        lVar10 = lVar14;
        while (lVar10 < lVar17) {
          cVar9 = (*param_4)(param_1 + lVar10 * 6 + 6,param_1 + lVar10 * 6 + 3);
          lVar18 = (2 - (ulonglong)(cVar9 != '\0')) + lVar10 * 2;
          puVar20 = param_1 + lVar18 * 3;
          uVar2 = *(undefined4 *)((longlong)puVar20 + 4);
          uVar3 = *(undefined4 *)(puVar20 + 1);
          uVar4 = *(undefined4 *)((longlong)puVar20 + 0xc);
          puVar16 = param_1 + lVar10 * 3;
          *(undefined4 *)puVar16 = *(undefined4 *)puVar20;
          *(undefined4 *)((longlong)puVar16 + 4) = uVar2;
          *(undefined4 *)(puVar16 + 1) = uVar3;
          *(undefined4 *)((longlong)puVar16 + 0xc) = uVar4;
          param_1[lVar10 * 3 + 2] = param_1[lVar18 * 3 + 2];
          lVar10 = lVar18;
        }
        if ((lVar10 == lVar17) && ((uVar15 & 1) == 0)) {
          puVar16 = param_1 + uVar15 * 3 + -3;
          uVar2 = *(undefined4 *)((longlong)puVar16 + 4);
          uVar3 = *(undefined4 *)(puVar16 + 1);
          uVar4 = *(undefined4 *)((longlong)puVar16 + 0xc);
          puVar20 = param_1 + lVar10 * 3;
          *(undefined4 *)puVar20 = *(undefined4 *)puVar16;
          *(undefined4 *)((longlong)puVar20 + 4) = uVar2;
          *(undefined4 *)(puVar20 + 1) = uVar3;
          *(undefined4 *)((longlong)puVar20 + 0xc) = uVar4;
          param_1[lVar10 * 3 + 2] = param_1[uVar15 * 3 + -1];
          lVar10 = uVar15 - 1;
        }
        while (lVar14 < lVar10) {
          lVar18 = lVar10 + -1 >> 1;
          puVar20 = param_1 + lVar18 * 3;
          cVar9 = (*param_4)(puVar20,&local_50);
          if (cVar9 == '\0') break;
          uVar2 = *(undefined4 *)((longlong)puVar20 + 4);
          uVar3 = *(undefined4 *)(puVar20 + 1);
          uVar4 = *(undefined4 *)((longlong)puVar20 + 0xc);
          puVar16 = param_1 + lVar10 * 3;
          *(undefined4 *)puVar16 = *(undefined4 *)puVar20;
          *(undefined4 *)((longlong)puVar16 + 4) = uVar2;
          *(undefined4 *)(puVar16 + 1) = uVar3;
          *(undefined4 *)((longlong)puVar16 + 0xc) = uVar4;
          param_1[lVar10 * 3 + 2] = puVar20[2];
          lVar10 = lVar18;
        }
        param_1[lVar10 * 3] = local_50;
        (param_1 + lVar10 * 3)[1] = uStack_48;
        param_1[lVar10 * 3 + 2] = local_40;
        lVar10 = lVar14;
        puVar20 = param_2;
      } while (0 < lVar14);
    }
    if (1 < (longlong)uVar15) {
      do {
        if (1 < ((longlong)puVar20 - (longlong)param_1 >> 3) * -0x5555555555555555) {
          local_50 = puVar20[-3];
          uStack_48 = puVar20[-2];
          local_40 = puVar20[-1];
          uVar2 = *(undefined4 *)((longlong)param_1 + 4);
          uVar3 = *(undefined4 *)(param_1 + 1);
          uVar4 = *(undefined4 *)((longlong)param_1 + 0xc);
          *(undefined4 *)(puVar20 + -3) = *(undefined4 *)param_1;
          *(undefined4 *)((longlong)puVar20 + -0x14) = uVar2;
          *(undefined4 *)(puVar20 + -2) = uVar3;
          *(undefined4 *)((longlong)puVar20 + -0xc) = uVar4;
          puVar20[-1] = param_1[2];
          FUN_140228ef0(param_1,0,
                        ((longlong)(puVar20 + -3) - (longlong)param_1 >> 3) * -0x5555555555555555,
                        &local_50,param_4);
        }
        puVar20 = puVar20 + -3;
      } while (0x2f < (longlong)puVar20 - (longlong)param_1);
    }
  }
  return;
joined_r0x0001402285e3:
  if (puVar12 < puVar20) {
    cVar9 = (*param_4)(puVar19,puVar12);
    if (cVar9 == '\0') {
      cVar9 = (*param_4)(puVar12,puVar19);
      if (cVar9 != '\0') goto joined_r0x000140228634;
      if (puVar16 != puVar12) {
        uVar2 = *(undefined4 *)((longlong)puVar12 + 4);
        uVar3 = *(undefined4 *)(puVar12 + 1);
        uVar4 = *(undefined4 *)((longlong)puVar12 + 0xc);
        uVar5 = *puVar16;
        uVar6 = puVar16[1];
        uVar1 = puVar16[2];
        *(undefined4 *)puVar16 = *(undefined4 *)puVar12;
        *(undefined4 *)((longlong)puVar16 + 4) = uVar2;
        *(undefined4 *)(puVar16 + 1) = uVar3;
        *(undefined4 *)((longlong)puVar16 + 0xc) = uVar4;
        puVar16[2] = puVar12[2];
        *puVar12 = uVar5;
        puVar12[1] = uVar6;
        puVar12[2] = uVar1;
      }
      puVar16 = puVar16 + 3;
    }
    puVar12 = puVar12 + 3;
    goto joined_r0x0001402285e3;
  }
joined_r0x000140228634:
  while (puVar8 = puVar11, param_1 < puVar8) {
    puVar11 = puVar8 + -3;
    cVar9 = (*param_4)(puVar11,puVar19);
    if (cVar9 == '\0') {
      cVar9 = (*param_4)(puVar19,puVar11);
      if (cVar9 != '\0') break;
      if (puVar8 != puVar19) {
        uVar2 = *(undefined4 *)((longlong)puVar8 + -0x14);
        uVar3 = *(undefined4 *)(puVar8 + -2);
        uVar4 = *(undefined4 *)((longlong)puVar8 + -0xc);
        uVar5 = puVar19[-3];
        uVar6 = puVar19[-2];
        uVar1 = puVar19[-1];
        *(undefined4 *)(puVar19 + -3) = *(undefined4 *)puVar11;
        *(undefined4 *)((longlong)puVar19 + -0x14) = uVar2;
        *(undefined4 *)(puVar19 + -2) = uVar3;
        *(undefined4 *)((longlong)puVar19 + -0xc) = uVar4;
        puVar19[-1] = puVar8[-1];
        *puVar11 = uVar5;
        puVar8[-2] = uVar6;
        puVar8[-1] = uVar1;
      }
      puVar19 = puVar19 + -3;
    }
  }
  if (puVar8 != param_1) {
    puVar11 = puVar8 + -3;
    if (puVar12 == puVar20) {
      puVar13 = puVar19 + -3;
      if (puVar19 != puVar8) {
        uVar5 = puVar19[-2];
        uVar6 = *puVar11;
        uVar7 = puVar8[-2];
        uVar1 = puVar8[-1];
        *puVar11 = *puVar13;
        puVar8[-2] = uVar5;
        puVar8[-1] = puVar19[-1];
        *puVar13 = uVar6;
        puVar19[-2] = uVar7;
        puVar19[-1] = uVar1;
      }
      uVar2 = *(undefined4 *)((longlong)puVar16 + -0x14);
      uVar3 = *(undefined4 *)(puVar16 + -2);
      uVar4 = *(undefined4 *)((longlong)puVar16 + -0xc);
      uVar5 = *puVar13;
      uVar6 = puVar19[-2];
      uVar1 = puVar19[-1];
      *(undefined4 *)puVar13 = *(undefined4 *)(puVar16 + -3);
      *(undefined4 *)((longlong)puVar19 + -0x14) = uVar2;
      *(undefined4 *)(puVar19 + -2) = uVar3;
      *(undefined4 *)((longlong)puVar19 + -0xc) = uVar4;
      puVar19[-1] = puVar16[-1];
      puVar16[-3] = uVar5;
      puVar16[-2] = uVar6;
      puVar16[-1] = uVar1;
      puVar16 = puVar16 + -3;
      puVar19 = puVar13;
    }
    else {
      uVar5 = *puVar12;
      uVar6 = puVar12[1];
      uVar1 = puVar12[2];
      uVar2 = *(undefined4 *)((longlong)puVar8 + -0x14);
      uVar3 = *(undefined4 *)(puVar8 + -2);
      uVar4 = *(undefined4 *)((longlong)puVar8 + -0xc);
      *(undefined4 *)puVar12 = *(undefined4 *)puVar11;
      *(undefined4 *)((longlong)puVar12 + 4) = uVar2;
      *(undefined4 *)(puVar12 + 1) = uVar3;
      *(undefined4 *)((longlong)puVar12 + 0xc) = uVar4;
      puVar12[2] = puVar8[-1];
      *puVar11 = uVar5;
      puVar8[-2] = uVar6;
      puVar8[-1] = uVar1;
      puVar12 = puVar12 + 3;
    }
    goto joined_r0x0001402285e3;
  }
  if (puVar12 != puVar20) {
    if (puVar16 != puVar12) {
      uVar5 = puVar16[1];
      uVar6 = *puVar19;
      uVar7 = puVar19[1];
      uVar1 = puVar19[2];
      *puVar19 = *puVar16;
      puVar19[1] = uVar5;
      puVar19[2] = puVar16[2];
      *puVar16 = uVar6;
      puVar16[1] = uVar7;
      puVar16[2] = uVar1;
    }
    uVar2 = *(undefined4 *)((longlong)puVar12 + 4);
    uVar3 = *(undefined4 *)(puVar12 + 1);
    uVar4 = *(undefined4 *)((longlong)puVar12 + 0xc);
    uVar5 = *puVar19;
    uVar6 = puVar19[1];
    uVar1 = puVar19[2];
    *(undefined4 *)puVar19 = *(undefined4 *)puVar12;
    *(undefined4 *)((longlong)puVar19 + 4) = uVar2;
    *(undefined4 *)(puVar19 + 1) = uVar3;
    *(undefined4 *)((longlong)puVar19 + 0xc) = uVar4;
    puVar19[2] = puVar12[2];
    *puVar12 = uVar5;
    puVar12[1] = uVar6;
    puVar12[2] = uVar1;
    puVar16 = puVar16 + 3;
    puVar12 = puVar12 + 3;
    puVar11 = puVar8;
    puVar19 = puVar19 + 3;
    goto joined_r0x0001402285e3;
  }
  param_3 = (param_3 >> 1) + (param_3 >> 2);
  puVar12 = puVar16;
  puVar11 = puVar20;
  local_res10 = puVar19;
  if (((longlong)puVar19 - (longlong)param_1 >> 3) * -0x5555555555555555 <
      ((longlong)puVar20 - (longlong)puVar16 >> 3) * -0x5555555555555555) {
    puVar12 = param_1;
    puVar11 = puVar19;
    param_1 = puVar16;
    puVar19 = puVar20;
    local_res10 = param_2;
  }
  FUN_140228440(puVar12,puVar11,param_3,param_4);
  lVar10 = (longlong)puVar19 - (longlong)param_1;
  puVar20 = puVar19;
  param_2 = local_res10;
  goto joined_r0x000140228476;
}

