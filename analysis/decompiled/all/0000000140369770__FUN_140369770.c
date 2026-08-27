// Function: FUN_140369770
// Addr: 140369770
// Size: 1140 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140369770(uint *param_1,uint *param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  uint *puVar11;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint *puVar16;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  uint *local_a8;
  uint *local_a0;
  uint *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  uint local_70;
  ulonglong local_68;
  uint *puVar12;
  
  local_68 = DAT_1404dc040 ^ (ulonglong)auStack_d8;
  lVar10 = (longlong)param_2 - (longlong)param_1;
  while( true ) {
    if (lVar10 < 0x4a4) {
      if (param_1 != param_2) {
        for (puVar16 = param_1 + 9; puVar16 != param_2; puVar16 = puVar16 + 9) {
          uVar2 = *puVar16;
          uVar5 = *(undefined8 *)(puVar16 + 1);
          uVar6 = *(undefined8 *)(puVar16 + 3);
          uVar7 = *(undefined8 *)(puVar16 + 5);
          uVar8 = *(undefined8 *)(puVar16 + 7);
          puVar11 = puVar16;
          if (uVar2 < *param_1) {
            FUN_1404210f0(param_1 + 9,param_1,(longlong)puVar16 - (longlong)param_1);
            *(undefined8 *)(param_1 + 1) = uVar5;
            *(undefined8 *)(param_1 + 3) = uVar6;
            *param_1 = uVar2;
            *(undefined8 *)(param_1 + 5) = uVar7;
            *(undefined8 *)(param_1 + 7) = uVar8;
          }
          else {
            while (puVar12 = puVar11 + -9, uVar2 < *puVar12) {
              *puVar11 = *puVar12;
              puVar11[1] = puVar11[-8];
              puVar11[2] = puVar11[-7];
              puVar11[3] = puVar11[-6];
              *(undefined8 *)(puVar11 + 4) = *(undefined8 *)(puVar11 + -5);
              *(undefined8 *)(puVar11 + 6) = *(undefined8 *)(puVar11 + -3);
              puVar11[8] = puVar11[-1];
              puVar11 = puVar12;
            }
            *(undefined8 *)(puVar11 + 1) = uVar5;
            *(undefined8 *)(puVar11 + 3) = uVar6;
            *puVar11 = uVar2;
            *(undefined8 *)(puVar11 + 5) = uVar7;
            *(undefined8 *)(puVar11 + 7) = uVar8;
          }
        }
      }
      return;
    }
    lVar10 = ((longlong)param_2 - (longlong)param_1) / 0x12 +
             ((longlong)param_2 - (longlong)param_1 >> 0x3f);
    uVar15 = (lVar10 >> 1) - (lVar10 >> 0x3f);
    lVar10 = (longlong)uVar15 >> 1;
    if (param_3 < 1) break;
    puVar16 = param_2 + -9;
    puVar11 = param_1 + lVar10 * 9;
    lVar10 = ((longlong)puVar16 - (longlong)param_1) / 0x24;
    local_a8 = puVar11;
    if (lVar10 < 0x29) {
      FUN_140364ed0(param_1,puVar11,puVar16,param_4);
    }
    else {
      lVar10 = lVar10 + 1 >> 3;
      FUN_140364ed0(param_1,param_1 + lVar10 * 9,param_1 + lVar10 * 0x12,param_4);
      FUN_140364ed0(local_a8 + lVar10 * -9,local_a8,local_a8 + lVar10 * 9,param_4);
      FUN_140364ed0(param_2 + -9 + lVar10 * -0x12,puVar16 + lVar10 * -9,param_2 + -9,param_4);
      puVar11 = local_a8;
      FUN_140364ed0(param_1 + lVar10 * 9,local_a8,puVar16 + lVar10 * -9,param_4);
    }
    local_b8 = param_4;
    FUN_140366a20(&local_a0,param_1,puVar11,param_2);
    puVar11 = local_98;
    puVar16 = local_a0;
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    lVar10 = ((longlong)param_2 - (longlong)local_98) / 0x12 +
             ((longlong)param_2 - (longlong)local_98 >> 0x3f);
    if (((longlong)local_a0 - (longlong)param_1) / 0x24 < (lVar10 >> 1) - (lVar10 >> 0x3f)) {
      FUN_140369770(param_1,local_a0,param_3,param_4);
      param_1 = puVar11;
      puVar16 = param_2;
    }
    else {
      FUN_140369770(local_98,param_2,param_3,param_4);
    }
    lVar10 = (longlong)puVar16 - (longlong)param_1;
    param_2 = puVar16;
  }
  if (0 < lVar10) {
    lVar13 = (longlong)(uVar15 - 1) >> 1;
    do {
      lVar10 = lVar10 + -1;
      uVar2 = param_1[lVar10 * 9];
      uVar5 = *(undefined8 *)(param_1 + lVar10 * 9 + 1);
      uVar6 = *(undefined8 *)(param_1 + lVar10 * 9 + 1 + 2);
      uVar7 = *(undefined8 *)(param_1 + lVar10 * 9 + 5);
      uVar8 = *(undefined8 *)(param_1 + lVar10 * 9 + 5 + 2);
      lVar1 = lVar10;
      while (lVar1 < lVar13) {
        lVar14 = lVar1 * 2 + 2;
        if (param_1[lVar14 * 9] < param_1[lVar14 * 9 + -9]) {
          lVar14 = lVar1 * 2 + 1;
        }
        puVar16 = param_1 + lVar1 * 9;
        uVar9 = *(undefined8 *)(param_1 + lVar14 * 9 + 2);
        *(undefined8 *)puVar16 = *(undefined8 *)(param_1 + lVar14 * 9);
        *(undefined8 *)(puVar16 + 2) = uVar9;
        uVar9 = *(undefined8 *)(param_1 + lVar14 * 9 + 4 + 2);
        *(undefined8 *)(puVar16 + 4) = *(undefined8 *)(param_1 + lVar14 * 9 + 4);
        *(undefined8 *)(puVar16 + 6) = uVar9;
        puVar16[8] = param_1[lVar14 * 9 + 8];
        lVar1 = lVar14;
      }
      if ((lVar1 == lVar13) && ((uVar15 & 1) == 0)) {
        uVar9 = *(undefined8 *)(param_1 + uVar15 * 9 + -9 + 2);
        puVar16 = param_1 + lVar1 * 9;
        *(undefined8 *)puVar16 = *(undefined8 *)(param_1 + uVar15 * 9 + -9);
        *(undefined8 *)(puVar16 + 2) = uVar9;
        lVar1 = uVar15 - 1;
        uVar9 = *(undefined8 *)(param_1 + uVar15 * 9 + -5 + 2);
        *(undefined8 *)(puVar16 + 4) = *(undefined8 *)(param_1 + uVar15 * 9 + -5);
        *(undefined8 *)(puVar16 + 6) = uVar9;
        puVar16[8] = param_1[uVar15 * 9 + -1];
      }
      while (lVar10 < lVar1) {
        lVar14 = lVar1 + -1 >> 1;
        puVar16 = param_1 + lVar14 * 9;
        if (uVar2 <= param_1[lVar14 * 9]) break;
        puVar11 = param_1 + lVar1 * 9;
        uVar9 = *(undefined8 *)(puVar16 + 2);
        *(undefined8 *)puVar11 = *(undefined8 *)puVar16;
        *(undefined8 *)(puVar11 + 2) = uVar9;
        uVar9 = *(undefined8 *)(puVar16 + 6);
        *(undefined8 *)(puVar11 + 4) = *(undefined8 *)(puVar16 + 4);
        *(undefined8 *)(puVar11 + 6) = uVar9;
        puVar11[8] = puVar16[8];
        lVar1 = lVar14;
      }
      param_1[lVar1 * 9] = uVar2;
      *(undefined8 *)(param_1 + lVar1 * 9 + 1) = uVar5;
      *(undefined8 *)(param_1 + lVar1 * 9 + 1 + 2) = uVar6;
      *(undefined8 *)(param_1 + lVar1 * 9 + 5) = uVar7;
      *(undefined8 *)(param_1 + lVar1 * 9 + 5 + 2) = uVar8;
    } while (0 < lVar10);
  }
  if ((longlong)uVar15 < 2) {
    return;
  }
  do {
    puVar16 = param_2 + -9;
    if (1 < ((longlong)param_2 - (longlong)param_1) / 0x24) {
      local_70 = param_2[-1];
      local_90 = *(undefined8 *)puVar16;
      uStack_88 = *(undefined8 *)(param_2 + -7);
      local_80 = *(undefined8 *)(param_2 + -5);
      uStack_78 = *(undefined8 *)(param_2 + -3);
      uVar2 = param_1[1];
      uVar3 = param_1[2];
      uVar4 = param_1[3];
      *puVar16 = *param_1;
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
      FUN_140368150(param_1,0,((longlong)puVar16 - (longlong)param_1) / 0x24,&local_90);
    }
    param_2 = puVar16;
  } while (0x47 < (longlong)puVar16 - (longlong)param_1);
  return;
}

