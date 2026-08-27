// Function: FUN_14035a9c0
// Addr: 14035a9c0
// Size: 203 bytes


void FUN_14035a9c0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = puVar1[0x1d];
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    puVar1[3] = 0;
    puVar1[6] = 0;
    *(undefined1 *)(puVar1 + 7) = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 0x12) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x54) = 9;
    if ((undefined8 *)puVar1[0x11] != puVar1 + 0x14) {
      FUN_1402f7f90(uVar2);
      puVar1[0x11] = 0;
    }
    FUN_1402f7f90(uVar2,puVar1[0xe]);
    FUN_1404217a0(puVar1 + 3,0,0xd8);
    puVar1[2] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    FUN_1402f7f90(uVar3,puVar1);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}

