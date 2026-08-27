// Function: FUN_1400cd5a0
// Addr: 1400cd5a0
// Size: 496 bytes


void FUN_1400cd5a0(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  ulonglong uVar9;
  byte bVar10;
  longlong lVar11;
  undefined8 local_res10;
  
  for (lVar11 = 0x3f; 0xfffffffffffffffU >> lVar11 == 0; lVar11 = lVar11 + -1) {
  }
  if ((ulonglong)(1L << ((byte)lVar11 & 0x3f)) < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_14028c2e0("invalid hash bucket count");
  }
  plVar2 = *(longlong **)(param_1 + 8);
  uVar9 = param_2 - 1 | 1;
  lVar11 = 0x3f;
  if (uVar9 != 0) {
    for (; uVar9 >> lVar11 == 0; lVar11 = lVar11 + -1) {
    }
  }
  bVar10 = (char)lVar11 + 1;
  lVar11 = 1L << (bVar10 & 0x3f);
  FUN_140011f50(param_1 + 0x18,2L << (bVar10 & 0x3f),plVar2);
  *(longlong *)(param_1 + 0x38) = lVar11;
  *(longlong *)(param_1 + 0x30) = lVar11 + -1;
  plVar8 = (longlong *)**(undefined8 **)(param_1 + 8);
joined_r0x0001400cd616:
  do {
    while( true ) {
      while( true ) {
        if (plVar8 == plVar2) {
          local_res10 = 0;
          FUN_1400cd820(&local_res10);
          return;
        }
        uVar1 = *(uint *)(plVar8 + 2);
        lVar11 = *(longlong *)(param_1 + 0x18);
        plVar3 = (longlong *)*plVar8;
        uVar9 = *(ulonglong *)(param_1 + 0x30) &
                (((((ulonglong)(uVar1 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                  (ulonglong)(uVar1 >> 8 & 0xff)) * 0x100000001b3 ^
                 (ulonglong)(uVar1 >> 0x10 & 0xff)) * 0x100000001b3 ^ (ulonglong)(uVar1 >> 0x18)) *
                0x100000001b3;
        plVar4 = *(longlong **)(lVar11 + uVar9 * 0x10);
        if (plVar4 != plVar2) break;
        *(longlong **)(lVar11 + uVar9 * 0x10) = plVar8;
        *(longlong **)(lVar11 + 8 + uVar9 * 0x10) = plVar8;
        plVar8 = plVar3;
      }
      plVar5 = *(longlong **)(lVar11 + 8 + uVar9 * 0x10);
      if (uVar1 != *(uint *)(plVar5 + 2)) break;
      plVar5 = (longlong *)*plVar5;
      if (plVar5 != plVar8) {
        plVar4 = (longlong *)plVar8[1];
        *plVar4 = (longlong)plVar3;
        puVar6 = (undefined8 *)plVar3[1];
        *puVar6 = plVar5;
        puVar7 = (undefined8 *)plVar5[1];
        *puVar7 = plVar8;
        plVar5[1] = (longlong)puVar6;
        plVar3[1] = (longlong)plVar4;
        plVar8[1] = (longlong)puVar7;
      }
      *(longlong **)(lVar11 + 8 + uVar9 * 0x10) = plVar8;
      plVar8 = plVar3;
    }
    do {
      if (plVar4 == plVar5) {
        plVar4 = (longlong *)plVar8[1];
        *plVar4 = (longlong)plVar3;
        puVar6 = (undefined8 *)plVar3[1];
        *puVar6 = plVar5;
        puVar7 = (undefined8 *)plVar5[1];
        *puVar7 = plVar8;
        plVar5[1] = (longlong)puVar6;
        plVar3[1] = (longlong)plVar4;
        plVar8[1] = (longlong)puVar7;
        *(longlong **)(lVar11 + uVar9 * 0x10) = plVar8;
        plVar8 = plVar3;
        goto joined_r0x0001400cd616;
      }
      plVar5 = (longlong *)plVar5[1];
    } while (uVar1 != *(uint *)(plVar5 + 2));
    lVar11 = *plVar5;
    plVar4 = (longlong *)plVar8[1];
    *plVar4 = (longlong)plVar3;
    plVar5 = (longlong *)plVar3[1];
    *plVar5 = lVar11;
    puVar6 = *(undefined8 **)(lVar11 + 8);
    *puVar6 = plVar8;
    *(longlong **)(lVar11 + 8) = plVar5;
    plVar3[1] = (longlong)plVar4;
    plVar8[1] = (longlong)puVar6;
    plVar8 = plVar3;
  } while( true );
}

