// Function: FUN_14014c160
// Addr: 14014c160
// Size: 1898 bytes


int FUN_14014c160(ushort *param_1,undefined8 *param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ushort uVar10;
  ushort uVar11;
  undefined8 *puVar12;
  ushort *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  ushort *puVar18;
  byte *pbVar19;
  ulonglong uVar20;
  undefined8 *puVar21;
  longlong lVar22;
  undefined8 *puVar23;
  ushort *puVar24;
  ulonglong uVar25;
  undefined8 *puVar26;
  undefined1 local_58;
  undefined1 uStack_57;
  undefined1 uStack_56;
  undefined1 uStack_55;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  if ((param_1 == (ushort *)0x0) || (param_4 < 0)) {
    return -1;
  }
  if (param_4 == 0) {
    if ((param_3 == 1) && ((byte)*param_1 == 0)) {
      return 0;
    }
  }
  else if (param_3 != 0) {
    puVar26 = (undefined8 *)((longlong)param_4 + (longlong)param_2);
    pbVar19 = (byte *)((longlong)param_3 + (longlong)param_1);
    puVar21 = param_2;
    puVar18 = param_1;
    if ((longlong)puVar26 - (longlong)param_2 < 0x40) goto LAB_14014c590;
    puVar18 = (ushort *)(pbVar19 + -0xf);
    puVar13 = param_1;
LAB_14014c230:
    do {
      bVar2 = (byte)*puVar13;
      puVar24 = (ushort *)((longlong)puVar13 + 1);
      uVar17 = (ulonglong)(bVar2 >> 4);
      if (uVar17 == 0xf) {
        if (puVar18 <= puVar24) goto LAB_14014c66f;
        bVar1 = *(byte *)puVar24;
        puVar24 = puVar13 + 1;
        if (puVar18 < puVar24) goto LAB_14014c66f;
        uVar17 = (ulonglong)bVar1;
        if (bVar1 == 0xff) {
          uVar17 = 0xff;
          do {
            uVar10 = *puVar24;
            puVar24 = (ushort *)((longlong)puVar24 + 1);
            if (puVar18 < puVar24) goto LAB_14014c66f;
            uVar17 = uVar17 + (byte)uVar10;
          } while ((byte)uVar10 == 0xff);
        }
        if (((uVar17 == 0xffffffffffffffff) ||
            (puVar12 = (undefined8 *)(uVar17 + 0xf + (longlong)puVar21), puVar12 < puVar21)) ||
           (puVar13 = (ushort *)(uVar17 + 0xf + (longlong)puVar24), puVar13 < puVar24))
        goto LAB_14014c66f;
        uVar17 = uVar17 + 0xf;
        if (puVar26 + -4 < puVar12) goto LAB_14014c6b9;
        if (pbVar19 + -0x20 < puVar13) goto LAB_14014c6b9;
        do {
          uVar5 = *(undefined4 *)(puVar24 + 2);
          uVar7 = *(undefined4 *)(puVar24 + 4);
          uVar8 = *(undefined4 *)(puVar24 + 6);
          *(undefined4 *)puVar21 = *(undefined4 *)puVar24;
          *(undefined4 *)((longlong)puVar21 + 4) = uVar5;
          *(undefined4 *)(puVar21 + 1) = uVar7;
          *(undefined4 *)((longlong)puVar21 + 0xc) = uVar8;
          uVar5 = *(undefined4 *)(puVar24 + 10);
          uVar7 = *(undefined4 *)(puVar24 + 0xc);
          uVar8 = *(undefined4 *)(puVar24 + 0xe);
          *(undefined4 *)(puVar21 + 2) = *(undefined4 *)(puVar24 + 8);
          *(undefined4 *)((longlong)puVar21 + 0x14) = uVar5;
          *(undefined4 *)(puVar21 + 3) = uVar7;
          *(undefined4 *)((longlong)puVar21 + 0x1c) = uVar8;
          puVar21 = puVar21 + 4;
          puVar24 = puVar24 + 0x10;
        } while (puVar21 < puVar12);
      }
      else {
        if (pbVar19 + -0x11 < puVar24) goto LAB_14014c6b9;
        uVar5 = *(undefined4 *)((longlong)puVar13 + 5);
        uVar7 = *(undefined4 *)((longlong)puVar13 + 9);
        uVar8 = *(undefined4 *)((longlong)puVar13 + 0xd);
        puVar13 = (ushort *)((longlong)puVar24 + uVar17);
        *(undefined4 *)puVar21 = *(undefined4 *)puVar24;
        *(undefined4 *)((longlong)puVar21 + 4) = uVar5;
        *(undefined4 *)(puVar21 + 1) = uVar7;
        *(undefined4 *)((longlong)puVar21 + 0xc) = uVar8;
        puVar12 = (undefined8 *)((longlong)puVar21 + uVar17);
      }
      uVar10 = *puVar13;
      uVar25 = (ulonglong)uVar10;
      puVar14 = (undefined8 *)((longlong)puVar12 - uVar25);
      puVar24 = puVar13 + 1;
      uVar20 = (ulonglong)(bVar2 & 0xf);
      if (uVar20 == 0xf) {
        uVar11 = *puVar24;
        puVar24 = (ushort *)((longlong)puVar13 + 3);
        if (pbVar19 + -4 < puVar24) goto LAB_14014c66f;
        uVar20 = (ulonglong)(byte)uVar11;
        if ((byte)uVar11 == 0xff) {
          uVar20 = 0xff;
          do {
            uVar11 = *puVar24;
            puVar24 = (ushort *)((longlong)puVar24 + 1);
            if (pbVar19 + -4 < puVar24) goto LAB_14014c66f;
            uVar20 = uVar20 + (byte)uVar11;
          } while ((byte)uVar11 == 0xff);
        }
        if (uVar20 == 0xffffffffffffffff) goto LAB_14014c66f;
        lVar22 = uVar20 + 0x13;
        if ((undefined8 *)(lVar22 + (longlong)puVar12) < puVar12) goto LAB_14014c66f;
        uVar20 = uVar20 + 0xf;
        if (puVar26 + -8 <= (undefined8 *)(lVar22 + (longlong)puVar12)) goto LAB_14014c76d;
LAB_14014c398:
        if (puVar14 < param_2) goto LAB_14014c66f;
        puVar21 = (undefined8 *)(lVar22 + (longlong)puVar12);
        puVar13 = puVar24;
        if (0xf < uVar10) {
          do {
            uVar5 = *(undefined4 *)((longlong)puVar14 + 4);
            uVar7 = *(undefined4 *)(puVar14 + 1);
            uVar8 = *(undefined4 *)((longlong)puVar14 + 0xc);
            *(undefined4 *)puVar12 = *(undefined4 *)puVar14;
            *(undefined4 *)((longlong)puVar12 + 4) = uVar5;
            *(undefined4 *)(puVar12 + 1) = uVar7;
            *(undefined4 *)((longlong)puVar12 + 0xc) = uVar8;
            uVar5 = *(undefined4 *)((longlong)puVar14 + 0x14);
            uVar7 = *(undefined4 *)(puVar14 + 3);
            uVar8 = *(undefined4 *)((longlong)puVar14 + 0x1c);
            *(undefined4 *)(puVar12 + 2) = *(undefined4 *)(puVar14 + 2);
            *(undefined4 *)((longlong)puVar12 + 0x14) = uVar5;
            *(undefined4 *)(puVar12 + 3) = uVar7;
            *(undefined4 *)((longlong)puVar12 + 0x1c) = uVar8;
            puVar12 = puVar12 + 4;
            puVar14 = puVar14 + 4;
          } while (puVar12 < puVar21);
          goto LAB_14014c230;
        }
        if (uVar25 == 1) {
          uStack_54 = *(undefined1 *)puVar14;
          uStack_53 = uStack_54;
          uStack_52 = uStack_54;
          uStack_51 = uStack_54;
        }
        else if (uVar25 == 2) {
          local_58 = (undefined1)*(undefined2 *)puVar14;
          uStack_57 = (undefined1)((ushort)*(undefined2 *)puVar14 >> 8);
          uStack_52 = local_58;
          uStack_51 = uStack_57;
          uStack_54 = local_58;
          uStack_53 = uStack_57;
        }
        else {
          if (uVar25 != 4) {
            if (uVar10 < 8) {
              *(undefined4 *)puVar12 = 0;
              *(undefined1 *)puVar12 = *(undefined1 *)puVar14;
              *(undefined1 *)((longlong)puVar12 + 1) = *(undefined1 *)((longlong)puVar14 + 1);
              *(undefined1 *)((longlong)puVar12 + 2) = *(undefined1 *)((longlong)puVar14 + 2);
              *(undefined1 *)((longlong)puVar12 + 3) = *(undefined1 *)((longlong)puVar14 + 3);
              uVar4 = *(uint *)(&DAT_1404848e0 + uVar25 * 4);
              *(undefined4 *)((longlong)puVar12 + 4) =
                   *(undefined4 *)((longlong)puVar14 + (ulonglong)uVar4);
              puVar15 = (undefined8 *)
                        ((longlong)((longlong)puVar14 + (ulonglong)uVar4) -
                        (longlong)*(int *)(&DAT_140484980 + uVar25 * 4));
            }
            else {
              puVar15 = puVar14 + 1;
              *puVar12 = *puVar14;
            }
            puVar12 = puVar12 + 1;
            do {
              uVar6 = *puVar15;
              puVar15 = puVar15 + 1;
              *puVar12 = uVar6;
              puVar12 = puVar12 + 1;
            } while (puVar12 < puVar21);
            goto LAB_14014c230;
          }
          uVar5 = *(undefined4 *)puVar14;
          local_58 = (undefined1)uVar5;
          uStack_57 = (undefined1)((uint)uVar5 >> 8);
          uStack_56 = (undefined1)((uint)uVar5 >> 0x10);
          uStack_55 = (undefined1)((uint)uVar5 >> 0x18);
          uStack_54 = local_58;
          uStack_53 = uStack_57;
          uStack_52 = uStack_56;
          uStack_51 = uStack_55;
        }
        uVar6 = CONCAT17(uStack_51,
                         CONCAT16(uStack_52,
                                  CONCAT15(uStack_53,
                                           CONCAT14(uStack_54,
                                                    CONCAT13(uStack_51,
                                                             CONCAT12(uStack_52,
                                                                      CONCAT11(uStack_53,uStack_54))
                                                            )))));
        *puVar12 = uVar6;
        puVar12 = puVar12 + 1;
        uVar17 = (longlong)puVar21 + (7 - (longlong)puVar12);
        uVar20 = uVar17 >> 3;
        if (puVar21 < puVar12) {
          uVar20 = 0;
        }
        if (uVar20 != 0) {
          uVar17 = uVar17 & 0xfffffffffffffff8;
          if (puVar21 < puVar12) {
            uVar17 = 0;
          }
          for (uVar17 = uVar17 / 8; uVar17 != 0; uVar17 = uVar17 - 1) {
            *puVar12 = uVar6;
            puVar12 = puVar12 + 1;
          }
        }
        goto LAB_14014c230;
      }
      puVar21 = (undefined8 *)(uVar20 + 4 + (longlong)puVar12);
      if (puVar26 + -8 <= puVar21) goto LAB_14014c76d;
      if (puVar14 < param_2) goto LAB_14014c66f;
      lVar22 = uVar20 + 4;
      if (uVar10 < 8) goto LAB_14014c398;
      *puVar12 = *puVar14;
      puVar12[1] = puVar14[1];
      *(undefined2 *)(puVar12 + 2) = *(undefined2 *)(puVar14 + 2);
      puVar13 = puVar24;
    } while( true );
  }
  return -1;
LAB_14014c76d:
  if (puVar14 < param_2) {
LAB_14014c66f:
    return ((int)param_1 - (int)puVar24) + -1;
  }
  puVar21 = (undefined8 *)(uVar20 + 4 + (longlong)puVar12);
  if (uVar25 < 8) {
    *(undefined4 *)puVar12 = 0;
    *(undefined1 *)puVar12 = *(undefined1 *)puVar14;
    *(undefined1 *)((longlong)puVar12 + 1) = *(undefined1 *)((longlong)puVar14 + 1);
    *(undefined1 *)((longlong)puVar12 + 2) = *(undefined1 *)((longlong)puVar14 + 2);
    *(undefined1 *)((longlong)puVar12 + 3) = *(undefined1 *)((longlong)puVar14 + 3);
    uVar4 = *(uint *)(&DAT_1404848e0 + uVar25 * 4);
    *(undefined4 *)((longlong)puVar12 + 4) = *(undefined4 *)((longlong)puVar14 + (ulonglong)uVar4);
    puVar15 = (undefined8 *)
              ((longlong)((longlong)puVar14 + (ulonglong)uVar4) -
              (longlong)*(int *)(&DAT_140484980 + uVar25 * 4));
  }
  else {
    puVar15 = puVar14 + 1;
    *puVar12 = *puVar14;
  }
  puVar14 = puVar12 + 1;
  puVar18 = puVar24;
  if ((undefined8 *)((longlong)puVar26 + -0xc) < puVar21) {
    if ((undefined8 *)((longlong)puVar26 + -5) < puVar21) goto LAB_14014c66f;
    puVar12 = (undefined8 *)((longlong)puVar26 + -7);
    puVar16 = puVar14;
    puVar23 = puVar15;
    if (puVar14 < puVar12) {
      do {
        *puVar16 = *puVar23;
        puVar16 = puVar16 + 1;
        puVar23 = puVar23 + 1;
      } while (puVar16 < puVar12);
      puVar15 = (undefined8 *)((longlong)puVar15 + ((longlong)puVar12 - (longlong)puVar14));
      puVar14 = puVar12;
    }
    for (; puVar14 < puVar21; puVar14 = (undefined8 *)((longlong)puVar14 + 1)) {
      uVar3 = *(undefined1 *)puVar15;
      puVar15 = (undefined8 *)((longlong)puVar15 + 1);
      *(undefined1 *)puVar14 = uVar3;
    }
  }
  else {
    *puVar14 = *puVar15;
    if (0x10 < uVar20 + 4) {
      puVar12 = puVar12 + 2;
      do {
        puVar15 = puVar15 + 1;
        *puVar12 = *puVar15;
        puVar12 = puVar12 + 1;
      } while (puVar12 < puVar21);
    }
  }
LAB_14014c590:
  while( true ) {
    bVar2 = (byte)*puVar18;
    puVar24 = (ushort *)((longlong)puVar18 + 1);
    uVar17 = (ulonglong)(bVar2 >> 4);
    if (uVar17 == 0xf) break;
    if (pbVar19 + -0x10 <= puVar24 || puVar26 + -4 < puVar21) goto LAB_14014c6b9;
    uVar5 = *(undefined4 *)puVar24;
    uVar7 = *(undefined4 *)((longlong)puVar18 + 5);
    uVar8 = *(undefined4 *)((longlong)puVar18 + 9);
    uVar9 = *(undefined4 *)((longlong)puVar18 + 0xd);
    puVar18 = (ushort *)(uVar17 + (longlong)puVar24);
    uVar20 = (ulonglong)(bVar2 & 0xf);
    puVar24 = puVar18 + 1;
    *(undefined4 *)puVar21 = uVar5;
    *(undefined4 *)((longlong)puVar21 + 4) = uVar7;
    *(undefined4 *)(puVar21 + 1) = uVar8;
    *(undefined4 *)((longlong)puVar21 + 0xc) = uVar9;
    uVar10 = *puVar18;
    uVar25 = (ulonglong)uVar10;
    puVar12 = (undefined8 *)((longlong)puVar21 + uVar17);
    puVar14 = (undefined8 *)((longlong)puVar12 - uVar25);
    puVar18 = puVar24;
    if (uVar20 == 0xf) goto LAB_14014c70d;
    if ((uVar10 < 8) || (puVar14 < param_2)) goto LAB_14014c707;
    *puVar12 = *puVar14;
    puVar12[1] = puVar14[1];
    *(undefined2 *)(puVar12 + 2) = *(undefined2 *)(puVar14 + 2);
    puVar21 = (undefined8 *)((longlong)puVar12 + uVar20 + 4);
  }
  puVar13 = (ushort *)(pbVar19 + -0xf);
  if (puVar13 <= puVar24) goto LAB_14014c66f;
  bVar1 = *(byte *)puVar24;
  puVar24 = puVar18 + 1;
  if (puVar13 < puVar24) goto LAB_14014c66f;
  uVar17 = (ulonglong)bVar1;
  while (bVar1 == 0xff) {
    bVar1 = (byte)*puVar24;
    puVar24 = (ushort *)((longlong)puVar24 + 1);
    if (puVar13 < puVar24) goto LAB_14014c66f;
    uVar17 = uVar17 + bVar1;
  }
  if (((uVar17 == 0xffffffffffffffff) ||
      (uVar17 = uVar17 + 0xf, (undefined8 *)(uVar17 + (longlong)puVar21) < puVar21)) ||
     ((ushort *)(uVar17 + (longlong)puVar24) < puVar24)) goto LAB_14014c66f;
LAB_14014c6b9:
  puVar12 = (undefined8 *)(uVar17 + (longlong)puVar21);
  if (((undefined8 *)((longlong)puVar26 + -0xc) < puVar12) ||
     (puVar18 = (ushort *)(uVar17 + (longlong)puVar24), pbVar19 + -8 < puVar18)) {
    if (((byte *)(uVar17 + (longlong)puVar24) == pbVar19) && (puVar12 <= puVar26)) {
      FUN_1404210f0(puVar21,puVar24,uVar17);
      return (int)puVar21 + ((int)uVar17 - (int)param_2);
    }
    goto LAB_14014c66f;
  }
  do {
    uVar6 = *(undefined8 *)puVar24;
    puVar24 = puVar24 + 4;
    *puVar21 = uVar6;
    puVar21 = puVar21 + 1;
  } while (puVar21 < puVar12);
  uVar25 = (ulonglong)*puVar18;
  puVar24 = puVar18 + 1;
  puVar14 = (undefined8 *)((longlong)puVar12 - uVar25);
  uVar20 = (ulonglong)(bVar2 & 0xf);
LAB_14014c707:
  puVar18 = puVar24;
  if (uVar20 == 0xf) {
LAB_14014c70d:
    puVar24 = (ushort *)((longlong)puVar18 + 1);
    if (pbVar19 + -4 < puVar24) goto LAB_14014c66f;
    uVar20 = (ulonglong)(byte)*puVar18;
    if ((byte)*puVar18 == 0xff) {
      uVar20 = 0xff;
      do {
        puVar18 = puVar24;
        puVar24 = (ushort *)((longlong)puVar18 + 1);
        if (pbVar19 + -4 < puVar24) goto LAB_14014c66f;
        uVar20 = uVar20 + (byte)*puVar18;
      } while ((byte)*puVar18 == 0xff);
    }
    if ((uVar20 == 0xffffffffffffffff) ||
       (puVar24 = (ushort *)((longlong)puVar18 + 1),
       (undefined8 *)(uVar20 + 0xf + (longlong)puVar12) < puVar12)) goto LAB_14014c66f;
    uVar20 = uVar20 + 0xf;
  }
  goto LAB_14014c76d;
}

