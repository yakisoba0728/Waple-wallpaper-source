// Function: FUN_140103c50
// Addr: 140103c50
// Size: 242 bytes


undefined8
FUN_140103c50(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  param_4 = (undefined8 *)*param_4;
  uVar1 = *param_3;
  uVar2 = *param_2;
  puVar3 = (undefined8 *)FUN_14028af20();
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0x3f000000;
  *(undefined4 *)(puVar3 + 2) = 0x3f000000;
  *(undefined4 *)((longlong)puVar3 + 0x14) = 0x3f800000;
  *(undefined4 *)(puVar3 + 3) = 0x3f000000;
  *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x2c) = 0x3f000000;
  *(undefined4 *)(puVar3 + 6) = 0x3f800000;
  *(undefined2 *)((longlong)puVar3 + 0x34) = 1;
  *(undefined4 *)(puVar3 + 1) = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 7;
  *(undefined2 *)(puVar3 + 8) = 0;
  puVar3[0xc] = uVar2;
  *(undefined1 *)(puVar3 + 0xd) = 0;
  *puVar3 = &PTR_FUN_14048a2e0;
  puVar3[0xe] = uVar1;
  *(undefined4 *)(puVar3 + 0xf) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = 3;
  *(undefined4 *)(puVar3 + 0x10) = 1;
  puVar3[0x11] = 0;
  puVar3[0x12] = 0;
  puVar3[0x13] = 0;
  puVar3[0x14] = 0;
  puVar3[0x15] = 0;
  puVar3[0x16] = 0;
  puVar3[0x17] = 0;
  puVar3[0x18] = 0;
  puVar3[0x19] = 0;
  CoInitializeEx((LPVOID)0x0,6);
  *param_4 = puVar3;
  return 1;
}

