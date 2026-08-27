// Function: FUN_140331470
// Addr: 140331470
// Size: 72 bytes


void FUN_140331470(longlong param_1,int param_2,int param_3,char param_4)

{
  int *piVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0x59) != '\0') {
    uVar2 = *(ushort *)(lVar3 + 2);
    lVar4 = *(longlong *)(lVar3 + 0x10);
    piVar1 = (int *)(*(longlong *)(lVar3 + 8) + (ulonglong)uVar2 * 8);
    *piVar1 = param_2 >> 10;
    piVar1[1] = param_3 >> 10;
    *(char *)(lVar4 + (ulonglong)uVar2) = (param_4 == '\0') + '\x01';
  }
  *(short *)(lVar3 + 2) = *(short *)(lVar3 + 2) + 1;
  return;
}

