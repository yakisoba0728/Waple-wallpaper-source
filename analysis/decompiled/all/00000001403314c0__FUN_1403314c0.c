// Function: FUN_1403314c0
// Addr: 1403314c0
// Size: 134 bytes


undefined8 FUN_1403314c0(longlong param_1,int param_2,int param_3)

{
  int *piVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (*(uint *)(lVar3 + 8) < *(ushort *)(lVar3 + 0x62) + 1 + (uint)*(ushort *)(lVar3 + 0x1a)) {
    uVar5 = FUN_1402f0870(lVar3,1,0);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
  }
  else {
    uVar5 = 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0x59) != '\0') {
    uVar2 = *(ushort *)(lVar3 + 2);
    piVar1 = (int *)(*(longlong *)(lVar3 + 8) + (ulonglong)uVar2 * 8);
    lVar4 = *(longlong *)(lVar3 + 0x10);
    *piVar1 = param_2 >> 10;
    piVar1[1] = param_3 >> 10;
    *(undefined1 *)(lVar4 + (ulonglong)uVar2) = 1;
  }
  *(short *)(lVar3 + 2) = *(short *)(lVar3 + 2) + 1;
  return uVar5;
}

