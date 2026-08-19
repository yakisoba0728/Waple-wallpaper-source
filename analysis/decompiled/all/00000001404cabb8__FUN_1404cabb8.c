// Function: FUN_1404cabb8
// Addr: 1404cabb8
// Size: 1 bytes


void FUN_1404cabb8(char *param_1,char param_2)

{
  uint uVar1;
  uint *in_RAX;
  char *pcVar2;
  
  uVar1 = ((uint)in_RAX ^ *in_RAX) - 0x33c3;
  pcVar2 = (char *)(ulonglong)uVar1;
  *param_1 = *param_1 + (char)(uVar1 >> 8);
  *pcVar2 = *pcVar2 + (char)uVar1;
  *pcVar2 = *pcVar2 + param_2;
  return;
}

