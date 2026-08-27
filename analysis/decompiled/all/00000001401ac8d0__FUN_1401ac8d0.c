// Function: FUN_1401ac8d0
// Addr: 1401ac8d0
// Size: 333 bytes


int * FUN_1401ac8d0(char param_1,char param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  
  piVar2 = (int *)FUN_14028af20(0x98);
  iVar5 = 1;
  piVar2[0] = 0;
  piVar2[1] = 0;
  piVar2[2] = 0;
  piVar2[3] = 0;
  piVar2[4] = 0;
  piVar2[5] = 0;
  piVar2[6] = 0;
  piVar2[7] = 0;
  piVar2[8] = 0;
  piVar2[9] = 0;
  piVar2[10] = 0;
  piVar2[0xb] = 0;
  piVar2[0xc] = 0;
  piVar2[0xd] = 0;
  piVar2[0xe] = 0;
  piVar2[0xf] = 0;
  piVar2[0x10] = 0;
  piVar2[0x11] = 0;
  piVar2[0x12] = 0;
  piVar2[0x13] = 0;
  piVar2[0x14] = 0;
  piVar2[0x15] = 0;
  piVar2[0x16] = 0;
  piVar2[0x17] = 0;
  piVar2[0x18] = 0;
  piVar2[0x19] = 0;
  piVar2[0x1a] = 0;
  piVar2[0x1b] = 0;
  piVar2[0x1c] = 0;
  piVar2[0x1d] = 0;
  piVar2[0x1e] = 0;
  piVar2[0x1f] = 0;
  piVar2[0x20] = 0;
  piVar2[0x21] = 0;
  piVar2[0x22] = 0;
  piVar2[0x23] = 0;
  piVar2[0x24] = 0;
  piVar2[0x25] = 0;
  piVar2[0xe] = 1;
  piVar2[0x16] = 0;
  lVar3 = FUN_14028af20(0x20);
  piVar1 = piVar2 + 0x1c;
  *(longlong *)lVar3 = lVar3;
  *(longlong *)(lVar3 + 8) = lVar3;
  *(longlong *)(piVar2 + 0x18) = lVar3;
  piVar1[0] = 0;
  piVar1[1] = 0;
  piVar2[0x1e] = 0;
  piVar2[0x1f] = 0;
  piVar2[0x20] = 0;
  piVar2[0x21] = 0;
  piVar2[0x22] = 7;
  piVar2[0x23] = 0;
  piVar2[0x24] = 8;
  piVar2[0x25] = 0;
  piVar2[0x16] = 0x3f800000;
  FUN_14004f190(piVar1,0x10,*(undefined8 *)(piVar2 + 0x18));
  *piVar2 = 0x200;
  piVar2[1] = 0x200;
  *(char *)(piVar2 + 2) = param_1;
  *(char *)((longlong)piVar2 + 9) = param_2;
  piVar2[0xe] = param_3;
  if (param_1 == '\0' && param_2 == '\0') {
    uVar4 = 0x40000;
  }
  else {
    iVar5 = 4;
    uVar4 = 0x100000;
  }
  uVar4 = thunk_FUN_14028af20(uVar4);
  *(undefined8 *)(piVar2 + 4) = uVar4;
  FUN_1404217a0(uVar4,0,(longlong)(piVar2[1] * *piVar2 * iVar5));
  if ((param_1 != '\0') && (param_2 != '\0')) {
    lVar3 = (longlong)(param_3 * piVar2[1] * param_3 * *piVar2 * 4);
    uVar4 = thunk_FUN_14028af20(lVar3);
    *(undefined8 *)(piVar2 + 10) = uVar4;
    FUN_1404217a0(uVar4,0,lVar3);
  }
  return piVar2;
}

