// Function: FUN_140369840
// Addr: 140369840
// Size: 682 bytes


void FUN_140369840(uint *param_1,uint *param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  uint *puVar12;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint *puVar17;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  uint *local_a8;
  uint *local_a0;
  uint *local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  uint uStack_70;
  ulonglong local_68;
  uint *puVar13;
  
  local_68 = DAT_1404dc110 ^ (ulonglong)auStack_d8;
  lVar11 = (longlong)param_2 - (longlong)param_1;
  do {
    if (lVar11 < 0x4a4) {
      if (param_1 != param_2) {
        for (puVar17 = param_1 + 9; puVar17 != param_2; puVar17 = puVar17 + 9) {
          uVar2 = *puVar17;
          uVar6 = *(undefined8 *)(puVar17 + 1);
          uVar7 = *(undefined8 *)(puVar17 + 3);
          uVar8 = *(undefined8 *)(puVar17 + 5);
          uVar9 = *(undefined8 *)(puVar17 + 7);
          puVar12 = puVar17;
          if (uVar2 < *param_1) {
                    /* WARNING: Subroutine does not return */
            FUN_1404211c0(param_1 + 9,param_1,(longlong)puVar17 - (longlong)param_1);
          }
          while (puVar13 = puVar12 + -9, uVar2 < *puVar13) {
            *puVar12 = *puVar13;
            puVar12[1] = puVar12[-8];
            puVar12[2] = puVar12[-7];
            puVar12[3] = puVar12[-6];
            *(undefined8 *)(puVar12 + 4) = *(undefined8 *)(puVar12 + -5);
            *(undefined8 *)(puVar12 + 6) = *(undefined8 *)(puVar12 + -3);
            puVar12[8] = puVar12[-1];
            puVar12 = puVar13;
          }
          *(undefined8 *)(puVar12 + 1) = uVar6;
          *(undefined8 *)(puVar12 + 3) = uVar7;
          *puVar12 = uVar2;
          *(undefined8 *)(puVar12 + 5) = uVar8;
          *(undefined8 *)(puVar12 + 7) = uVar9;
        }
      }
LAB_140369c8c:
      func_0x0001402ed2f0(local_68 ^ (ulonglong)auStack_d8);
      return;
    }
    lVar11 = ((longlong)param_2 - (longlong)param_1) / 0x12 +
             ((longlong)param_2 - (longlong)param_1 >> 0x3f);
    uVar16 = (lVar11 >> 1) - (lVar11 >> 0x3f);
    lVar11 = (longlong)uVar16 >> 1;
    if (param_3 < 1) {
      if (0 < lVar11) {
        lVar14 = (longlong)(uVar16 - 1) >> 1;
        do {
          lVar11 = lVar11 + -1;
          uVar2 = param_1[lVar11 * 9];
          uVar6 = *(undefined8 *)(param_1 + lVar11 * 9 + 1);
          uVar7 = *(undefined8 *)(param_1 + lVar11 * 9 + 1 + 2);
          uVar8 = *(undefined8 *)(param_1 + lVar11 * 9 + 5);
          uVar9 = *(undefined8 *)(param_1 + lVar11 * 9 + 5 + 2);
          lVar1 = lVar11;
          while (lVar1 < lVar14) {
            lVar15 = lVar1 * 2 + 2;
            if (param_1[lVar15 * 9] < param_1[lVar15 * 9 + -9]) {
              lVar15 = lVar1 * 2 + 1;
            }
            puVar17 = param_1 + lVar1 * 9;
            puVar12 = param_1 + lVar15 * 9;
            uVar3 = puVar12[1];
            uVar4 = puVar12[2];
            uVar5 = puVar12[3];
            *puVar17 = *puVar12;
            puVar17[1] = uVar3;
            puVar17[2] = uVar4;
            puVar17[3] = uVar5;
            uVar10 = *(undefined8 *)(param_1 + lVar15 * 9 + 4 + 2);
            *(undefined8 *)(puVar17 + 4) = *(undefined8 *)(param_1 + lVar15 * 9 + 4);
            *(undefined8 *)(puVar17 + 6) = uVar10;
            puVar17[8] = param_1[lVar15 * 9 + 8];
            lVar1 = lVar15;
          }
          if ((lVar1 == lVar14) && ((uVar16 & 1) == 0)) {
            puVar12 = param_1 + uVar16 * 9 + -9;
            uVar3 = puVar12[1];
            uVar4 = puVar12[2];
            uVar5 = puVar12[3];
            puVar17 = param_1 + lVar1 * 9;
            *puVar17 = *puVar12;
            puVar17[1] = uVar3;
            puVar17[2] = uVar4;
            puVar17[3] = uVar5;
            lVar1 = uVar16 - 1;
            uVar10 = *(undefined8 *)(param_1 + uVar16 * 9 + -5 + 2);
            *(undefined8 *)(puVar17 + 4) = *(undefined8 *)(param_1 + uVar16 * 9 + -5);
            *(undefined8 *)(puVar17 + 6) = uVar10;
            puVar17[8] = param_1[uVar16 * 9 + -1];
          }
          while (lVar11 < lVar1) {
            lVar15 = lVar1 + -1 >> 1;
            puVar17 = param_1 + lVar15 * 9;
            if (uVar2 <= param_1[lVar15 * 9]) break;
            puVar12 = param_1 + lVar1 * 9;
            uVar3 = puVar17[1];
            uVar4 = puVar17[2];
            uVar5 = puVar17[3];
            *puVar12 = *puVar17;
            puVar12[1] = uVar3;
            puVar12[2] = uVar4;
            puVar12[3] = uVar5;
            uVar10 = *(undefined8 *)(puVar17 + 6);
            *(undefined8 *)(puVar12 + 4) = *(undefined8 *)(puVar17 + 4);
            *(undefined8 *)(puVar12 + 6) = uVar10;
            puVar12[8] = puVar17[8];
            lVar1 = lVar15;
          }
          param_1[lVar1 * 9] = uVar2;
          *(undefined8 *)(param_1 + lVar1 * 9 + 1) = uVar6;
          *(undefined8 *)(param_1 + lVar1 * 9 + 1 + 2) = uVar7;
          *(undefined8 *)(param_1 + lVar1 * 9 + 5) = uVar8;
          *(undefined8 *)(param_1 + lVar1 * 9 + 5 + 2) = uVar9;
        } while (0 < lVar11);
      }
      if (1 < (longlong)uVar16) {
        do {
          puVar17 = param_2 + -9;
          if (1 < ((longlong)param_2 - (longlong)param_1) / 0x24) {
            uStack_70 = param_2[-1];
            uStack_90 = *(undefined8 *)puVar17;
            uStack_88 = *(undefined8 *)(param_2 + -7);
            uStack_80 = *(undefined8 *)(param_2 + -5);
            uStack_78 = *(undefined8 *)(param_2 + -3);
            uVar2 = param_1[1];
            uVar3 = param_1[2];
            uVar4 = param_1[3];
            *puVar17 = *param_1;
            param_2[-8] = uVar2;
            param_2[-7] = uVar3;
            param_2[-6] = uVar4;
            uVar2 = param_1[5];
            uVar3 = param_1[6];
            uVar4 = param_1[7];
            param_2[-5] = param_1[4];
            param_2[-4] = uVar2;
            param_2[-3] = uVar3;
            param_2[-2] = uVar4;
            param_2[-1] = param_1[8];
            local_b8 = param_4;
            func_0x000140368220(param_1,0,((longlong)puVar17 - (longlong)param_1) / 0x24,&uStack_90)
            ;
          }
          param_2 = puVar17;
        } while (0x47 < (longlong)puVar17 - (longlong)param_1);
      }
      goto LAB_140369c8c;
    }
    puVar17 = param_2 + -9;
    puVar12 = param_1 + lVar11 * 9;
    lVar11 = ((longlong)puVar17 - (longlong)param_1) / 0x24;
    local_a8 = puVar12;
    if (lVar11 < 0x29) {
      FUN_140364fa0(param_1,puVar12,puVar17,param_4);
    }
    else {
      lVar11 = lVar11 + 1 >> 3;
      FUN_140364fa0(param_1,param_1 + lVar11 * 9,param_1 + lVar11 * 0x12,param_4);
      FUN_140364fa0(local_a8 + lVar11 * -9,local_a8,local_a8 + lVar11 * 9,param_4);
      FUN_140364fa0(param_2 + -9 + lVar11 * -0x12,puVar17 + lVar11 * -9,param_2 + -9,param_4);
      puVar12 = local_a8;
      FUN_140364fa0(param_1 + lVar11 * 9,local_a8,puVar17 + lVar11 * -9,param_4);
    }
    local_b8 = param_4;
    FUN_140366af0(&local_a0,param_1,puVar12,param_2);
    puVar12 = local_98;
    puVar17 = local_a0;
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    lVar11 = ((longlong)param_2 - (longlong)local_98) / 0x12 +
             ((longlong)param_2 - (longlong)local_98 >> 0x3f);
    if (((longlong)local_a0 - (longlong)param_1) / 0x24 < (lVar11 >> 1) - (lVar11 >> 0x3f)) {
      FUN_140369840(param_1,local_a0,param_3,param_4);
      param_1 = puVar12;
      puVar17 = param_2;
    }
    else {
      FUN_140369840(local_98,param_2,param_3,param_4);
    }
    lVar11 = (longlong)puVar17 - (longlong)param_1;
    param_2 = puVar17;
  } while( true );
}

