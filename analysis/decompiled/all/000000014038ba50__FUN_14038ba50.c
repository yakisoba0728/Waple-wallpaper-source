// Function: FUN_14038ba50
// Addr: 14038ba50
// Size: 157 bytes


undefined1 FUN_14038ba50(longlong param_1,undefined8 param_2,uint param_3)

{
  byte *pbVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  
  cVar2 = FUN_140409660();
  if (cVar2 == '\0') {
    return 0;
  }
  uVar4 = 0;
  if (param_3 != 0) {
    do {
      pbVar1 = (byte *)(param_1 + uVar4 * 2);
      cVar2 = FUN_1404093d0(pbVar1,param_2,param_1);
      if ((cVar2 == '\0') ||
         (cVar2 = FUN_1403fea20((ulonglong)*pbVar1 * 0x100 + (ulonglong)pbVar1[1] + param_1,param_2)
         , cVar2 == '\0')) {
        return 0;
      }
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
    } while (uVar3 < param_3);
  }
  return 1;
}

