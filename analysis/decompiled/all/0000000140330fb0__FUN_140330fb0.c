// Function: FUN_140330fb0
// Addr: 140330fb0
// Size: 129 bytes


void FUN_140330fb0(longlong param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  int *piVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  lVar3 = *(longlong *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0x5c) != '\0') {
    uVar2 = *(ushort *)(lVar3 + 2);
    lVar4 = *(longlong *)(lVar3 + 0x10);
    piVar1 = (int *)(*(longlong *)(lVar3 + 8) + (ulonglong)uVar2 * 8);
    iVar5 = FUN_1402f4b60(param_2);
    *piVar1 = iVar5 >> 0x10;
    iVar5 = FUN_1402f4b60(param_3);
    piVar1[1] = iVar5 >> 0x10;
    *(char *)(lVar4 + (ulonglong)uVar2) = (param_4 == '\0') + '\x01';
  }
  *(short *)(lVar3 + 2) = *(short *)(lVar3 + 2) + 1;
  return;
}

