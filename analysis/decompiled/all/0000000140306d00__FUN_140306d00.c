// Function: FUN_140306d00
// Addr: 140306d00
// Size: 278 bytes


void FUN_140306d00(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_1 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x2d0);
    uVar2 = *(undefined8 *)(param_1 + 0x98);
    uVar3 = *(undefined8 *)(param_1 + 0xa0);
    if (*(code **)(param_1 + 1000) != (code *)0x0) {
      (**(code **)(param_1 + 1000))(*(undefined8 *)(param_1 + 0x3e0));
    }
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x18))(param_1);
    }
    FUN_1402f5c00(*(undefined8 *)(param_1 + 0xa0),param_1 + 0x440);
    lVar1 = *(longlong *)(param_1 + 0xa0);
    *(undefined4 *)(param_1 + 0x438) = 0;
    FUN_1402f7f90(*(undefined8 *)(lVar1 + 0x30),*(undefined8 *)(param_1 + 0x460));
    *(undefined8 *)(param_1 + 0x460) = 0;
    FUN_1402f5c00(lVar1,param_1 + 0x448);
    FUN_1402f7f90(uVar2,*(undefined8 *)(param_1 + 0x3d8));
    *(undefined8 *)(param_1 + 0x3d8) = 0;
    *(undefined4 *)(param_1 + 0x3d0) = 0;
    FUN_1402f5c00(uVar3,param_1 + 0x3b8);
    FUN_1402f5c00(uVar3,param_1 + 0x3c8);
    *(undefined4 *)(param_1 + 0x3b0) = 0;
    *(undefined4 *)(param_1 + 0x3c0) = 0;
    FUN_140308a10(param_1);
    *(undefined8 *)(param_1 + 0x408) = 0;
  }
  return;
}

