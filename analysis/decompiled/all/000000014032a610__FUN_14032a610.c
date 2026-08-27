// Function: FUN_14032a610
// Addr: 14032a610
// Size: 378 bytes


void FUN_14032a610(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  
  if (param_1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x98);
    FUN_1402f7f90(uVar2,*(undefined8 *)(param_1 + 0x1b0));
    iVar3 = 0;
    *(undefined8 *)(param_1 + 0x1b0) = 0;
    FUN_1402f7f90(uVar2,*(undefined8 *)(param_1 + 0x1c8));
    *(undefined8 *)(param_1 + 0x1c8) = 0;
    if (*(longlong *)(param_1 + 0x1a0) != 0) {
      if (0 < *(int *)(param_1 + 0x19c)) {
        do {
          puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x1a0) + (longlong)iVar3 * 0x18);
          if (puVar1 != (undefined8 *)0x0) {
            FUN_1402f7f90(uVar2,*puVar1);
            *puVar1 = 0;
            if (*(char *)(puVar1 + 1) != '\0') {
              FUN_1402f7f90(uVar2,puVar1[2]);
              puVar1[2] = 0;
            }
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(param_1 + 0x19c));
      }
      FUN_1402f7f90(uVar2,*(undefined8 *)(param_1 + 0x1a0));
      *(undefined8 *)(param_1 + 0x1a0) = 0;
    }
    FUN_1402f7f90(uVar2,*(undefined8 *)(param_1 + 0x140));
    *(undefined8 *)(param_1 + 0x140) = 0;
    FUN_1402f7f90(uVar2,*(undefined8 *)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = 0;
    FUN_1402f7f90(uVar2,*(undefined8 *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = 0;
    FUN_1402f7f90(uVar2,*(undefined8 *)(param_1 + 0x30));
    *(undefined8 *)(param_1 + 0x30) = 0;
    FUN_1402f7f90(uVar2,*(undefined8 *)(param_1 + 0x128));
    *(undefined8 *)(param_1 + 0x128) = 0;
    FUN_1402f7f90(uVar2,*(undefined8 *)(param_1 + 0x130));
    *(undefined8 *)(param_1 + 0x130) = 0;
    if (*(longlong *)(param_1 + 0xa0) == param_1 + 0xd8) {
      FUN_1402f4fc0();
      *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0x120);
    }
  }
  return;
}

