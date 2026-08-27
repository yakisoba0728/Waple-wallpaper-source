// Function: FUN_140322a40
// Addr: 140322a40
// Size: 71 bytes


void FUN_140322a40(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (*(uint *)(param_2 + 0xb8) < *(uint *)(param_1 + 0x1b0)) {
    lVar2 = (ulonglong)*(uint *)(param_2 + 0xb8) * 0xfc + *(longlong *)(param_1 + 0x1b8);
    uVar1 = (**(code **)(param_2 + 0x50))(param_2,0);
    *(undefined4 *)(lVar2 + 0xd0) = uVar1;
    *(undefined4 *)(lVar2 + 0xb4) = uVar1;
  }
  return;
}

