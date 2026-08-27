// Function: FUN_1400f8860
// Addr: 1400f8860
// Size: 112 bytes


void FUN_1400f8860(longlong param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  if (puVar1 != *(undefined4 **)(param_1 + 0x10)) {
    *puVar1 = *param_2;
    *(undefined8 *)(puVar1 + 2) = 0;
    *(undefined8 *)(puVar1 + 4) = 0;
    *(undefined8 *)(puVar1 + 6) = 0;
    *(undefined8 *)(puVar1 + 8) = 0;
    uVar2 = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(puVar1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(puVar1 + 4) = uVar2;
    uVar2 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(puVar1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(puVar1 + 8) = uVar2;
    *(undefined1 *)(param_2 + 2) = 0;
    *(undefined8 *)(param_2 + 6) = 0;
    *(undefined8 *)(param_2 + 8) = 0xf;
    puVar1[10] = param_2[10];
    *(undefined1 *)(puVar1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
    puVar1[0xc] = param_2[0xc];
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x38;
    return;
  }
  FUN_1400f9a40();
  return;
}

