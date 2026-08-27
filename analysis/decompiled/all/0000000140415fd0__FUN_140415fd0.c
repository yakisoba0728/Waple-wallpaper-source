// Function: FUN_140415fd0
// Addr: 140415fd0
// Size: 227 bytes


undefined4 * FUN_140415fd0(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)_calloc_base(1,200);
  if (puVar2 != (undefined4 *)0x0) {
    FUN_1404217a0(puVar2,0,200);
    *puVar2 = 1;
    *(undefined1 *)(puVar2 + 1) = 1;
    *(undefined8 *)(puVar2 + 2) = 0;
    puVar1 = PTR_FUN_1404df450;
    *(undefined **)(puVar2 + 8) = PTR_FUN_1404df448;
    *(undefined **)(puVar2 + 10) = puVar1;
    puVar1 = PTR_FUN_1404df460;
    *(undefined **)(puVar2 + 0xc) = PTR_FUN_1404df458;
    *(undefined **)(puVar2 + 0xe) = puVar1;
    puVar1 = PTR_FUN_1404df470;
    *(undefined **)(puVar2 + 0x10) = PTR_LAB_1404df468;
    *(undefined **)(puVar2 + 0x12) = puVar1;
    puVar1 = PTR_FUN_1404df480;
    *(undefined **)(puVar2 + 0x14) = PTR_FUN_1404df478;
    *(undefined **)(puVar2 + 0x16) = puVar1;
    puVar1 = PTR_FUN_1404df490;
    *(undefined **)(puVar2 + 0x18) = PTR_FUN_1404df488;
    *(undefined **)(puVar2 + 0x1a) = puVar1;
    puVar1 = PTR_FUN_1404df4a0;
    *(undefined **)(puVar2 + 0x1c) = PTR_FUN_1404df498;
    *(undefined **)(puVar2 + 0x1e) = puVar1;
    puVar1 = PTR_FUN_1404df4b0;
    *(undefined **)(puVar2 + 0x20) = PTR_FUN_1404df4a8;
    *(undefined **)(puVar2 + 0x22) = puVar1;
    puVar1 = PTR_FUN_1404df4c0;
    *(undefined **)(puVar2 + 0x24) = PTR_FUN_1404df4b8;
    *(undefined **)(puVar2 + 0x26) = puVar1;
    puVar1 = PTR_LAB_1404df4d0;
    *(undefined **)(puVar2 + 0x28) = PTR_FUN_1404df4c8;
    *(undefined **)(puVar2 + 0x2a) = puVar1;
    puVar1 = PTR_FUN_1404df4e0;
    *(undefined **)(puVar2 + 0x2c) = PTR_LAB_1404df4d8;
    *(undefined **)(puVar2 + 0x2e) = puVar1;
    *(undefined **)(puVar2 + 0x30) = PTR_FUN_1404df4e8;
    return puVar2;
  }
  return &DAT_1404df428;
}

