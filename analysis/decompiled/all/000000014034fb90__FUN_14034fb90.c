// Function: FUN_14034fb90
// Addr: 14034fb90
// Size: 137 bytes


void FUN_14034fb90(int param_1,int param_2,ushort *param_3,longlong *param_4)

{
  ushort uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  ushort uVar5;
  ushort uVar6;
  
  lVar4 = *param_4 - (longlong)(((int)(param_1 + (param_1 >> 0x1f & 3U)) >> 2) * (int)param_4[1]);
  while (param_2 != 0) {
    uVar1 = param_3[2];
    param_2 = param_2 + -1;
    uVar5 = 0;
    if (param_3[1] != 0) {
      do {
        uVar6 = uVar5 + 1;
        uVar3 = (ulonglong)((uint)*param_3 + (uint)uVar5 >> 2);
        iVar2 = (uint)*(byte *)(uVar3 + lVar4) + ((byte)uVar1 + 8 >> 4);
        *(char *)(uVar3 + lVar4) = (char)iVar2 - (char)((uint)iVar2 >> 8);
        uVar5 = uVar6;
      } while (uVar6 < param_3[1]);
    }
    param_3 = param_3 + 3;
  }
  return;
}

