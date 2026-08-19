// Function: FUN_1402c8fb0
// Addr: 1402c8fb0
// Size: 91 bytes


undefined8 FUN_1402c8fb0(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  
  uVar1 = (*DAT_140426620)(*param_2,*(undefined4 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x10),
                           0);
  uVar3 = (ulonglong)uVar1;
  if (uVar3 == 0) {
    uVar2 = (*DAT_1404266a8)();
    FUN_1402caf94(uVar2);
                    /* WARNING: Subroutine does not return */
    FUN_1402cb004();
  }
  if (uVar3 <= *(ulonglong *)(param_1 + 0x18)) {
    *(ulonglong *)(param_1 + 0x20) = uVar3;
    return 0;
  }
  if (*(char *)(param_1 + 0x28) != '\0') {
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402cb004();
}

