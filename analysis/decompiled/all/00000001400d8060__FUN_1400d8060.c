// Function: FUN_1400d8060
// Addr: 1400d8060
// Size: 118 bytes


ulonglong FUN_1400d8060(longlong param_1,ulonglong param_2)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uStackX_8;
  uint local_res10 [2];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  longlong lStack_68;
  ulonglong *puStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong lStack_38;
  longlong lStack_30;
  longlong lStack_28;
  
  local_res10[0] = (uint)param_2;
  puVar7 = auStack_88;
  if (*(uint *)(param_1 + 0x150) == local_res10[0]) {
    return *(ulonglong *)(param_1 + 0x148);
  }
  uVar9 = ((((param_2 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ param_2 >> 8 & 0xff) *
            0x100000001b3 ^ param_2 >> 0x10 & 0xff) * 0x100000001b3 ^ param_2 >> 0x18 & 0xff) *
          0x100000001b3 & *(ulonglong *)(param_1 + 0x188);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x170) + 8 + uVar9 * 0x10);
  if (lVar2 == *(longlong *)(param_1 + 0x160)) {
code_r0x0001400d8110:
    lVar2 = 0;
  }
  else {
    uVar5 = *(uint *)(lVar2 + 0x10);
    while (local_res10[0] != uVar5) {
      if (lVar2 == *(longlong *)(*(longlong *)(param_1 + 0x170) + uVar9 * 0x10))
      goto code_r0x0001400d8110;
      lVar2 = *(longlong *)(lVar2 + 8);
      uVar5 = *(uint *)(lVar2 + 0x10);
    }
  }
  if ((lVar2 != 0) && (lVar2 != *(longlong *)(param_1 + 0x160))) {
    *(uint *)(param_1 + 0x150) = local_res10[0];
    *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(lVar2 + 0x18);
    return *(ulonglong *)(lVar2 + 0x18);
  }
  if ((*(longlong *)(param_1 + 0xd8) == 0) || (*(longlong *)(param_1 + 0xe8) == 0)) {
    return 0;
  }
  lStack_38 = 0;
  lStack_30 = 0;
  lStack_28 = 0;
  if (DAT_1404dc0d8 < 2) {
    uVar5 = local_res10[0] - ((uint)(param_2 >> 1) & 0x55555555);
    uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
    uVar5 = ((uVar5 >> 4) + uVar5 & 0xf0f0f0f) * 0x1010101 >> 0x18;
  }
  else {
    uVar5 = POPCOUNT(local_res10[0]);
  }
  if (uVar5 == 0) {
    iVar8 = 0;
    lVar2 = 0;
    do {
      if ((*(uint *)(&DAT_140484af0 + lVar2 * 4) & (uint)param_2) != 0) {
        lVar3 = lVar2 * 0x20;
        uStack_48 = *(undefined4 *)(&UNK_140482bd0 + lVar3);
        uStack_40 = *(undefined4 *)(&UNK_140482bd8 + lVar3);
        uStack_3c = *(undefined4 *)(&UNK_140482bdc + lVar3);
        uStack_58 = *(undefined4 *)(&UNK_140482bc0 + lVar3);
        uStack_54 = *(undefined4 *)(&UNK_140482bc4 + lVar3);
        uStack_50 = *(undefined4 *)(&UNK_140482bc8 + lVar3);
        uStack_4c = *(undefined4 *)(&UNK_140482bcc + lVar3);
        iStack_44 = iVar8;
        func_0x0001400dd590(&lStack_38,&uStack_58);
        iVar8 = iVar8 + *(int *)(&DAT_140484a80 + lVar2 * 4);
        param_2 = (ulonglong)local_res10[0];
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 != 0x1a);
    puStack_60 = &uStackX_8;
    lStack_68 = *(longlong *)(param_1 + 0x1a0) - *(longlong *)(param_1 + 0x198);
    uStackX_8 = 0;
    (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0xd0) + 0x58))
              ((longlong *)**(undefined8 **)(param_1 + 0xd0),lStack_38,lStack_30 - lStack_38 >> 5);
    uVar9 = uStackX_8;
    if (uStackX_8 != 0) {
      plVar4 = (longlong *)func_0x00014004b970(param_1 + 0x158,&uStack_58,local_res10);
      *(ulonglong *)(*plVar4 + 0x18) = uVar9;
    }
    if (lStack_38 == 0) {
      return uStackX_8;
    }
    lVar2 = lStack_38;
    uVar9 = uStackX_8;
    if (((lStack_28 - lStack_38 & 0xffffffffffffffe0U) < 0x1000) ||
       (lVar2 = *(longlong *)(lStack_38 + -8), puVar7 = auStack_88,
       (lStack_38 - *(longlong *)(lStack_38 + -8)) - 8U < 0x20)) goto code_r0x0001400d8396;
  }
  else {
    uVar6 = (ulonglong)(int)uVar5;
    if (0x7ffffffffffffff < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_140013120();
    }
    uVar9 = uVar6 * 0x20;
    if (uVar6 == 0) {
      uVar9 = 0;
code_r0x0001400d8220:
                    /* WARNING: Subroutine does not return */
      FUN_1404211c0(uVar9,lStack_38,lStack_30 - lStack_38);
    }
    if (uVar9 < 0x1000) {
      uVar9 = func_0x00014028aff0(uVar9);
      goto code_r0x0001400d8220;
    }
    if (uVar9 + 0x27 <= uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_140017440();
    }
    lVar2 = func_0x00014028aff0();
    if (lVar2 != 0) {
      uVar9 = lVar2 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(uVar9 - 8) = lVar2;
      goto code_r0x0001400d8220;
    }
  }
  pcVar1 = (code *)swi(0x29);
  lVar2 = (*pcVar1)(5);
  puVar7 = auStack_80;
code_r0x0001400d8396:
  *(undefined **)(puVar7 + -8) = &UNK_1400d839b;
  func_0x00014028b040(lVar2);
  return uVar9;
}

