// Function: FUN_14025f690
// Addr: 14025f690
// Size: 186 bytes


ulonglong * FUN_14025f690(ulonglong *param_1,longlong *param_2)

{
  longlong lVar1;
  code *pcVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  longlong lVar8;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  puVar6 = auStack_48;
  lVar1 = *param_2;
  uVar5 = 0;
  lVar8 = param_2[1];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar8 = lVar8 - lVar1;
  if (lVar8 != 0) {
    if (0x7fffffffffffffff < (ulonglong)(lVar8 >> 1)) {
                    /* WARNING: Subroutine does not return */
      FUN_140013050();
    }
    uVar3 = (lVar8 >> 1) * 2;
    puVar7 = auStack_48;
    if (uVar3 != 0) {
      if (uVar3 < 0x1000) {
        uVar5 = FUN_14028af20(uVar3);
        puVar7 = auStack_48;
      }
      else {
        if (uVar3 + 0x27 <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_140017370();
        }
        lVar4 = FUN_14028af20();
        if (lVar4 == 0) {
          pcVar2 = (code *)swi(0x29);
          lVar4 = (*pcVar2)(5);
          puVar6 = auStack_40;
        }
        uVar5 = lVar4 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar5 - 8) = lVar4;
        puVar7 = puVar6;
      }
    }
    *param_1 = uVar5;
    param_1[1] = uVar5;
    param_1[2] = uVar3 + uVar5;
    *(undefined8 *)(puVar7 + -8) = 0x14025f72a;
    FUN_1404210f0(uVar5,lVar1,lVar8);
    param_1[1] = uVar3 + uVar5;
  }
  return param_1;
}

