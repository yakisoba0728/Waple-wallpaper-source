// Function: FUN_14020c920
// Addr: 14020c920
// Size: 413 bytes


void FUN_14020c920(longlong *param_1)

{
  ulonglong uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined4 *puVar7;
  char cVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint *puVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 local_res8;
  
  puVar4 = (undefined8 *)param_1[2];
  iVar13 = 0;
  plVar5 = (longlong *)param_1[1];
  puVar12 = (uint *)*puVar4;
  uVar2 = *(undefined4 *)param_1[3];
  if (puVar12 != (uint *)puVar4[1]) {
    do {
      uVar3 = *puVar12;
      puVar12 = puVar12 + 1;
      iVar13 = iVar13 + *(int *)(*(longlong *)
                                  (*(longlong *)(*(longlong *)(*plVar5 + 0x4b8) + 0x298) +
                                  (ulonglong)uVar3 * 8) + 0x10);
    } while (puVar12 != (uint *)puVar4[1]);
  }
  (**(code **)(**(longlong **)(*plVar5 + 0x490) + 0x38))(*(longlong **)(*plVar5 + 0x490),uVar2);
  (**(code **)(**(longlong **)(*plVar5 + 0x490) + 0x30))
            (*(longlong **)(*plVar5 + 0x490),uVar2,0,iVar13,2);
  cVar8 = (**(code **)(**(longlong **)(*plVar5 + 0x490) + 0x50))
                    (*(longlong **)(*plVar5 + 0x490),uVar2,&local_res8,iVar13);
  if (cVar8 != '\0') {
    if ((uint *)*puVar4 != (uint *)puVar4[1]) {
      lVar6 = *(longlong *)
               (*(longlong *)(*(longlong *)(*plVar5 + 0x4b8) + 0x298) +
               (ulonglong)*(uint *)*puVar4 * 8);
                    /* WARNING: Subroutine does not return */
      FUN_1404211c0(local_res8,
                    *(longlong *)(plVar5[1] + 0x58) + (ulonglong)*(uint *)(lVar6 + 0xc) * 2,
                    *(int *)(lVar6 + 0x10) * 2);
    }
    (**(code **)(**(longlong **)(*plVar5 + 0x490) + 0x58))(*(longlong **)(*plVar5 + 0x490),uVar2);
  }
  *(int *)param_1[3] = *(int *)param_1[3] + 1;
  lVar6 = *(longlong *)(*param_1 + 0x4b8);
  puVar7 = *(undefined4 **)(lVar6 + 0x438);
  if (puVar7 != *(undefined4 **)(lVar6 + 0x440)) {
    *puVar7 = 0;
    *(longlong *)(lVar6 + 0x438) = *(longlong *)(lVar6 + 0x438) + 4;
    plVar5 = (longlong *)param_1[2];
    if (*plVar5 != plVar5[1]) {
      plVar5[1] = *plVar5;
    }
    return;
  }
  uVar15 = (longlong)puVar7 - *(longlong *)(lVar6 + 0x430);
  lVar9 = (longlong)uVar15 >> 2;
  if (lVar9 == 0x3fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_140013120();
  }
  uVar1 = lVar9 + 1;
  uVar11 = (longlong)*(undefined4 **)(lVar6 + 0x440) - *(longlong *)(lVar6 + 0x430) >> 2;
  uVar14 = 0x3fffffffffffffff;
  if ((uVar11 <= 0x3fffffffffffffff - (uVar11 >> 1)) &&
     (uVar14 = (uVar11 >> 1) + uVar11, uVar14 < uVar1)) {
    uVar14 = uVar1;
  }
  lVar10 = func_0x000140039ac0(uVar11,uVar14);
  *(undefined4 *)((uVar15 & 0xfffffffffffffffc) + lVar10) = 0;
  lVar9 = *(longlong *)(lVar6 + 0x430);
  if (puVar7 == *(undefined4 **)(lVar6 + 0x438)) {
                    /* WARNING: Subroutine does not return */
    FUN_1404211c0(lVar10,lVar9,(longlong)*(undefined4 **)(lVar6 + 0x438) - lVar9);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1404211c0(lVar10,lVar9,(longlong)puVar7 - lVar9);
}

