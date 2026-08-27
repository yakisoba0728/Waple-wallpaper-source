// Function: FUN_140394db0
// Addr: 140394db0
// Size: 732 bytes


undefined4 *
FUN_140394db0(undefined4 *param_1,undefined4 param_2,longlong param_3,longlong param_4,
             undefined8 param_5,undefined8 param_6)

{
  byte *pbVar1;
  longlong lVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  bool bVar8;
  
  *param_1 = 0;
  param_1[6] = 0;
  param_1[7] = 0xffffffff;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0xffffffff;
  param_1[0x18] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  param_1[0x22] = param_2;
  *(longlong *)(param_1 + 0x24) = param_3;
  *(undefined8 *)(param_1 + 0x26) = *(undefined8 *)(param_3 + 0x20);
  *(longlong *)(param_1 + 0x28) = param_4;
  FUN_1403957d0(param_1 + 0x2a,param_5);
  *(undefined8 *)(param_1 + 0x3a) = 0;
  puVar4 = (undefined8 *)FUN_1403c4e30(*(longlong *)(param_1 + 0x26) + 0x138);
  puVar7 = &DAT_14045dd10;
  puVar5 = &DAT_14045dd10;
  if ((undefined8 *)*puVar4 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)*puVar4;
  }
  if (3 < *(uint *)(puVar5 + 3)) {
    puVar7 = (undefined8 *)puVar5[2];
  }
  *(undefined8 **)(param_1 + 0x3c) = puVar7;
  uVar6 = FUN_1403c4e30(*(longlong *)(param_1 + 0x26) + 0x138);
  *(undefined8 *)(param_1 + 0x3e) = uVar6;
  *(undefined8 *)(param_1 + 0x40) = 0;
  pbVar1 = *(byte **)(param_1 + 0x3c);
  uVar6 = FUN_1403d0040(pbVar1);
  *(undefined8 *)(param_1 + 0x42) = uVar6;
  *(undefined8 *)(param_1 + 0x44) = param_6;
  param_1[0x46] = *(undefined4 *)(param_4 + 0x38);
  param_1[0x47] = 1;
  param_1[0x48] = 0xffffffff;
  param_1[0x49] = 0;
  param_1[0x4a] = 0x40;
  if ((uint)pbVar1[1] + (uint)*pbVar1 * 0x100 == 1) {
    bVar8 = (uint)pbVar1[5] + (uint)pbVar1[4] * 0x100 != 0;
  }
  else {
    bVar8 = false;
  }
  *(bool *)(param_1 + 0x4b) = bVar8;
  *(undefined4 *)((longlong)param_1 + 0x12d) = 0x101;
  *(undefined8 *)(param_1 + 0x4d) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x4f) = 0;
  param_1[0x51] = 0;
  *(undefined8 *)(param_1 + 0x52) = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)(param_1 + 0x5e) = 0;
  *(undefined4 **)(param_1 + 4) = param_1;
  param_1[0x10] = *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x60);
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  param_1[6] = 0;
  *(bool *)(param_1 + 8) = param_1[0x22] == 1;
  *(bool *)((longlong)param_1 + 0x21) = *(char *)((longlong)param_1 + 0x12e) != '\0';
  *(bool *)((longlong)param_1 + 0x22) = param_1[0x22] == 1;
  param_1[7] = param_1[0x47];
  if ((param_1[0x22] == 0) && (*(char *)((longlong)param_1 + 0x12f) != '\0')) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  *(undefined1 *)((longlong)param_1 + 0x23) = uVar3;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined4 **)(param_1 + 0x14) = param_1;
  param_1[0x20] = *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x60);
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  param_1[0x16] = 0;
  if ((param_1[0x22] == 1) || (*(char *)((longlong)param_1 + 0x12d) != '\0')) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  *(undefined1 *)(param_1 + 0x18) = uVar3;
  *(undefined1 *)((longlong)param_1 + 0x61) = 1;
  *(bool *)((longlong)param_1 + 0x62) = param_1[0x22] == 1;
  param_1[0x17] = 0xffffffff;
  if ((param_1[0x22] == 0) && (*(char *)((longlong)param_1 + 0x12f) != '\0')) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  *(undefined1 *)((longlong)param_1 + 99) = uVar3;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined4 **)(param_1 + 0x52) = param_1 + 0x54;
  param_1[0x51] = 8;
  lVar2 = *(longlong *)(param_1 + 0x28);
  if (*(longlong *)(lVar2 + 0xe8) != 0) {
    *(undefined8 *)(param_1 + 0x5c) = *(undefined8 *)(lVar2 + 0x100);
    *(undefined8 *)(param_1 + 0x5e) = *(undefined8 *)(lVar2 + 0x108);
    *(code **)(lVar2 + 0x100) = FUN_1403b23d0;
    *(undefined4 **)(*(longlong *)(param_1 + 0x28) + 0x108) = param_1;
  }
  return param_1;
}

