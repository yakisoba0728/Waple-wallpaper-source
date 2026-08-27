// Function: FUN_1401b4100
// Addr: 1401b4100
// Size: 353 bytes


void FUN_1401b4100(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  puVar6 = auStack_38;
  puVar7 = auStack_38;
  lVar1 = param_1[1];
  lVar2 = *param_1;
  uVar8 = lVar1 - lVar2 >> 1;
  if (param_2 < uVar8) {
    param_1[1] = lVar2 + param_2 * 2;
  }
  else if (uVar8 < param_2) {
    uVar5 = param_1[2] - lVar2 >> 1;
    if (uVar5 < param_2) {
      if (0x7fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_140013050();
      }
      if ((0x7fffffffffffffff - (uVar5 >> 1) < uVar5) ||
         ((uVar5 = (uVar5 >> 1) + uVar5, uVar9 = param_2, param_2 <= uVar5 &&
          (uVar9 = uVar5, 0x7fffffffffffffff < uVar5)))) {
LAB_1401b4257:
                    /* WARNING: Subroutine does not return */
        FUN_140017370();
      }
      uVar5 = uVar9 * 2;
      if (uVar5 == 0) {
        uVar5 = 0;
        puVar7 = auStack_38;
      }
      else if (uVar5 < 0x1000) {
        uVar5 = FUN_14028af20();
      }
      else {
        if (uVar5 + 0x27 <= uVar5) goto LAB_1401b4257;
        lVar4 = FUN_14028af20(uVar5 + 0x27);
        if (lVar4 == 0) {
          pcVar3 = (code *)swi(0x29);
          lVar4 = (*pcVar3)(5);
          puVar6 = auStack_30;
        }
        uVar5 = lVar4 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar5 - 8) = lVar4;
        puVar7 = puVar6;
      }
      *(undefined8 *)(puVar7 + -8) = 0x1401b41ff;
      FUN_1404217a0(uVar5 + (lVar1 - lVar2 & 0xfffffffffffffffeU),0,(param_2 - uVar8) * 2);
      lVar1 = *param_1;
      lVar2 = param_1[1];
      *(undefined8 *)(puVar7 + -8) = 0x1401b4211;
      FUN_1404210f0(uVar5,lVar1,lVar2 - lVar1);
      *(undefined8 *)(puVar7 + -8) = 0x1401b4222;
      FUN_1400e4750(param_1,uVar5,param_2,uVar9);
    }
    else {
      lVar2 = (param_2 - uVar8) * 2;
      FUN_1404217a0(lVar1,0,lVar2);
      param_1[1] = lVar2 + lVar1;
    }
  }
  return;
}

