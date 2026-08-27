// Function: FUN_1401846b0
// Addr: 1401846b0
// Size: 674 bytes


undefined1 FUN_1401846b0(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 *puVar10;
  ulonglong unaff_RDI;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  puVar10 = auStack_48;
  lVar3 = *(longlong *)(param_1 + 8);
  iVar6 = FUN_140290d80(lVar3 + 0x14a0);
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (*(int *)(lVar3 + 0x14ec) == 0x7fffffff) {
    *(undefined4 *)(lVar3 + 0x14ec) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(6);
  }
  lVar3 = *(longlong *)(param_1 + 8);
  lVar4 = *(longlong *)(lVar3 + 0x1500);
  if (lVar4 != *(longlong *)(lVar3 + 0x1508)) {
    FUN_1400ce370(lVar4,param_2);
    *(longlong *)(lVar3 + 0x1500) = *(longlong *)(lVar3 + 0x1500) + 0xd8;
    puVar10 = auStack_48;
    goto LAB_1401848ea;
  }
  lVar9 = lVar4 - *(longlong *)(lVar3 + 0x14f8);
  lVar9 = lVar9 / 0x36 + (lVar9 >> 0x3f);
  lVar9 = (lVar9 >> 2) - (lVar9 >> 0x3f);
  if (lVar9 == 0x12f684bda12f684) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar1 = lVar9 + 1;
  uVar11 = (*(longlong *)(lVar3 + 0x1508) - *(longlong *)(lVar3 + 0x14f8) >> 3) *
           -0x7b425ed097b425ed;
  uVar7 = 0x12f684bda12f684 - (uVar11 >> 1);
  if (uVar11 < uVar7 || uVar11 - uVar7 == 0) {
    uVar11 = (uVar11 >> 1) + uVar11;
    uVar7 = uVar1;
    if (uVar1 <= uVar11) {
      uVar7 = uVar11;
    }
    if (0x12f684bda12f684 < uVar7) {
LAB_140184932:
                    /* WARNING: Subroutine does not return */
      FUN_140017370();
    }
    uVar7 = uVar7 * 0xd8;
    if (uVar7 == 0) {
      unaff_RDI = 0;
    }
    else {
      if (0xfff < uVar7) {
        uVar11 = uVar7 + 0x27;
        if (uVar11 <= uVar7) goto LAB_140184932;
        goto LAB_1401847e3;
      }
      unaff_RDI = FUN_14028af20(uVar7);
    }
LAB_14018480a:
    lVar12 = lVar9 * 0xd8 + unaff_RDI;
    FUN_1400ce370(lVar12,param_2);
    lVar9 = *(longlong *)(lVar3 + 0x1500);
    lVar8 = *(longlong *)(lVar3 + 0x14f8);
    uVar11 = unaff_RDI;
    if (lVar4 != lVar9) {
      FUN_140184980(*(longlong *)(lVar3 + 0x14f8),lVar4,unaff_RDI);
      lVar9 = *(longlong *)(lVar3 + 0x1500);
      uVar11 = lVar12 + 0xd8;
      lVar8 = lVar4;
    }
    FUN_140184980(lVar8,lVar9,uVar11);
    if (*(longlong *)(lVar3 + 0x14f8) != 0) {
      FUN_14017e540(*(longlong *)(lVar3 + 0x14f8),*(undefined8 *)(lVar3 + 0x1500));
      lVar4 = *(longlong *)(lVar3 + 0x14f8);
      lVar9 = lVar4;
      puVar10 = auStack_48;
      if ((0xfff < (ulonglong)((*(longlong *)(lVar3 + 0x1508) - lVar4 >> 3) * 8)) &&
         (lVar9 = *(longlong *)(lVar4 + -8), puVar10 = auStack_48, 0x1f < (lVar4 - lVar9) - 8U))
      goto LAB_1401848b5;
      goto LAB_1401848bf;
    }
  }
  else {
    uVar7 = 0xffffffffffffff60;
    uVar11 = 0xffffffffffffff87;
LAB_1401847e3:
    lVar8 = FUN_14028af20(uVar11);
    if (lVar8 != 0) {
      unaff_RDI = lVar8 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(unaff_RDI - 8) = lVar8;
      goto LAB_14018480a;
    }
LAB_1401848b5:
    lVar9 = 5;
    pcVar5 = (code *)swi(0x29);
    (*pcVar5)(5);
    puVar10 = auStack_40;
LAB_1401848bf:
    *(undefined8 *)(puVar10 + -8) = 0x1401848c7;
    thunk_FUN_14028af80(lVar9);
  }
  *(ulonglong *)(lVar3 + 0x14f8) = unaff_RDI;
  *(ulonglong *)(lVar3 + 0x1500) = uVar1 * 0xd8 + unaff_RDI;
  *(ulonglong *)(lVar3 + 0x1508) = uVar7 + unaff_RDI;
LAB_1401848ea:
  lVar3 = *(longlong *)(param_1 + 8);
  *(undefined8 *)(puVar10 + -8) = 0x1401848fa;
  FUN_140290ea0(lVar3 + 0x14a0);
  LOCK();
  puVar10 = (undefined1 *)(*(longlong *)(param_1 + 8) + 0x14f0);
  uVar2 = *puVar10;
  *puVar10 = 1;
  UNLOCK();
  return uVar2;
}

