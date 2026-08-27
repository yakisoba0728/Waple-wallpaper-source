// Function: FUN_1403351f0
// Addr: 1403351f0
// Size: 112 bytes


void FUN_1403351f0(longlong param_1)

{
  if (*(char *)(param_1 + 0x48d4) != '\0') {
    *(undefined1 *)(param_1 + 0x48d5) = 1;
    FUN_140335a10(param_1,*(undefined4 *)(param_1 + 0x4930),*(undefined4 *)(param_1 + 0x4934));
    if (*(char *)(param_1 + 0x4938) != '\0') {
      FUN_140335d10(param_1,param_1 + 0x10,param_1 + 0x4910,*(undefined8 *)(param_1 + 0x4918),1);
    }
    *(undefined1 *)(param_1 + 0x48d7) = 1;
    *(undefined2 *)(param_1 + 0x48d4) = 0;
    *(undefined1 *)(param_1 + 0x4938) = 0;
  }
  return;
}

