// Function: FUN_14031fe40
// Addr: 14031fe40
// Size: 98 bytes


ulonglong FUN_14031fe40(longlong param_1,undefined8 *param_2)

{
  char *pcVar1;
  int iVar2;
  ulonglong uVar3;
  
  pcVar1 = (char *)*param_2;
  if (*pcVar1 == '\x1e') {
    iVar2 = FUN_14031feb0(pcVar1,*(undefined8 *)(param_1 + 0x10),0,0);
    return (ulonglong)(uint)(iVar2 >> 0x10);
  }
  if (*pcVar1 == -1) {
    return (ulonglong)
           (uint)(int)(short)(CONCAT21(CONCAT11(pcVar1[1],pcVar1[2]),pcVar1[3]) + 0x80 >> 8);
  }
  uVar3 = FUN_14031fd70(pcVar1,*(undefined8 *)(param_1 + 0x10));
  return uVar3;
}

