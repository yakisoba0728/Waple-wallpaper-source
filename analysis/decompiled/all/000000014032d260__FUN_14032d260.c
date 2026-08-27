// Function: FUN_14032d260
// Addr: 14032d260
// Size: 347 bytes


undefined8 FUN_14032d260(longlong param_1,longlong *param_2,uint param_3)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  short sVar4;
  ushort uVar5;
  short sVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  
  lVar7 = *param_2;
  if (lVar7 == 0) {
    return 0x23;
  }
  if (*(uint *)(lVar7 + 0x10) <= param_3) {
    return 6;
  }
  if (param_3 == 0) {
    param_3 = *(uint *)(lVar7 + 0xf8);
  }
  else {
    param_3 = param_3 - 1;
  }
  lVar9 = *(longlong *)(*(longlong *)(lVar7 + 0xe8) + 0x38) + (ulonglong)param_3 * 0x30;
  uVar1 = *(ushort *)(lVar9 + 0xe);
  uVar2 = *(ushort *)(lVar9 + 0x10);
  sVar3 = *(short *)(lVar9 + 0x14);
  sVar4 = *(short *)(lVar9 + 0x18);
  uVar8 = *(undefined8 *)(lVar9 + 0x20);
  uVar5 = *(ushort *)(lVar9 + 0x12);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(lVar9 + 0x28);
  *(uint *)(param_1 + 0x68) = (uint)uVar5;
  *(uint *)(param_1 + 0x6c) = (uint)uVar2;
  FUN_1402f75d0(param_1,uVar8);
  sVar6 = *(short *)(*(longlong *)(lVar7 + 0xe8) + 0x78);
  if (sVar6 == 1) {
    *(undefined1 *)(param_1 + 0x82) = 1;
  }
  else if (sVar6 == 2) {
    *(undefined1 *)(param_1 + 0x82) = 3;
  }
  else if (sVar6 == 4) {
    *(undefined1 *)(param_1 + 0x82) = 4;
  }
  else if (sVar6 == 8) {
    *(undefined1 *)(param_1 + 0x82) = 2;
    *(undefined2 *)(param_1 + 0x80) = 0x100;
  }
  *(undefined4 *)(param_1 + 0x60) = 0x62697473;
  *(int *)(param_1 + 0x90) = (int)sVar3;
  *(int *)(param_1 + 0x94) = (int)sVar4;
  *(int *)(param_1 + 0x3c) = (int)sVar4 << 6;
  *(int *)(param_1 + 0x38) = (int)sVar3 << 6;
  *(uint *)(param_1 + 0x40) = (uint)uVar1 << 6;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x6c) << 6;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x68) << 6;
  FUN_1402f8f80((int *)(param_1 + 0x30),
                (ulonglong)*(ushort *)(*(longlong *)(lVar7 + 0xe8) + 10) << 6);
  return 0;
}

