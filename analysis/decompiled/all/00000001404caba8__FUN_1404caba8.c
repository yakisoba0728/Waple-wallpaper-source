// Function: FUN_1404caba8
// Addr: 1404caba8
// Size: 1 bytes


void FUN_1404caba8(char *param_1,char *param_2)

{
  int in_EAX;
  uint uVar1;
  char *pcVar2;
  
  uVar1 = in_EAX - 0x33c3;
  pcVar2 = (char *)(ulonglong)uVar1;
  *param_1 = *param_1 + (char)(uVar1 >> 8);
  *param_2 = *param_2 + (char)uVar1;
  *pcVar2 = *pcVar2 + (char)uVar1;
  if (*pcVar2 != '\0') {
    *pcVar2 = *pcVar2 + (char)param_2;
  }
  return;
}

