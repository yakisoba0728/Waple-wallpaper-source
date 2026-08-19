// Function: FUN_14008ada0
// Addr: 14008ada0
// Size: 120 bytes


undefined8 FUN_14008ada0(longlong param_1,longlong param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  char *pcVar6;
  undefined8 uStack_28;
  undefined8 uStack_20;
  longlong lStack_18;
  ulonglong uStack_10;
  
  *(byte *)(param_1 + 0xd8) = *(byte *)(param_1 + 0xd8) & 0xfe;
  *(byte *)(param_1 + 0xd8) = *(byte *)(param_1 + 0xd8) | 2;
  *(undefined8 *)(param_1 + 8) = param_3;
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (*(ulonglong *)(param_1 + 0x40) < 0x10) {
    puVar2 = (undefined1 *)(param_1 + 0x28);
  }
  else {
    puVar2 = *(undefined1 **)(param_1 + 0x28);
  }
  *puVar2 = 0;
  if (((*(int *)(param_1 + 0x70) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x10) != 0)) {
    if ((*(byte *)(param_1 + 0xd8) & 2) == 0) {
      func_0x00014008bc60();
    }
    if (*(longlong *)(param_2 + 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140017090(&uStack_28);
    }
    lStack_18 = *(longlong *)(param_2 + 0x10);
    pcVar6 = (char *)&uStack_28;
    uStack_20 = 0;
    uStack_10 = 0xf;
    uStack_28 = (undefined8 *)0x0;
    while( true ) {
      puVar4 = &uStack_28;
      if (0xf < uStack_10) {
        puVar4 = uStack_28;
      }
      if (pcVar6 == (char *)((longlong)puVar4 + lStack_18)) break;
      FUN_14008ce60(*(undefined8 *)(param_1 + 8),*pcVar6);
      if (*pcVar6 == '\n') {
        puVar4 = &uStack_28;
        if (0xf < uStack_10) {
          puVar4 = uStack_28;
        }
        if ((pcVar6 + 1 != (char *)((longlong)puVar4 + lStack_18)) && (pcVar6[1] == '/')) {
          FUN_14000cc90(*(undefined8 *)(param_1 + 8),param_1 + 0x28);
        }
      }
      pcVar6 = pcVar6 + 1;
    }
    *(byte *)(param_1 + 0xd8) = *(byte *)(param_1 + 0xd8) & 0xfd;
    if (0xf < uStack_10) {
      uVar5 = uStack_10 + 1;
      puVar4 = uStack_28;
      if (0xfff < uVar5) {
        puVar4 = (undefined8 *)uStack_28[-1];
        if (0x1f < (ulonglong)((longlong)uStack_28 + (-8 - (longlong)puVar4))) {
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return uVar3;
        }
        uVar5 = uStack_10 + 0x28;
      }
      func_0x00014028b040(puVar4,uVar5);
    }
  }
  if (((*(byte *)(param_1 + 0xd8) & 2) == 0) && (*(longlong *)(param_1 + 0x60) != 0)) {
    uVar3 = FUN_14008ce60(*(undefined8 *)(param_1 + 8),10);
    FUN_14000cc90(uVar3,param_1 + 0x28);
  }
  *(byte *)(param_1 + 0xd8) = *(byte *)(param_1 + 0xd8) | 2;
  func_0x00014008af90(param_1,param_2);
  FUN_14008bf10(param_1,param_2);
  FUN_14000cc90(*(undefined8 *)(param_1 + 8),param_1 + 0xb8);
  *(undefined8 *)(param_1 + 8) = 0;
  return 0;
}

