// Function: FUN_140415600
// Addr: 140415600
// Size: 519 bytes


undefined4 * FUN_140415600(longlong param_1,undefined8 param_2,code *param_3)

{
  undefined4 *puVar1;
  
  if (param_1 != 0) {
    puVar1 = (undefined4 *)_calloc_base(1,0x1c8);
    if (puVar1 != (undefined4 *)0x0) {
      *(undefined2 *)((longlong)puVar1 + 5) = 0;
      *(undefined1 *)((longlong)puVar1 + 7) = 0;
      *(undefined8 *)(puVar1 + 4) = 0;
      *(undefined8 *)(puVar1 + 7) = 0;
      *(undefined8 *)(puVar1 + 9) = 0;
      *(undefined8 *)(puVar1 + 0xb) = 0;
      *(undefined8 *)(puVar1 + 0xd) = 0;
      *(undefined8 *)(puVar1 + 0xf) = 0;
      *(undefined8 *)(puVar1 + 0x11) = 0;
      *(undefined8 *)(puVar1 + 0x12) = 0;
      *(undefined8 *)(puVar1 + 0x14) = 0;
      *(undefined8 *)(puVar1 + 0x1c) = 0;
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 0;
      *(undefined8 *)(puVar1 + 2) = 0;
      puVar1[6] = 0;
      *(undefined8 *)(puVar1 + 0x16) = 0;
      *(undefined8 *)(puVar1 + 0x18) = 0;
      *(undefined8 *)(puVar1 + 0x1a) = 0;
      *(undefined8 *)(puVar1 + 0x1e) = 0;
      *(undefined8 *)(puVar1 + 0x20) = 0;
      *(undefined8 *)(puVar1 + 0x22) = 0;
      *(undefined8 *)(puVar1 + 0x24) = 0;
      *(undefined8 *)(puVar1 + 0x26) = 0;
      *(undefined8 *)(puVar1 + 0x28) = 0;
      *(undefined8 *)(puVar1 + 0x2a) = 0;
      *(undefined8 *)(puVar1 + 0x2c) = 0;
      *(undefined8 *)(puVar1 + 0x2e) = 0;
      *(undefined8 *)(puVar1 + 0x30) = 0;
      *(undefined8 *)(puVar1 + 0x32) = 0;
      *(undefined8 *)(puVar1 + 0x34) = 0;
      *(undefined8 *)(puVar1 + 0x36) = 0;
      *(undefined8 *)(puVar1 + 0x38) = 0;
      *(undefined8 *)(puVar1 + 0x3a) = 0;
      *(undefined8 *)(puVar1 + 0x3c) = 0;
      *(undefined8 *)(puVar1 + 0x3e) = 0;
      *(undefined8 *)(puVar1 + 0x40) = 0;
      *(undefined8 *)(puVar1 + 0x42) = 0;
      *(undefined8 *)(puVar1 + 0x44) = 0;
      *(undefined8 *)(puVar1 + 0x46) = 0;
      *(undefined8 *)(puVar1 + 0x48) = 0;
      *(undefined8 *)(puVar1 + 0x4a) = 0;
      *(undefined8 *)(puVar1 + 0x4c) = 0;
      *(undefined8 *)(puVar1 + 0x4e) = 0;
      *(undefined8 *)(puVar1 + 0x50) = 0;
      *(undefined8 *)(puVar1 + 0x52) = 0;
      *(undefined8 *)(puVar1 + 0x54) = 0;
      *(undefined8 *)(puVar1 + 0x56) = 0;
      *(undefined8 *)(puVar1 + 0x58) = 0;
      *(undefined8 *)(puVar1 + 0x5a) = 0;
      *(undefined8 *)(puVar1 + 0x5c) = 0;
      *(undefined8 *)(puVar1 + 0x5e) = 0;
      *(undefined8 *)(puVar1 + 0x60) = 0;
      *(undefined8 *)(puVar1 + 0x62) = 0;
      *(undefined8 *)(puVar1 + 100) = 0;
      *(undefined8 *)(puVar1 + 0x66) = 0;
      *(undefined8 *)(puVar1 + 0x68) = 0;
      *(undefined8 *)(puVar1 + 0x6a) = 0;
      *(undefined8 *)(puVar1 + 0x6c) = 0;
      *(undefined8 *)(puVar1 + 0x6e) = 0;
      *(undefined8 *)(puVar1 + 0x70) = 0;
      *puVar1 = 1;
      *(undefined1 *)(puVar1 + 1) = 1;
      *(undefined8 *)(puVar1 + 2) = 0;
      *(longlong *)(puVar1 + 8) = param_1;
      *(undefined8 *)(puVar1 + 10) = param_2;
      *(code **)(puVar1 + 0xc) = param_3;
      puVar1[6] = 0xffffffff;
      *(undefined4 **)(puVar1 + 0x14) = puVar1;
      *(undefined4 **)(puVar1 + 0x1c) = puVar1;
      return puVar1;
    }
  }
  if (param_3 != (code *)0x0) {
    (*param_3)(param_2);
  }
  return (undefined4 *)&DAT_1404def30;
}

