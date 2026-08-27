// Function: FUN_140345130
// Addr: 140345130
// Size: 135 bytes


void FUN_140345130(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x4e0);
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x2e0);
    uVar3 = *(undefined8 *)(param_1 + 0x98);
    uVar4 = *(undefined8 *)(param_1 + 0xa0);
    (**(code **)(lVar2 + 0x80))(param_1,lVar1 + 0x68);
    (**(code **)(lVar2 + 0x78))(param_1,lVar1 + 0x48);
    FUN_1402f5c00(uVar4,lVar1 + 0x80);
    FUN_1402f7f90(uVar3,lVar1);
  }
  return;
}

