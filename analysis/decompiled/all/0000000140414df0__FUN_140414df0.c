// Function: FUN_140414df0
// Addr: 140414df0
// Size: 116 bytes


undefined8 * FUN_140414df0(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)_calloc_base(1,0x48);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    *(undefined4 *)puVar2 = 1;
    *(undefined1 *)((longlong)puVar2 + 4) = 1;
    puVar2[1] = 0;
    puVar1 = PTR_FUN_1404df110;
    puVar2[2] = PTR_FUN_1404df108;
    puVar2[3] = puVar1;
    puVar1 = PTR_FUN_1404df120;
    puVar2[4] = PTR_FUN_1404df118;
    puVar2[5] = puVar1;
    puVar2[6] = PTR_FUN_1404df128;
    return puVar2;
  }
  return (undefined8 *)&DAT_1404df0f8;
}

