// Function: FUN_1404144f0
// Addr: 1404144f0
// Size: 115 bytes


undefined4 * FUN_1404144f0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)_calloc_base(1,0x118);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_1404217a0(puVar1,0,0x118);
    *puVar1 = 1;
    *(undefined1 *)(puVar1 + 1) = 1;
    *(undefined8 *)(puVar1 + 2) = 0;
    puVar1[0x37] = 0x3fffffff;
    puVar1[0x38] = 0x1fffffff;
    FUN_1403f8520(puVar1);
    return puVar1;
  }
  return (undefined4 *)&DAT_1404df1e8;
}

