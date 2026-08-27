// Function: FUN_140332cc0
// Addr: 140332cc0
// Size: 79 bytes


undefined8 FUN_140332cc0(longlong *param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  pcVar2 = *(code **)(*(longlong *)(lVar1 + 0x298) + 8);
  if (pcVar2 == (code *)0x0) {
    return 7;
  }
  uVar3 = (*pcVar2)(*(undefined8 *)(lVar1 + 0x98),param_1,*(undefined4 *)(lVar1 + 0x240),
                    &LAB_14033c300,0,lVar1);
  return uVar3;
}

