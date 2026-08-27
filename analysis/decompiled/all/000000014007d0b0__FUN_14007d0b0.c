// Function: FUN_14007d0b0
// Addr: 14007d0b0
// Size: 76 bytes


ulonglong FUN_14007d0b0(longlong param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  byte *pbVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  puVar1 = param_2 + 2;
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  uVar4 = 0;
  uVar3 = 0xcbf29ce484222325;
  if (*puVar1 != 0) {
    do {
      pbVar2 = (byte *)((longlong)param_2 + uVar4);
      uVar4 = uVar4 + 1;
      uVar3 = (uVar3 ^ *pbVar2) * 0x100000001b3;
    } while (uVar4 < *puVar1);
  }
  return *(ulonglong *)(param_1 + 0x30) & uVar3;
}

