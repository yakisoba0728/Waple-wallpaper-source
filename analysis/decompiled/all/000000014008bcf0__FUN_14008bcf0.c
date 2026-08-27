// Function: FUN_14008bcf0
// Addr: 14008bcf0
// Size: 332 bytes


void FUN_14008bcf0(longlong param_1,longlong param_2)

{
  code *pcVar1;
  char ****ppppcVar2;
  char ****ppppcVar3;
  ulonglong uVar4;
  char ***local_28;
  undefined8 uStack_20;
  longlong local_18;
  ulonglong local_10;
  
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
      ppppcVar3 = &local_28;
    }
    else {
      FUN_140016fc0(&local_28);
      ppppcVar3 = &local_28;
      if (0xf < local_10) {
        ppppcVar3 = (char ****)local_28;
      }
    }
    while( true ) {
      ppppcVar2 = &local_28;
      if (0xf < local_10) {
        ppppcVar2 = (char ****)local_28;
      }
      if (ppppcVar3 == (char ****)((longlong)ppppcVar2 + local_18)) break;
      FUN_14008cd90(*(undefined8 *)(param_1 + 8),*(char *)ppppcVar3);
      if (*(char *)ppppcVar3 == '\n') {
        ppppcVar2 = &local_28;
        if (0xf < local_10) {
          ppppcVar2 = (char ****)local_28;
        }
        if (((char *)((longlong)ppppcVar3 + 1) != (char *)((longlong)ppppcVar2 + local_18)) &&
           (*(char *)((longlong)ppppcVar3 + 1) == '/')) {
          FUN_14000cbc0(*(undefined8 *)(param_1 + 8),param_1 + 0x28);
        }
      }
      ppppcVar3 = (char ****)((longlong)ppppcVar3 + 1);
    }
    *(byte *)(param_1 + 0xd8) = *(byte *)(param_1 + 0xd8) & 0xfd;
    if (0xf < local_10) {
      uVar4 = local_10 + 1;
      ppppcVar3 = (char ****)local_28;
      if (0xfff < uVar4) {
        ppppcVar3 = (char ****)local_28[-1];
        if ((char *)0x1f < (char *)((longlong)local_28 + (-8 - (longlong)ppppcVar3))) {
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar4 = local_10 + 0x28;
      }
      thunk_FUN_14028af80(ppppcVar3,uVar4);
    }
  }
  return;
}

