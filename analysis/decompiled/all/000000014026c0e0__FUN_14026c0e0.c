// Function: FUN_14026c0e0
// Addr: 14026c0e0
// Size: 209 bytes


ulonglong * FUN_14026c0e0(ulonglong *param_1,longlong *param_2)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [32];
  
  puVar4 = auStack_48;
  uVar6 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2[1] - *param_2 != 0) {
    uVar3 = param_2[1] - *param_2 >> 2;
    if (0x3fffffffffffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_140013050();
    }
    uVar3 = uVar3 * 4;
    puVar5 = auStack_48;
    if (uVar3 != 0) {
      if (uVar3 < 0x1000) {
        uVar6 = FUN_14028af20(uVar3);
        puVar5 = auStack_48;
      }
      else {
        if (uVar3 + 0x27 <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_140017370();
        }
        lVar2 = FUN_14028af20();
        if (lVar2 == 0) {
          pcVar1 = (code *)swi(0x29);
          lVar2 = (*pcVar1)(5);
          puVar4 = auStack_40;
        }
        uVar6 = lVar2 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar6 - 8) = lVar2;
        puVar5 = puVar4;
      }
    }
    *param_1 = uVar6;
    param_1[1] = uVar6;
    param_1[2] = uVar3 + uVar6;
    lVar2 = *param_2;
    uVar3 = param_2[1] - lVar2;
    *(undefined8 *)(puVar5 + -8) = 0x14026c18e;
    FUN_1404210f0(uVar6,lVar2,uVar3);
    param_1[1] = (uVar3 & 0xfffffffffffffffc) + uVar6;
  }
  return param_1;
}

