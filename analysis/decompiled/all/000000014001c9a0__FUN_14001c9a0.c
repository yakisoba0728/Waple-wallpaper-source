// Function: FUN_14001c9a0
// Addr: 14001c9a0
// Size: 382 bytes


bool FUN_14001c9a0(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong local_28 [3];
  ulonglong local_10;
  
  param_2[2] = 0;
  puVar4 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar4 = (undefined8 *)*param_2;
  }
  *(undefined1 *)puVar4 = 0;
  param_2[6] = 0;
  if ((ulonglong)param_2[7] < 0x10) {
    puVar4 = param_2 + 4;
  }
  else {
    puVar4 = (undefined8 *)param_2[4];
  }
  *(undefined1 *)puVar4 = 0;
  uVar3 = *(uint *)(param_1 + 8) & 0xff;
  if (uVar3 == 4) {
    uVar5 = FUN_140085cc0(param_1,local_28);
    puVar4 = param_2;
  }
  else {
    if (uVar3 != 7) goto LAB_14001ca48;
    lVar6 = FUN_140086de0(param_1,&DAT_140473b68,&DAT_140473b6c);
    lVar7 = FUN_140086de0(param_1,&DAT_1404748b8,&DAT_1404748bc);
    if (*(char *)(lVar6 + 8) == '\x04') {
      uVar5 = FUN_140085cc0(lVar6,local_28);
      FUN_14000de40(param_2,uVar5);
      if (0xf < local_10) {
        uVar8 = local_10 + 1;
        lVar6 = local_28[0];
        if (0xfff < uVar8) {
          lVar6 = *(longlong *)(local_28[0] + -8);
          if (0x1f < (local_28[0] - lVar6) - 8U) goto LAB_14001cb16;
          uVar8 = local_10 + 0x28;
        }
        thunk_FUN_14028af80(lVar6,uVar8);
      }
    }
    if (*(char *)(lVar7 + 8) != '\x04') goto LAB_14001ca48;
    uVar5 = FUN_140085cc0(lVar7,local_28);
    puVar4 = param_2 + 4;
  }
  FUN_14000de40(puVar4,uVar5);
  if (0xf < local_10) {
    uVar8 = local_10 + 1;
    lVar6 = local_28[0];
    if (0xfff < uVar8) {
      lVar6 = *(longlong *)(local_28[0] + -8);
      if (0x1f < (local_28[0] - lVar6) - 8U) {
LAB_14001cb16:
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        uVar2 = (*pcVar1)();
        return (bool)uVar2;
      }
      uVar8 = local_10 + 0x28;
    }
    thunk_FUN_14028af80(lVar6,uVar8);
  }
LAB_14001ca48:
  return param_2[2] != 0;
}

