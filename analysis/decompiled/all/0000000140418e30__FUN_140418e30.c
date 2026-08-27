// Function: FUN_140418e30
// Addr: 140418e30
// Size: 138 bytes


undefined8 * FUN_140418e30(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)_calloc_base(1,0x48);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)(puVar1 + 2) = 1;
    *(undefined4 *)puVar1 = 0;
    *(undefined1 *)((longlong)puVar1 + 4) = 0;
    puVar1[1] = 0;
    *(undefined8 *)((longlong)puVar1 + 0x14) = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    *(undefined1 *)(puVar1 + 8) = 0;
    *(undefined4 *)puVar1 = 1;
    *(undefined1 *)((longlong)puVar1 + 4) = 1;
    puVar1[1] = 0;
    *(undefined1 *)(puVar1 + 2) = 1;
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    *(undefined1 *)(puVar1 + 8) = 0;
    *(undefined4 *)puVar1 = 1;
    *(undefined1 *)((longlong)puVar1 + 4) = 1;
    puVar1[1] = 0;
    return puVar1;
  }
  return &DAT_14045dd10;
}

