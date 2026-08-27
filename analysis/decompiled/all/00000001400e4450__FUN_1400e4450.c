// Function: FUN_1400e4450
// Addr: 1400e4450
// Size: 339 bytes


void FUN_1400e4450(ulonglong *param_1,ulonglong *param_2,ulonglong *param_3,ulonglong param_4)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  puVar5 = auStack_38;
  puVar6 = auStack_38;
  uVar8 = (ulonglong)((param_4 & 0x3f) != 0) + (param_4 >> 6);
  if (uVar8 != 0) {
    uVar7 = (ulonglong)((uint)*param_2 & 7);
    uVar4 = 8 - uVar7;
    uVar1 = uVar8 * 8;
    if (uVar7 == 0) {
      uVar4 = 0;
    }
    if ((uVar4 <= *param_3) && (uVar7 = *param_3 - uVar4, uVar1 <= uVar7)) {
      uVar4 = *param_2 + uVar4;
      *param_3 = uVar7;
      *param_2 = uVar4;
      if (uVar4 != 0) {
        FUN_1404217a0(uVar4,0,uVar1);
        *(undefined1 *)(param_1 + 2) = 0;
        *param_3 = uVar7 + uVar8 * -8;
        *param_1 = uVar4;
        param_1[1] = uVar1 + uVar4;
        *param_2 = uVar1 + uVar4;
        return;
      }
    }
    if (0x1fffffffffffffff < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_14028c340(0xc);
    }
    if (uVar8 == 0) {
      uVar8 = 0;
      puVar6 = auStack_38;
    }
    else if (uVar1 < 0x1000) {
      uVar8 = FUN_14028af20(uVar1);
    }
    else {
      if (uVar1 + 0x27 <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_140017370();
      }
      lVar3 = FUN_14028af20();
      if (lVar3 == 0) {
        pcVar2 = (code *)swi(0x29);
        lVar3 = (*pcVar2)(5);
        puVar5 = auStack_30;
      }
      uVar8 = lVar3 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(uVar8 - 8) = lVar3;
      puVar6 = puVar5;
    }
    *(undefined8 *)(puVar6 + -8) = 0x1400e4583;
    FUN_1404217a0(uVar8,0,uVar1);
    param_1[1] = uVar1 + uVar8;
    *(undefined1 *)(param_1 + 2) = 1;
    *param_1 = uVar8;
  }
  return;
}

