// Function: FUN_140315bd0
// Addr: 140315bd0
// Size: 68 bytes


undefined8 FUN_140315bd0(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_1[1] + 0x300);
  if (lVar1 != 0) {
    lVar2 = func_0x0001402f04f0(*param_1,"pshinter");
    if (lVar2 != 0) {
      uVar3 = (**(code **)(lVar1 + 8))(lVar2);
      *(undefined8 *)(param_1[0x1e] + 0x28) = uVar3;
    }
  }
  return 0;
}

