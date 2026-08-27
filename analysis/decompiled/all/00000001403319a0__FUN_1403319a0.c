// Function: FUN_1403319a0
// Addr: 1403319a0
// Size: 619 bytes


void FUN_1403319a0(longlong param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong local_res8;
  longlong local_res18 [2];
  
  local_res8 = param_1;
  local_res18[0] = param_3;
  FUN_1404217a0(param_3,0,0x2c8);
  FUN_1404217a0((byte *)(param_3 + 0xb8),0,0x178);
  bVar1 = *(byte *)(param_2 + 8);
  uVar5 = 0;
  *(byte *)(param_3 + 0xb8) = bVar1;
  if (bVar1 != 0) {
    do {
      *(int *)(param_3 + 0xbc + uVar5 * 4) = (int)*(short *)(param_2 + 0xc + uVar5 * 2) << 0x10;
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while (uVar4 < bVar1);
  }
  bVar1 = *(byte *)(param_2 + 9);
  uVar5 = 0;
  *(byte *)(param_3 + 0xb9) = bVar1;
  if (bVar1 != 0) {
    do {
      *(int *)(param_3 + 0xf4 + uVar5 * 4) = (int)*(short *)(param_2 + 0x28 + uVar5 * 2) << 0x10;
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while (uVar4 < bVar1);
  }
  bVar1 = *(byte *)(param_2 + 10);
  uVar5 = 0;
  *(byte *)(param_3 + 0xba) = bVar1;
  if (bVar1 != 0) {
    do {
      *(int *)(param_3 + 0x11c + uVar5 * 4) = (int)*(short *)(param_2 + 0x3c + uVar5 * 2) << 0x10;
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while (uVar4 < bVar1);
  }
  bVar1 = *(byte *)(param_2 + 0xb);
  uVar5 = 0;
  *(byte *)(param_3 + 0xbb) = bVar1;
  if (bVar1 != 0) {
    do {
      *(int *)(param_3 + 0x154 + uVar5 * 4) = (int)*(short *)(param_2 + 0x58 + uVar5 * 2) << 0x10;
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while (uVar4 < bVar1);
  }
  uVar5 = 0;
  *(undefined4 *)(param_3 + 0x17c) = *(undefined4 *)(param_2 + 0x6c);
  *(undefined4 *)(param_3 + 0x180) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)(param_3 + 0x184) = *(undefined4 *)(param_2 + 0x74);
  *(uint *)(param_3 + 0x188) = (uint)*(ushort *)(param_2 + 0x78);
  *(uint *)(param_3 + 0x18c) = (uint)*(ushort *)(param_2 + 0x7a);
  bVar1 = *(byte *)(param_2 + 0x7c);
  *(byte *)(param_3 + 400) = bVar1;
  if (bVar1 != 0) {
    do {
      *(int *)(param_3 + 0x194 + uVar5 * 4) = (int)*(short *)(param_2 + 0x80 + uVar5 * 2);
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while (uVar4 < bVar1);
  }
  bVar1 = *(byte *)(param_2 + 0x7d);
  uVar5 = 0;
  *(byte *)(param_3 + 0x191) = bVar1;
  if (bVar1 != 0) {
    do {
      *(int *)(param_3 + 0x1c8 + uVar5 * 4) = (int)*(short *)(param_2 + 0x9a + uVar5 * 2);
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while (uVar4 < bVar1);
  }
  *(undefined1 *)(param_3 + 0x1fc) = *(undefined1 *)(param_2 + 0x7e);
  *(undefined4 *)(param_3 + 0x204) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_3 + 0x208) = *(undefined4 *)(param_2 + 0xb8);
  *(undefined4 *)(param_3 + 0x20c) = *(undefined4 *)(param_2 + 0xb4);
  *(longlong *)(param_3 + 0x228) = local_res18[0];
  iVar2 = *(int *)(*(longlong *)(local_res8 + 0xd0) + 0x5c);
  if ((iVar2 != -1) &&
     (*(int *)(local_res18[0] + 0x2c0) = iVar2,
     *(int *)(*(longlong *)(local_res8 + 0xd0) + 0x5c) != 0)) {
    do {
      lVar3 = *(longlong *)(local_res8 + 0xd0);
      uVar4 = *(int *)(lVar3 + 0x5c) << 0xd ^ *(uint *)(lVar3 + 0x5c);
      uVar4 = uVar4 >> 0x11 ^ uVar4;
      *(uint *)(lVar3 + 0x5c) = uVar4 << 5 ^ uVar4;
    } while (*(int *)(*(longlong *)(local_res8 + 0xd0) + 0x5c) < 0);
  }
  if (*(int *)(local_res18[0] + 0x2c0) == 0) {
    uVar4 = (uint)&local_res8 ^ (uint)&local_res8 ^ (uint)local_res18;
    uVar4 = (uVar4 >> 10 ^ uVar4) >> 10 ^ uVar4;
    if (uVar4 == 0) {
      uVar4 = 0x7384;
    }
    *(uint *)(local_res18[0] + 0x2c0) = uVar4;
  }
  return;
}

