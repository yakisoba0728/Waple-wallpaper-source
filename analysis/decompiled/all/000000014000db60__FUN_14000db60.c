// Function: FUN_14000db60
// Addr: 14000db60
// Size: 190 bytes


undefined8 * FUN_14000db60(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  byte *pbVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 local_18 [16];
  
  puVar4 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar4 = (undefined8 *)*param_3;
  }
  uVar3 = 0;
  uVar6 = 0xcbf29ce484222325;
  if (param_3[2] != 0) {
    do {
      pbVar1 = (byte *)((longlong)puVar4 + uVar3);
      uVar3 = uVar3 + 1;
      uVar6 = (uVar6 ^ *pbVar1) * 0x100000001b3;
    } while (uVar3 < (ulonglong)param_3[2]);
  }
  lVar2 = FUN_1400110a0(&DAT_1404e8b20,local_18,param_3,uVar6);
  lVar5 = DAT_1404e8b28;
  if (*(longlong *)(lVar2 + 8) != 0) {
    lVar5 = *(longlong *)(lVar2 + 8);
  }
  if (lVar5 == DAT_1404e8b28) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0xf;
    *(undefined1 *)param_2 = 0;
  }
  else {
    FUN_140016fc0(param_2,lVar5 + 0x30);
  }
  FUN_140017240(param_3);
  return param_2;
}

