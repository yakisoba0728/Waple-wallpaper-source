// Function: FUN_1401f1620
// Addr: 1401f1620
// Size: 1 bytes


void FUN_1401f1620(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 unaff_RDI;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  puVar8 = auStack_28;
  puVar7 = auStack_28;
  uVar4 = 0;
  *param_2 = *param_3;
  *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
  *(undefined1 *)(param_2 + 4) = *(undefined1 *)(param_3 + 4);
  *(undefined1 *)((longlong)param_2 + 0x11) = *(undefined1 *)((longlong)param_3 + 0x11);
  param_2[5] = param_3[5];
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 10) = 0;
  if (*(longlong *)(param_3 + 8) - *(longlong *)(param_3 + 6) == 0) {
    return;
  }
  uVar6 = *(longlong *)(param_3 + 8) - *(longlong *)(param_3 + 6) >> 3;
  if (0x1fffffffffffffff < uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_140013120();
  }
  uVar6 = uVar6 * 8;
  if (uVar6 != 0) {
    if (uVar6 < 0x1000) {
      uVar4 = func_0x00014028aff0(uVar6);
      puVar8 = auStack_28;
    }
    else {
      if (uVar6 + 0x27 <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_140017440();
      }
      lVar3 = func_0x00014028aff0();
      lVar5 = lVar3;
      if (lVar3 == 0) {
        lVar5 = 5;
        pcVar2 = (code *)swi(0x29);
        lVar3 = (*pcVar2)();
        puVar7 = auStack_20;
      }
      uVar4 = lVar3 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(uVar4 - 8) = lVar5;
      puVar8 = puVar7;
    }
  }
  *(ulonglong *)(param_2 + 6) = uVar4;
  *(ulonglong *)(param_2 + 8) = uVar4;
  *(ulonglong *)(param_2 + 10) = uVar4 + uVar6;
  lVar5 = *(longlong *)(param_3 + 6);
  lVar3 = *(longlong *)(param_3 + 8);
  *(undefined8 *)(puVar8 + 0x30) = unaff_RDI;
  uVar1 = *(undefined8 *)(param_2 + 6);
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar8 + -8) = 0x1401f1708;
  FUN_1404211c0(uVar1,lVar5,lVar3 - lVar5);
}

