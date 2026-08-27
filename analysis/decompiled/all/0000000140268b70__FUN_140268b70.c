// Function: FUN_140268b70
// Addr: 140268b70
// Size: 131 bytes


void FUN_140268b70(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != *(longlong *)(param_1 + 0x10)) {
    FUN_140016fc0(lVar1);
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(lVar1 + 0x28) = uVar2;
    uVar2 = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(lVar1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(lVar1 + 0x38) = uVar2;
    uVar2 = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(lVar1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(lVar1 + 0x48) = uVar2;
    uVar2 = *(undefined8 *)(param_2 + 0x58);
    *(undefined8 *)(lVar1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)(lVar1 + 0x58) = uVar2;
    *(undefined4 *)(lVar1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x68;
    return;
  }
  FUN_14026a0b0(param_1,lVar1,param_2);
  return;
}

