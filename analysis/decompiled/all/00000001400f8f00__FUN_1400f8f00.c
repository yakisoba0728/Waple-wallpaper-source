// Function: FUN_1400f8f00
// Addr: 1400f8f00
// Size: 136 bytes


longlong FUN_1400f8f00(undefined8 param_1,undefined8 *param_2)

{
  byte *pbVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined1 local_18 [8];
  longlong local_10;
  
  puVar3 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar3 = (undefined8 *)*param_2;
  }
  uVar2 = 0;
  uVar4 = 0xcbf29ce484222325;
  if (param_2[2] != 0) {
    do {
      pbVar1 = (byte *)((longlong)puVar3 + uVar2);
      uVar2 = uVar2 + 1;
      uVar4 = (uVar4 ^ *pbVar1) * 0x100000001b3;
    } while (uVar2 < (ulonglong)param_2[2]);
  }
  FUN_1400110a0(param_1,local_18,param_2,uVar4);
  if (local_10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14028c310("invalid unordered_map<K, T> key");
  }
  return local_10 + 0x30;
}

