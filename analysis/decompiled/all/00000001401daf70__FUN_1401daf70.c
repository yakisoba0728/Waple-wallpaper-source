// Function: FUN_1401daf70
// Addr: 1401daf70
// Size: 385 bytes


void FUN_1401daf70(ulonglong *param_1,longlong param_2,ulonglong param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  puVar5 = auStack_38;
  uVar7 = *param_1;
  uVar3 = ((longlong)(param_1[2] - uVar7) >> 2) * -0x5555555555555555;
  if (uVar3 < param_3) {
    if (0x1555555555555555 < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_140013050();
    }
    uVar2 = 0x1555555555555555 - (uVar3 >> 1);
    uVar6 = 0x1555555555555555;
    if ((uVar3 < uVar2 || uVar3 - uVar2 == 0) && (uVar6 = (uVar3 >> 1) + uVar3, uVar6 < param_3)) {
      uVar6 = param_3;
    }
    if (uVar7 != 0) {
      uVar3 = uVar7;
      puVar5 = auStack_38;
      if (0xfff < (ulonglong)(((longlong)(param_1[2] - uVar7) >> 2) * 4)) {
        uVar3 = *(ulonglong *)(uVar7 - 8);
        uVar7 = (uVar7 - uVar3) - 8;
        puVar5 = auStack_38;
        if (0x1f < uVar7) {
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          uVar3 = uVar7;
          puVar5 = auStack_30;
        }
      }
      *(undefined8 *)(puVar5 + -8) = 0x1401db02d;
      thunk_FUN_14028af80(uVar3);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    *(undefined8 *)(puVar5 + -8) = 0x1401db045;
    FUN_1401dca60(param_1,uVar6);
    uVar7 = *param_1;
    lVar4 = param_3 * 0xc;
    *(undefined8 *)(puVar5 + -8) = 0x1401db062;
    FUN_1404210f0(uVar7,param_2,lVar4);
  }
  else {
    lVar8 = (longlong)(param_1[1] - uVar7) >> 2;
    if ((ulonglong)(lVar8 * -0x5555555555555555) < param_3) {
      FUN_1404210f0(uVar7,param_2,lVar8 * 4);
      uVar7 = param_1[1];
      lVar4 = (param_3 + lVar8 * 0x5555555555555555) * 0xc;
      FUN_1404210f0(uVar7,lVar8 * 4 + param_2,lVar4);
    }
    else {
      lVar4 = param_3 * 0xc;
      FUN_1404210f0(uVar7,param_2,lVar4);
    }
  }
  param_1[1] = lVar4 + uVar7;
  return;
}

