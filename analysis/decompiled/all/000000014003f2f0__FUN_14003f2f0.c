// Function: FUN_14003f2f0
// Addr: 14003f2f0
// Size: 207 bytes


void FUN_14003f2f0(void)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)ThreadLocalStoragePointer;
  if ((*(uint *)(lVar1 + 0x1d8) & 1) == 0) {
    *(undefined8 *)(lVar1 + 400) = 0;
    *(uint *)(lVar1 + 0x1d8) = *(uint *)(lVar1 + 0x1d8) | 1;
    *(undefined8 *)(lVar1 + 0x198) = 0;
    *(undefined8 *)(lVar1 + 0x1a0) = 0;
    *(undefined8 *)(lVar1 + 0x1a8) = 0;
    *(undefined8 *)(lVar1 + 0x1b0) = 0;
    *(undefined8 *)(lVar1 + 0x1b8) = 0x100;
    *(undefined4 *)(lVar1 + 0x1c0) = 0;
    *(undefined8 *)(lVar1 + 0x1c8) = 0;
    *(undefined4 *)(lVar1 + 0x1d0) = 2;
    FUN_14028b100(&DAT_140424760);
  }
  func_0x00014028aff0(0x280);
  return;
}

