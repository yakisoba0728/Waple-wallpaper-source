// Function: FUN_1404c9490
// Addr: 1404c9490
// Size: 1 bytes


byte FUN_1404c9490(byte *param_1)

{
  byte in_AL;
  byte in_AH;
  undefined6 in_register_00000002;
  char *pcVar1;
  
  pcVar1 = (char *)(ulonglong)
                   (uint)((int)&stack0x00000000 +
                         *(int *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + 2));
  *param_1 = *param_1 ^ in_AH;
  *pcVar1 = *pcVar1 + (char)param_1;
  uRam00000001a04ca315 = LocalDescriptorTableRegister();
  return in_AL | 4;
}

