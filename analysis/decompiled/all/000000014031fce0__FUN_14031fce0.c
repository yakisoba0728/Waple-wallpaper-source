// Function: FUN_14031fce0
// Addr: 14031fce0
// Size: 135 bytes


ulonglong FUN_14031fce0(longlong param_1,undefined8 *param_2)

{
  char *pcVar1;
  int iVar2;
  ulonglong uVar3;
  
  pcVar1 = (char *)*param_2;
  if (*pcVar1 == '\x1e') {
    uVar3 = FUN_14031feb0(pcVar1,*(undefined8 *)(param_1 + 0x10),0,0);
    return uVar3;
  }
  if (*pcVar1 == -1) {
    return (ulonglong)CONCAT31(CONCAT21(CONCAT11(pcVar1[1],pcVar1[2]),pcVar1[3]),pcVar1[4]);
  }
  iVar2 = FUN_14031fd70(pcVar1,*(undefined8 *)(param_1 + 0x10));
  if (0x7fff < iVar2) {
    return 0x7fffffff;
  }
  if (iVar2 < -0x7fff) {
    return 0x80000001;
  }
  return (ulonglong)(uint)(iVar2 << 0x10);
}

