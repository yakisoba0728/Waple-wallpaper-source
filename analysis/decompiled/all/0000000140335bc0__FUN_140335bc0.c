// Function: FUN_140335bc0
// Addr: 140335bc0
// Size: 160 bytes


void FUN_140335bc0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_1403351f0();
  *(undefined4 *)(param_1 + 0x4930) = param_2;
  *(undefined4 *)(param_1 + 0x4920) = param_2;
  *(undefined4 *)(param_1 + 0x4934) = param_3;
  *(undefined4 *)(param_1 + 0x4924) = param_3;
  *(undefined1 *)(param_1 + 0x48d7) = 1;
  if ((*(char *)(param_1 + 0x28) == '\0') ||
     (*(char *)(*(longlong *)(param_1 + 0x48e8) + 9) != '\0')) {
    FUN_140336220(param_1 + 0x10,*(undefined8 *)(param_1 + 0x48d8),*(undefined8 *)(param_1 + 0x48e0)
                  ,*(undefined8 *)(param_1 + 0x48e8),*(undefined4 *)(param_1 + 0x48f0),0);
  }
  FUN_1404210f0(param_1 + 0x1838,param_1 + 0x10,0x1828);
  return;
}

