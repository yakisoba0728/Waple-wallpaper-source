// Function: FUN_1401b7500
// Addr: 1401b7500
// Size: 413 bytes


void FUN_1401b7500(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  byte bVar8;
  longlong lVar9;
  longlong *plVar10;
  float fVar11;
  float extraout_XMM0_Da;
  undefined8 local_res10;
  
  for (lVar9 = 0x3f; 0xfffffffffffffffU >> lVar9 == 0; lVar9 = lVar9 + -1) {
  }
  if ((ulonglong)(1L << ((byte)lVar9 & 0x3f)) < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_14028c2e0("invalid hash bucket count");
  }
  plVar1 = *(longlong **)(param_1 + 8);
  uVar7 = param_2 - 1 | 1;
  lVar9 = 0x3f;
  if (uVar7 != 0) {
    for (; uVar7 >> lVar9 == 0; lVar9 = lVar9 + -1) {
    }
  }
  bVar8 = (char)lVar9 + 1;
  lVar9 = 1L << (bVar8 & 0x3f);
  fVar11 = (float)FUN_14004f190(param_1 + 0x18,2L << (bVar8 & 0x3f),plVar1);
  *(longlong *)(param_1 + 0x38) = lVar9;
  *(longlong *)(param_1 + 0x30) = lVar9 + -1;
  plVar10 = (longlong *)**(undefined8 **)(param_1 + 8);
joined_r0x0001401b7576:
  do {
    while( true ) {
      while( true ) {
        if (plVar10 == plVar1) {
          local_res10 = 0;
          FUN_1401b7cb0(&local_res10);
          return;
        }
        plVar2 = (longlong *)*plVar10;
        uVar7 = FUN_1401b55d0(fVar11,plVar10 + 2);
        lVar9 = *(longlong *)(param_1 + 0x18);
        uVar7 = uVar7 & *(ulonglong *)(param_1 + 0x30);
        plVar3 = *(longlong **)(lVar9 + uVar7 * 0x10);
        if (plVar3 != plVar1) break;
        *(longlong **)(lVar9 + uVar7 * 0x10) = plVar10;
        *(longlong **)(lVar9 + 8 + uVar7 * 0x10) = plVar10;
        plVar10 = plVar2;
        fVar11 = extraout_XMM0_Da;
      }
      plVar4 = *(longlong **)(lVar9 + 8 + uVar7 * 0x10);
      fVar11 = *(float *)(plVar10 + 2);
      if (fVar11 != *(float *)(plVar4 + 2)) break;
      plVar4 = (longlong *)*plVar4;
      if (plVar4 != plVar10) {
        plVar3 = (longlong *)plVar10[1];
        *plVar3 = (longlong)plVar2;
        puVar5 = (undefined8 *)plVar2[1];
        *puVar5 = plVar4;
        puVar6 = (undefined8 *)plVar4[1];
        *puVar6 = plVar10;
        plVar4[1] = (longlong)puVar5;
        plVar2[1] = (longlong)plVar3;
        plVar10[1] = (longlong)puVar6;
      }
      *(longlong **)(lVar9 + 8 + uVar7 * 0x10) = plVar10;
      plVar10 = plVar2;
    }
    do {
      if (plVar3 == plVar4) {
        plVar3 = (longlong *)plVar10[1];
        *plVar3 = (longlong)plVar2;
        puVar5 = (undefined8 *)plVar2[1];
        *puVar5 = plVar4;
        puVar6 = (undefined8 *)plVar4[1];
        *puVar6 = plVar10;
        plVar4[1] = (longlong)puVar5;
        plVar2[1] = (longlong)plVar3;
        plVar10[1] = (longlong)puVar6;
        *(longlong **)(lVar9 + uVar7 * 0x10) = plVar10;
        plVar10 = plVar2;
        goto joined_r0x0001401b7576;
      }
      plVar4 = (longlong *)plVar4[1];
    } while (fVar11 != *(float *)(plVar4 + 2));
    lVar9 = *plVar4;
    plVar3 = (longlong *)plVar10[1];
    *plVar3 = (longlong)plVar2;
    plVar4 = (longlong *)plVar2[1];
    *plVar4 = lVar9;
    puVar5 = *(undefined8 **)(lVar9 + 8);
    *puVar5 = plVar10;
    *(longlong **)(lVar9 + 8) = plVar4;
    plVar2[1] = (longlong)plVar3;
    plVar10[1] = (longlong)puVar5;
    plVar10 = plVar2;
  } while( true );
}

