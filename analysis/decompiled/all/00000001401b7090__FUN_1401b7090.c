// Function: FUN_1401b7090
// Addr: 1401b7090
// Size: 289 bytes


void FUN_1401b7090(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  longlong lVar8;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  puVar7 = auStack_28;
  puVar6 = auStack_28;
  *param_2 = *param_3;
  uVar4 = 0;
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  if (*(longlong *)(param_3 + 4) - *(longlong *)(param_3 + 2) != 0) {
    lVar2 = *(longlong *)(param_3 + 4) - *(longlong *)(param_3 + 2) >> 4;
    if (0x333333333333333 < (ulonglong)(lVar2 * -0x3333333333333333)) {
                    /* WARNING: Subroutine does not return */
      FUN_140133d70();
    }
    uVar5 = lVar2 * 0x10;
    if (uVar5 != 0) {
      if (uVar5 < 0x1000) {
        uVar4 = FUN_14028af20(uVar5);
        puVar7 = auStack_28;
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
          puVar6 = auStack_20;
        }
        uVar4 = lVar3 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar4 - 8) = lVar2;
        puVar7 = puVar6;
      }
    }
    *(ulonglong *)(param_2 + 2) = uVar4;
    *(ulonglong *)(param_2 + 4) = uVar4;
    *(ulonglong *)(param_2 + 6) = uVar4 + uVar5;
    lVar2 = *(longlong *)(param_3 + 2);
    *(undefined8 *)(puVar7 + 0x38) = unaff_RSI;
    lVar3 = *(longlong *)(param_3 + 4);
    *(undefined8 *)(puVar7 + 0x40) = unaff_RDI;
    lVar8 = *(longlong *)(param_2 + 2);
    for (; lVar2 != lVar3; lVar2 = lVar2 + 0x50) {
      *(undefined8 *)(puVar7 + -8) = 0x1401b717b;
      FUN_1401b6ea0();
      lVar8 = lVar8 + 0x50;
    }
    *(longlong *)(param_2 + 4) = lVar8;
  }
  return;
}

