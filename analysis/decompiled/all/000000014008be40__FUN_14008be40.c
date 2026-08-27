// Function: FUN_14008be40
// Addr: 14008be40
// Size: 475 bytes


void FUN_14008be40(longlong param_1,longlong param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong local_48 [7];
  ulonglong local_10;
  
  if (*(int *)(param_1 + 0x70) != 0) {
    lVar1 = *(longlong *)(param_2 + 0x10);
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x30) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 8);
      FUN_140016fc0(local_48 + 4,lVar1 + 0x20);
      uVar3 = FUN_14002fd20(local_48,&DAT_1404738a8,local_48 + 4);
      FUN_14000cbc0(uVar4,uVar3);
      if (0xf < local_48[3]) {
        uVar6 = local_48[3] + 1;
        uVar5 = local_48[0];
        if (0xfff < uVar6) {
          uVar5 = *(ulonglong *)(local_48[0] - 8);
          if (0x1f < (local_48[0] - uVar5) - 8) goto LAB_14008c013;
          uVar6 = local_48[3] + 0x28;
        }
        thunk_FUN_14028af80(uVar5,uVar6);
      }
      local_48[2] = 0;
      local_48[3] = 0xf;
      local_48[0] = local_48[0] & 0xffffffffffffff00;
      if (0xf < local_10) {
        uVar6 = local_10 + 1;
        uVar5 = local_48[4];
        if (0xfff < uVar6) {
          uVar5 = *(longlong *)(local_48[4] + -8);
          if (0x1f < (local_48[4] - uVar5) - 8) goto LAB_14008c013;
          uVar6 = local_10 + 0x28;
        }
        thunk_FUN_14028af80(uVar5,uVar6);
      }
    }
    if ((*(longlong *)(param_2 + 0x10) != 0) &&
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x50) != 0)) {
      if (*(longlong *)(param_1 + 0x60) != 0) {
        uVar4 = FUN_14008cd90(*(undefined8 *)(param_1 + 8),10);
        FUN_14000cbc0(uVar4,param_1 + 0x28);
      }
      uVar4 = *(undefined8 *)(param_1 + 8);
      if (*(longlong *)(param_2 + 0x10) == 0) {
        local_48[1] = 0;
        local_48[0] = 0;
        local_48[3] = 0xf;
        local_48[2] = 0;
      }
      else {
        FUN_140016fc0(local_48,*(longlong *)(param_2 + 0x10) + 0x40);
      }
      FUN_14000cbc0(uVar4,local_48);
      if (0xf < local_48[3]) {
        uVar6 = local_48[3] + 1;
        uVar5 = local_48[0];
        if (0xfff < uVar6) {
          uVar5 = *(ulonglong *)(local_48[0] - 8);
          if (0x1f < (local_48[0] - uVar5) - 8) {
LAB_14008c013:
            pcVar2 = (code *)swi(0x29);
            (*pcVar2)(5);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar6 = local_48[3] + 0x28;
        }
        thunk_FUN_14028af80(uVar5,uVar6);
      }
    }
  }
  return;
}

