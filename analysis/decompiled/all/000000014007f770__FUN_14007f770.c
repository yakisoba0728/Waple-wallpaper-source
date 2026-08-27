// Function: FUN_14007f770
// Addr: 14007f770
// Size: 687 bytes


void FUN_14007f770(longlong param_1,ulonglong param_2)

{
  byte *pbVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  byte bVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  bool bVar16;
  undefined8 local_res10;
  
  for (lVar13 = 0x3f; 0xfffffffffffffffU >> lVar13 == 0; lVar13 = lVar13 + -1) {
  }
  if ((ulonglong)(1L << ((byte)lVar13 & 0x3f)) < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_14028c2e0("invalid hash bucket count");
  }
  uVar8 = param_2 - 1 | 1;
  plVar2 = *(longlong **)(param_1 + 8);
  lVar13 = 0x3f;
  if (uVar8 != 0) {
    for (; uVar8 >> lVar13 == 0; lVar13 = lVar13 + -1) {
    }
  }
  bVar9 = (char)lVar13 + 1;
  lVar13 = 1L << (bVar9 & 0x3f);
  FUN_14003e510(param_1 + 0x18,2L << (bVar9 & 0x3f),plVar2);
  *(longlong *)(param_1 + 0x38) = lVar13;
  *(longlong *)(param_1 + 0x30) = lVar13 + -1;
  plVar6 = (longlong *)**(undefined8 **)(param_1 + 8);
joined_r0x00014007f7f3:
  do {
    while( true ) {
      while( true ) {
        if (plVar6 == plVar2) {
          local_res10 = 0;
          FUN_14007fc80(&local_res10);
          return;
        }
        plVar12 = plVar6 + 2;
        plVar3 = (longlong *)*plVar6;
        lVar13 = plVar6[4];
        if (7 < (ulonglong)plVar6[5]) {
          plVar12 = (longlong *)plVar6[2];
        }
        uVar8 = 0;
        uVar11 = 0xcbf29ce484222325;
        if (lVar13 * 2 != 0) {
          do {
            pbVar1 = (byte *)((longlong)plVar12 + uVar8);
            uVar8 = uVar8 + 1;
            uVar11 = (uVar11 ^ *pbVar1) * 0x100000001b3;
          } while (uVar8 < (ulonglong)(lVar13 * 2));
        }
        puVar15 = (undefined8 *)
                  (*(longlong *)(param_1 + 0x18) + (*(ulonglong *)(param_1 + 0x30) & uVar11) * 0x10)
        ;
        if ((longlong *)*puVar15 != plVar2) break;
        *puVar15 = plVar6;
        puVar15[1] = plVar6;
        plVar6 = plVar3;
      }
      plVar14 = (longlong *)puVar15[1];
      plVar12 = plVar14 + 2;
      if (7 < (ulonglong)plVar14[5]) {
        plVar12 = (longlong *)*plVar12;
      }
      plVar10 = plVar6 + 2;
      if (7 < (ulonglong)plVar6[5]) {
        plVar10 = (longlong *)plVar6[2];
      }
      if (lVar13 == plVar14[4]) {
        if (lVar13 == 0) {
          bVar16 = false;
        }
        else {
          iVar7 = FUN_1400158b0(plVar10,plVar12,lVar13);
          bVar16 = iVar7 != 0;
        }
      }
      else {
        bVar16 = true;
      }
      if (bVar16) break;
      plVar14 = (longlong *)*plVar14;
      if (plVar14 != plVar6) {
        plVar12 = (longlong *)plVar6[1];
        *plVar12 = (longlong)plVar3;
        puVar4 = (undefined8 *)plVar3[1];
        *puVar4 = plVar14;
        puVar5 = (undefined8 *)plVar14[1];
        *puVar5 = plVar6;
        plVar14[1] = (longlong)puVar4;
        plVar3[1] = (longlong)plVar12;
        plVar6[1] = (longlong)puVar5;
      }
      puVar15[1] = plVar6;
      plVar6 = plVar3;
    }
    if ((longlong *)*puVar15 != plVar14) {
      do {
        plVar14 = (longlong *)plVar14[1];
        plVar12 = plVar14 + 2;
        if (7 < (ulonglong)plVar14[5]) {
          plVar12 = (longlong *)*plVar12;
        }
        if ((ulonglong)plVar6[5] < 8) {
          plVar10 = plVar6 + 2;
        }
        else {
          plVar10 = (longlong *)plVar6[2];
        }
        if (plVar6[4] == plVar14[4]) {
          if (plVar6[4] == 0) {
            bVar16 = false;
          }
          else {
            iVar7 = FUN_1400158b0(plVar10,plVar12);
            bVar16 = iVar7 != 0;
          }
        }
        else {
          bVar16 = true;
        }
        if (!bVar16) {
          lVar13 = *plVar14;
          plVar12 = (longlong *)plVar6[1];
          *plVar12 = (longlong)plVar3;
          plVar14 = (longlong *)plVar3[1];
          *plVar14 = lVar13;
          puVar15 = *(undefined8 **)(lVar13 + 8);
          *puVar15 = plVar6;
          *(longlong **)(lVar13 + 8) = plVar14;
          plVar3[1] = (longlong)plVar12;
          plVar6[1] = (longlong)puVar15;
          plVar6 = plVar3;
          goto joined_r0x00014007f7f3;
        }
      } while ((longlong *)*puVar15 != plVar14);
    }
    plVar12 = (longlong *)plVar6[1];
    *plVar12 = (longlong)plVar3;
    puVar4 = (undefined8 *)plVar3[1];
    *puVar4 = plVar14;
    puVar5 = (undefined8 *)plVar14[1];
    *puVar5 = plVar6;
    plVar14[1] = (longlong)puVar4;
    plVar3[1] = (longlong)plVar12;
    plVar6[1] = (longlong)puVar5;
    *puVar15 = plVar6;
    plVar6 = plVar3;
  } while( true );
}

