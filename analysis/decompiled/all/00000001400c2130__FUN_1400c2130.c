// Function: FUN_1400c2130
// Addr: 1400c2130
// Size: 412 bytes


ulonglong * FUN_1400c2130(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  puVar5 = auStack_48;
  puVar6 = auStack_48;
  if (param_1 != param_2) {
    uVar1 = *param_2;
    uVar8 = param_2[1] - uVar1;
    uVar4 = *param_1;
    uVar3 = param_1[2] - uVar4;
    if (uVar3 < uVar8) {
      if (0x7fffffffffffffff < uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_140013050();
      }
      uVar7 = 0x7fffffffffffffff;
      if ((uVar3 <= 0x7fffffffffffffff - (uVar3 >> 1)) &&
         (uVar7 = (uVar3 >> 1) + uVar3, uVar7 < uVar8)) {
        uVar7 = uVar8;
      }
      if (uVar4 != 0) {
        uVar3 = uVar4;
        puVar5 = auStack_48;
        if (0xfff < param_1[2] - uVar4) {
          uVar3 = *(ulonglong *)(uVar4 - 8);
          uVar4 = (uVar4 - uVar3) - 8;
          puVar5 = auStack_48;
          if (0x1f < uVar4) {
            pcVar2 = (code *)swi(0x29);
            (*pcVar2)(5);
            uVar3 = uVar4;
            puVar5 = auStack_40;
          }
        }
        *(undefined8 *)(puVar5 + -8) = 0x1400c21db;
        thunk_FUN_14028af80(uVar3);
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
      }
      *(undefined8 *)(puVar5 + -8) = 0x1400c21f3;
      FUN_1400cd7a0(param_1,uVar7);
      uVar4 = *param_1;
      *(undefined8 *)(puVar5 + -8) = 0x1400c2204;
      FUN_1404210f0(uVar4,uVar1,uVar8);
      uVar8 = uVar8 + uVar4;
      puVar6 = puVar5;
    }
    else {
      uVar3 = param_1[1] - uVar4;
      if (uVar3 < uVar8) {
        FUN_1404210f0(uVar4,uVar1,uVar3);
        uVar4 = param_1[1];
        FUN_1404210f0(uVar4,uVar3 + uVar1,uVar8 - uVar3);
        uVar8 = (uVar8 - uVar3) + uVar4;
        puVar6 = auStack_48;
      }
      else {
        FUN_1404210f0(uVar4,uVar1,uVar8);
        uVar8 = uVar4 + uVar8;
      }
    }
    puVar9 = param_2 + 3;
    param_1[1] = uVar8;
    if (0xf < param_2[6]) {
      puVar9 = (ulonglong *)*puVar9;
    }
    uVar8 = param_2[5];
    *(undefined8 *)(puVar6 + -8) = 0x1400c2283;
    FUN_14000f880(param_1 + 3,puVar9,uVar8);
  }
  *(int *)(param_1 + 7) = (int)param_2[7];
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(int *)(param_1 + 8) = (int)param_2[8];
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_2 + 0x44);
  *(int *)(param_1 + 9) = (int)param_2[9];
  *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0x4c);
  *(int *)(param_1 + 10) = (int)param_2[10];
  return param_1;
}

