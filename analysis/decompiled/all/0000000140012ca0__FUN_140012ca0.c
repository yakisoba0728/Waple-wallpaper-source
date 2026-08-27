// Function: FUN_140012ca0
// Addr: 140012ca0
// Size: 657 bytes


void FUN_140012ca0(longlong param_1,ulonglong param_2)

{
  byte *pbVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  byte bVar11;
  longlong *_Buf1;
  longlong *plVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong *plVar15;
  ulonglong uVar16;
  
  for (lVar14 = 0x3f; 0xfffffffffffffffU >> lVar14 == 0; lVar14 = lVar14 + -1) {
  }
  if ((ulonglong)(1L << ((byte)lVar14 & 0x3f)) < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_14028c2e0("invalid hash bucket count");
  }
  plVar2 = *(longlong **)(param_1 + 8);
  uVar8 = param_2 - 1 | 1;
  lVar14 = 0x3f;
  if (uVar8 != 0) {
    for (; uVar8 >> lVar14 == 0; lVar14 = lVar14 + -1) {
    }
  }
  bVar11 = (char)lVar14 + 1;
  lVar14 = 1L << (bVar11 & 0x3f);
  FUN_140011f50(param_1 + 0x18,2L << (bVar11 & 0x3f),plVar2);
  *(longlong *)(param_1 + 0x38) = lVar14;
  *(longlong *)(param_1 + 0x30) = lVar14 + -1;
  plVar6 = (longlong *)**(undefined8 **)(param_1 + 8);
joined_r0x000140012d22:
  do {
    while( true ) {
      if (plVar6 == plVar2) {
        return;
      }
      uVar16 = plVar6[5];
      plVar10 = plVar6 + 2;
      plVar3 = (longlong *)*plVar6;
      uVar8 = plVar6[4];
      if (0xf < uVar16) {
        plVar10 = (longlong *)plVar6[2];
      }
      uVar13 = 0xcbf29ce484222325;
      uVar9 = 0;
      if (uVar8 != 0) {
        do {
          pbVar1 = (byte *)((longlong)plVar10 + uVar9);
          uVar9 = uVar9 + 1;
          uVar13 = (uVar13 ^ *pbVar1) * 0x100000001b3;
        } while (uVar9 < uVar8);
      }
      lVar14 = *(longlong *)(param_1 + 0x18);
      uVar13 = *(ulonglong *)(param_1 + 0x30) & uVar13;
      plVar10 = *(longlong **)(lVar14 + uVar13 * 0x10);
      if (plVar10 != plVar2) break;
      *(longlong **)(lVar14 + uVar13 * 0x10) = plVar6;
      *(longlong **)(lVar14 + 8 + uVar13 * 0x10) = plVar6;
      plVar6 = plVar3;
    }
    plVar15 = *(longlong **)(lVar14 + 8 + uVar13 * 0x10);
    plVar12 = plVar15 + 2;
    if (0xf < (ulonglong)plVar15[5]) {
      plVar12 = (longlong *)*plVar12;
    }
    _Buf1 = plVar6 + 2;
    if (0xf < uVar16) {
      _Buf1 = (longlong *)plVar6[2];
    }
    if (uVar8 != plVar15[4]) {
LAB_140012e2f:
      if (plVar10 != plVar15) {
        do {
          plVar15 = (longlong *)plVar15[1];
          plVar10 = plVar15 + 2;
          if (0xf < (ulonglong)plVar15[5]) {
            plVar10 = (longlong *)*plVar10;
          }
          if (uVar16 < 0x10) {
            plVar12 = plVar6 + 2;
          }
          else {
            plVar12 = (longlong *)plVar6[2];
          }
          if (uVar8 == plVar15[4]) {
            if ((uVar8 == 0) || (iVar7 = memcmp(plVar12,plVar10,uVar8), iVar7 == 0)) {
              lVar14 = *plVar15;
              plVar10 = (longlong *)plVar6[1];
              *plVar10 = (longlong)plVar3;
              plVar12 = (longlong *)plVar3[1];
              *plVar12 = lVar14;
              puVar4 = *(undefined8 **)(lVar14 + 8);
              *puVar4 = plVar6;
              *(longlong **)(lVar14 + 8) = plVar12;
              plVar3[1] = (longlong)plVar10;
              plVar6[1] = (longlong)puVar4;
              plVar6 = plVar3;
              goto joined_r0x000140012d22;
            }
            uVar16 = plVar6[5];
          }
        } while (*(longlong **)(lVar14 + uVar13 * 0x10) != plVar15);
      }
      plVar10 = (longlong *)plVar6[1];
      *plVar10 = (longlong)plVar3;
      puVar4 = (undefined8 *)plVar3[1];
      *puVar4 = plVar15;
      puVar5 = (undefined8 *)plVar15[1];
      *puVar5 = plVar6;
      plVar15[1] = (longlong)puVar4;
      plVar3[1] = (longlong)plVar10;
      plVar6[1] = (longlong)puVar5;
      *(longlong **)(lVar14 + uVar13 * 0x10) = plVar6;
      plVar6 = plVar3;
      goto joined_r0x000140012d22;
    }
    if ((uVar8 != 0) && (iVar7 = memcmp(_Buf1,plVar12,uVar8), iVar7 != 0)) {
      plVar10 = *(longlong **)(lVar14 + uVar13 * 0x10);
      uVar16 = plVar6[5];
      goto LAB_140012e2f;
    }
    plVar15 = (longlong *)*plVar15;
    if (plVar15 != plVar6) {
      plVar10 = (longlong *)plVar6[1];
      *plVar10 = (longlong)plVar3;
      puVar4 = (undefined8 *)plVar3[1];
      *puVar4 = plVar15;
      puVar5 = (undefined8 *)plVar15[1];
      *puVar5 = plVar6;
      plVar15[1] = (longlong)puVar4;
      plVar3[1] = (longlong)plVar10;
      plVar6[1] = (longlong)puVar5;
    }
    *(longlong **)(lVar14 + 8 + uVar13 * 0x10) = plVar6;
    plVar6 = plVar3;
  } while( true );
}

