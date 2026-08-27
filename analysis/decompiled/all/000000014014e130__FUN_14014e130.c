// Function: FUN_14014e130
// Addr: 14014e130
// Size: 374 bytes


undefined4 * FUN_14014e130(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [32];
  
  puVar6 = auStack_58;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  if (param_1 != param_2) {
    uVar5 = *(ulonglong *)(param_1 + 4);
    lVar1 = *(longlong *)(param_2 + 4);
    uVar8 = *(longlong *)(param_2 + 6) - lVar1 >> 5;
    uVar4 = (longlong)(*(longlong *)(param_1 + 8) - uVar5) >> 5;
    if (uVar4 < uVar8) {
      if (0x7ffffffffffffff < uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_140013050();
      }
      uVar7 = 0x7ffffffffffffff;
      if ((uVar4 <= 0x7ffffffffffffff - (uVar4 >> 1)) &&
         (uVar7 = (uVar4 >> 1) + uVar4, uVar7 < uVar8)) {
        uVar7 = uVar8;
      }
      if (uVar5 != 0) {
        uVar4 = uVar5;
        puVar6 = auStack_58;
        if (0xfff < (*(longlong *)(param_1 + 8) - uVar5 & 0xffffffffffffffe0)) {
          uVar4 = *(ulonglong *)(uVar5 - 8);
          uVar5 = (uVar5 - uVar4) - 8;
          puVar6 = auStack_58;
          if (0x1f < uVar5) {
            pcVar3 = (code *)swi(0x29);
            (*pcVar3)(5);
            uVar4 = uVar5;
            puVar6 = auStack_50;
          }
        }
        *(undefined8 *)(puVar6 + -8) = 0x14014e1f7;
        thunk_FUN_14028af80(uVar4);
        *(undefined8 *)(param_1 + 4) = 0;
        *(undefined8 *)(param_1 + 6) = 0;
        *(undefined8 *)(param_1 + 8) = 0;
      }
      *(undefined8 *)(puVar6 + -8) = 0x14014e211;
      FUN_14014fb40(param_1 + 4,uVar7);
      lVar9 = *(longlong *)(param_1 + 4);
      *(undefined8 *)(puVar6 + -8) = 0x14014e227;
      FUN_1404210f0(lVar9,lVar1,uVar8 * 0x20);
      lVar9 = uVar8 * 0x20 + lVar9;
    }
    else {
      uVar4 = (longlong)(*(longlong *)(param_1 + 6) - uVar5) >> 5;
      if (uVar4 < uVar8) {
        FUN_1404210f0(uVar5,lVar1,uVar4 * 0x20);
        lVar2 = *(longlong *)(param_1 + 6);
        lVar9 = (uVar8 - uVar4) * 0x20;
        FUN_1404210f0(lVar2,uVar4 * 0x20 + lVar1,lVar9);
        lVar9 = lVar9 + lVar2;
      }
      else {
        uVar4 = *(longlong *)(param_2 + 6) - lVar1 & 0xffffffffffffffe0;
        FUN_1404210f0(uVar5,lVar1,uVar4);
        lVar9 = uVar4 + uVar5;
      }
    }
    *(longlong *)(param_1 + 6) = lVar9;
  }
  return param_1;
}

