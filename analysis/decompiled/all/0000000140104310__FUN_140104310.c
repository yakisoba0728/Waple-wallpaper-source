// Function: FUN_140104310
// Addr: 140104310
// Size: 639 bytes


void FUN_140104310(undefined8 param_1,ulonglong param_2)

{
  byte *pbVar1;
  longlong *plVar2;
  ulonglong _Size;
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
  undefined8 local_res8;
  
  plVar7 = DAT_1404e9258;
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
  FUN_1400374c0(&DAT_1404e9268,2L << (bVar12 & 0x3f),DAT_1404e9258);
  DAT_1404e9280 = lVar14 - 1;
  DAT_1404e9288 = lVar14;
  plVar6 = (longlong *)*DAT_1404e9258;
  lVar14 = DAT_1404e9268;
joined_r0x000140104395:
  do {
    while( true ) {
      DAT_1404e9268 = lVar14;
      if (plVar6 == plVar7) {
        local_res8 = 0;
        FUN_140104590(&local_res8);
        return;
      }
      uVar9 = plVar6[5];
      plVar11 = plVar6 + 2;
      plVar2 = (longlong *)*plVar6;
      if (0xf < uVar9) {
        plVar11 = (longlong *)plVar6[2];
      }
      _Size = plVar6[4];
      uVar16 = 0xcbf29ce484222325;
      uVar10 = 0;
      if (_Size != 0) {
        do {
          pbVar1 = (byte *)((longlong)plVar11 + uVar10);
          uVar10 = uVar10 + 1;
          uVar16 = (uVar16 ^ *pbVar1) * 0x100000001b3;
        } while (uVar10 < _Size);
      }
      uVar16 = uVar16 & DAT_1404e9280;
      plVar11 = *(longlong **)(lVar14 + uVar16 * 0x10);
      if (plVar11 != plVar7) break;
      *(longlong **)(lVar14 + uVar16 * 0x10) = plVar6;
      *(longlong **)(lVar14 + 8 + uVar16 * 0x10) = plVar6;
      plVar6 = plVar2;
      lVar14 = DAT_1404e9268;
    }
    plVar15 = *(longlong **)(lVar14 + 8 + uVar16 * 0x10);
    plVar13 = plVar15 + 2;
    if (0xf < (ulonglong)plVar15[5]) {
      plVar13 = (longlong *)*plVar13;
    }
    _Buf1 = plVar6 + 2;
    if (0xf < uVar9) {
      _Buf1 = (longlong *)plVar6[2];
    }
    if (_Size != plVar15[4]) {
LAB_14010449a:
      if (plVar11 != plVar15) {
        do {
          plVar15 = (longlong *)plVar15[1];
          plVar11 = plVar15 + 2;
          if (0xf < (ulonglong)plVar15[5]) {
            plVar11 = (longlong *)*plVar11;
          }
          if (uVar9 < 0x10) {
            plVar13 = plVar6 + 2;
          }
          else {
            plVar13 = (longlong *)plVar6[2];
          }
          if (_Size == plVar15[4]) {
            if ((_Size == 0) || (iVar8 = memcmp(plVar13,plVar11,_Size), iVar8 == 0)) {
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
              lVar14 = DAT_1404e9268;
              goto joined_r0x000140104395;
            }
            uVar9 = plVar6[5];
          }
        } while (*(longlong **)(lVar14 + uVar16 * 0x10) != plVar15);
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
      *(longlong **)(lVar14 + uVar16 * 0x10) = plVar6;
      plVar6 = plVar2;
      lVar14 = DAT_1404e9268;
      goto joined_r0x000140104395;
    }
    if ((_Size != 0) && (iVar8 = memcmp(_Buf1,plVar13,_Size), iVar8 != 0)) {
      plVar11 = *(longlong **)(lVar14 + uVar16 * 0x10);
      uVar9 = plVar6[5];
      goto LAB_14010449a;
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
    *(longlong **)(lVar14 + 8 + uVar16 * 0x10) = plVar6;
    plVar6 = plVar2;
    lVar14 = DAT_1404e9268;
  } while( true );
}

