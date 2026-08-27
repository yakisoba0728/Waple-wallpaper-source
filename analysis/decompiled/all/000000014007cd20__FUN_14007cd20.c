// Function: FUN_14007cd20
// Addr: 14007cd20
// Size: 255 bytes


undefined8
FUN_14007cd20(longlong param_1,uint *param_2,uint *param_3,undefined8 *param_4,undefined8 *param_5,
             undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,undefined4 *param_9,
             undefined4 *param_10,undefined4 *param_11)

{
  uint uVar1;
  longlong lVar2;
  char *_Dest;
  char *_Source;
  char *pcVar3;
  char *pcVar4;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 200);
  if ((ulonglong)*param_2 <
      (ulonglong)
      ((*(longlong *)(*(longlong *)(param_1 + 8) + 0xd0) - lVar2 >> 5) * -0x5555555555555555)) {
    pcVar3 = (char *)*param_4;
    pcVar4 = (char *)((ulonglong)*param_2 * 0x60 + lVar2);
    _Dest = (char *)*param_5;
    uVar1 = *param_3;
    if ((pcVar3 != (char *)0x0) && (uVar1 != 0)) {
      *pcVar3 = '\0';
      _Source = pcVar4;
      if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
        _Source = *(char **)pcVar4;
      }
      strncat(pcVar3,_Source,(ulonglong)uVar1);
    }
    if ((_Dest != (char *)0x0) && (uVar1 != 0)) {
      *_Dest = '\0';
      pcVar3 = pcVar4 + 0x20;
      if (0xf < *(ulonglong *)(pcVar4 + 0x38)) {
        pcVar3 = *(char **)pcVar3;
      }
      strncat(_Dest,pcVar3,(ulonglong)uVar1);
    }
    *param_6 = *(undefined4 *)(pcVar4 + 0x44);
    *param_8 = *(undefined4 *)(pcVar4 + 0x48);
    *param_7 = *(undefined4 *)(pcVar4 + 0x54);
    *param_9 = *(undefined4 *)(pcVar4 + 0x58);
    *param_10 = *(undefined4 *)(pcVar4 + 0x4c);
    *param_11 = *(undefined4 *)(pcVar4 + 0x50);
    return 1;
  }
  return 0;
}

