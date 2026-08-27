// Function: FUN_140141880
// Addr: 140141880
// Size: 155 bytes


undefined1 FUN_140141880(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  
  uVar1 = param_1[3];
  lVar2 = param_1[2];
  plVar3 = param_1;
  if (0xf < uVar1) {
    plVar3 = (longlong *)*param_1;
  }
  if ((lVar2 == 4) && ((int)*plVar3 == 0x706f7473)) {
    return 4;
  }
  plVar3 = param_1;
  if (0xf < uVar1) {
    plVar3 = (longlong *)*param_1;
  }
  if ((lVar2 == 8) && (*plVar3 == 0x6c6c616573756170)) {
    return 3;
  }
  plVar3 = param_1;
  if (0xf < uVar1) {
    plVar3 = (longlong *)*param_1;
  }
  if (lVar2 == 5) {
    iVar4 = (int)*plVar3 + -0x73756170;
    if (iVar4 == 0) {
      iVar4 = *(byte *)((longlong)plVar3 + 4) - 0x65;
    }
    if (iVar4 == 0) {
      return 2;
    }
  }
  if (0xf < uVar1) {
    param_1 = (longlong *)*param_1;
  }
  if (lVar2 == 4) {
    return (int)*param_1 == 0x6574756d;
  }
  return false;
}

