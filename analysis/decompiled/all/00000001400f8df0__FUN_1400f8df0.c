// Function: FUN_1400f8df0
// Addr: 1400f8df0
// Size: 124 bytes


longlong * FUN_1400f8df0(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  byte *pbVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined1 local_18 [16];
  
  puVar6 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar6 = (undefined8 *)*param_3;
  }
  uVar4 = 0;
  uVar5 = 0xcbf29ce484222325;
  if (param_3[2] != 0) {
    do {
      pbVar1 = (byte *)((longlong)puVar6 + uVar4);
      uVar4 = uVar4 + 1;
      uVar5 = (uVar5 ^ *pbVar1) * 0x100000001b3;
    } while (uVar4 < (ulonglong)param_3[2]);
  }
  lVar2 = FUN_1400f9560(uVar4,local_18,param_3,uVar5);
  lVar3 = DAT_1404e7e98;
  if (*(longlong *)(lVar2 + 8) != 0) {
    lVar3 = *(longlong *)(lVar2 + 8);
  }
  *param_2 = lVar3;
  return param_2;
}

