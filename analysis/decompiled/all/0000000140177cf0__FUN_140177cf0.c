// Function: FUN_140177cf0
// Addr: 140177cf0
// Size: 626 bytes


void FUN_140177cf0(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined **local_48;
  longlong local_40;
  undefined ***local_10;
  
  if (*(longlong *)(param_1 + 0x140) == 0) {
    puVar4 = (undefined4 *)FUN_14028af20(0x288);
    FUN_1404217a0(puVar4 + 10,0,0xe0);
    puVar4[0x57] = 0;
    puVar4[0x6d] = 0;
    *(undefined2 *)((longlong)puVar4 + 0x1c5) = 0;
    *(undefined1 *)((longlong)puVar4 + 0x1c7) = 0;
    puVar4[0x73] = 0;
    *(undefined8 *)(puVar4 + 0x90) = 0;
    *(undefined8 *)(puVar4 + 0x92) = 0;
    *(undefined8 *)(puVar4 + 0x94) = 0;
    *(undefined8 *)(puVar4 + 0x96) = 0;
    *(undefined8 *)(puVar4 + 0x98) = 0;
    *(undefined8 *)(puVar4 + 0x9a) = 0;
    *(undefined8 *)(puVar4 + 0x9c) = 0;
    *(undefined8 *)(puVar4 + 0x9e) = 0;
    *(undefined8 *)(puVar4 + 0xa0) = 0;
    *puVar4 = 0;
    puVar4[1] = 1;
    *(undefined8 *)(puVar4 + 2) = 0;
    *(undefined8 *)(puVar4 + 4) = 0;
    *(undefined8 *)(puVar4 + 6) = 0;
    *(undefined8 *)(puVar4 + 8) = 0xf;
    *(undefined1 *)(puVar4 + 2) = 0;
    FUN_1400c1440(puVar4 + 10);
    *(undefined8 *)(puVar4 + 0x42) = 0;
    puVar1 = (undefined8 *)(puVar4 + 0x86);
    *(undefined8 *)(puVar4 + 0x44) = 0;
    *(undefined8 *)(puVar4 + 0x46) = 0;
    *(undefined8 *)(puVar4 + 0x48) = 0;
    *(undefined8 *)(puVar4 + 0x4a) = 0;
    *(undefined8 *)(puVar4 + 0x4c) = 0;
    *(undefined8 *)(puVar4 + 0x4e) = 0xf;
    *(undefined1 *)(puVar4 + 0x48) = 0;
    *(undefined8 *)(puVar4 + 0x50) = 0;
    *(undefined8 *)(puVar4 + 0x52) = 0;
    *(undefined8 *)(puVar4 + 0x54) = 0;
    puVar4[0x56] = 0;
    *(undefined8 *)(puVar4 + 0x58) = 0;
    *(undefined8 *)(puVar4 + 0x5a) = 0;
    *(undefined8 *)(puVar4 + 0x5c) = 0;
    *(undefined8 *)(puVar4 + 0x5e) = 0;
    *(undefined8 *)(puVar4 + 0x60) = 0;
    *(undefined8 *)(puVar4 + 0x62) = 0;
    *(undefined8 *)(puVar4 + 100) = 0xf;
    *(undefined1 *)(puVar4 + 0x5e) = 0;
    *(undefined8 *)(puVar4 + 0x66) = 0;
    *(undefined8 *)(puVar4 + 0x68) = 0;
    *(undefined8 *)(puVar4 + 0x6a) = 0;
    puVar4[0x6c] = 0;
    *(undefined8 *)(puVar4 + 0x6e) = 0;
    puVar4[0x70] = 0;
    *(undefined1 *)(puVar4 + 0x71) = 1;
    *(undefined8 *)(puVar4 + 0x78) = 0;
    *(undefined8 *)(puVar4 + 0x7a) = 0;
    *(undefined8 *)(puVar4 + 0x7c) = 0;
    *(undefined8 *)(puVar4 + 0x7e) = 0;
    *(undefined8 *)(puVar4 + 0x80) = 0;
    *(undefined8 *)(puVar4 + 0x82) = 0;
    *(undefined8 *)(puVar4 + 0x74) = 0;
    *(undefined8 *)(puVar4 + 0x76) = 0;
    puVar4[0x84] = 0xffffffff;
    puVar4[0x72] = 2;
    puVar4[0x85] = 0;
    *puVar1 = 0;
    *(undefined8 *)(puVar4 + 0x88) = 0;
    *(undefined8 *)(puVar4 + 0x8a) = 0;
    *(undefined8 *)(puVar4 + 0x8c) = 0;
    *(undefined8 *)(puVar4 + 0x8e) = 0;
    puVar5 = (undefined8 *)FUN_14028af20(0x10);
    puVar5[1] = 0;
    *puVar1 = puVar5;
    *puVar5 = puVar1;
    *(undefined8 *)(puVar4 + 0x90) = 0;
    *(undefined8 *)(puVar4 + 0x92) = 0;
    *(undefined8 *)(puVar4 + 0x94) = 0;
    *(undefined8 *)(puVar4 + 0x96) = 0;
    *(undefined8 *)(puVar4 + 0x98) = 0;
    *(undefined8 *)(puVar4 + 0x9a) = 0;
    *(undefined8 *)(puVar4 + 0x9c) = 0;
    *(undefined8 *)(puVar4 + 0x9e) = 0;
    *(undefined8 *)(puVar4 + 0xa0) = 0;
    *(undefined4 **)(param_1 + 0x140) = puVar4;
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x158);
    local_48 = &PTR_LAB_14048df18;
    local_10 = &local_48;
    local_40 = param_1;
    uVar3 = (**(code **)(*plVar2 + 0x158))(plVar2,&local_48,1);
    **(undefined4 **)(param_1 + 0x140) = uVar3;
  }
  return;
}

