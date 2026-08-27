// Function: FUN_14031fb30
// Addr: 14031fb30
// Size: 417 bytes


void FUN_14031fb30(longlong param_1,longlong param_2)

{
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  
  FUN_1404217a0(param_2,0,0xc4);
  bVar1 = *(byte *)(param_1 + 0xb8);
  uVar3 = 0;
  *(byte *)(param_2 + 8) = bVar1;
  if (bVar1 != 0) {
    do {
      *(short *)(param_2 + 0xc + uVar3 * 2) =
           (short)((uint)(*(int *)(param_1 + 0xbc + uVar3 * 4) + 0x8000) >> 0x10);
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < bVar1);
  }
  bVar1 = *(byte *)(param_1 + 0xb9);
  uVar3 = 0;
  *(byte *)(param_2 + 9) = bVar1;
  if (bVar1 != 0) {
    do {
      *(short *)(param_2 + 0x28 + uVar3 * 2) =
           (short)((uint)(*(int *)(param_1 + 0xf4 + uVar3 * 4) + 0x8000) >> 0x10);
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < bVar1);
  }
  bVar1 = *(byte *)(param_1 + 0xba);
  uVar3 = 0;
  *(byte *)(param_2 + 10) = bVar1;
  if (bVar1 != 0) {
    do {
      *(short *)(param_2 + 0x3c + uVar3 * 2) =
           (short)((uint)(*(int *)(param_1 + 0x11c + uVar3 * 4) + 0x8000) >> 0x10);
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < bVar1);
  }
  bVar1 = *(byte *)(param_1 + 0xbb);
  uVar3 = 0;
  *(byte *)(param_2 + 0xb) = bVar1;
  if (bVar1 != 0) {
    do {
      *(short *)(param_2 + 0x58 + uVar3 * 2) =
           (short)((uint)(*(int *)(param_1 + 0x154 + uVar3 * 4) + 0x8000) >> 0x10);
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < bVar1);
  }
  uVar3 = 0;
  *(undefined4 *)(param_2 + 0x6c) = *(undefined4 *)(param_1 + 0x17c);
  *(undefined4 *)(param_2 + 0x70) = *(undefined4 *)(param_1 + 0x180);
  *(undefined4 *)(param_2 + 0x74) = *(undefined4 *)(param_1 + 0x184);
  *(undefined2 *)(param_2 + 0x78) = *(undefined2 *)(param_1 + 0x188);
  *(undefined2 *)(param_2 + 0x7a) = *(undefined2 *)(param_1 + 0x18c);
  bVar1 = *(byte *)(param_1 + 400);
  *(byte *)(param_2 + 0x7c) = bVar1;
  if (bVar1 != 0) {
    do {
      *(undefined2 *)(param_2 + 0x80 + uVar3 * 2) = *(undefined2 *)(param_1 + 0x194 + uVar3 * 4);
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < bVar1);
  }
  bVar1 = *(byte *)(param_1 + 0x191);
  uVar3 = 0;
  *(byte *)(param_2 + 0x7d) = bVar1;
  if (bVar1 != 0) {
    do {
      *(undefined2 *)(param_2 + 0x9a + uVar3 * 2) = *(undefined2 *)(param_1 + 0x1c8 + uVar3 * 4);
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < bVar1);
  }
  *(undefined1 *)(param_2 + 0x7e) = *(undefined1 *)(param_1 + 0x1fc);
  *(undefined4 *)(param_2 + 0xb8) = *(undefined4 *)(param_1 + 0x208);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x204);
  return;
}

