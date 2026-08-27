// Function: FUN_140185040
// Addr: 140185040
// Size: 89 bytes


undefined8 FUN_140185040(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  
  uVar1 = *(uint *)(param_1 + 0xd0);
  if ((uVar1 != 0) && ((param_2 < 0 || (uVar1 == *(uint *)(*(longlong *)(param_1 + 200) + 0x144)))))
  {
    lVar2 = *(longlong *)(param_1 + 0x180);
    if (lVar2 == 0) {
      return 1;
    }
    if ((*(uint *)(lVar2 + 0xd0) <= uVar1) &&
       (cVar3 = FUN_140185040(lVar2,*(undefined4 *)(param_1 + 400)), cVar3 != '\0')) {
      return 1;
    }
  }
  return 0;
}

