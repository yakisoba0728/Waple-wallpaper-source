// Function: FUN_14016fda0
// Addr: 14016fda0
// Size: 419 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14016fda0(undefined8 param_1,ulonglong param_2)

{
  byte *pbVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  byte bVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong *plVar17;
  ulonglong uVar18;
  undefined8 local_res8;
  
  plVar8 = DAT_1404e81d8;
  for (lVar16 = 0x3f; 0xfffffffffffffffU >> lVar16 == 0; lVar16 = lVar16 + -1) {
  }
  local_res8 = param_1;
  if ((ulonglong)(1L << ((byte)lVar16 & 0x3f)) < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_14028c3b0("invalid hash bucket count");
  }
  uVar10 = param_2 - 1 | 1;
  lVar16 = 0x3f;
  if (uVar10 != 0) {
    for (; uVar10 >> lVar16 == 0; lVar16 = lVar16 + -1) {
    }
  }
  bVar13 = (char)lVar16 + 1;
  lVar16 = 1L << (bVar13 & 0x3f);
  FUN_14003e5e0(&DAT_1404e81e8,2L << (bVar13 & 0x3f),DAT_1404e81d8);
  DAT_1404e8200 = lVar16 - 1;
  _DAT_1404e8208 = lVar16;
  plVar7 = (longlong *)*DAT_1404e81d8;
  lVar16 = DAT_1404e81e8;
joined_r0x00014016fe25:
  do {
    while( true ) {
      DAT_1404e81e8 = lVar16;
      if (plVar7 == plVar8) {
        local_res8 = 0;
        FUN_14003a140(&local_res8);
        return;
      }
      uVar10 = plVar7[5];
      plVar12 = plVar7 + 2;
      plVar2 = (longlong *)*plVar7;
      if (0xf < uVar10) {
        plVar12 = (longlong *)plVar7[2];
      }
      uVar3 = plVar7[4];
      uVar18 = 0xcbf29ce484222325;
      uVar11 = 0;
      if (uVar3 != 0) {
        do {
          pbVar1 = (byte *)((longlong)plVar12 + uVar11);
          uVar11 = uVar11 + 1;
          uVar18 = (uVar18 ^ *pbVar1) * 0x100000001b3;
        } while (uVar11 < uVar3);
      }
      uVar18 = uVar18 & DAT_1404e8200;
      plVar12 = *(longlong **)(lVar16 + uVar18 * 0x10);
      if (plVar12 != plVar8) break;
      *(longlong **)(lVar16 + uVar18 * 0x10) = plVar7;
      *(longlong **)(lVar16 + 8 + uVar18 * 0x10) = plVar7;
      plVar7 = plVar2;
      lVar16 = DAT_1404e81e8;
    }
    plVar17 = *(longlong **)(lVar16 + 8 + uVar18 * 0x10);
    plVar15 = plVar17 + 2;
    if (0xf < (ulonglong)plVar17[5]) {
      plVar15 = (longlong *)*plVar15;
    }
    plVar14 = plVar7 + 2;
    if (0xf < uVar10) {
      plVar14 = (longlong *)plVar7[2];
    }
    if (uVar3 != plVar17[4]) {
LAB_14016ff2a:
      if (plVar12 != plVar17) {
        do {
          plVar17 = (longlong *)plVar17[1];
          plVar12 = plVar17 + 2;
          if (0xf < (ulonglong)plVar17[5]) {
            plVar12 = (longlong *)*plVar12;
          }
          if (uVar10 < 0x10) {
            plVar15 = plVar7 + 2;
          }
          else {
            plVar15 = (longlong *)plVar7[2];
          }
          if (uVar3 == plVar17[4]) {
            if ((uVar3 == 0) || (iVar9 = func_0x0001404210c0(plVar15,plVar12,uVar3), iVar9 == 0)) {
              lVar16 = *plVar17;
              puVar4 = (undefined8 *)plVar7[1];
              *puVar4 = plVar2;
              plVar12 = (longlong *)plVar2[1];
              *plVar12 = lVar16;
              puVar5 = *(undefined8 **)(lVar16 + 8);
              *puVar5 = plVar7;
              *(longlong **)(lVar16 + 8) = plVar12;
              plVar2[1] = (longlong)puVar4;
              plVar7[1] = (longlong)puVar5;
              plVar7 = plVar2;
              lVar16 = DAT_1404e81e8;
              goto joined_r0x00014016fe25;
            }
            uVar10 = plVar7[5];
          }
        } while (*(longlong **)(lVar16 + uVar18 * 0x10) != plVar17);
      }
      puVar4 = (undefined8 *)plVar7[1];
      *puVar4 = plVar2;
      puVar5 = (undefined8 *)plVar2[1];
      *puVar5 = plVar17;
      puVar6 = (undefined8 *)plVar17[1];
      *puVar6 = plVar7;
      plVar17[1] = (longlong)puVar5;
      plVar2[1] = (longlong)puVar4;
      plVar7[1] = (longlong)puVar6;
      *(longlong **)(lVar16 + uVar18 * 0x10) = plVar7;
      plVar7 = plVar2;
      lVar16 = DAT_1404e81e8;
      goto joined_r0x00014016fe25;
    }
    if ((uVar3 != 0) && (iVar9 = func_0x0001404210c0(plVar14,plVar15,uVar3), iVar9 != 0)) {
      plVar12 = *(longlong **)(lVar16 + uVar18 * 0x10);
      uVar10 = plVar7[5];
      goto LAB_14016ff2a;
    }
    plVar17 = (longlong *)*plVar17;
    if (plVar17 != plVar7) {
      puVar4 = (undefined8 *)plVar7[1];
      *puVar4 = plVar2;
      puVar5 = (undefined8 *)plVar2[1];
      *puVar5 = plVar17;
      puVar6 = (undefined8 *)plVar17[1];
      *puVar6 = plVar7;
      plVar17[1] = (longlong)puVar5;
      plVar2[1] = (longlong)puVar4;
      plVar7[1] = (longlong)puVar6;
    }
    *(longlong **)(lVar16 + 8 + uVar18 * 0x10) = plVar7;
    plVar7 = plVar2;
    lVar16 = DAT_1404e81e8;
  } while( true );
}

