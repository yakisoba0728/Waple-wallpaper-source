// Function: FUN_14000dc20
// Addr: 14000dc20
// Size: 154 bytes


bool FUN_14000dc20(undefined8 param_1,undefined8 *param_2)

{
  byte *pbVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 local_18 [16];
  
  puVar5 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar5 = (undefined8 *)*param_2;
  }
  uVar3 = 0;
  uVar7 = 0xcbf29ce484222325;
  if (param_2[2] != 0) {
    do {
      pbVar1 = (byte *)((longlong)puVar5 + uVar3);
      uVar3 = uVar3 + 1;
      uVar7 = (uVar7 ^ *pbVar1) * 0x100000001b3;
    } while (uVar3 < (ulonglong)param_2[2]);
  }
  lVar4 = FUN_1400110a0(&DAT_1404e8b20,local_18,param_2,uVar7);
  lVar2 = DAT_1404e8b28;
  lVar6 = DAT_1404e8b28;
  if (*(longlong *)(lVar4 + 8) != 0) {
    lVar6 = *(longlong *)(lVar4 + 8);
  }
  FUN_140017240(param_2);
  return lVar6 != lVar2;
}

