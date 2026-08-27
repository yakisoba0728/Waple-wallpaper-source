// Function: FUN_1401a2e50
// Addr: 1401a2e50
// Size: 232 bytes


void FUN_1401a2e50(undefined8 param_1,ulonglong *param_2,longlong *param_3)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  puVar5 = auStack_48;
  uVar7 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if (param_3[1] - *param_3 != 0) {
    lVar2 = param_3[1] - *param_3 >> 2;
    if (0x5d1745d1745d174 < (ulonglong)(lVar2 * 0x2e8ba2e8ba2e8ba3)) {
                    /* WARNING: Subroutine does not return */
      FUN_140013050();
    }
    uVar3 = lVar2 * 4;
    puVar6 = auStack_48;
    if (uVar3 != 0) {
      if (uVar3 < 0x1000) {
        uVar7 = FUN_14028af20(uVar3);
        puVar6 = auStack_48;
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
          puVar5 = auStack_40;
        }
        uVar7 = lVar2 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar7 - 8) = lVar2;
        puVar6 = puVar5;
      }
    }
    *param_2 = uVar7;
    param_2[1] = uVar7;
    param_2[2] = uVar3 + uVar7;
    lVar2 = *param_3;
    lVar4 = param_3[1] - lVar2;
    *(undefined8 *)(puVar6 + -8) = 0x1401a2f09;
    FUN_1404210f0(uVar7,lVar2,lVar4);
    param_2[1] = (lVar4 >> 2) * 4 + uVar7;
  }
  *(int *)(param_2 + 3) = (int)param_3[3];
  return;
}

