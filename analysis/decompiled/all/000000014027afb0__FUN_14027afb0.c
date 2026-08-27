// Function: FUN_14027afb0
// Addr: 14027afb0
// Size: 212 bytes


ulonglong * FUN_14027afb0(ulonglong *param_1,longlong *param_2)

{
  longlong lVar1;
  code *pcVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  puVar4 = auStack_48;
  lVar1 = param_2[1];
  uVar3 = 0;
  lVar8 = *param_2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar6 = lVar1 - lVar8;
  if (lVar6 != 0) {
    uVar7 = lVar6 >> 5;
    if (0x7ffffffffffffff < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_140013050();
    }
    uVar7 = uVar7 * 0x20;
    puVar5 = auStack_48;
    if (uVar7 != 0) {
      if (uVar7 < 0x1000) {
        uVar3 = FUN_14028af20(uVar7);
        puVar5 = auStack_48;
      }
      else {
        if (uVar7 + 0x27 <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_140017370();
        }
        lVar6 = FUN_14028af20();
        if (lVar6 == 0) {
          pcVar2 = (code *)swi(0x29);
          lVar6 = (*pcVar2)(5);
          puVar4 = auStack_40;
        }
        uVar3 = lVar6 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar3 - 8) = lVar6;
        puVar5 = puVar4;
      }
    }
    *param_1 = uVar3;
    param_1[1] = uVar3;
    param_1[2] = uVar7 + uVar3;
    for (; lVar8 != lVar1; lVar8 = lVar8 + 0x20) {
      *(undefined8 *)(puVar5 + -8) = 0x14027b05b;
      FUN_140016600(uVar3,lVar8);
      uVar3 = uVar3 + 0x20;
    }
    param_1[1] = uVar3;
  }
  return param_1;
}

