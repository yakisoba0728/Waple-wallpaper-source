// Function: FUN_1402764d0
// Addr: 1402764d0
// Size: 551 bytes


undefined8 * FUN_1402764d0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  ulonglong uVar4;
  undefined8 ***pppuVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  undefined8 ****ppppuVar10;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [24];
  undefined8 ***local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  ulonglong local_20;
  
  puVar9 = auStack_58;
  lVar1 = param_3[2];
  if (lVar1 == 0x7ffffffffffffffe) {
                    /* WARNING: Subroutine does not return */
    FUN_1400172e0();
  }
  if (7 < (ulonglong)param_3[3]) {
    param_3 = (undefined8 *)*param_3;
  }
  uVar8 = lVar1 + 1;
  local_28 = 0;
  local_20 = 0;
  local_38 = (undefined8 ****)0x0;
  uStack_30 = 0;
  if (uVar8 < 8) {
    uVar4 = 7;
    ppppuVar10 = &local_38;
LAB_1402765eb:
    local_28 = uVar8;
    local_20 = uVar4;
    FUN_1404210f0(ppppuVar10,param_3,lVar1 * 2);
    *(short *)(lVar1 * 2 + (longlong)ppppuVar10) = (short)DAT_1404922cc;
    *(undefined2 *)((longlong)ppppuVar10 + uVar8 * 2) = 0;
    FUN_140005970(&local_38,0x2f);
    if (*(longlong *)(param_1 + 0x10) == 0x555555555555555) goto LAB_1402766e1;
    lVar1 = **(longlong **)(param_1 + 8);
    plVar6 = (longlong *)FUN_14028af20(0x30);
    FUN_140016600(plVar6 + 2,&local_38);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
    puVar2 = *(undefined8 **)(lVar1 + 8);
    *plVar6 = lVar1;
    plVar6[1] = (longlong)puVar2;
    *(longlong **)(lVar1 + 8) = plVar6;
    *puVar2 = plVar6;
    *param_2 = plVar6;
    if (local_20 < 8) {
      return param_2;
    }
    uVar8 = local_20 * 2 + 2;
    ppppuVar10 = (undefined8 ****)local_38;
    if (uVar8 < 0x1000) {
LAB_1402766b3:
      thunk_FUN_14028af80(ppppuVar10,uVar8);
      return param_2;
    }
    ppppuVar10 = (undefined8 ****)local_38[-1];
    if ((ulonglong)((longlong)local_38 + (-8 - (longlong)ppppuVar10)) < 0x20) {
      uVar8 = local_20 * 2 + 0x29;
      goto LAB_1402766b3;
    }
  }
  else {
    uVar4 = uVar8 | 7;
    if (uVar4 < 0x7fffffffffffffff) {
      if (uVar4 < 10) {
        uVar4 = 10;
      }
      if (0x7fffffffffffffff < uVar4 + 1) goto LAB_1402766f4;
      uVar7 = (uVar4 + 1) * 2;
      if (uVar7 == 0) {
        ppppuVar10 = (undefined8 ****)0x0;
        local_38 = (undefined8 ****)0x0;
        goto LAB_1402765eb;
      }
    }
    else {
      uVar7 = 0xfffffffffffffffe;
      uVar4 = 0x7ffffffffffffffe;
    }
    if (uVar7 < 0x1000) {
      ppppuVar10 = (undefined8 ****)FUN_14028af20();
      local_38 = ppppuVar10;
      goto LAB_1402765eb;
    }
    if (uVar7 + 0x27 <= uVar7) {
LAB_1402766f4:
                    /* WARNING: Subroutine does not return */
      FUN_140017370();
    }
    pppuVar5 = (undefined8 ***)FUN_14028af20(uVar7 + 0x27);
    if (pppuVar5 != (undefined8 ***)0x0) {
      ppppuVar10 = (undefined8 ****)((longlong)pppuVar5 + 0x27U & 0xffffffffffffffe0);
      ppppuVar10[-1] = pppuVar5;
      local_38 = ppppuVar10;
      goto LAB_1402765eb;
    }
  }
  pcVar3 = (code *)swi(0x29);
  (*pcVar3)(5);
  puVar9 = auStack_50;
LAB_1402766e1:
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar9 + -8) = &UNK_1402766ed;
  FUN_14028c2e0("list too long");
}

