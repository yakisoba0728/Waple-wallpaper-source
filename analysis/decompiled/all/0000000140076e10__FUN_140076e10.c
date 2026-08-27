// Function: FUN_140076e10
// Addr: 140076e10
// Size: 180 bytes


undefined8
FUN_140076e10(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  byte *pbVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined1 local_18 [16];
  
  puVar7 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar7 = (undefined8 *)*param_2;
  }
  uVar4 = 0;
  uVar6 = 0xcbf29ce484222325;
  if (param_2[2] != 0) {
    do {
      pbVar1 = (byte *)((longlong)puVar7 + uVar4);
      uVar4 = uVar4 + 1;
      uVar6 = (uVar6 ^ *pbVar1) * 0x100000001b3;
    } while (uVar4 < (ulonglong)param_2[2]);
  }
  lVar3 = FUN_1400110a0(&DAT_1404e5368,local_18,param_2,uVar6);
  lVar5 = DAT_1404e5370;
  if (*(longlong *)(lVar3 + 8) != 0) {
    lVar5 = *(longlong *)(lVar3 + 8);
  }
  if (lVar5 != DAT_1404e5370) {
    if (param_3 != (undefined8 *)0x0) {
      uVar2 = *(undefined8 *)(lVar5 + 0x60);
      *param_3 = *(undefined8 *)(lVar5 + 0x58);
      param_3[1] = uVar2;
    }
    if (param_4 != (undefined8 *)0x0) {
      uVar2 = *(undefined8 *)(lVar5 + 0x70);
      *param_4 = *(undefined8 *)(lVar5 + 0x68);
      param_4[1] = uVar2;
    }
    return 1;
  }
  return 0;
}

