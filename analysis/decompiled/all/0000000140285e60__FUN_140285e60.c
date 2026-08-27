// Function: FUN_140285e60
// Addr: 140285e60
// Size: 234 bytes


void FUN_140285e60(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  puVar7 = auStack_28;
  puVar8 = auStack_28;
  lVar1 = *param_1;
  if ((ulonglong)(param_1[2] - lVar1 >> 2) < param_2) {
    if (0x3fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_140013050();
    }
    lVar2 = param_1[1];
    uVar6 = param_2 * 4;
    if (uVar6 == 0) {
      uVar6 = 0;
      puVar8 = auStack_28;
    }
    else if (uVar6 < 0x1000) {
      uVar6 = FUN_14028af20();
    }
    else {
      if (uVar6 + 0x27 <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_140017370();
      }
      lVar5 = FUN_14028af20(uVar6 + 0x27);
      if (lVar5 == 0) {
        pcVar4 = (code *)swi(0x29);
        lVar5 = (*pcVar4)(5);
        puVar7 = auStack_20;
      }
      uVar6 = lVar5 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(uVar6 - 8) = lVar5;
      puVar8 = puVar7;
    }
    lVar5 = *param_1;
    lVar3 = param_1[1];
    *(undefined8 *)(puVar8 + -8) = 0x140285f14;
    FUN_1404210f0(uVar6,lVar5,lVar3 - lVar5);
    *(undefined8 *)(puVar8 + -8) = 0x140285f25;
    FUN_140038af0(param_1,uVar6,lVar2 - lVar1 >> 2,param_2);
  }
  return;
}

