// Function: FUN_14031dc10
// Addr: 14031dc10
// Size: 75 bytes


undefined8 FUN_14031dc10(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x170) != 0)) {
    if (*(char *)(*(longlong *)(lVar1 + 0x170) + 0x231) != '\0') {
      return 0xa0;
    }
    uVar2 = FUN_14031ff10(param_1,*(undefined8 *)(param_1 + 0x20));
    *(undefined4 *)(lVar1 + 0x168) = uVar2;
    return 0;
  }
  return 3;
}

