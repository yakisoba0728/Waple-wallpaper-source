// Function: FUN_1401db5c0
// Addr: 1401db5c0
// Size: 402 bytes


longlong FUN_1401db5c0(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  code *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  puVar6 = auStack_38;
  puVar7 = auStack_38;
  lVar1 = *param_1;
  lVar10 = (param_1[1] - lVar1 >> 2) * -0x5555555555555555;
  if (lVar10 == 0x1555555555555555) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar4 = (param_1[2] - lVar1 >> 2) * -0x5555555555555555;
  uVar3 = 0x1555555555555555 - (uVar4 >> 1);
  if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
    uVar3 = lVar10 + 1;
    uVar4 = (uVar4 >> 1) + uVar4;
    uVar8 = uVar3;
    if (uVar3 <= uVar4) {
      uVar8 = uVar4;
    }
    if (uVar8 < 0x1555555555555556) {
      uVar4 = uVar8 * 0xc;
      if (uVar4 == 0) {
        uVar4 = 0;
        puVar7 = auStack_38;
      }
      else if (uVar4 < 0x1000) {
        uVar4 = FUN_14028af20();
      }
      else {
        if (uVar4 + 0x27 <= uVar4) goto LAB_1401db74e;
        lVar10 = FUN_14028af20(uVar4 + 0x27);
        if (lVar10 == 0) {
          pcVar2 = (code *)swi(0x29);
          lVar10 = (*pcVar2)(5);
          puVar6 = auStack_30;
        }
        uVar4 = lVar10 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar4 - 8) = lVar10;
        puVar7 = puVar6;
      }
      lVar1 = (param_2 - lVar1) / 0xc;
      *(undefined8 *)(uVar4 + lVar1 * 0xc) = *param_3;
      lVar1 = uVar4 + lVar1 * 0xc;
      *(undefined4 *)(lVar1 + 8) = *(undefined4 *)(param_3 + 1);
      lVar10 = *param_1;
      if (param_2 == param_1[1]) {
        lVar9 = param_1[1] - lVar10;
        uVar5 = uVar4;
        param_2 = lVar10;
      }
      else {
        *(undefined8 *)(puVar7 + -8) = 0x1401db703;
        FUN_1404210f0(uVar4,lVar10,param_2 - lVar10);
        uVar5 = lVar1 + 0xc;
        lVar9 = param_1[1] - param_2;
      }
      *(undefined8 *)(puVar7 + -8) = 0x1401db716;
      FUN_1404210f0(uVar5,param_2,lVar9);
      *(undefined8 *)(puVar7 + -8) = 0x1401db727;
      FUN_1401dc9c0(param_1,uVar4,uVar3,uVar8);
      return lVar1;
    }
  }
LAB_1401db74e:
                    /* WARNING: Subroutine does not return */
  FUN_140017370();
}

