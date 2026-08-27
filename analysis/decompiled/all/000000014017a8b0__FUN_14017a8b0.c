// Function: FUN_14017a8b0
// Addr: 14017a8b0
// Size: 830 bytes


void FUN_14017a8b0(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  longlong lVar12;
  ulonglong unaff_R14;
  undefined1 auStack_1c8 [8];
  undefined1 auStack_1c0 [24];
  undefined1 local_1a8 [384];
  
  puVar10 = auStack_1c8;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x140);
  uVar4 = FUN_1400c22d0(local_1a8);
  iVar3 = FUN_140290d80(lVar1 + 0x1c8);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (*(int *)(lVar1 + 0x214) == 0x7fffffff) {
    *(undefined4 *)(lVar1 + 0x214) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(6);
  }
  uVar9 = *(ulonglong *)(lVar1 + 0x228);
  puVar11 = auStack_1c8;
  if (*(longlong *)(lVar1 + 0x238) + 1U < uVar9) goto LAB_14017ab16;
  uVar8 = 1;
  if (uVar9 != 0) {
    uVar8 = uVar9;
  }
  for (; (uVar8 == uVar9 || (uVar8 < 8)); uVar8 = uVar8 * 2) {
    if (0xae4c415c9882b9 - uVar8 < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_140082f20();
    }
  }
  uVar9 = *(ulonglong *)(lVar1 + 0x230);
  if (0x1fffffffffffffff < uVar8) {
LAB_14017abc8:
                    /* WARNING: Subroutine does not return */
    FUN_140017370();
  }
  uVar6 = uVar8 * 8;
  if (uVar6 == 0) {
    unaff_R14 = 0;
LAB_14017a9e0:
    uVar6 = uVar8 >> 1;
    lVar5 = uVar9 * 8;
    for (; uVar8 <= uVar6; uVar8 = uVar8 * 2) {
    }
    uVar8 = uVar8 - *(longlong *)(lVar1 + 0x228);
    lVar12 = (*(longlong *)(lVar1 + 0x228) - uVar9) * 8;
    FUN_1404210f0(lVar5 + unaff_R14,*(longlong *)(lVar1 + 0x220) + lVar5,lVar12);
    lVar12 = lVar12 + lVar5 + unaff_R14;
    if (uVar8 < uVar9) {
      lVar5 = uVar8 * 8;
      FUN_1404210f0(lVar12,*(undefined8 *)(lVar1 + 0x220),lVar5);
      lVar12 = (uVar9 - uVar8) * 8;
      FUN_1404210f0(unaff_R14,*(longlong *)(lVar1 + 0x220) + lVar5,lVar12);
      uVar9 = unaff_R14 + lVar12;
    }
    else {
      FUN_1404210f0(lVar12,*(undefined8 *)(lVar1 + 0x220),lVar5);
      FUN_1404217a0(lVar12 + lVar5,0,(uVar8 - uVar9) * 8);
      uVar9 = unaff_R14;
    }
    FUN_1404217a0(uVar9,0,lVar5);
    lVar5 = *(longlong *)(lVar1 + 0x220);
    if (lVar5 != 0) {
      lVar12 = lVar5;
      puVar10 = auStack_1c8;
      if ((0xfff < (ulonglong)(*(longlong *)(lVar1 + 0x228) * 8)) &&
         (lVar12 = *(longlong *)(lVar5 + -8), puVar10 = auStack_1c8, 0x1f < (lVar5 - lVar12) - 8U))
      goto LAB_14017aae7;
      goto LAB_14017aaf1;
    }
  }
  else {
    if (uVar6 < 0x1000) {
      unaff_R14 = FUN_14028af20();
      goto LAB_14017a9e0;
    }
    if (uVar6 + 0x27 <= uVar6) goto LAB_14017abc8;
    lVar5 = FUN_14028af20(uVar6 + 0x27);
    if (lVar5 != 0) {
      unaff_R14 = lVar5 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(unaff_R14 - 8) = lVar5;
      goto LAB_14017a9e0;
    }
LAB_14017aae7:
    lVar12 = 5;
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
    puVar10 = auStack_1c0;
LAB_14017aaf1:
    *(undefined8 *)(puVar10 + -8) = 0x14017aaf9;
    thunk_FUN_14028af80(lVar12);
  }
  uVar4 = *(undefined8 *)(puVar10 + 0x1d0);
  *(ulonglong *)(lVar1 + 0x220) = unaff_R14;
  *(longlong *)(lVar1 + 0x228) = *(longlong *)(lVar1 + 0x228) + uVar8;
  uVar9 = *(ulonglong *)(lVar1 + 0x228);
  puVar11 = puVar10;
LAB_14017ab16:
  *(ulonglong *)(lVar1 + 0x230) = *(ulonglong *)(lVar1 + 0x230) & uVar9 - 1;
  uVar8 = *(longlong *)(lVar1 + 0x238) + *(longlong *)(lVar1 + 0x230);
  uVar9 = uVar9 - 1 & uVar8;
  if (*(longlong *)(*(longlong *)(lVar1 + 0x220) + uVar9 * 8) == 0) {
    *(undefined8 *)(puVar11 + -8) = 0x14017ab4a;
    uVar7 = FUN_14028af20(0x178);
    *(undefined8 *)(*(longlong *)(lVar1 + 0x220) + uVar9 * 8) = uVar7;
  }
  uVar7 = *(undefined8 *)
           (*(longlong *)(lVar1 + 0x220) + (*(longlong *)(lVar1 + 0x228) - 1U & uVar8) * 8);
  *(undefined8 *)(puVar11 + -8) = 0x14017ab75;
  FUN_1400c22d0(uVar7,uVar4);
  *(longlong *)(lVar1 + 0x238) = *(longlong *)(lVar1 + 0x238) + 1;
  *(undefined8 *)(puVar11 + -8) = 0x14017ab88;
  FUN_140290ef0(lVar1 + 0x240);
  *(undefined8 *)(puVar11 + -8) = 0x14017ab94;
  FUN_140290ea0(lVar1 + 0x1c8);
  *(undefined8 *)(puVar11 + -8) = 0x14017ab9c;
  FUN_1400c15a0(uVar4);
  return;
}

