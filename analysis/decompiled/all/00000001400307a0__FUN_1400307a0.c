// Function: FUN_1400307a0
// Addr: 1400307a0
// Size: 127 bytes


undefined8 * FUN_1400307a0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  byte *pbVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined1 local_18 [16];
  
  puVar5 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar5 = (undefined8 *)*param_3;
  }
  uVar3 = 0;
  uVar4 = 0xcbf29ce484222325;
  if (param_3[2] != 0) {
    do {
      pbVar1 = (byte *)((longlong)puVar5 + uVar3);
      uVar3 = uVar3 + 1;
      uVar4 = (uVar4 ^ *pbVar1) * 0x100000001b3;
    } while (uVar3 < (ulonglong)param_3[2]);
  }
  lVar2 = FUN_1400110a0(param_1,local_18,param_3,uVar4);
  if (*(longlong *)(lVar2 + 8) != 0) {
    param_1 = lVar2;
  }
  *param_2 = *(undefined8 *)(param_1 + 8);
  return param_2;
}

