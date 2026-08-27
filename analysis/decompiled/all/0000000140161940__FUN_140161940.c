// Function: FUN_140161940
// Addr: 140161940
// Size: 265 bytes


void FUN_140161940(undefined8 param_1,ulonglong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  puVar5 = auStack_28;
  uVar7 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if (param_3[1] - *param_3 != 0) {
    lVar3 = param_3[1] - *param_3 >> 3;
    if (0x666666666666666 < (ulonglong)(lVar3 * -0x3333333333333333)) {
                    /* WARNING: Subroutine does not return */
      FUN_140013050();
    }
    uVar1 = lVar3 * 8;
    puVar6 = auStack_28;
    if (uVar1 != 0) {
      if (uVar1 < 0x1000) {
        uVar7 = FUN_14028af20(uVar1);
        puVar6 = auStack_28;
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
          puVar5 = auStack_20;
        }
        uVar7 = lVar3 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar7 - 8) = lVar3;
        puVar6 = puVar5;
      }
    }
    *param_2 = uVar7;
    param_2[1] = uVar7;
    param_2[2] = uVar1 + uVar7;
    lVar3 = *param_3;
    lVar4 = param_3[1] - lVar3;
    *(undefined8 *)(puVar6 + -8) = 0x140161a10;
    FUN_1404210f0(uVar7,lVar3,lVar4);
    param_2[1] = uVar7 + (lVar4 >> 3) * 8;
  }
  return;
}

