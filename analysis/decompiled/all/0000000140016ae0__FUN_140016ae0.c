// Function: FUN_140016ae0
// Addr: 140016ae0
// Size: 392 bytes


ulonglong * FUN_140016ae0(ulonglong *param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  code *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  ulonglong unaff_RSI;
  ulonglong *puVar8;
  ulonglong uVar9;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [24];
  
  puVar7 = auStack_58;
  uVar2 = param_1[3];
  if (param_3 <= uVar2) {
    puVar8 = param_1;
    if (7 < uVar2) {
      puVar8 = (ulonglong *)*param_1;
    }
    param_1[2] = param_3;
    FUN_1404210f0(puVar8,param_2,param_3 * 2);
    *(undefined2 *)(param_3 * 2 + (longlong)puVar8) = 0;
    return param_1;
  }
  uVar6 = 0x7ffffffffffffffe;
  if (0x7ffffffffffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_1400172e0();
  }
  uVar9 = 0;
  uVar5 = param_3 | 7;
  if ((uVar5 < 0x7fffffffffffffff) && (uVar2 <= 0x7ffffffffffffffe - (uVar2 >> 1))) {
    uVar1 = (uVar2 >> 1) + uVar2;
    uVar6 = uVar5;
    if (uVar5 < uVar1) {
      uVar6 = uVar1;
    }
    if (0x7fffffffffffffff < uVar6 + 1) goto LAB_140016c5e;
    uVar5 = (uVar6 + 1) * 2;
    if (uVar5 != 0) goto LAB_140016baf;
LAB_140016be8:
    param_1[3] = uVar6;
    param_1[2] = param_3;
    FUN_1404210f0(uVar9,param_2,param_3 * 2);
    *(undefined2 *)(param_3 * 2 + uVar9) = 0;
    if (uVar2 < 8) goto LAB_140016c56;
    uVar6 = *param_1;
    if (0xfff < uVar2 * 2 + 2) {
      if ((uVar6 - *(longlong *)(uVar6 - 8)) - 8 < 0x20) {
        thunk_FUN_14028af80(*(longlong *)(uVar6 - 8),uVar2 * 2 + 0x29);
        *param_1 = uVar9;
        return param_1;
      }
      goto LAB_140016c47;
    }
  }
  else {
    uVar5 = 0xfffffffffffffffe;
LAB_140016baf:
    if (uVar5 < 0x1000) {
      uVar9 = FUN_14028af20();
      goto LAB_140016be8;
    }
    if (uVar5 + 0x27 <= uVar5) {
LAB_140016c5e:
                    /* WARNING: Subroutine does not return */
      FUN_140017370();
    }
    lVar4 = FUN_14028af20(uVar5 + 0x27);
    uVar9 = unaff_RSI;
    if (lVar4 != 0) {
      uVar9 = lVar4 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(uVar9 - 8) = lVar4;
      goto LAB_140016be8;
    }
LAB_140016c47:
    pcVar3 = (code *)swi(0x29);
    uVar6 = (*pcVar3)(5);
    puVar7 = auStack_50;
  }
  *(undefined8 *)(puVar7 + -8) = 0x140016c56;
  thunk_FUN_14028af80(uVar6);
LAB_140016c56:
  *param_1 = uVar9;
  return param_1;
}

