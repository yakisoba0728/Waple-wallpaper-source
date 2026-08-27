// Function: FUN_140031230
// Addr: 140031230
// Size: 267 bytes


ulonglong * FUN_140031230(ulonglong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 unaff_RBP;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [32];
  
  puVar6 = auStack_48;
  uVar5 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2[1] - *param_2 != 0) {
    lVar4 = param_2[1] - *param_2 >> 3;
    if (0x38e38e38e38e38e < (ulonglong)(lVar4 * -0x71c71c71c71c71c7)) {
                    /* WARNING: Subroutine does not return */
      FUN_140013050();
    }
    uVar1 = lVar4 * 8;
    puVar7 = auStack_48;
    if (uVar1 != 0) {
      if (uVar1 < 0x1000) {
        uVar5 = FUN_14028af20(uVar1);
        puVar7 = auStack_48;
      }
      else {
        if (uVar1 + 0x27 <= uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_140017370();
        }
        lVar4 = FUN_14028af20();
        if (lVar4 == 0) {
          pcVar3 = (code *)swi(0x29);
          lVar4 = (*pcVar3)(5);
          puVar6 = auStack_40;
        }
        uVar5 = lVar4 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar5 - 8) = lVar4;
        puVar7 = puVar6;
      }
    }
    *param_1 = uVar5;
    param_1[1] = uVar5;
    param_1[2] = uVar1 + uVar5;
    lVar4 = *param_2;
    *(undefined8 *)(puVar7 + 0x50) = unaff_RBP;
    lVar2 = param_2[1];
    for (; lVar4 != lVar2; lVar4 = lVar4 + 0x48) {
      *(undefined8 *)(puVar7 + -8) = 0x1400312fb;
      FUN_140016fc0(uVar5,lVar4);
      *(undefined4 *)(uVar5 + 0x20) = *(undefined4 *)(lVar4 + 0x20);
      *(undefined8 *)(puVar7 + -8) = 0x14003130e;
      FUN_140016fc0(uVar5 + 0x28,lVar4 + 0x28);
      uVar5 = uVar5 + 0x48;
    }
    param_1[1] = uVar5;
  }
  return param_1;
}

