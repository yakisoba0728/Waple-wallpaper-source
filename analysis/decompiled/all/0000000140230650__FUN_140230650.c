// Function: FUN_140230650
// Addr: 140230650
// Size: 590 bytes


void FUN_140230650(longlong *param_1,float param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  float fVar9;
  
  if (((*(byte *)(param_1 + 0x24) & 1) == 0) ||
     ((param_1[0x30] != 0 && (cVar4 = FUN_140185010(), cVar4 == '\0')))) {
    cVar4 = '\0';
    if (*(int *)((longlong)param_1 + 0x604) != 0) {
      lVar8 = 0;
      *(undefined4 *)(param_1 + 0xee) = 0;
      FUN_14022f6c0(param_1 + 0x58);
      if ((uint)lVar8 < *(uint *)(param_1 + 0xc0)) {
        param_1[0xc0] = lVar8;
        *(uint *)(param_1 + 0xc2) = (uint)lVar8;
        FUN_1404217a0(param_1[0xa4],0,(ulonglong)*(uint *)((longlong)param_1 + 0x60c) << 2);
        if (param_1[0x9b] != param_1[0x9c]) {
          param_1[0x9c] = param_1[0x9b];
        }
      }
      lVar8 = param_1[0xe9];
      for (lVar6 = param_1[0xe8]; lVar6 != lVar8; lVar6 = lVar6 + 0x10) {
        FUN_14022fd90(*(undefined8 *)(lVar6 + 8));
      }
      lVar8 = param_1[0xec];
      for (lVar6 = param_1[0xeb]; lVar6 != lVar8; lVar6 = lVar6 + 0x38) {
        plVar5 = *(longlong **)(lVar6 + 0x10);
        for (plVar7 = *(longlong **)(lVar6 + 8); plVar7 != plVar5; plVar7 = plVar7 + 1) {
          lVar1 = *plVar7;
          if (lVar1 != 0) {
            FUN_14022ac60(lVar1);
            thunk_FUN_14028af80(lVar1,0x4b0);
          }
        }
        if (*(longlong *)(lVar6 + 8) != *(longlong *)(lVar6 + 0x10)) {
          *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 8);
        }
      }
      FUN_140161c50(param_1 + 0xdf);
    }
  }
  else {
    cVar4 = '\x01';
  }
  if ((char)param_1[0x125] != '\0') {
    fVar9 = DAT_140492620;
    if (DAT_140492620 <= *(float *)((longlong)param_1 + 0x854)) {
      fVar9 = *(float *)((longlong)param_1 + 0x854);
    }
    *(undefined1 *)(param_1 + 0x125) = 0;
    *(float *)((longlong)param_1 + 0x854) = fVar9;
    FUN_14022bd40(param_1 + 0x58,1);
  }
  param_2 = param_2 * *(float *)((longlong)param_1 + 0x854);
  if (cVar4 != '\0') {
    *(float *)(param_1 + 0xee) = param_2 + *(float *)(param_1 + 0xee);
  }
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x80))(param_1);
  lVar8 = plVar5[1];
  param_1[0xcc] = *plVar5;
  param_1[0xcd] = lVar8;
  lVar8 = plVar5[3];
  param_1[0xce] = plVar5[2];
  param_1[0xcf] = lVar8;
  uVar2 = *(undefined4 *)((longlong)plVar5 + 0x24);
  lVar8 = plVar5[5];
  uVar3 = *(undefined4 *)((longlong)plVar5 + 0x2c);
  *(int *)(param_1 + 0xd0) = (int)plVar5[4];
  *(undefined4 *)((longlong)param_1 + 0x684) = uVar2;
  *(int *)(param_1 + 0xd1) = (int)lVar8;
  *(undefined4 *)((longlong)param_1 + 0x68c) = uVar3;
  uVar2 = *(undefined4 *)((longlong)plVar5 + 0x34);
  lVar8 = plVar5[7];
  uVar3 = *(undefined4 *)((longlong)plVar5 + 0x3c);
  *(int *)(param_1 + 0xd2) = (int)plVar5[6];
  *(undefined4 *)((longlong)param_1 + 0x694) = uVar2;
  *(int *)(param_1 + 0xd3) = (int)lVar8;
  *(undefined4 *)((longlong)param_1 + 0x69c) = uVar3;
  FUN_140229760(param_1 + 0x58);
  FUN_1402308a0(param_1 + 0x58,param_2,cVar4);
  lVar8 = param_1[0x58];
  plVar5 = (longlong *)(lVar8 + 0x30);
  *plVar5 = *plVar5 + -0x40;
  *(undefined1 *)(lVar8 + 0x1ca) = 1;
  return;
}

