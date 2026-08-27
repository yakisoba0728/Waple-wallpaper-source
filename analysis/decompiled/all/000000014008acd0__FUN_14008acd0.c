// Function: FUN_14008acd0
// Addr: 14008acd0
// Size: 495 bytes


undefined8 FUN_14008acd0(longlong param_1,longlong param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  char ****ppppcVar4;
  char ****ppppcVar5;
  ulonglong uVar6;
  char ***local_28;
  undefined8 uStack_20;
  longlong local_18;
  ulonglong local_10;
  
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
      FUN_14008bb90();
    }
    if (*(longlong *)(param_2 + 0x10) == 0) {
      local_18 = *(longlong *)(param_2 + 0x10);
      uStack_20 = 0;
      local_10 = 0xf;
      local_28 = (char ***)0x0;
      ppppcVar5 = &local_28;
    }
    else {
      FUN_140016fc0(&local_28);
      ppppcVar5 = &local_28;
      if (0xf < local_10) {
        ppppcVar5 = (char ****)local_28;
      }
    }
    while( true ) {
      ppppcVar4 = &local_28;
      if (0xf < local_10) {
        ppppcVar4 = (char ****)local_28;
      }
      if (ppppcVar5 == (char ****)((longlong)ppppcVar4 + local_18)) break;
      FUN_14008cd90(*(undefined8 *)(param_1 + 8),*(char *)ppppcVar5);
      if (*(char *)ppppcVar5 == '\n') {
        ppppcVar4 = &local_28;
        if (0xf < local_10) {
          ppppcVar4 = (char ****)local_28;
        }
        if (((char *)((longlong)ppppcVar5 + 1) != (char *)((longlong)ppppcVar4 + local_18)) &&
           (*(char *)((longlong)ppppcVar5 + 1) == '/')) {
          FUN_14000cbc0(*(undefined8 *)(param_1 + 8),param_1 + 0x28);
        }
      }
      ppppcVar5 = (char ****)((longlong)ppppcVar5 + 1);
    }
    *(byte *)(param_1 + 0xd8) = *(byte *)(param_1 + 0xd8) & 0xfd;
    if (0xf < local_10) {
      uVar6 = local_10 + 1;
      ppppcVar5 = (char ****)local_28;
      if (0xfff < uVar6) {
        ppppcVar5 = (char ****)local_28[-1];
        if ((char *)0x1f < (char *)((longlong)local_28 + (-8 - (longlong)ppppcVar5))) {
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return uVar3;
        }
        uVar6 = local_10 + 0x28;
      }
      thunk_FUN_14028af80(ppppcVar5,uVar6);
    }
  }
  if (((*(byte *)(param_1 + 0xd8) & 2) == 0) && (*(longlong *)(param_1 + 0x60) != 0)) {
    uVar3 = FUN_14008cd90(*(undefined8 *)(param_1 + 8),10);
    FUN_14000cbc0(uVar3,param_1 + 0x28);
  }
  *(byte *)(param_1 + 0xd8) = *(byte *)(param_1 + 0xd8) | 2;
  FUN_14008aec0(param_1,param_2);
  FUN_14008be40(param_1,param_2);
  FUN_14000cbc0(*(undefined8 *)(param_1 + 8),param_1 + 0xb8);
  *(undefined8 *)(param_1 + 8) = 0;
  return 0;
}

