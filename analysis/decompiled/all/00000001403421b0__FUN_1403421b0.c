// Function: FUN_1403421b0
// Addr: 1403421b0
// Size: 76 bytes


undefined8 FUN_1403421b0(longlong *param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  pcVar2 = *(code **)(*(longlong *)(lVar1 + 0x2d8) + 8);
  if (pcVar2 == (code *)0x0) {
    return 7;
  }
  uVar3 = (*pcVar2)(*(undefined8 *)(lVar1 + 0x98),param_1,*(undefined4 *)(lVar1 + 0x10),
                    FUN_14034db00,0,lVar1);
  return uVar3;
}

