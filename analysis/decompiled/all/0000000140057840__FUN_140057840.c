// Function: FUN_140057840
// Addr: 140057840
// Size: 69 bytes


undefined8 FUN_140057840(undefined8 param_1,undefined4 param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  undefined4 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_68;
  undefined1 auStack_58 [80];
  
  puVar6 = auStack_98;
  switch(param_2) {
  case 1:
    *(undefined8 *)(*param_4 + 0x60) = 0;
    (*DAT_140426968)(param_1,0xffffffeb);
    return 0;
  case 2:
    break;
  default:
    uVar5 = (*DAT_140426810)(param_1);
    return uVar5;
  case 0xf:
    (*DAT_140426960)(param_1,auStack_58);
    (*DAT_140426958)(param_1,auStack_58);
    return 0;
  case 0x14:
    return 1;
  case 0x46:
    param_4[1] = 0;
    return 0;
  case 0x47:
    uStack_68 = 0x4013;
    uStack_70 = 0;
    uStack_78 = 0;
    (*DAT_140426950)(param_1,0,0,0);
    return 0;
  }
  plVar3 = (longlong *)(*DAT_140426948)(param_1,0xffffffeb);
  if ((longlong *)plVar3[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)plVar3[1] + 0x10))();
    plVar3[1] = 0;
  }
  if ((longlong *)*plVar3 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*plVar3 + 0x10))();
    *plVar3 = 0;
  }
  (*DAT_140426968)(param_1,0xffffffeb,0);
  if (plVar3[0xc] != 0) {
    (*DAT_1404261a0)();
  }
  plVar3[0xc] = 0;
  lVar1 = plVar3[8];
  if (lVar1 != 0) {
    lVar4 = lVar1;
    puVar6 = auStack_98;
    if ((0xfff < (ulonglong)(plVar3[10] - lVar1)) &&
       (lVar4 = *(longlong *)(lVar1 + -8), puVar6 = auStack_98, 0x1f < (lVar1 - lVar4) - 8U)) {
      pcVar2 = (code *)swi(0x29);
      lVar4 = (*pcVar2)(5);
      puVar6 = auStack_90;
    }
    *(undefined **)(puVar6 + -8) = &UNK_1400579d9;
    func_0x00014028b040(lVar4);
    plVar3[8] = 0;
    plVar3[9] = 0;
    plVar3[10] = 0;
  }
  *(undefined **)(puVar6 + -8) = &UNK_1400579f2;
  func_0x00014028b040(plVar3,0x68);
  return 0;
}

