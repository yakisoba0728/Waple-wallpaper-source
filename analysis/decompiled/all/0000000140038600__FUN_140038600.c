// Function: FUN_140038600
// Addr: 140038600
// Size: 487 bytes


void FUN_140038600(undefined8 param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  byte bVar10;
  longlong lVar11;
  undefined8 local_res8;
  
  plVar8 = DAT_1404e8be8;
  for (lVar11 = 0x3f; 0xfffffffffffffffU >> lVar11 == 0; lVar11 = lVar11 + -1) {
  }
  local_res8 = param_1;
  if ((ulonglong)(1L << ((byte)lVar11 & 0x3f)) < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_14028c2e0("invalid hash bucket count");
  }
  uVar9 = param_2 - 1 | 1;
  lVar11 = 0x3f;
  if (uVar9 != 0) {
    for (; uVar9 >> lVar11 == 0; lVar11 = lVar11 + -1) {
    }
  }
  bVar10 = (char)lVar11 + 1;
  lVar11 = 1L << (bVar10 & 0x3f);
  FUN_1400374c0(&DAT_1404e8bf8,2L << (bVar10 & 0x3f),DAT_1404e8be8);
  DAT_1404e8c10 = lVar11 - 1;
  DAT_1404e8c18 = lVar11;
  plVar7 = (longlong *)*DAT_1404e8be8;
  lVar11 = DAT_1404e8bf8;
joined_r0x000140038680:
  do {
    while( true ) {
      while( true ) {
        DAT_1404e8bf8 = lVar11;
        if (plVar7 == plVar8) {
          local_res8 = 0;
          FUN_140039180(&local_res8);
          return;
        }
        plVar1 = (longlong *)*plVar7;
        uVar9 = (((((ulonglong)*(byte *)(plVar7 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar7 + 0x11)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar7 + 0x12)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)plVar7 + 0x13)) * 0x100000001b3 & DAT_1404e8c10;
        plVar2 = *(longlong **)(lVar11 + uVar9 * 0x10);
        if (plVar2 != plVar8) break;
        *(longlong **)(lVar11 + uVar9 * 0x10) = plVar7;
        *(longlong **)(lVar11 + 8 + uVar9 * 0x10) = plVar7;
        plVar7 = plVar1;
        lVar11 = DAT_1404e8bf8;
      }
      plVar3 = *(longlong **)(lVar11 + 8 + uVar9 * 0x10);
      if ((int)plVar7[2] != (int)plVar3[2]) break;
      plVar3 = (longlong *)*plVar3;
      if (plVar3 != plVar7) {
        puVar4 = (undefined8 *)plVar7[1];
        *puVar4 = plVar1;
        puVar5 = (undefined8 *)plVar1[1];
        *puVar5 = plVar3;
        puVar6 = (undefined8 *)plVar3[1];
        *puVar6 = plVar7;
        plVar3[1] = (longlong)puVar5;
        plVar1[1] = (longlong)puVar4;
        plVar7[1] = (longlong)puVar6;
      }
      *(longlong **)(lVar11 + 8 + uVar9 * 0x10) = plVar7;
      plVar7 = plVar1;
      lVar11 = DAT_1404e8bf8;
    }
    do {
      if (plVar2 == plVar3) {
        puVar4 = (undefined8 *)plVar7[1];
        *puVar4 = plVar1;
        puVar5 = (undefined8 *)plVar1[1];
        *puVar5 = plVar3;
        puVar6 = (undefined8 *)plVar3[1];
        *puVar6 = plVar7;
        plVar3[1] = (longlong)puVar5;
        plVar1[1] = (longlong)puVar4;
        plVar7[1] = (longlong)puVar6;
        *(longlong **)(lVar11 + uVar9 * 0x10) = plVar7;
        plVar7 = plVar1;
        lVar11 = DAT_1404e8bf8;
        goto joined_r0x000140038680;
      }
      plVar3 = (longlong *)plVar3[1];
    } while ((int)plVar7[2] != (int)plVar3[2]);
    lVar11 = *plVar3;
    puVar4 = (undefined8 *)plVar7[1];
    *puVar4 = plVar1;
    plVar2 = (longlong *)plVar1[1];
    *plVar2 = lVar11;
    puVar5 = *(undefined8 **)(lVar11 + 8);
    *puVar5 = plVar7;
    *(longlong **)(lVar11 + 8) = plVar2;
    plVar1[1] = (longlong)puVar4;
    plVar7[1] = (longlong)puVar5;
    plVar7 = plVar1;
    lVar11 = DAT_1404e8bf8;
  } while( true );
}

