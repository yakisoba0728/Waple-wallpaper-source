// Function: FUN_140067250
// Addr: 140067250
// Size: 624 bytes


undefined8 * FUN_140067250(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  puVar9 = auStack_48;
  puVar10 = auStack_48;
  *param_1 = *param_2;
  FUN_14007a870(param_1 + 1,param_2 + 1);
  FUN_14007a870(param_1 + 4,param_2 + 4);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_2 + 0x44);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0x4c);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)((longlong)param_2 + 0x54);
  if (param_1 != param_2) {
    lVar1 = param_2[0xb];
    uVar8 = param_1[0xb];
    uVar11 = param_2[0xc] - lVar1 >> 2;
    uVar6 = (longlong)(param_1[0xd] - uVar8) >> 2;
    if (uVar6 < uVar11) {
      if (0x3fffffffffffffff < uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_140013050();
      }
      uVar12 = 0x3fffffffffffffff;
      if ((uVar6 <= 0x3fffffffffffffff - (uVar6 >> 1)) &&
         (uVar12 = (uVar6 >> 1) + uVar6, uVar12 < uVar11)) {
        uVar12 = uVar11;
      }
      if (uVar8 != 0) {
        uVar6 = uVar8;
        puVar9 = auStack_48;
        if (0xfff < (ulonglong)(((longlong)(param_1[0xd] - uVar8) >> 2) * 4)) {
          uVar6 = *(ulonglong *)(uVar8 - 8);
          uVar8 = (uVar8 - uVar6) - 8;
          puVar9 = auStack_48;
          if (0x1f < uVar8) {
            pcVar4 = (code *)swi(0x29);
            (*pcVar4)(5);
            uVar6 = uVar8;
            puVar9 = auStack_40;
          }
        }
        *(undefined8 *)(puVar9 + -8) = 0x14006736f;
        thunk_FUN_14028af80(uVar6);
        param_1[0xb] = 0;
        param_1[0xc] = 0;
        param_1[0xd] = 0;
      }
      *(undefined8 *)(puVar9 + -8) = 0x140067385;
      lVar5 = FUN_1400399f0();
      param_1[0xb] = lVar5;
      param_1[0xc] = lVar5;
      param_1[0xd] = lVar5 + uVar12 * 4;
      lVar5 = param_1[0xb];
      *(undefined8 *)(puVar9 + -8) = 0x1400673af;
      FUN_1404210f0(lVar5,lVar1,uVar11 * 4);
      lVar5 = uVar11 * 4 + lVar5;
      puVar10 = puVar9;
    }
    else {
      uVar6 = (longlong)(param_1[0xc] - uVar8) >> 2;
      if (uVar6 < uVar11) {
        FUN_1404210f0(uVar8,lVar1,uVar6 * 4);
        lVar2 = param_1[0xc];
        lVar5 = (uVar11 - uVar6) * 4;
        FUN_1404210f0(lVar2,uVar6 * 4 + lVar1,lVar5);
        lVar5 = lVar5 + lVar2;
        puVar10 = auStack_48;
      }
      else {
        uVar6 = param_2[0xc] - lVar1 & 0xfffffffffffffffc;
        FUN_1404210f0(uVar8,lVar1,uVar6);
        lVar5 = uVar6 + uVar8;
      }
    }
    param_1[0xc] = lVar5;
    if (param_1 != param_2) {
      plVar7 = param_2 + 0xe;
      if (0xf < (ulonglong)param_2[0x11]) {
        plVar7 = (longlong *)*plVar7;
      }
      uVar3 = param_2[0x10];
      *(undefined8 *)(puVar10 + -8) = 0x14006744d;
      FUN_14000f880(param_1 + 0xe,plVar7,uVar3);
      if (param_1 != param_2) {
        plVar7 = param_2 + 0x12;
        if (0xf < (ulonglong)param_2[0x15]) {
          plVar7 = (longlong *)*plVar7;
        }
        uVar3 = param_2[0x14];
        *(undefined8 *)(puVar10 + -8) = 0x140067479;
        FUN_14000f880(param_1 + 0x12,plVar7,uVar3);
      }
    }
  }
  *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_2 + 0x16);
  *(undefined1 *)((longlong)param_1 + 0xb1) = *(undefined1 *)((longlong)param_2 + 0xb1);
  *(undefined1 *)((longlong)param_1 + 0xb2) = *(undefined1 *)((longlong)param_2 + 0xb2);
  return param_1;
}

