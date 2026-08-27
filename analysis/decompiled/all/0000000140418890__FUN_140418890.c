// Function: FUN_140418890
// Addr: 140418890
// Size: 198 bytes


undefined4 * FUN_140418890(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)_calloc_base(1,0xa8);
  if (puVar2 != (undefined4 *)0x0) {
    FUN_1404217a0(puVar2,0,0xa8);
    *puVar2 = 1;
    *(undefined1 *)(puVar2 + 1) = 1;
    *(undefined8 *)(puVar2 + 2) = 0;
    puVar1 = PTR_FUN_1404df158;
    *(undefined **)(puVar2 + 4) = PTR_FUN_1404df150;
    *(undefined **)(puVar2 + 6) = puVar1;
    puVar1 = PTR_FUN_1404df168;
    *(undefined **)(puVar2 + 8) = PTR_FUN_1404df160;
    *(undefined **)(puVar2 + 10) = puVar1;
    puVar1 = PTR_LAB_1404df178;
    *(undefined **)(puVar2 + 0xc) = PTR_FUN_1404df170;
    *(undefined **)(puVar2 + 0xe) = puVar1;
    puVar1 = PTR_FUN_1404df188;
    *(undefined **)(puVar2 + 0x10) = PTR_FUN_1404df180;
    *(undefined **)(puVar2 + 0x12) = puVar1;
    puVar1 = PTR_FUN_1404df198;
    *(undefined **)(puVar2 + 0x14) = PTR_FUN_1404df190;
    *(undefined **)(puVar2 + 0x16) = puVar1;
    puVar1 = PTR_FUN_1404df1a8;
    *(undefined **)(puVar2 + 0x18) = PTR_FUN_1404df1a0;
    *(undefined **)(puVar2 + 0x1a) = puVar1;
    puVar1 = PTR_FUN_1404df1b8;
    *(undefined **)(puVar2 + 0x1c) = PTR_FUN_1404df1b0;
    *(undefined **)(puVar2 + 0x1e) = puVar1;
    puVar1 = PTR_FUN_1404df1c8;
    *(undefined **)(puVar2 + 0x20) = PTR_LAB_1404df1c0;
    *(undefined **)(puVar2 + 0x22) = puVar1;
    *(undefined **)(puVar2 + 0x24) = PTR_FUN_1404df1d0;
    return puVar2;
  }
  return (undefined4 *)&DAT_1404df140;
}

