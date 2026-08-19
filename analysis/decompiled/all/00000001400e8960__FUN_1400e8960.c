// Function: FUN_1400e8960
// Addr: 1400e8960
// Size: 169 bytes


void FUN_1400e8960(longlong param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  *(undefined4 *)(param_1 + 0x6c) = 0;
  while( true ) {
    if (param_2 == 0) {
      return;
    }
    cVar1 = *(char *)(param_1 + 0x75);
    iVar4 = (int)cVar1;
    if ((byte)(cVar1 - 0x30U) < 10) {
      iVar5 = iVar4 + -0x30;
      iVar3 = -0x7fffffd1;
    }
    else if ((byte)(cVar1 + 0x9fU) < 6) {
      iVar5 = iVar4 + -0x57;
      iVar3 = -0x7fffffaa;
    }
    else {
      if (5 < (byte)(cVar1 + 0xbfU)) break;
      iVar5 = iVar4 + -0x37;
      iVar3 = -0x7fffffca;
    }
    if (iVar5 == -1) break;
    iVar2 = *(int *)(param_1 + 0x6c);
    if ((int)((iVar3 - iVar4) + (iVar3 - iVar4 >> 0x1f & 0xfU)) >> 4 < iVar2) {
      func_0x0001400e7590(iVar2,2);
      return;
    }
    *(int *)(param_1 + 0x6c) = iVar2 * 0x10 + iVar5;
    FUN_1400e5810(param_1);
    param_2 = param_2 + -1;
  }
  if (param_2 == 0) {
    return;
  }
  func_0x0001400e7590(iVar4,2);
  return;
}

