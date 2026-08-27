// Function: FUN_1401ad400
// Addr: 1401ad400
// Size: 621 bytes


longlong *
FUN_1401ad400(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             float param_5)

{
  code *pcVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 ****ppppuVar6;
  ulonglong uVar7;
  float fVar8;
  undefined1 local_68 [16];
  undefined8 ***local_58;
  longlong lStack_50;
  longlong local_48;
  ulonglong uStack_40;
  longlong local_38 [3];
  ulonglong local_20;
  
  fVar8 = 0.0;
  if (param_5 != 0.0) {
    fVar8 = param_5;
  }
  uVar7 = (((((ulonglong)((uint)fVar8 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
            (ulonglong)((uint)fVar8 >> 8 & 0xff)) * 0x100000001b3 ^
           (ulonglong)((uint)fVar8 >> 0x10 & 0xff)) * 0x100000001b3 ^
          (ulonglong)((uint)fVar8 >> 0x18)) * 0x100000001b3 & param_4[0xc];
  lVar2 = *(longlong *)(param_4[9] + 8 + uVar7 * 0x10);
  if (lVar2 == param_4[7]) {
LAB_1401ad4b6:
    lVar2 = 0;
  }
  else {
    for (; param_5 != *(float *)(lVar2 + 0x10); lVar2 = *(longlong *)(lVar2 + 8)) {
      if (lVar2 == *(longlong *)(param_4[9] + uVar7 * 0x10)) goto LAB_1401ad4b6;
    }
  }
  if ((lVar2 == 0) || (lVar2 == param_4[7])) {
    plVar3 = (longlong *)FUN_1401b5640(param_4 + 6,local_68,&param_5);
    lVar2 = *plVar3;
    plVar3 = (longlong *)(lVar2 + 0x18);
    if (0xf < (ulonglong)param_4[3]) {
      param_4 = (undefined8 *)*param_4;
    }
    FUN_1401acaf0(param_1,param_2,param_3,plVar3,param_5,param_4);
    if (*plVar3 != *(longlong *)(lVar2 + 0x20)) {
      return plVar3;
    }
    uVar4 = FUN_1401ab7c0(local_38);
    plVar5 = (longlong *)FUN_1400532a0(uVar4,"arial.ttf",9);
    local_58 = (undefined8 ***)*plVar5;
    lStack_50 = plVar5[1];
    local_48 = plVar5[2];
    uStack_40 = plVar5[3];
    plVar5[2] = 0;
    plVar5[3] = 0xf;
    *(undefined1 *)plVar5 = 0;
    if (0xf < local_20) {
      uVar7 = local_20 + 1;
      lVar2 = local_38[0];
      if (0xfff < uVar7) {
        lVar2 = *(longlong *)(local_38[0] + -8);
        if (0x1f < (local_38[0] - lVar2) - 8U) goto LAB_1401ad665;
        uVar7 = local_20 + 0x28;
      }
      thunk_FUN_14028af80(lVar2,uVar7);
    }
    ppppuVar6 = &local_58;
    if (0xf < uStack_40) {
      ppppuVar6 = (undefined8 ****)local_58;
    }
    FUN_1401acaf0(param_1,param_2,param_3,plVar3,param_5,ppppuVar6);
    if (0xf < uStack_40) {
      uVar7 = uStack_40 + 1;
      ppppuVar6 = (undefined8 ****)local_58;
      if (0xfff < uVar7) {
        ppppuVar6 = (undefined8 ****)local_58[-1];
        if (0x1f < (ulonglong)((longlong)local_58 + (-8 - (longlong)ppppuVar6))) {
LAB_1401ad665:
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          pcVar1 = (code *)swi(3);
          plVar3 = (longlong *)(*pcVar1)();
          return plVar3;
        }
        uVar7 = uStack_40 + 0x28;
      }
      thunk_FUN_14028af80(ppppuVar6,uVar7);
    }
  }
  else {
    plVar3 = (longlong *)(lVar2 + 0x18);
  }
  return plVar3;
}

