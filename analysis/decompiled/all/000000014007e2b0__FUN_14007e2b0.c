// Function: FUN_14007e2b0
// Addr: 14007e2b0
// Size: 422 bytes


void FUN_14007e2b0(longlong param_1,ulonglong param_2)

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
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong *plVar16;
  ulonglong uVar17;
  undefined8 uStackX_10;
  
  for (lVar15 = 0x3f; 0xfffffffffffffffU >> lVar15 == 0; lVar15 = lVar15 + -1) {
  }
  if ((ulonglong)(1L << ((byte)lVar15 & 0x3f)) < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_14028c3b0("invalid hash bucket count");
  }
  plVar2 = *(longlong **)(param_1 + 8);
  uVar8 = param_2 - 1 | 1;
  lVar15 = 0x3f;
  if (uVar8 != 0) {
    for (; uVar8 >> lVar15 == 0; lVar15 = lVar15 + -1) {
    }
  }
  bVar11 = (char)lVar15 + 1;
  lVar15 = 1L << (bVar11 & 0x3f);
  FUN_14003e5e0(param_1 + 0x18,2L << (bVar11 & 0x3f),plVar2);
  *(longlong *)(param_1 + 0x38) = lVar15;
  *(longlong *)(param_1 + 0x30) = lVar15 + -1;
  plVar6 = (longlong *)**(undefined8 **)(param_1 + 8);
joined_r0x00014007e332:
  do {
    while( true ) {
      if (plVar6 == plVar2) {
        uStackX_10 = 0;
        func_0x00014007ec70(&uStackX_10);
        return;
      }
      uVar17 = plVar6[5];
      plVar10 = plVar6 + 2;
      plVar3 = (longlong *)*plVar6;
      uVar8 = plVar6[4];
      if (0xf < uVar17) {
        plVar10 = (longlong *)plVar6[2];
      }
      uVar14 = 0xcbf29ce484222325;
      uVar9 = 0;
      if (uVar8 != 0) {
        do {
          pbVar1 = (byte *)((longlong)plVar10 + uVar9);
          uVar9 = uVar9 + 1;
          uVar14 = (uVar14 ^ *pbVar1) * 0x100000001b3;
        } while (uVar9 < uVar8);
      }
      lVar15 = *(longlong *)(param_1 + 0x18);
      uVar14 = *(ulonglong *)(param_1 + 0x30) & uVar14;
      plVar10 = *(longlong **)(lVar15 + uVar14 * 0x10);
      if (plVar10 != plVar2) break;
      *(longlong **)(lVar15 + uVar14 * 0x10) = plVar6;
      *(longlong **)(lVar15 + 8 + uVar14 * 0x10) = plVar6;
      plVar6 = plVar3;
    }
    plVar16 = *(longlong **)(lVar15 + 8 + uVar14 * 0x10);
    plVar13 = plVar16 + 2;
    if (0xf < (ulonglong)plVar16[5]) {
      plVar13 = (longlong *)*plVar13;
    }
    plVar12 = plVar6 + 2;
    if (0xf < uVar17) {
      plVar12 = (longlong *)plVar6[2];
    }
    if (uVar8 != plVar16[4]) {
LAB_14007e43f:
      if (plVar10 != plVar16) {
        do {
          plVar16 = (longlong *)plVar16[1];
          plVar10 = plVar16 + 2;
          if (0xf < (ulonglong)plVar16[5]) {
            plVar10 = (longlong *)*plVar10;
          }
          if (uVar17 < 0x10) {
            plVar13 = plVar6 + 2;
          }
          else {
            plVar13 = (longlong *)plVar6[2];
          }
          if (uVar8 == plVar16[4]) {
            if ((uVar8 == 0) || (iVar7 = func_0x0001404210c0(plVar13,plVar10,uVar8), iVar7 == 0)) {
              lVar15 = *plVar16;
              plVar10 = (longlong *)plVar6[1];
              *plVar10 = (longlong)plVar3;
              plVar13 = (longlong *)plVar3[1];
              *plVar13 = lVar15;
              puVar4 = *(undefined8 **)(lVar15 + 8);
              *puVar4 = plVar6;
              *(longlong **)(lVar15 + 8) = plVar13;
              plVar3[1] = (longlong)plVar10;
              plVar6[1] = (longlong)puVar4;
              plVar6 = plVar3;
              goto joined_r0x00014007e332;
            }
            uVar17 = plVar6[5];
          }
        } while (*(longlong **)(lVar15 + uVar14 * 0x10) != plVar16);
      }
      plVar10 = (longlong *)plVar6[1];
      *plVar10 = (longlong)plVar3;
      puVar4 = (undefined8 *)plVar3[1];
      *puVar4 = plVar16;
      puVar5 = (undefined8 *)plVar16[1];
      *puVar5 = plVar6;
      plVar16[1] = (longlong)puVar4;
      plVar3[1] = (longlong)plVar10;
      plVar6[1] = (longlong)puVar5;
      *(longlong **)(lVar15 + uVar14 * 0x10) = plVar6;
      plVar6 = plVar3;
      goto joined_r0x00014007e332;
    }
    if ((uVar8 != 0) && (iVar7 = func_0x0001404210c0(plVar12,plVar13,uVar8), iVar7 != 0)) {
      plVar10 = *(longlong **)(lVar15 + uVar14 * 0x10);
      uVar17 = plVar6[5];
      goto LAB_14007e43f;
    }
    plVar16 = (longlong *)*plVar16;
    if (plVar16 != plVar6) {
      plVar10 = (longlong *)plVar6[1];
      *plVar10 = (longlong)plVar3;
      puVar4 = (undefined8 *)plVar3[1];
      *puVar4 = plVar16;
      puVar5 = (undefined8 *)plVar16[1];
      *puVar5 = plVar6;
      plVar16[1] = (longlong)puVar4;
      plVar3[1] = (longlong)plVar10;
      plVar6[1] = (longlong)puVar5;
    }
    *(longlong **)(lVar15 + 8 + uVar14 * 0x10) = plVar6;
    plVar6 = plVar3;
  } while( true );
}

