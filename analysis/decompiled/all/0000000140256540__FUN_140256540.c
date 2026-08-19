// Function: FUN_140256540
// Addr: 140256540
// Size: 3 bytes


ulonglong * FUN_140256540(ulonglong *param_1,longlong *param_2)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [32];
  
  puVar5 = auStack_48;
  uVar7 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2[1] - *param_2 == 0) {
    return param_1;
  }
  uVar4 = param_2[1] - *param_2 >> 3;
  if (uVar4 < 0x2000000000000000) {
    uVar4 = uVar4 * 8;
    puVar6 = auStack_48;
    if (uVar4 != 0) {
      if (uVar4 < 0x1000) {
        uVar7 = func_0x00014028aff0(uVar4);
        puVar6 = auStack_48;
      }
      else {
        if (uVar4 + 0x27 <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_140017440();
        }
        lVar3 = func_0x00014028aff0();
        if (lVar3 == 0) {
          pcVar2 = (code *)swi(0x29);
          lVar3 = (*pcVar2)(5);
          puVar5 = auStack_40;
        }
        uVar7 = lVar3 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar7 - 8) = lVar3;
        puVar6 = puVar5;
      }
    }
    *param_1 = uVar7;
    param_1[1] = uVar7;
    param_1[2] = uVar4 + uVar7;
    lVar3 = *param_2;
    lVar1 = param_2[1];
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)(puVar6 + -8) = 0x1402565ee;
    FUN_1404211c0(uVar7,lVar3,lVar1 - lVar3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_140013120();
}

