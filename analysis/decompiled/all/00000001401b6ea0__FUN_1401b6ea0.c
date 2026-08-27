// Function: FUN_1401b6ea0
// Addr: 1401b6ea0
// Size: 310 bytes


void FUN_1401b6ea0(undefined8 param_1,longlong param_2,longlong param_3)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 unaff_RDI;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  puVar7 = auStack_28;
  puVar8 = auStack_28;
  FUN_1401b4f80(param_2);
  uVar4 = 0;
  *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_3 + 0x20);
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_3 + 0x28);
  *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_3 + 0x30);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  lVar2 = *(longlong *)(param_3 + 0x40) - *(longlong *)(param_3 + 0x38);
  if (lVar2 != 0) {
    lVar2 = lVar2 >> 4;
    if (0x555555555555555 < (ulonglong)(lVar2 * -0x5555555555555555)) {
                    /* WARNING: Subroutine does not return */
      FUN_140133d70();
    }
    uVar5 = lVar2 * 0x10;
    if (uVar5 != 0) {
      if (uVar5 < 0x1000) {
        uVar4 = FUN_14028af20(uVar5);
        puVar8 = auStack_28;
      }
      else {
        if (uVar5 + 0x27 <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_140017370();
        }
        lVar3 = FUN_14028af20();
        lVar2 = lVar3;
        if (lVar3 == 0) {
          lVar2 = 5;
          pcVar1 = (code *)swi(0x29);
          lVar3 = (*pcVar1)();
          puVar7 = auStack_20;
        }
        uVar4 = lVar3 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar4 - 8) = lVar2;
        puVar8 = puVar7;
      }
    }
    *(ulonglong *)(param_2 + 0x38) = uVar4;
    *(ulonglong *)(param_2 + 0x40) = uVar4;
    *(ulonglong *)(param_2 + 0x48) = uVar4 + uVar5;
    lVar2 = *(longlong *)(param_3 + 0x38);
    lVar6 = *(longlong *)(param_3 + 0x40) - lVar2;
    *(undefined8 *)(puVar8 + 0x38) = unaff_RDI;
    lVar3 = *(longlong *)(param_2 + 0x38);
    *(undefined8 *)(puVar8 + -8) = 0x1401b6f9b;
    FUN_1404210f0(lVar3,lVar2,lVar6);
    *(longlong *)(param_2 + 0x40) = (lVar6 >> 4) * 0x10 + lVar3;
  }
  return;
}

