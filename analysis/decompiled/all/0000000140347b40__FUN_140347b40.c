// Function: FUN_140347b40
// Addr: 140347b40
// Size: 186 bytes


longlong FUN_140347b40(longlong param_1,short param_2,int *param_3,int *param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint7 uVar4;
  int iVar5;
  
  *param_3 = -1;
  iVar5 = 0;
  uVar2 = 0;
  *param_4 = -1;
  if (*(short *)(param_1 + 0x1d0) != 0) {
    do {
      lVar3 = (longlong)iVar5;
      lVar1 = *(longlong *)(param_1 + 0x1e8);
      if ((*(short *)(lVar1 + 6 + lVar3 * 0x18) == param_2) &&
         (*(short *)(lVar1 + 8 + lVar3 * 0x18) != 0)) {
        if (((*(short *)(lVar1 + lVar3 * 0x18) == 3) && (*(ushort *)(lVar1 + 2 + lVar3 * 0x18) < 2))
           && ((*(short *)(lVar1 + 4 + lVar3 * 0x18) == 0x409 || (*param_3 == -1)))) {
          *param_3 = iVar5;
        }
        if (((*(short *)(lVar1 + lVar3 * 0x18) == 1) && (*(short *)(lVar1 + 2 + lVar3 * 0x18) == 0))
           && ((*(short *)(lVar1 + 4 + lVar3 * 0x18) == 0 || (*param_4 == -1)))) {
          *param_4 = iVar5;
        }
      }
      uVar2 = (ulonglong)*(ushort *)(param_1 + 0x1d0);
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)(uint)*(ushort *)(param_1 + 0x1d0));
  }
  uVar4 = (uint7)(uVar2 >> 8);
  if ((*param_3 < 0) && (*param_4 < 0)) {
    return (ulonglong)uVar4 << 8;
  }
  return CONCAT71(uVar4,1);
}

