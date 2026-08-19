// Function: FUN_1400ddd80
// Addr: 1400ddd80
// Size: 192 bytes


longlong FUN_1400ddd80(longlong param_1,undefined8 *param_2)

{
  byte *pbVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined1 local_60 [8];
  longlong local_58;
  
  puVar4 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar4 = (undefined8 *)*param_2;
  }
  uVar3 = 0;
  uVar5 = 0xcbf29ce484222325;
  if (param_2[2] != 0) {
    do {
      pbVar1 = (byte *)(uVar3 + (longlong)puVar4);
      uVar3 = uVar3 + 1;
      uVar5 = (uVar5 ^ *pbVar1) * 0x100000001b3;
    } while (uVar3 < (ulonglong)param_2[2]);
  }
  func_0x000140011170(param_1,local_60,param_2,uVar5);
  if (local_58 != 0) {
    return local_58 + 0x30;
  }
  if (*(longlong *)(param_1 + 0x10) == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
    FUN_14028c3b0("unordered_map/set too long");
  }
  lVar2 = func_0x00014028aff0(0x38);
  return lVar2;
}

