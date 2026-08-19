// Function: FUN_140161a10
// Addr: 140161a10
// Size: 27 bytes


void FUN_140161a10(undefined8 param_1,ulonglong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
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
  if (param_3[1] - *param_3 == 0) {
    return;
  }
  lVar4 = param_3[1] - *param_3 >> 3;
  if ((ulonglong)(lVar4 * -0x3333333333333333) < 0x666666666666667) {
    uVar1 = lVar4 * 8;
    puVar6 = auStack_28;
    if (uVar1 != 0) {
      if (uVar1 < 0x1000) {
        uVar7 = func_0x00014028aff0(uVar1);
        puVar6 = auStack_28;
      }
      else {
        if (uVar1 + 0x27 <= uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_140017440();
        }
        lVar4 = func_0x00014028aff0();
        if (lVar4 == 0) {
          pcVar3 = (code *)swi(0x29);
          lVar4 = (*pcVar3)(5);
          puVar5 = auStack_20;
        }
        uVar7 = lVar4 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar7 - 8) = lVar4;
        puVar6 = puVar5;
      }
    }
    *param_2 = uVar7;
    param_2[1] = uVar7;
    param_2[2] = uVar1 + uVar7;
    lVar4 = *param_3;
    lVar2 = param_3[1];
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)(puVar6 + -8) = 0x140161ae0;
    FUN_1404211c0(uVar7,lVar4,lVar2 - lVar4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_140013120();
}

