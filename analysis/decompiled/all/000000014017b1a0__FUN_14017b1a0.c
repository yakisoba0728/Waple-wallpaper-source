// Function: FUN_14017b1a0
// Addr: 14017b1a0
// Size: 394 bytes


void FUN_14017b1a0(longlong param_1,ulonglong param_2)

{
  byte *pbVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  byte bVar12;
  longlong *plVar13;
  longlong *plVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong *plVar17;
  undefined8 uStackX_10;
  
  for (lVar16 = 0x3f; 0xfffffffffffffffU >> lVar16 == 0; lVar16 = lVar16 + -1) {
  }
  if ((ulonglong)(1L << ((byte)lVar16 & 0x3f)) < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_14028c3b0("invalid hash bucket count");
  }
  plVar2 = *(longlong **)(param_1 + 8);
  uVar9 = param_2 - 1 | 1;
  lVar16 = 0x3f;
  if (uVar9 != 0) {
    for (; uVar9 >> lVar16 == 0; lVar16 = lVar16 + -1) {
    }
  }
  bVar12 = (char)lVar16 + 1;
  lVar16 = 1L << (bVar12 & 0x3f);
  FUN_14004f260(param_1 + 0x18,2L << (bVar12 & 0x3f),plVar2);
  *(longlong *)(param_1 + 0x38) = lVar16;
  *(longlong *)(param_1 + 0x30) = lVar16 + -1;
  plVar7 = (longlong *)**(undefined8 **)(param_1 + 8);
joined_r0x00014017b222:
  do {
    while( true ) {
      if (plVar7 == plVar2) {
        uStackX_10 = 0;
        FUN_14017bd10(&uStackX_10);
        return;
      }
      uVar10 = 0xcbf29ce484222325;
      uVar9 = plVar7[5];
      plVar11 = plVar7 + 2;
      plVar3 = (longlong *)*plVar7;
      if (0xf < uVar9) {
        plVar11 = (longlong *)plVar7[2];
      }
      uVar4 = plVar7[4];
      uVar15 = 0;
      if (uVar4 != 0) {
        do {
          pbVar1 = (byte *)((longlong)plVar11 + uVar15);
          uVar15 = uVar15 + 1;
          uVar10 = (uVar10 ^ *pbVar1) * 0x100000001b3;
        } while (uVar15 < uVar4);
      }
      lVar16 = *(longlong *)(param_1 + 0x18);
      uVar10 = *(ulonglong *)(param_1 + 0x30) & uVar10;
      plVar11 = *(longlong **)(lVar16 + uVar10 * 0x10);
      if (plVar11 != plVar2) break;
      *(longlong **)(lVar16 + uVar10 * 0x10) = plVar7;
      *(longlong **)(lVar16 + 8 + uVar10 * 0x10) = plVar7;
      plVar7 = plVar3;
    }
    plVar17 = *(longlong **)(lVar16 + 8 + uVar10 * 0x10);
    plVar14 = plVar17 + 2;
    if (0xf < (ulonglong)plVar17[5]) {
      plVar14 = (longlong *)*plVar14;
    }
    plVar13 = plVar7 + 2;
    if (0xf < uVar9) {
      plVar13 = (longlong *)plVar7[2];
    }
    if (uVar4 != plVar17[4]) {
LAB_14017b31f:
      if (plVar11 != plVar17) {
        do {
          plVar17 = (longlong *)plVar17[1];
          plVar11 = plVar17 + 2;
          if (0xf < (ulonglong)plVar17[5]) {
            plVar11 = (longlong *)*plVar11;
          }
          if (uVar9 < 0x10) {
            plVar14 = plVar7 + 2;
          }
          else {
            plVar14 = (longlong *)plVar7[2];
          }
          if (uVar4 == plVar17[4]) {
            if ((uVar4 == 0) || (iVar8 = func_0x0001404210c0(plVar14,plVar11,uVar4), iVar8 == 0)) {
              lVar16 = *plVar17;
              plVar11 = (longlong *)plVar7[1];
              *plVar11 = (longlong)plVar3;
              plVar14 = (longlong *)plVar3[1];
              *plVar14 = lVar16;
              puVar5 = *(undefined8 **)(lVar16 + 8);
              *puVar5 = plVar7;
              *(longlong **)(lVar16 + 8) = plVar14;
              plVar3[1] = (longlong)plVar11;
              plVar7[1] = (longlong)puVar5;
              plVar7 = plVar3;
              goto joined_r0x00014017b222;
            }
            uVar9 = plVar7[5];
          }
        } while (*(longlong **)(lVar16 + uVar10 * 0x10) != plVar17);
      }
      plVar11 = (longlong *)plVar7[1];
      *plVar11 = (longlong)plVar3;
      puVar5 = (undefined8 *)plVar3[1];
      *puVar5 = plVar17;
      puVar6 = (undefined8 *)plVar17[1];
      *puVar6 = plVar7;
      plVar17[1] = (longlong)puVar5;
      plVar3[1] = (longlong)plVar11;
      plVar7[1] = (longlong)puVar6;
      *(longlong **)(lVar16 + uVar10 * 0x10) = plVar7;
      plVar7 = plVar3;
      goto joined_r0x00014017b222;
    }
    if ((uVar4 != 0) && (iVar8 = func_0x0001404210c0(plVar13,plVar14,uVar4), iVar8 != 0)) {
      plVar11 = *(longlong **)(lVar16 + uVar10 * 0x10);
      uVar9 = plVar7[5];
      goto LAB_14017b31f;
    }
    plVar17 = (longlong *)*plVar17;
    if (plVar17 != plVar7) {
      plVar11 = (longlong *)plVar7[1];
      *plVar11 = (longlong)plVar3;
      puVar5 = (undefined8 *)plVar3[1];
      *puVar5 = plVar17;
      puVar6 = (undefined8 *)plVar17[1];
      *puVar6 = plVar7;
      plVar17[1] = (longlong)puVar5;
      plVar3[1] = (longlong)plVar11;
      plVar7[1] = (longlong)puVar6;
    }
    *(longlong **)(lVar16 + 8 + uVar10 * 0x10) = plVar7;
    plVar7 = plVar3;
  } while( true );
}

