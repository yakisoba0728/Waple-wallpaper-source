// Function: FUN_140067070
// Addr: 140067070
// Size: 471 bytes


longlong FUN_140067070(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  puVar7 = auStack_38;
  FUN_14007a870();
  FUN_14007a870(param_1 + 0x18,param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  if (param_1 != param_2) {
    lVar1 = *(longlong *)(param_2 + 0x50);
    uVar8 = *(longlong *)(param_2 + 0x58) - lVar1;
    uVar6 = *(ulonglong *)(param_1 + 0x50);
    uVar9 = (longlong)uVar8 >> 2;
    uVar5 = (longlong)(*(longlong *)(param_1 + 0x60) - uVar6) >> 2;
    if (uVar5 < uVar9) {
      if (0x3fffffffffffffff < uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_140013050();
      }
      uVar8 = 0x3fffffffffffffff;
      if ((uVar5 <= 0x3fffffffffffffff - (uVar5 >> 1)) &&
         (uVar8 = (uVar5 >> 1) + uVar5, uVar8 < uVar9)) {
        uVar8 = uVar9;
      }
      if (uVar6 != 0) {
        uVar5 = uVar6;
        puVar7 = auStack_38;
        if (0xfff < (ulonglong)(((longlong)(*(longlong *)(param_1 + 0x60) - uVar6) >> 2) * 4)) {
          uVar5 = *(ulonglong *)(uVar6 - 8);
          uVar6 = (uVar6 - uVar5) - 8;
          puVar7 = auStack_38;
          if (0x1f < uVar6) {
            pcVar3 = (code *)swi(0x29);
            (*pcVar3)(5);
            uVar5 = uVar6;
            puVar7 = auStack_30;
          }
        }
        *(undefined8 *)(puVar7 + -8) = 0x140067173;
        thunk_FUN_14028af80(uVar5);
        *(undefined8 *)(param_1 + 0x50) = 0;
        *(undefined8 *)(param_1 + 0x58) = 0;
        *(undefined8 *)(param_1 + 0x60) = 0;
      }
      *(undefined8 *)(puVar7 + -8) = 0x140067189;
      lVar4 = FUN_1400399f0();
      *(longlong *)(param_1 + 0x50) = lVar4;
      *(longlong *)(param_1 + 0x58) = lVar4;
      *(ulonglong *)(param_1 + 0x60) = lVar4 + uVar8 * 4;
      lVar4 = *(longlong *)(param_1 + 0x50);
      *(undefined8 *)(puVar7 + -8) = 0x1400671b3;
      FUN_1404210f0(lVar4,lVar1,uVar9 * 4);
      lVar4 = uVar9 * 4 + lVar4;
    }
    else {
      uVar5 = (longlong)(*(longlong *)(param_1 + 0x58) - uVar6) >> 2;
      if (uVar5 < uVar9) {
        FUN_1404210f0(uVar6,lVar1,uVar5 * 4);
        lVar2 = *(longlong *)(param_1 + 0x58);
        lVar4 = (uVar9 - uVar5) * 4;
        FUN_1404210f0(lVar2,uVar5 * 4 + lVar1,lVar4);
        lVar4 = lVar4 + lVar2;
      }
      else {
        uVar8 = uVar8 & 0xfffffffffffffffc;
        FUN_1404210f0(uVar6,lVar1,uVar8);
        lVar4 = uVar8 + uVar6;
      }
    }
    *(longlong *)(param_1 + 0x58) = lVar4;
  }
  return param_1;
}

