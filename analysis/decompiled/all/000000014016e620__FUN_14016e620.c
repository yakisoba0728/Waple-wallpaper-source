// Function: FUN_14016e620
// Addr: 14016e620
// Size: 89 bytes


longlong FUN_14016e620(undefined8 param_1,undefined8 *param_2)

{
  byte *pbVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined1 auStack_18 [8];
  longlong lStack_10;
  
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
  func_0x000140011170(param_1,auStack_18,param_2,uVar4);
  if (lStack_10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14028c3e0("invalid unordered_map<K, T> key");
  }
  return lStack_10 + 0x30;
}

