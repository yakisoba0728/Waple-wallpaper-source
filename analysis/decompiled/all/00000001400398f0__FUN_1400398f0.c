// Function: FUN_1400398f0
// Addr: 1400398f0
// Size: 77 bytes


ulonglong FUN_1400398f0(longlong param_1,undefined8 *param_2)

{
  byte *pbVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  
  puVar4 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar4 = (undefined8 *)*param_2;
  }
  uVar2 = 0xcbf29ce484222325;
  uVar3 = 0;
  if (param_2[2] != 0) {
    do {
      pbVar1 = (byte *)((longlong)puVar4 + uVar3);
      uVar3 = uVar3 + 1;
      uVar2 = (uVar2 ^ *pbVar1) * 0x100000001b3;
    } while (uVar3 < (ulonglong)param_2[2]);
  }
  return *(ulonglong *)(param_1 + 0x30) & uVar2;
}

