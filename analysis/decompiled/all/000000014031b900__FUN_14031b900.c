// Function: FUN_14031b900
// Addr: 14031b900
// Size: 103 bytes


undefined8 FUN_14031b900(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  
  lVar1 = *param_1;
  lVar2 = *(longlong *)(lVar1 + 0x3e0);
  if (*(longlong *)(lVar2 + 0x4d8) == 0) {
    return 0xa3;
  }
  pcVar3 = *(code **)(*(longlong *)(lVar2 + 0x10d8) + 8);
  if (pcVar3 == (code *)0x0) {
    return 7;
  }
  uVar4 = (*pcVar3)(*(undefined8 *)(lVar1 + 0x98),param_1,*(undefined4 *)(lVar2 + 0x20),
                    &LAB_1403205f0,0,lVar1);
  return uVar4;
}

