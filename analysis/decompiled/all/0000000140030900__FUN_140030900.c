// Function: FUN_140030900
// Addr: 140030900
// Size: 116 bytes


longlong FUN_140030900(longlong param_1,undefined8 *param_2)

{
  byte *pbVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined1 local_38 [8];
  longlong local_30;
  
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
  func_0x000140011170(param_1,local_38,param_2,uVar5);
  if (local_30 != 0) {
    return local_30 + 0x30;
  }
  if (*(longlong *)(param_1 + 0x10) == 0x333333333333333) {
                    /* WARNING: Subroutine does not return */
    FUN_14028c3b0("unordered_map/set too long");
  }
  lVar2 = func_0x00014028aff0(0x50);
                    /* WARNING: Subroutine does not return */
  FUN_140017090(lVar2 + 0x10,param_2);
}

