// Function: FUN_1401f1550
// Addr: 1401f1550
// Size: 276 bytes


void FUN_1401f1550(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 unaff_RDI;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  puVar7 = auStack_28;
  puVar6 = auStack_28;
  uVar5 = 0;
  *param_2 = *param_3;
  *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
  *(undefined1 *)(param_2 + 4) = *(undefined1 *)(param_3 + 4);
  *(undefined1 *)((longlong)param_2 + 0x11) = *(undefined1 *)((longlong)param_3 + 0x11);
  param_2[5] = param_3[5];
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 10) = 0;
  if (*(longlong *)(param_3 + 8) - *(longlong *)(param_3 + 6) != 0) {
    uVar4 = *(longlong *)(param_3 + 8) - *(longlong *)(param_3 + 6) >> 3;
    if (0x1fffffffffffffff < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_140013050();
    }
    uVar4 = uVar4 * 8;
    if (uVar4 != 0) {
      if (uVar4 < 0x1000) {
        uVar5 = FUN_14028af20(uVar4);
        puVar7 = auStack_28;
      }
      else {
        if (uVar4 + 0x27 <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_140017370();
        }
        lVar2 = FUN_14028af20();
        lVar3 = lVar2;
        if (lVar2 == 0) {
          lVar3 = 5;
          pcVar1 = (code *)swi(0x29);
          lVar2 = (*pcVar1)();
          puVar6 = auStack_20;
        }
        uVar5 = lVar2 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar5 - 8) = lVar3;
        puVar7 = puVar6;
      }
    }
    *(ulonglong *)(param_2 + 6) = uVar5;
    *(ulonglong *)(param_2 + 8) = uVar5;
    *(ulonglong *)(param_2 + 10) = uVar5 + uVar4;
    lVar3 = *(longlong *)(param_3 + 6);
    uVar5 = *(longlong *)(param_3 + 8) - lVar3;
    *(undefined8 *)(puVar7 + 0x30) = unaff_RDI;
    lVar2 = *(longlong *)(param_2 + 6);
    *(undefined8 *)(puVar7 + -8) = 0x1401f1638;
    FUN_1404210f0(lVar2,lVar3,uVar5);
    *(ulonglong *)(param_2 + 8) = (uVar5 & 0xfffffffffffffff8) + lVar2;
  }
  return;
}

