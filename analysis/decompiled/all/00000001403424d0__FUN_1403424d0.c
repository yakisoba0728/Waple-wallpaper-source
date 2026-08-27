// Function: FUN_1403424d0
// Addr: 1403424d0
// Size: 190 bytes


undefined8 FUN_1403424d0(longlong param_1,int param_2,int param_3,undefined8 param_4,int *param_5)

{
  uint uVar1;
  int *piVar2;
  undefined8 uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  if (param_2 == 0) {
    iVar6 = *(int *)(*(longlong *)(param_1 + 0xa0) + 8);
  }
  else if (param_2 == 1) {
    uVar4 = *(uint *)(param_1 + 4) & 0xffff;
    uVar1 = 0;
    if ((int)uVar4 < *(int *)(param_1 + 0xe0)) {
      uVar1 = uVar4;
    }
    param_3 = param_3 + *(int *)(*(longlong *)(param_1 + 0xe8) + (ulonglong)uVar1 * 4);
    iVar6 = (uint)*(ushort *)(param_1 + 0xf4) * 0x10 + 0xc;
  }
  else {
    piVar2 = *(int **)(param_1 + 0xf8);
    piVar5 = piVar2 + (ulonglong)*(ushort *)(param_1 + 0xf4) * 4;
    while( true ) {
      if (piVar5 <= piVar2) {
        return 0x8e;
      }
      if ((*piVar2 == param_2) && (iVar6 = piVar2[3], iVar6 != 0)) break;
      piVar2 = piVar2 + 4;
    }
    param_3 = param_3 + piVar2[2];
  }
  iVar7 = iVar6;
  if ((param_5 != (int *)0x0) && (iVar7 = *param_5, iVar7 == 0)) {
    *param_5 = iVar6;
    return 0;
  }
  uVar3 = FUN_1402f5530(*(undefined8 *)(param_1 + 0xa0),param_3,param_4,iVar7);
  return uVar3;
}

