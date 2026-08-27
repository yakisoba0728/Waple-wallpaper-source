// Function: FUN_14017a5a0
// Addr: 14017a5a0
// Size: 726 bytes


void FUN_14017a5a0(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  longlong lVar11;
  ulonglong unaff_R14;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [24];
  undefined1 local_48 [32];
  
  puVar9 = auStack_68;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x148);
  FUN_140016fc0(local_48);
  iVar3 = FUN_140290d80(lVar1 + 8);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (*(int *)(lVar1 + 0x54) == 0x7fffffff) {
    *(undefined4 *)(lVar1 + 0x54) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(6);
  }
  uVar8 = *(ulonglong *)(lVar1 + 0x68);
  puVar10 = auStack_68;
  if (*(longlong *)(lVar1 + 0x78) + 1U < uVar8) goto LAB_14017a7c5;
  uVar7 = 1;
  if (uVar8 != 0) {
    uVar7 = uVar8;
  }
  for (; (uVar7 == uVar8 || (uVar7 < 8)); uVar7 = uVar7 * 2) {
    if (0x7ffffffffffffff - uVar7 < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_140082f20();
    }
  }
  uVar8 = *(ulonglong *)(lVar1 + 0x70);
  if (0x1fffffffffffffff < uVar7) {
LAB_14017a853:
                    /* WARNING: Subroutine does not return */
    FUN_140017370();
  }
  uVar5 = uVar7 * 8;
  if (uVar5 == 0) {
    unaff_R14 = 0;
LAB_14017a6ac:
    uVar5 = uVar7 >> 1;
    lVar4 = uVar8 * 8;
    for (; uVar7 <= uVar5; uVar7 = uVar7 * 2) {
    }
    uVar7 = uVar7 - *(longlong *)(lVar1 + 0x68);
    lVar11 = (*(longlong *)(lVar1 + 0x68) - uVar8) * 8;
    FUN_1404210f0(lVar4 + unaff_R14,*(longlong *)(lVar1 + 0x60) + lVar4,lVar11);
    lVar11 = lVar11 + lVar4 + unaff_R14;
    if (uVar7 < uVar8) {
      lVar4 = uVar7 * 8;
      FUN_1404210f0(lVar11,*(undefined8 *)(lVar1 + 0x60),lVar4);
      lVar11 = (uVar8 - uVar7) * 8;
      FUN_1404210f0(unaff_R14,*(longlong *)(lVar1 + 0x60) + lVar4,lVar11);
      uVar8 = unaff_R14 + lVar11;
    }
    else {
      FUN_1404210f0(lVar11,*(undefined8 *)(lVar1 + 0x60),lVar4);
      FUN_1404217a0(lVar11 + lVar4,0,(uVar7 - uVar8) * 8);
      uVar8 = unaff_R14;
    }
    FUN_1404217a0(uVar8,0,lVar4);
    lVar4 = *(longlong *)(lVar1 + 0x60);
    if (lVar4 != 0) {
      lVar11 = lVar4;
      puVar9 = auStack_68;
      if ((0xfff < (ulonglong)(*(longlong *)(lVar1 + 0x68) * 8)) &&
         (lVar11 = *(longlong *)(lVar4 + -8), puVar9 = auStack_68, 0x1f < (lVar4 - lVar11) - 8U))
      goto LAB_14017a7a7;
      goto LAB_14017a7b1;
    }
  }
  else {
    if (uVar5 < 0x1000) {
      unaff_R14 = FUN_14028af20();
      goto LAB_14017a6ac;
    }
    if (uVar5 + 0x27 <= uVar5) goto LAB_14017a853;
    lVar4 = FUN_14028af20(uVar5 + 0x27);
    if (lVar4 != 0) {
      unaff_R14 = lVar4 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(unaff_R14 - 8) = lVar4;
      goto LAB_14017a6ac;
    }
LAB_14017a7a7:
    lVar11 = 5;
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
    puVar9 = auStack_60;
LAB_14017a7b1:
    *(undefined8 *)(puVar9 + -8) = 0x14017a7b9;
    thunk_FUN_14028af80(lVar11);
  }
  *(ulonglong *)(lVar1 + 0x60) = unaff_R14;
  *(longlong *)(lVar1 + 0x68) = *(longlong *)(lVar1 + 0x68) + uVar7;
  uVar8 = *(ulonglong *)(lVar1 + 0x68);
  puVar10 = puVar9;
LAB_14017a7c5:
  *(ulonglong *)(lVar1 + 0x70) = *(ulonglong *)(lVar1 + 0x70) & uVar8 - 1;
  uVar7 = *(longlong *)(lVar1 + 0x78) + *(longlong *)(lVar1 + 0x70);
  uVar8 = uVar8 - 1 & uVar7;
  if (*(longlong *)(*(longlong *)(lVar1 + 0x60) + uVar8 * 8) == 0) {
    *(undefined8 *)(puVar10 + -8) = 0x14017a7ed;
    uVar6 = FUN_14028af20(0x20);
    *(undefined8 *)(*(longlong *)(lVar1 + 0x60) + uVar8 * 8) = uVar6;
  }
  uVar6 = *(undefined8 *)
           (*(longlong *)(lVar1 + 0x60) + (*(longlong *)(lVar1 + 0x68) - 1U & uVar7) * 8);
  *(undefined8 *)(puVar10 + -8) = 0x14017a811;
  FUN_140016fc0(uVar6,puVar10 + 0x20);
  *(longlong *)(lVar1 + 0x78) = *(longlong *)(lVar1 + 0x78) + 1;
  *(undefined8 *)(puVar10 + -8) = 0x14017a821;
  FUN_140290ef0(lVar1 + 0x80);
  *(undefined8 *)(puVar10 + -8) = 0x14017a82a;
  FUN_140290ea0(lVar1 + 8);
  *(undefined8 *)(puVar10 + -8) = 0x14017a834;
  FUN_140017240(puVar10 + 0x20);
  return;
}

