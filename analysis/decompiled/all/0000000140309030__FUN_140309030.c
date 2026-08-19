// Function: FUN_140309030
// Addr: 140309030
// Size: 82 bytes


undefined8 FUN_140309030(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  *(undefined4 *)(param_1 + 0x10) = param_2;
  if ((*(byte *)(lVar1 + 8) & 1) != 0) {
    FUN_1402f4cc0();
    FUN_140314e60(param_1);
    return 0;
  }
  uVar2 = (**(code **)(*(longlong *)(lVar1 + 0x2d0) + 0xe8))(lVar1,param_2,param_1 + 3);
  if ((int)uVar2 != 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  return uVar2;
}

