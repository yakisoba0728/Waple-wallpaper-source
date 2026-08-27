// Function: FUN_1400dccd0
// Addr: 1400dccd0
// Size: 2027 bytes


void FUN_1400dccd0(undefined8 param_1,longlong *param_2,undefined8 *param_3,longlong param_4)

{
  byte *pbVar1;
  char cVar2;
  undefined2 *puVar3;
  longlong lVar4;
  ushort *puVar5;
  longlong *plVar6;
  code *pcVar7;
  undefined8 ****ppppuVar8;
  longlong *plVar9;
  int iVar10;
  ulonglong uVar11;
  undefined8 *****pppppuVar12;
  ulonglong uVar13;
  undefined2 *puVar14;
  ulonglong uVar15;
  undefined8 *_Buf2;
  longlong lVar16;
  ushort *puVar17;
  longlong *plVar18;
  undefined1 *puVar19;
  longlong lVar20;
  undefined2 *puVar21;
  ulonglong uVar22;
  byte bVar23;
  byte bVar24;
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [24];
  undefined1 local_c8 [32];
  undefined4 local_a8;
  char local_a4;
  undefined1 local_a3;
  undefined1 local_a0 [32];
  undefined1 local_80 [32];
  undefined8 ****local_60 [2];
  ulonglong local_50;
  ulonglong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  
  bVar24 = 0;
  plVar18 = *(longlong **)*param_3;
  cVar2 = *(char *)((longlong)plVar18 + 0x19);
  while( true ) {
    if (cVar2 != '\0') {
      return;
    }
    FUN_140016fc0(local_c8,plVar18 + 4);
    local_a8 = (undefined4)plVar18[8];
    local_a4 = *(char *)((longlong)plVar18 + 0x44);
    local_a3 = *(undefined1 *)((longlong)plVar18 + 0x45);
    FUN_140016fc0(local_a0,plVar18 + 9);
    FUN_140016fc0(local_80,plVar18 + 0xd);
    FUN_140016fc0(local_60);
    local_40 = (int)plVar18[0x15];
    local_3c = *(undefined4 *)((longlong)plVar18 + 0xac);
    if (local_a4 == '\x04') break;
    if (local_a4 == '\x03') {
      puVar14 = (undefined2 *)param_2[1];
      if (puVar14 == (undefined2 *)param_2[2]) {
        uVar22 = (longlong)puVar14 - *param_2;
        if ((longlong)uVar22 >> 1 == 0x7fffffffffffffff) goto LAB_1400dd4b7;
        uVar13 = param_2[2] - *param_2 >> 1;
        puVar19 = auStack_e8;
        if (0x7fffffffffffffff - (uVar13 >> 1) < uVar13) goto LAB_1400dd4b1;
        uVar11 = ((longlong)uVar22 >> 1) + 1;
        uVar13 = (uVar13 >> 1) + uVar13;
        uVar15 = uVar11;
        if (uVar11 <= uVar13) {
          uVar15 = uVar13;
        }
        puVar19 = auStack_e8;
        if (0x7fffffffffffffff < uVar15) goto LAB_1400dd4b1;
        uVar13 = uVar15 * 2;
        if (uVar13 == 0) {
          uVar13 = 0;
          puVar21 = (undefined2 *)(uVar22 & 0xfffffffffffffffe);
          *puVar21 = 0x8e;
        }
        else if (uVar13 < 0x1000) {
          uVar13 = FUN_14028af20();
          puVar21 = (undefined2 *)(uVar22 & 0xfffffffffffffffe);
          *(undefined2 *)((longlong)puVar21 + uVar13) = 0x8e;
        }
        else {
          puVar19 = auStack_e8;
          if (uVar13 + 0x27 <= uVar13) goto LAB_1400dd4b1;
          lVar16 = FUN_14028af20(uVar13 + 0x27);
          if (lVar16 == 0) goto LAB_1400dd4aa;
          uVar13 = lVar16 + 0x27U & 0xffffffffffffffe0;
          puVar21 = (undefined2 *)(uVar22 & 0xfffffffffffffffe);
          *(longlong *)(uVar13 - 8) = lVar16;
          *(undefined2 *)((longlong)puVar21 + uVar13) = 0x8e;
        }
LAB_1400dce77:
        puVar3 = (undefined2 *)*param_2;
        if (puVar14 == (undefined2 *)param_2[1]) {
          lVar16 = param_2[1] - (longlong)puVar3;
          uVar22 = uVar13;
          puVar14 = puVar3;
        }
        else {
          FUN_1404210f0(uVar13,puVar3,(longlong)puVar14 - (longlong)puVar3);
          uVar22 = (longlong)puVar21 + uVar13 + 2;
          lVar16 = param_2[1] - (longlong)puVar14;
        }
        FUN_1404210f0(uVar22,puVar14,lVar16);
        FUN_1400e4750(param_2,uVar13,uVar11,uVar15);
      }
      else {
        *puVar14 = 0x8e;
        param_2[1] = param_2[1] + 2;
      }
    }
    else if (local_a4 == '\x02') {
      FUN_1400dd630(param_2);
    }
    else {
      puVar14 = (undefined2 *)param_2[1];
      if (puVar14 == (undefined2 *)param_2[2]) {
        uVar22 = (longlong)puVar14 - *param_2;
        if ((longlong)uVar22 >> 1 == 0x7fffffffffffffff) goto LAB_1400dd4b7;
        uVar13 = param_2[2] - *param_2 >> 1;
        puVar19 = auStack_e8;
        if (0x7fffffffffffffff - (uVar13 >> 1) < uVar13) goto LAB_1400dd4b1;
        uVar11 = ((longlong)uVar22 >> 1) + 1;
        uVar13 = (uVar13 >> 1) + uVar13;
        uVar15 = uVar11;
        if (uVar11 <= uVar13) {
          uVar15 = uVar13;
        }
        puVar19 = auStack_e8;
        if (0x7fffffffffffffff < uVar15) goto LAB_1400dd4b1;
        uVar13 = uVar15 * 2;
        if (uVar13 == 0) {
          uVar13 = 0;
          puVar21 = (undefined2 *)(uVar22 & 0xfffffffffffffffe);
          *puVar21 = 0x8c;
        }
        else if (uVar13 < 0x1000) {
          uVar13 = FUN_14028af20();
          puVar21 = (undefined2 *)(uVar22 & 0xfffffffffffffffe);
          *(undefined2 *)((longlong)puVar21 + uVar13) = 0x8c;
        }
        else {
          puVar19 = auStack_e8;
          if (uVar13 + 0x27 <= uVar13) goto LAB_1400dd4b1;
          lVar16 = FUN_14028af20(uVar13 + 0x27);
          if (lVar16 == 0) goto LAB_1400dd4aa;
          uVar13 = lVar16 + 0x27U & 0xffffffffffffffe0;
          puVar21 = (undefined2 *)(uVar22 & 0xfffffffffffffffe);
          *(longlong *)(uVar13 - 8) = lVar16;
          *(undefined2 *)((longlong)puVar21 + uVar13) = 0x8c;
        }
        goto LAB_1400dce77;
      }
      *puVar14 = 0x8c;
      param_2[1] = param_2[1] + 2;
    }
LAB_1400dd0b9:
    uVar13 = local_48;
    uVar22 = local_50;
    ppppuVar8 = local_60[0];
    bVar23 = bVar24;
    if (param_4 != 0) {
      uVar11 = 0xcbf29ce484222325;
      pppppuVar12 = local_60;
      if (0xf < local_48) {
        pppppuVar12 = (undefined8 *****)local_60[0];
      }
      uVar15 = 0;
      if (local_50 != 0) {
        do {
          pbVar1 = (byte *)(uVar15 + (longlong)pppppuVar12);
          uVar15 = uVar15 + 1;
          uVar11 = (uVar11 ^ *pbVar1) * 0x100000001b3;
        } while (uVar15 < local_50);
      }
      uVar11 = uVar11 & *(ulonglong *)(param_4 + 0x30);
      lVar16 = *(longlong *)(param_4 + 8);
      lVar20 = *(longlong *)(*(longlong *)(param_4 + 0x18) + 8 + uVar11 * 0x10);
      if (lVar20 != lVar16) {
        lVar4 = *(longlong *)(*(longlong *)(param_4 + 0x18) + uVar11 * 0x10);
        while( true ) {
          _Buf2 = (undefined8 *)(lVar20 + 0x10);
          if (0xf < *(ulonglong *)(lVar20 + 0x28)) {
            _Buf2 = (undefined8 *)*_Buf2;
          }
          pppppuVar12 = local_60;
          if (0xf < uVar13) {
            pppppuVar12 = (undefined8 *****)ppppuVar8;
          }
          if ((uVar22 == *(ulonglong *)(lVar20 + 0x20)) &&
             ((uVar22 == 0 || (iVar10 = memcmp(pppppuVar12,_Buf2,uVar22), iVar10 == 0))))
          goto LAB_1400dd1a4;
          if (lVar20 == lVar4) break;
          lVar20 = *(longlong *)(lVar20 + 8);
        }
      }
      lVar20 = 0;
LAB_1400dd1a4:
      if ((lVar20 != 0) && (lVar20 != lVar16)) {
        bVar23 = *(byte *)(lVar20 + 0x30);
      }
    }
    puVar17 = (ushort *)param_2[1];
    if (puVar17 == (ushort *)param_2[2]) {
      uVar22 = (longlong)puVar17 - *param_2;
      lVar16 = (longlong)uVar22 >> 1;
      if (lVar16 == 0x7fffffffffffffff) goto LAB_1400dd4b7;
      uVar13 = param_2[2] - *param_2 >> 1;
      puVar19 = auStack_e8;
      if (0x7fffffffffffffff - (uVar13 >> 1) < uVar13) goto LAB_1400dd4b1;
      uVar11 = lVar16 + 1;
      uVar13 = (uVar13 >> 1) + uVar13;
      uVar15 = uVar11;
      if (uVar11 <= uVar13) {
        uVar15 = uVar13;
      }
      puVar19 = auStack_e8;
      if (0x7fffffffffffffff < uVar15) goto LAB_1400dd4b1;
      uVar13 = uVar15 * 2;
      if (uVar13 == 0) {
        uVar13 = 0;
      }
      else if (uVar13 < 0x1000) {
        uVar13 = FUN_14028af20();
      }
      else {
        puVar19 = auStack_e8;
        if (uVar13 + 0x27 <= uVar13) goto LAB_1400dd4b1;
        lVar16 = FUN_14028af20(uVar13 + 0x27);
        if (lVar16 == 0) goto LAB_1400dd4aa;
        uVar13 = lVar16 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar13 - 8) = lVar16;
      }
      uVar22 = uVar22 & 0xfffffffffffffffe;
      *(ushort *)(uVar22 + uVar13) = (ushort)(byte)local_a8;
      puVar5 = (ushort *)*param_2;
      if (puVar17 == (ushort *)param_2[1]) {
        lVar16 = param_2[1] - (longlong)puVar5;
        uVar22 = uVar13;
        puVar17 = puVar5;
      }
      else {
        FUN_1404210f0(uVar13,puVar5,(longlong)puVar17 - (longlong)puVar5);
        uVar22 = uVar22 + 2 + uVar13;
        lVar16 = param_2[1] - (longlong)puVar17;
      }
      FUN_1404210f0(uVar22,puVar17,lVar16);
      FUN_1400e4750(param_2,uVar13,uVar11,uVar15);
    }
    else {
      *puVar17 = (ushort)(byte)local_a8;
      param_2[1] = param_2[1] + 2;
    }
    puVar17 = (ushort *)param_2[1];
    if (puVar17 == (ushort *)param_2[2]) {
      uVar22 = (longlong)puVar17 - *param_2;
      lVar16 = (longlong)uVar22 >> 1;
      if (lVar16 == 0x7fffffffffffffff) {
LAB_1400dd4b7:
                    /* WARNING: Subroutine does not return */
        FUN_140013050();
      }
      uVar13 = param_2[2] - *param_2 >> 1;
      puVar19 = auStack_e8;
      if (0x7fffffffffffffff - (uVar13 >> 1) < uVar13) goto LAB_1400dd4b1;
      uVar11 = lVar16 + 1;
      uVar13 = (uVar13 >> 1) + uVar13;
      uVar15 = uVar11;
      if (uVar11 <= uVar13) {
        uVar15 = uVar13;
      }
      puVar19 = auStack_e8;
      if (0x7fffffffffffffff < uVar15) goto LAB_1400dd4b1;
      uVar13 = uVar15 * 2;
      if (uVar13 == 0) {
        uVar13 = 0;
      }
      else if (uVar13 < 0x1000) {
        uVar13 = FUN_14028af20();
      }
      else {
        puVar19 = auStack_e8;
        if (uVar13 + 0x27 <= uVar13) goto LAB_1400dd4b1;
        lVar16 = FUN_14028af20(uVar13 + 0x27);
        if (lVar16 == 0) goto LAB_1400dd4aa;
        uVar13 = lVar16 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar13 - 8) = lVar16;
      }
      uVar22 = uVar22 & 0xfffffffffffffffe;
      *(ushort *)(uVar22 + uVar13) = (ushort)bVar23;
      puVar5 = (ushort *)*param_2;
      if (puVar17 == (ushort *)param_2[1]) {
        lVar16 = param_2[1] - (longlong)puVar5;
        uVar22 = uVar13;
        puVar17 = puVar5;
      }
      else {
        FUN_1404210f0(uVar13,puVar5,(longlong)puVar17 - (longlong)puVar5);
        uVar22 = uVar22 + 2 + uVar13;
        lVar16 = param_2[1] - (longlong)puVar17;
      }
      FUN_1404210f0(uVar22,puVar17,lVar16);
      FUN_1400e4750(param_2,uVar13,uVar11,uVar15);
    }
    else {
      *puVar17 = (ushort)bVar23;
      param_2[1] = param_2[1] + 2;
    }
    bVar24 = bVar24 + local_a4;
    FUN_140017240(local_60);
    FUN_140017240(local_80);
    FUN_140017240(local_a0);
    FUN_140017240(local_c8);
    plVar6 = (longlong *)plVar18[2];
    if (*(char *)((longlong)plVar6 + 0x19) == '\0') {
      cVar2 = *(char *)(*plVar6 + 0x19);
      plVar18 = plVar6;
      while (cVar2 == '\0') {
        plVar18 = (longlong *)*plVar18;
        cVar2 = *(char *)(*plVar18 + 0x19);
      }
    }
    else {
      cVar2 = *(char *)(plVar18[1] + 0x19);
      plVar9 = (longlong *)plVar18[1];
      plVar6 = plVar18;
      while ((plVar18 = plVar9, cVar2 == '\0' && (plVar6 == (longlong *)plVar18[2]))) {
        cVar2 = *(char *)(plVar18[1] + 0x19);
        plVar9 = (longlong *)plVar18[1];
        plVar6 = plVar18;
      }
    }
    cVar2 = *(char *)((longlong)plVar18 + 0x19);
  }
  puVar14 = (undefined2 *)param_2[1];
  if (puVar14 != (undefined2 *)param_2[2]) {
    *puVar14 = 0x8f;
    param_2[1] = param_2[1] + 2;
    goto LAB_1400dd0b9;
  }
  uVar22 = (longlong)puVar14 - *param_2;
  lVar16 = (longlong)uVar22 >> 1;
  if (lVar16 == 0x7fffffffffffffff) goto LAB_1400dd4b7;
  uVar13 = param_2[2] - *param_2 >> 1;
  puVar19 = auStack_e8;
  if (0x7fffffffffffffff - (uVar13 >> 1) < uVar13) goto LAB_1400dd4b1;
  uVar11 = lVar16 + 1;
  uVar13 = (uVar13 >> 1) + uVar13;
  uVar15 = uVar11;
  if (uVar11 <= uVar13) {
    uVar15 = uVar13;
  }
  puVar19 = auStack_e8;
  if (0x7fffffffffffffff < uVar15) goto LAB_1400dd4b1;
  uVar13 = uVar15 * 2;
  if (uVar13 == 0) {
    uVar13 = 0;
LAB_1400dce6c:
    puVar21 = (undefined2 *)(uVar22 & 0xfffffffffffffffe);
    *(undefined2 *)((longlong)puVar21 + uVar13) = 0x8f;
    goto LAB_1400dce77;
  }
  if (uVar13 < 0x1000) {
    uVar13 = FUN_14028af20();
    goto LAB_1400dce6c;
  }
  puVar19 = auStack_e8;
  if (uVar13 + 0x27 <= uVar13) goto LAB_1400dd4b1;
  lVar16 = FUN_14028af20(uVar13 + 0x27);
  if (lVar16 != 0) {
    uVar13 = lVar16 + 0x27U & 0xffffffffffffffe0;
    *(longlong *)(uVar13 - 8) = lVar16;
    goto LAB_1400dce6c;
  }
LAB_1400dd4aa:
  pcVar7 = (code *)swi(0x29);
  (*pcVar7)(5);
  puVar19 = auStack_e0;
LAB_1400dd4b1:
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar19 + -8) = &UNK_1400dd4b6;
  FUN_140017370();
}

