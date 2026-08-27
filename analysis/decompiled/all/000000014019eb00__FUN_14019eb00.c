// Function: FUN_14019eb00
// Addr: 14019eb00
// Size: 385 bytes


ulonglong * FUN_14019eb00(ulonglong *param_1,ulonglong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  code *pcVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  puVar6 = auStack_38;
  if (param_1 != param_2) {
    uVar5 = *param_1;
    uVar2 = *param_2;
    uVar7 = (longlong)(param_2[1] - uVar2) >> 3;
    uVar4 = (longlong)(param_1[2] - uVar5) >> 3;
    if (uVar4 < uVar7) {
      if (0x1fffffffffffffff < uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_140013050();
      }
      uVar8 = 0x1fffffffffffffff;
      if ((uVar4 <= 0x1fffffffffffffff - (uVar4 >> 1)) &&
         (uVar8 = (uVar4 >> 1) + uVar4, uVar8 < uVar7)) {
        uVar8 = uVar7;
      }
      if (uVar5 != 0) {
        uVar4 = uVar5;
        puVar6 = auStack_38;
        if (0xfff < (ulonglong)(((longlong)(param_1[2] - uVar5) >> 3) * 8)) {
          uVar4 = *(ulonglong *)(uVar5 - 8);
          uVar5 = (uVar5 - uVar4) - 8;
          puVar6 = auStack_38;
          if (0x1f < uVar5) {
            pcVar3 = (code *)swi(0x29);
            (*pcVar3)(5);
            uVar4 = uVar5;
            puVar6 = auStack_30;
          }
        }
        *(undefined8 *)(puVar6 + -8) = 0x14019ebbc;
        thunk_FUN_14028af80(uVar4);
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
      }
      *(undefined8 *)(puVar6 + -8) = 0x14019ebd4;
      FUN_1401a2f70(param_1,uVar8);
      uVar8 = *param_1;
      *(undefined8 *)(puVar6 + -8) = 0x14019ebed;
      FUN_1404210f0(uVar8,uVar2,uVar7 * 8);
      uVar8 = uVar7 * 8 + uVar8;
    }
    else {
      uVar4 = (longlong)(param_1[1] - uVar5) >> 3;
      if (uVar4 < uVar7) {
        FUN_1404210f0(uVar5,uVar2,uVar4 * 8);
        uVar8 = param_1[1];
        lVar1 = (uVar7 - uVar4) * 8;
        FUN_1404210f0(uVar8,uVar4 * 8 + uVar2,lVar1);
        uVar8 = lVar1 + uVar8;
      }
      else {
        uVar8 = param_2[1] - uVar2 & 0xfffffffffffffff8;
        FUN_1404210f0(uVar5,uVar2,uVar8);
        uVar8 = uVar8 + uVar5;
      }
    }
    param_1[1] = uVar8;
  }
  return param_1;
}

