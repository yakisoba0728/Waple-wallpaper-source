// Function: FUN_14020c850
// Addr: 14020c850
// Size: 593 bytes


void FUN_14020c850(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  char cVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint *puVar12;
  undefined4 *puVar13;
  int iVar14;
  uint *puVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong local_res8;
  
  puVar5 = (undefined8 *)param_1[2];
  iVar14 = 0;
  plVar6 = (longlong *)param_1[1];
  puVar12 = (uint *)*puVar5;
  uVar3 = *(undefined4 *)param_1[3];
  if (puVar12 != (uint *)puVar5[1]) {
    do {
      uVar4 = *puVar12;
      puVar12 = puVar12 + 1;
      iVar14 = iVar14 + *(int *)(*(longlong *)
                                  (*(longlong *)(*(longlong *)(*plVar6 + 0x4b8) + 0x298) +
                                  (ulonglong)uVar4 * 8) + 0x10);
    } while (puVar12 != (uint *)puVar5[1]);
  }
  (**(code **)(**(longlong **)(*plVar6 + 0x490) + 0x38))(*(longlong **)(*plVar6 + 0x490),uVar3);
  (**(code **)(**(longlong **)(*plVar6 + 0x490) + 0x30))
            (*(longlong **)(*plVar6 + 0x490),uVar3,0,iVar14,2);
  cVar8 = (**(code **)(**(longlong **)(*plVar6 + 0x490) + 0x50))
                    (*(longlong **)(*plVar6 + 0x490),uVar3,&local_res8,iVar14);
  if (cVar8 != '\0') {
    puVar12 = (uint *)puVar5[1];
    lVar9 = *(longlong *)(plVar6[1] + 0x58);
    lVar2 = local_res8;
    for (puVar15 = (uint *)*puVar5; puVar15 != puVar12; puVar15 = puVar15 + 1) {
      lVar11 = *(longlong *)
                (*(longlong *)(*(longlong *)(*plVar6 + 0x4b8) + 0x298) + (ulonglong)*puVar15 * 8);
      FUN_1404210f0(lVar2,lVar9 + (ulonglong)*(uint *)(lVar11 + 0xc) * 2,*(int *)(lVar11 + 0x10) * 2
                   );
      lVar2 = lVar2 + (ulonglong)*(uint *)(lVar11 + 0x10) * 2;
    }
    (**(code **)(**(longlong **)(*plVar6 + 0x490) + 0x58))(*(longlong **)(*plVar6 + 0x490),uVar3);
  }
  *(int *)param_1[3] = *(int *)param_1[3] + 1;
  lVar2 = *(longlong *)(*param_1 + 0x4b8);
  puVar13 = *(undefined4 **)(lVar2 + 0x438);
  if (puVar13 == *(undefined4 **)(lVar2 + 0x440)) {
    uVar18 = (longlong)puVar13 - *(longlong *)(lVar2 + 0x430);
    lVar9 = (longlong)uVar18 >> 2;
    if (lVar9 == 0x3fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_140013050();
    }
    uVar1 = lVar9 + 1;
    uVar10 = (longlong)*(undefined4 **)(lVar2 + 0x440) - *(longlong *)(lVar2 + 0x430) >> 2;
    uVar16 = 0x3fffffffffffffff;
    if ((uVar10 <= 0x3fffffffffffffff - (uVar10 >> 1)) &&
       (uVar16 = (uVar10 >> 1) + uVar10, uVar16 < uVar1)) {
      uVar16 = uVar1;
    }
    lVar9 = FUN_1400399f0(uVar10,uVar16);
    uVar18 = uVar18 & 0xfffffffffffffffc;
    *(undefined4 *)(uVar18 + lVar9) = 0;
    puVar7 = *(undefined4 **)(lVar2 + 0x430);
    if (puVar13 == *(undefined4 **)(lVar2 + 0x438)) {
      lVar17 = (longlong)*(undefined4 **)(lVar2 + 0x438) - (longlong)puVar7;
      lVar11 = lVar9;
      puVar13 = puVar7;
    }
    else {
      FUN_1404210f0(lVar9,puVar7,(longlong)puVar13 - (longlong)puVar7);
      lVar11 = uVar18 + 4 + lVar9;
      lVar17 = *(longlong *)(lVar2 + 0x438) - (longlong)puVar13;
    }
    FUN_1404210f0(lVar11,puVar13,lVar17);
    FUN_140038af0(lVar2 + 0x430,lVar9,uVar1,uVar16);
  }
  else {
    *puVar13 = 0;
    *(longlong *)(lVar2 + 0x438) = *(longlong *)(lVar2 + 0x438) + 4;
  }
  plVar6 = (longlong *)param_1[2];
  if (*plVar6 != plVar6[1]) {
    plVar6[1] = *plVar6;
  }
  return;
}

