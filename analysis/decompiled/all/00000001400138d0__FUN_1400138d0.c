// Function: FUN_1400138d0
// Addr: 1400138d0
// Size: 53 bytes


ulonglong FUN_1400138d0(longlong param_1,ulonglong param_2)

{
  byte *pbVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  uVar2 = 0xcbf29ce484222325;
  if (param_2 != 0) {
    do {
      pbVar1 = (byte *)(uVar3 + param_1);
      uVar3 = uVar3 + 1;
      uVar2 = (uVar2 ^ *pbVar1) * 0x100000001b3;
    } while (uVar3 < param_2);
  }
  return uVar2;
}

