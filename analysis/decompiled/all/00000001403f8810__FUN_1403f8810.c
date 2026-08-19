// Function: FUN_1403f8810
// Addr: 1403f8810
// Size: 9 bytes


undefined8 FUN_1403f8810(char *param_1,ulonglong param_2,ulonglong param_3,undefined1 param_4)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  
  if (*param_1 == '\0') {
    return 0;
  }
  uVar4 = (uint)param_2;
  if (((*(uint *)(param_1 + 0x24) < uVar4) && (*(uint *)(param_1 + 0x20) < uVar4)) && (uVar4 < 3)) {
    param_4 = 1;
  }
  cVar2 = func_0x0001403f88f0(param_1 + 0x20,param_2,param_3,param_4);
  if (cVar2 != '\0') {
    param_2 = param_2 & 0xffffffff;
    if ((int)uVar4 < 0) {
      param_2 = 0;
    }
    uVar4 = (uint)param_2;
    cVar2 = FUN_1403a4770(param_1 + 0x10,param_2,0);
    if (cVar2 != '\0') {
      uVar1 = *(uint *)(param_1 + 0x14);
      if ((uVar1 < uVar4) && ((char)param_3 != '\0')) {
        iVar3 = (uVar4 - uVar1) * 8;
        if (iVar3 != 0) {
          func_0x000140421870(*(longlong *)(param_1 + 0x18) + (ulonglong)uVar1 * 8,0,iVar3);
        }
      }
      *(uint *)(param_1 + 0x14) = uVar4;
      return 1;
    }
  }
  func_0x0001403f88f0(param_1 + 0x20,*(undefined4 *)(param_1 + 0x14),param_3 & 0xff,param_4);
  *param_1 = '\0';
  return 0;
}

