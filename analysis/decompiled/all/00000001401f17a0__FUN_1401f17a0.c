// Function: FUN_1401f17a0
// Addr: 1401f17a0
// Size: 639 bytes


void FUN_1401f17a0(undefined8 param_1,ulonglong param_2)

{
  byte *pbVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  byte bVar12;
  longlong *_Buf1;
  longlong *plVar13;
  longlong lVar14;
  longlong *plVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined8 local_res8;
  
  plVar7 = DAT_1404e9008;
  for (lVar14 = 0x3f; 0xfffffffffffffffU >> lVar14 == 0; lVar14 = lVar14 + -1) {
  }
  local_res8 = param_1;
  if ((ulonglong)(1L << ((byte)lVar14 & 0x3f)) < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_14028c2e0("invalid hash bucket count");
  }
  uVar9 = param_2 - 1 | 1;
  lVar14 = 0x3f;
  if (uVar9 != 0) {
    for (; uVar9 >> lVar14 == 0; lVar14 = lVar14 + -1) {
    }
  }
  bVar12 = (char)lVar14 + 1;
  lVar14 = 1L << (bVar12 & 0x3f);
  FUN_14003e510(&DAT_1404e9018,2L << (bVar12 & 0x3f),DAT_1404e9008);
  DAT_1404e9030 = lVar14 - 1;
  DAT_1404e9038 = lVar14;
  plVar6 = (longlong *)*DAT_1404e9008;
  lVar14 = DAT_1404e9018;
joined_r0x0001401f1825:
  do {
    while( true ) {
      DAT_1404e9018 = lVar14;
      if (plVar6 == plVar7) {
        local_res8 = 0;
        FUN_1400e6380(&local_res8);
        return;
      }
      uVar16 = plVar6[5];
      plVar11 = plVar6 + 2;
      plVar2 = (longlong *)*plVar6;
      uVar9 = plVar6[4];
      if (0xf < uVar16) {
        plVar11 = (longlong *)plVar6[2];
      }
      uVar17 = 0xcbf29ce484222325;
      uVar10 = 0;
      if (uVar9 != 0) {
        do {
          pbVar1 = (byte *)((longlong)plVar11 + uVar10);
          uVar10 = uVar10 + 1;
          uVar17 = (uVar17 ^ *pbVar1) * 0x100000001b3;
        } while (uVar10 < uVar9);
      }
      uVar17 = uVar17 & DAT_1404e9030;
      plVar11 = *(longlong **)(lVar14 + uVar17 * 0x10);
      if (plVar11 != plVar7) break;
      *(longlong **)(lVar14 + uVar17 * 0x10) = plVar6;
      *(longlong **)(lVar14 + 8 + uVar17 * 0x10) = plVar6;
      plVar6 = plVar2;
      lVar14 = DAT_1404e9018;
    }
    plVar15 = *(longlong **)(lVar14 + 8 + uVar17 * 0x10);
    plVar13 = plVar15 + 2;
    if (0xf < (ulonglong)plVar15[5]) {
      plVar13 = (longlong *)*plVar13;
    }
    _Buf1 = plVar6 + 2;
    if (0xf < uVar16) {
      _Buf1 = (longlong *)plVar6[2];
    }
    if (uVar9 != plVar15[4]) {
LAB_1401f192a:
      if (plVar11 != plVar15) {
        do {
          plVar15 = (longlong *)plVar15[1];
          plVar11 = plVar15 + 2;
          if (0xf < (ulonglong)plVar15[5]) {
            plVar11 = (longlong *)*plVar11;
          }
          if (uVar16 < 0x10) {
            plVar13 = plVar6 + 2;
          }
          else {
            plVar13 = (longlong *)plVar6[2];
          }
          if (uVar9 == plVar15[4]) {
            if ((uVar9 == 0) || (iVar8 = memcmp(plVar13,plVar11,uVar9), iVar8 == 0)) {
              lVar14 = *plVar15;
              puVar3 = (undefined8 *)plVar6[1];
              *puVar3 = plVar2;
              plVar11 = (longlong *)plVar2[1];
              *plVar11 = lVar14;
              puVar4 = *(undefined8 **)(lVar14 + 8);
              *puVar4 = plVar6;
              *(longlong **)(lVar14 + 8) = plVar11;
              plVar2[1] = (longlong)puVar3;
              plVar6[1] = (longlong)puVar4;
              plVar6 = plVar2;
              lVar14 = DAT_1404e9018;
              goto joined_r0x0001401f1825;
            }
            uVar16 = plVar6[5];
          }
        } while (*(longlong **)(lVar14 + uVar17 * 0x10) != plVar15);
      }
      puVar3 = (undefined8 *)plVar6[1];
      *puVar3 = plVar2;
      puVar4 = (undefined8 *)plVar2[1];
      *puVar4 = plVar15;
      puVar5 = (undefined8 *)plVar15[1];
      *puVar5 = plVar6;
      plVar15[1] = (longlong)puVar4;
      plVar2[1] = (longlong)puVar3;
      plVar6[1] = (longlong)puVar5;
      *(longlong **)(lVar14 + uVar17 * 0x10) = plVar6;
      plVar6 = plVar2;
      lVar14 = DAT_1404e9018;
      goto joined_r0x0001401f1825;
    }
    if ((uVar9 != 0) && (iVar8 = memcmp(_Buf1,plVar13,uVar9), iVar8 != 0)) {
      plVar11 = *(longlong **)(lVar14 + uVar17 * 0x10);
      uVar16 = plVar6[5];
      goto LAB_1401f192a;
    }
    plVar15 = (longlong *)*plVar15;
    if (plVar15 != plVar6) {
      puVar3 = (undefined8 *)plVar6[1];
      *puVar3 = plVar2;
      puVar4 = (undefined8 *)plVar2[1];
      *puVar4 = plVar15;
      puVar5 = (undefined8 *)plVar15[1];
      *puVar5 = plVar6;
      plVar15[1] = (longlong)puVar4;
      plVar2[1] = (longlong)puVar3;
      plVar6[1] = (longlong)puVar5;
    }
    *(longlong **)(lVar14 + 8 + uVar17 * 0x10) = plVar6;
    plVar6 = plVar2;
    lVar14 = DAT_1404e9018;
  } while( true );
}

