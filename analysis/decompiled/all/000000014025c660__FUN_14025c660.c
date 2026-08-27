// Function: FUN_14025c660
// Addr: 14025c660
// Size: 2340 bytes


void FUN_14025c660(undefined8 param_1,int param_2,float param_3,longlong *param_4,longlong *param_5)

{
  ushort uVar1;
  float *pfVar2;
  undefined2 *puVar3;
  short *psVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined2 *puVar11;
  short *psVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  undefined2 uVar18;
  short sVar19;
  int iVar20;
  ulonglong uVar21;
  longlong lVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  int local_res10 [2];
  ushort local_res18;
  ushort local_res20;
  undefined1 auStack_118 [8];
  undefined1 auStack_110 [24];
  int local_f8;
  undefined8 local_f0;
  float local_e8;
  uint local_e0;
  longlong local_d8;
  undefined4 local_d0;
  
  puVar13 = auStack_118;
  local_d8 = (ulonglong)(uint)param_3 << 0x20;
  local_d0 = 0;
  local_res10[0] = param_2;
  FUN_1401d85c0(param_4,&local_d8);
  local_d8 = (ulonglong)((uint)param_3 ^ DAT_140492ff0) << 0x20;
  local_d0 = 0;
  FUN_1401d85c0(param_4,&local_d8);
  fVar7 = DAT_140492690;
  fVar6 = DAT_140492658;
  iVar20 = 1;
  lVar22 = (param_4[1] - *param_4 >> 2) * -0x5555555555555555;
  local_d8 = lVar22;
  do {
    iVar15 = 0;
    fVar23 = (float)FUN_14041a9c0((float)iVar20 * fVar6);
    fVar24 = (float)FUN_14041a2e0((float)iVar20 * fVar6);
    do {
      fVar25 = (float)FUN_14041a2e0((float)iVar15 * fVar7);
      fVar25 = fVar25 * fVar23 * param_3;
      local_e8 = (float)FUN_14041a9c0((float)iVar15 * fVar7);
      pfVar2 = (float *)param_4[1];
      local_e8 = local_e8 * fVar23 * param_3;
      local_f0 = CONCAT44(fVar24 * param_3,fVar25);
      if (pfVar2 == (float *)param_4[2]) {
        FUN_1401db5c0(param_4,pfVar2,&local_f0);
      }
      else {
        *pfVar2 = fVar25;
        pfVar2[1] = fVar24 * param_3;
        pfVar2[2] = local_e8;
        param_4[1] = param_4[1] + 0xc;
      }
      iVar15 = iVar15 + 1;
    } while (iVar15 < 0x19);
    iVar20 = iVar20 + 1;
  } while (iVar20 < 0x18);
  uVar16 = (int)lVar22 + 0x19;
  local_e0 = 0;
  local_res20 = (ushort)uVar16;
  do {
    iVar20 = (local_e0 & 0xffff) * 0x19;
    local_f8 = 0;
    local_res10[0] = CONCAT22(local_res10[0]._2_2_,(short)uVar16 + (short)iVar20);
    uVar16 = iVar20 + (int)lVar22;
    local_res18 = (ushort)uVar16;
    do {
      puVar11 = (undefined2 *)param_5[1];
      uVar16 = uVar16 + local_f8;
      uVar18 = (undefined2)uVar16;
      if (puVar11 == (undefined2 *)param_5[2]) {
        uVar21 = (longlong)puVar11 - *param_5;
        lVar22 = (longlong)uVar21 >> 1;
        if (lVar22 == 0x7fffffffffffffff) goto LAB_14025cf80;
        uVar8 = param_5[2] - *param_5 >> 1;
        if (0x7fffffffffffffff - (uVar8 >> 1) < uVar8) goto LAB_14025cf7a;
        uVar9 = lVar22 + 1;
        uVar8 = (uVar8 >> 1) + uVar8;
        uVar14 = uVar9;
        if (uVar9 <= uVar8) {
          uVar14 = uVar8;
        }
        if (0x7fffffffffffffff < uVar14) goto LAB_14025cf7a;
        uVar8 = uVar14 * 2;
        if (uVar8 == 0) {
          uVar8 = 0;
LAB_14025c8e7:
          uVar21 = uVar21 & 0xfffffffffffffffe;
          *(undefined2 *)(uVar21 + uVar8) = uVar18;
          puVar3 = (undefined2 *)*param_5;
          if (puVar11 == (undefined2 *)param_5[1]) {
            lVar22 = param_5[1] - (longlong)puVar3;
            uVar21 = uVar8;
            puVar11 = puVar3;
          }
          else {
            FUN_1404210f0(uVar8,puVar3,(longlong)puVar11 - (longlong)puVar3);
            uVar21 = uVar21 + 2 + uVar8;
            lVar22 = param_5[1] - (longlong)puVar11;
          }
          FUN_1404210f0(uVar21,puVar11,lVar22);
          FUN_1400e4750(param_5,uVar8,uVar9,uVar14);
          goto LAB_14025c940;
        }
        if (uVar8 < 0x1000) {
          uVar8 = FUN_14028af20();
          goto LAB_14025c8e7;
        }
        if (uVar8 + 0x27 <= uVar8) goto LAB_14025cf7a;
        lVar22 = FUN_14028af20(uVar8 + 0x27);
        if (lVar22 != 0) {
          uVar8 = lVar22 + 0x27U & 0xffffffffffffffe0;
          *(longlong *)(uVar8 - 8) = lVar22;
          goto LAB_14025c8e7;
        }
LAB_14025cea0:
        pcVar5 = (code *)swi(0x29);
        (*pcVar5)(5);
        puVar13 = auStack_110;
        goto LAB_14025cea7;
      }
      *puVar11 = uVar18;
      param_5[1] = param_5[1] + 2;
LAB_14025c940:
      puVar11 = (undefined2 *)param_5[1];
      iVar20 = (uVar16 & 0xffff) + 1;
      local_f0 = CONCAT44(local_f0._4_4_,iVar20);
      uVar18 = (undefined2)iVar20;
      if (puVar11 == (undefined2 *)param_5[2]) {
        uVar21 = (longlong)puVar11 - *param_5;
        lVar22 = (longlong)uVar21 >> 1;
        if (lVar22 == 0x7fffffffffffffff) goto LAB_14025cf80;
        uVar8 = param_5[2] - *param_5 >> 1;
        if (0x7fffffffffffffff - (uVar8 >> 1) < uVar8) goto LAB_14025cf7a;
        uVar9 = lVar22 + 1;
        uVar8 = (uVar8 >> 1) + uVar8;
        uVar14 = uVar9;
        if (uVar9 <= uVar8) {
          uVar14 = uVar8;
        }
        if (0x7fffffffffffffff < uVar14) goto LAB_14025cf7a;
        uVar8 = uVar14 * 2;
        if (uVar8 == 0) {
          uVar8 = 0;
        }
        else if (uVar8 < 0x1000) {
          uVar8 = FUN_14028af20();
        }
        else {
          if (uVar8 + 0x27 <= uVar8) goto LAB_14025cf7a;
          lVar22 = FUN_14028af20(uVar8 + 0x27);
          if (lVar22 == 0) goto LAB_14025cea0;
          uVar8 = lVar22 + 0x27U & 0xffffffffffffffe0;
          *(longlong *)(uVar8 - 8) = lVar22;
        }
        uVar21 = uVar21 & 0xfffffffffffffffe;
        *(undefined2 *)(uVar21 + uVar8) = uVar18;
        puVar3 = (undefined2 *)*param_5;
        if (puVar11 == (undefined2 *)param_5[1]) {
          lVar22 = param_5[1] - (longlong)puVar3;
          uVar21 = uVar8;
          puVar11 = puVar3;
        }
        else {
          FUN_1404210f0(uVar8,puVar3,(longlong)puVar11 - (longlong)puVar3);
          uVar21 = uVar21 + 2 + uVar8;
          lVar22 = param_5[1] - (longlong)puVar11;
        }
        FUN_1404210f0(uVar21,puVar11,lVar22);
        FUN_1400e4750(param_5,uVar8,uVar9,uVar14);
      }
      else {
        *puVar11 = uVar18;
        param_5[1] = param_5[1] + 2;
      }
      sVar19 = (short)local_f8 + (short)local_res10[0];
      psVar12 = (short *)param_5[1];
      if (psVar12 == (short *)param_5[2]) {
        uVar21 = (longlong)psVar12 - *param_5;
        lVar22 = (longlong)uVar21 >> 1;
        if (lVar22 == 0x7fffffffffffffff) goto LAB_14025cf80;
        uVar8 = param_5[2] - *param_5 >> 1;
        if (0x7fffffffffffffff - (uVar8 >> 1) < uVar8) goto LAB_14025cf7a;
        uVar9 = lVar22 + 1;
        uVar8 = (uVar8 >> 1) + uVar8;
        uVar14 = uVar9;
        if (uVar9 <= uVar8) {
          uVar14 = uVar8;
        }
        if (0x7fffffffffffffff < uVar14) goto LAB_14025cf7a;
        uVar8 = uVar14 * 2;
        if (uVar8 == 0) {
          uVar8 = 0;
        }
        else if (uVar8 < 0x1000) {
          uVar8 = FUN_14028af20();
        }
        else {
          if (uVar8 + 0x27 <= uVar8) goto LAB_14025cf7a;
          lVar22 = FUN_14028af20(uVar8 + 0x27);
          if (lVar22 == 0) goto LAB_14025cea0;
          uVar8 = lVar22 + 0x27U & 0xffffffffffffffe0;
          *(longlong *)(uVar8 - 8) = lVar22;
        }
        uVar21 = uVar21 & 0xfffffffffffffffe;
        *(short *)(uVar21 + uVar8) = sVar19;
        psVar4 = (short *)*param_5;
        if (psVar12 == (short *)param_5[1]) {
          lVar22 = param_5[1] - (longlong)psVar4;
          uVar21 = uVar8;
          psVar12 = psVar4;
        }
        else {
          FUN_1404210f0(uVar8,psVar4,(longlong)psVar12 - (longlong)psVar4);
          uVar21 = uVar21 + 2 + uVar8;
          lVar22 = param_5[1] - (longlong)psVar12;
        }
        FUN_1404210f0(uVar21,psVar12,lVar22);
        FUN_1400e4750(param_5,uVar8,uVar9,uVar14);
      }
      else {
        *psVar12 = sVar19;
        param_5[1] = param_5[1] + 2;
      }
      puVar11 = (undefined2 *)param_5[1];
      if (puVar11 == (undefined2 *)param_5[2]) {
        uVar21 = (longlong)puVar11 - *param_5;
        lVar22 = (longlong)uVar21 >> 1;
        if (lVar22 == 0x7fffffffffffffff) goto LAB_14025cf80;
        uVar8 = param_5[2] - *param_5 >> 1;
        if (0x7fffffffffffffff - (uVar8 >> 1) < uVar8) goto LAB_14025cf7a;
        uVar9 = lVar22 + 1;
        uVar8 = (uVar8 >> 1) + uVar8;
        uVar14 = uVar9;
        if (uVar9 <= uVar8) {
          uVar14 = uVar8;
        }
        if (0x7fffffffffffffff < uVar14) goto LAB_14025cf7a;
        uVar8 = uVar14 * 2;
        if (uVar8 == 0) {
          uVar8 = 0;
        }
        else if (uVar8 < 0x1000) {
          uVar8 = FUN_14028af20();
        }
        else {
          if (uVar8 + 0x27 <= uVar8) goto LAB_14025cf7a;
          lVar22 = FUN_14028af20(uVar8 + 0x27);
          if (lVar22 == 0) goto LAB_14025cea0;
          uVar8 = lVar22 + 0x27U & 0xffffffffffffffe0;
          *(longlong *)(uVar8 - 8) = lVar22;
        }
        uVar21 = uVar21 & 0xfffffffffffffffe;
        *(short *)(uVar21 + uVar8) = (short)local_f0;
        puVar3 = (undefined2 *)*param_5;
        if (puVar11 == (undefined2 *)param_5[1]) {
          lVar22 = param_5[1] - (longlong)puVar3;
          uVar21 = uVar8;
          puVar11 = puVar3;
        }
        else {
          FUN_1404210f0(uVar8,puVar3,(longlong)puVar11 - (longlong)puVar3);
          uVar21 = uVar21 + 2 + uVar8;
          lVar22 = param_5[1] - (longlong)puVar11;
        }
        FUN_1404210f0(uVar21,puVar11,lVar22);
        FUN_1400e4750(param_5,uVar8,uVar9,uVar14);
      }
      else {
        *puVar11 = (short)local_f0;
        param_5[1] = param_5[1] + 2;
      }
      psVar12 = (short *)param_5[1];
      if (psVar12 == (short *)param_5[2]) {
        uVar21 = (longlong)psVar12 - *param_5;
        lVar22 = (longlong)uVar21 >> 1;
        if (lVar22 == 0x7fffffffffffffff) goto LAB_14025cf80;
        uVar8 = param_5[2] - *param_5 >> 1;
        if (0x7fffffffffffffff - (uVar8 >> 1) < uVar8) {
LAB_14025cf7a:
                    /* WARNING: Subroutine does not return */
          FUN_140017370();
        }
        uVar9 = lVar22 + 1;
        uVar8 = (uVar8 >> 1) + uVar8;
        uVar14 = uVar9;
        if (uVar9 <= uVar8) {
          uVar14 = uVar8;
        }
        if (0x7fffffffffffffff < uVar14) goto LAB_14025cf7a;
        uVar8 = uVar14 * 2;
        if (uVar8 == 0) {
          uVar8 = 0;
        }
        else if (uVar8 < 0x1000) {
          uVar8 = FUN_14028af20();
        }
        else {
          if (uVar8 + 0x27 <= uVar8) goto LAB_14025cf7a;
          lVar22 = FUN_14028af20(uVar8 + 0x27);
          if (lVar22 == 0) goto LAB_14025cea0;
          uVar8 = lVar22 + 0x27U & 0xffffffffffffffe0;
          *(longlong *)(uVar8 - 8) = lVar22;
        }
        uVar21 = uVar21 & 0xfffffffffffffffe;
        *(short *)(uVar21 + uVar8) = sVar19 + 1;
        psVar4 = (short *)*param_5;
        if (psVar12 == (short *)param_5[1]) {
          lVar22 = param_5[1] - (longlong)psVar4;
          uVar21 = uVar8;
          psVar12 = psVar4;
        }
        else {
          FUN_1404210f0(uVar8,psVar4,(longlong)psVar12 - (longlong)psVar4);
          uVar21 = uVar21 + 2 + uVar8;
          lVar22 = param_5[1] - (longlong)psVar12;
        }
        FUN_1404210f0(uVar21,psVar12,lVar22);
        FUN_1400e4750(param_5,uVar8,uVar9,uVar14);
      }
      else {
        *psVar12 = sVar19 + 1;
        param_5[1] = param_5[1] + 2;
      }
      psVar12 = (short *)param_5[1];
      if (psVar12 == (short *)param_5[2]) {
        uVar21 = (longlong)psVar12 - *param_5;
        lVar22 = (longlong)uVar21 >> 1;
        if (lVar22 == 0x7fffffffffffffff) {
LAB_14025cf80:
                    /* WARNING: Subroutine does not return */
          FUN_140013050();
        }
        uVar8 = lVar22 + 1;
        uVar9 = param_5[2] - *param_5 >> 1;
        if (0x7fffffffffffffff - (uVar9 >> 1) < uVar9) {
          uVar9 = 0x7fffffffffffffff;
        }
        else {
          uVar9 = (uVar9 >> 1) + uVar9;
          if (uVar9 < uVar8) {
            uVar9 = uVar8;
          }
        }
        local_f0 = uVar9;
        lVar22 = FUN_1400df940(param_5,&local_f0);
        uVar21 = uVar21 & 0xfffffffffffffffe;
        *(short *)(uVar21 + lVar22) = sVar19;
        psVar4 = (short *)*param_5;
        if (psVar12 == (short *)param_5[1]) {
          lVar17 = param_5[1] - (longlong)psVar4;
          lVar10 = lVar22;
          psVar12 = psVar4;
        }
        else {
          FUN_1404210f0(lVar22,psVar4,(longlong)psVar12 - (longlong)psVar4);
          lVar10 = uVar21 + 2 + lVar22;
          lVar17 = param_5[1] - (longlong)psVar12;
        }
        FUN_1404210f0(lVar10,psVar12,lVar17);
        FUN_1400e4750(param_5,lVar22,uVar8,uVar9);
      }
      else {
        *psVar12 = sVar19;
        param_5[1] = param_5[1] + 2;
      }
      uVar16 = (uint)local_res18;
      local_f8 = local_f8 + 1;
    } while (local_f8 < 0x18);
    local_e0 = local_e0 + 1;
    if (0x15 < (int)local_e0) {
LAB_14025cea7:
      uVar1 = *(ushort *)(puVar13 + 0x40);
      iVar20 = 0;
      uVar16 = uVar1 + 0x226 & 0xffff;
      do {
        local_res10[0] = 0;
        *(undefined8 *)(puVar13 + -8) = 0x14025ced4;
        FUN_1400dd630(param_5,local_res10);
        local_res10[0] = iVar20 + uVar1 + 1;
        *(undefined8 *)(puVar13 + -8) = 0x14025cee7;
        FUN_1400dd630(param_5,local_res10);
        local_res10[0] = (uint)uVar1 + iVar20;
        *(undefined8 *)(puVar13 + -8) = 0x14025cef9;
        FUN_1400dd630(param_5,local_res10);
        local_res10[0] = 1;
        *(undefined8 *)(puVar13 + -8) = 0x14025cf0c;
        FUN_1400dd630(param_5,local_res10);
        local_res10[0] = uVar16 + iVar20;
        *(undefined8 *)(puVar13 + -8) = 0x14025cf1f;
        FUN_1400dd630(param_5,local_res10);
        local_res10[0] = iVar20 + uVar16 + 1;
        *(undefined8 *)(puVar13 + -8) = 0x14025cf32;
        FUN_1400dd630(param_5,local_res10);
        iVar20 = iVar20 + 1;
      } while (iVar20 < 0x18);
      return;
    }
    uVar16 = (uint)local_res20;
    lVar22 = local_d8;
  } while( true );
}

