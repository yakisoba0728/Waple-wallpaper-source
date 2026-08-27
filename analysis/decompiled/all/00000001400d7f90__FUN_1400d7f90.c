// Function: FUN_1400d7f90
// Addr: 1400d7f90
// Size: 872 bytes


ulonglong FUN_1400d7f90(longlong param_1,ulonglong param_2)

{
  code *pcVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 *puVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong local_res8;
  uint local_res10 [2];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  longlong local_68;
  ulonglong *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  ulonglong uStack_30;
  longlong local_28;
  
  local_res10[0] = (uint)param_2;
  puVar9 = auStack_88;
  if (*(uint *)(param_1 + 0x150) == local_res10[0]) {
    return *(ulonglong *)(param_1 + 0x148);
  }
  uVar11 = ((((param_2 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ param_2 >> 8 & 0xff) *
             0x100000001b3 ^ param_2 >> 0x10 & 0xff) * 0x100000001b3 ^ param_2 >> 0x18 & 0xff) *
           0x100000001b3 & *(ulonglong *)(param_1 + 0x188);
  lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x170) + 8 + uVar11 * 0x10);
  if (lVar8 == *(longlong *)(param_1 + 0x160)) {
LAB_1400d8040:
    lVar8 = 0;
  }
  else {
    uVar4 = *(uint *)(lVar8 + 0x10);
    while (local_res10[0] != uVar4) {
      if (lVar8 == *(longlong *)(*(longlong *)(param_1 + 0x170) + uVar11 * 0x10))
      goto LAB_1400d8040;
      lVar8 = *(longlong *)(lVar8 + 8);
      uVar4 = *(uint *)(lVar8 + 0x10);
    }
  }
  if ((lVar8 != 0) && (lVar8 != *(longlong *)(param_1 + 0x160))) {
    *(uint *)(param_1 + 0x150) = local_res10[0];
    *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(lVar8 + 0x18);
    return *(ulonglong *)(lVar8 + 0x18);
  }
  if ((*(longlong *)(param_1 + 0xd8) == 0) || (*(longlong *)(param_1 + 0xe8) == 0)) {
    return 0;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  if (DAT_1404dc008 < 2) {
    uVar4 = local_res10[0] - ((uint)(param_2 >> 1) & 0x55555555);
    uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
    uVar4 = ((uVar4 >> 4) + uVar4 & 0xf0f0f0f) * 0x1010101 >> 0x18;
  }
  else {
    uVar4 = POPCOUNT(local_res10[0]);
  }
  if (uVar4 == 0) {
LAB_1400d81b6:
    iVar10 = 0;
    lVar8 = 0;
    local_38 = uStack_30;
    do {
      if (((&DAT_140484a20)[lVar8] & (uint)param_2) != 0) {
        lVar2 = lVar8 * 0x20;
        local_48 = *(undefined4 *)(&DAT_140482b00 + lVar2);
        uStack_40 = *(undefined4 *)(&UNK_140482b08 + lVar2);
        uStack_3c = *(undefined4 *)(&UNK_140482b0c + lVar2);
        local_58 = *(undefined4 *)(&PTR_s_POSITION_140482af0 + lVar8 * 4);
        uStack_54 = *(undefined4 *)((longlong)&PTR_s_POSITION_140482af0 + lVar2 + 4);
        uStack_50 = *(undefined4 *)(&UNK_140482af8 + lVar2);
        uStack_4c = *(undefined4 *)(&UNK_140482afc + lVar2);
        iStack_44 = iVar10;
        FUN_1400dd4c0(&local_38,&local_58);
        iVar10 = iVar10 + (&DAT_1404849b0)[lVar8];
        param_2 = (ulonglong)local_res10[0];
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 != 0x1a);
    local_60 = &local_res8;
    local_68 = *(longlong *)(param_1 + 0x1a0) - *(longlong *)(param_1 + 0x198);
    local_res8 = 0;
    (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0xd0) + 0x58))
              ((longlong *)**(undefined8 **)(param_1 + 0xd0),local_38,
               (longlong)(uStack_30 - local_38) >> 5);
    uVar11 = local_res8;
    if (local_res8 != 0) {
      plVar3 = (longlong *)FUN_14004b8a0(param_1 + 0x158,&local_58,local_res10);
      *(ulonglong *)(*plVar3 + 0x18) = uVar11;
    }
    if (local_38 == 0) {
      return local_res8;
    }
    uVar11 = local_38;
    uVar7 = local_res8;
    if (((local_28 - local_38 & 0xffffffffffffffe0) < 0x1000) ||
       (uVar11 = *(ulonglong *)(local_38 - 8), puVar9 = auStack_88,
       (local_38 - *(ulonglong *)(local_38 - 8)) - 8 < 0x20)) goto LAB_1400d82c6;
  }
  else {
    uVar11 = (ulonglong)(int)uVar4;
    if (0x7ffffffffffffff < uVar11) {
                    /* WARNING: Subroutine does not return */
      FUN_140013050();
    }
    uVar7 = uVar11 * 0x20;
    if (uVar11 == 0) {
      uVar11 = 0;
LAB_1400d8150:
      FUN_1404210f0(uVar11,local_38,uStack_30 - local_38);
      if (local_38 != 0) {
        uVar6 = local_28 - local_38 & 0xffffffffffffffe0;
        uVar5 = local_38;
        if (0xfff < uVar6) {
          if (0x1f < (local_38 - *(ulonglong *)(local_38 - 8)) - 8) goto LAB_1400d82bc;
          uVar6 = uVar6 + 0x27;
          uVar5 = *(ulonglong *)(local_38 - 8);
        }
        thunk_FUN_14028af80(uVar5,uVar6);
      }
      param_2 = (ulonglong)local_res10[0];
      local_28 = uVar7 + uVar11;
      uStack_30 = uVar11;
      goto LAB_1400d81b6;
    }
    if (uVar7 < 0x1000) {
      uVar11 = FUN_14028af20(uVar7);
      goto LAB_1400d8150;
    }
    if (uVar7 + 0x27 <= uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_140017370();
    }
    lVar8 = FUN_14028af20();
    if (lVar8 != 0) {
      uVar11 = lVar8 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(uVar11 - 8) = lVar8;
      goto LAB_1400d8150;
    }
  }
LAB_1400d82bc:
  pcVar1 = (code *)swi(0x29);
  uVar11 = (*pcVar1)(5);
  puVar9 = auStack_80;
LAB_1400d82c6:
  *(undefined8 *)(puVar9 + -8) = 0x1400d82cb;
  thunk_FUN_14028af80(uVar11);
  return uVar7;
}

