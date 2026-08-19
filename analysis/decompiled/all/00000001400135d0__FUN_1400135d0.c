// Function: FUN_1400135d0
// Addr: 1400135d0
// Size: 114 bytes


void FUN_1400135d0(longlong param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_68 [48];
  
  lVar1 = FUN_1402caa90();
  FUN_140291b90(local_68);
  puVar2 = &DAT_140474550;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (param_3 == '\0') {
    puVar2 = *(undefined1 **)(lVar1 + 0x10);
  }
  func_0x000140421ed0(puVar2);
  return;
}

