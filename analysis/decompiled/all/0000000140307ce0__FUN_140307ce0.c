// Function: FUN_140307ce0
// Addr: 140307ce0
// Size: 358 bytes


void FUN_140307ce0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  ushort *puVar3;
  uint uVar4;
  short *psVar5;
  int *piVar6;
  short sVar7;
  short sVar8;
  uint uVar9;
  short sVar10;
  uint uVar11;
  
  if ((*(uint *)(param_1 + 0x410) & 0x100) != 0) {
    sVar7 = 0;
    uVar9 = 0;
    sVar8 = 0;
    uVar11 = 0;
    sVar10 = 0;
    puVar3 = *(ushort **)(*(longlong *)(param_1 + 0x408) + 0x60);
    piVar6 = *(int **)(puVar3 + 0x14);
    if (piVar6 != (int *)0x0) {
      piVar1 = piVar6 + (ulonglong)*puVar3 * 3;
      sVar8 = 0;
      sVar10 = 0;
      for (; piVar6 < piVar1; piVar6 = piVar6 + 3) {
        psVar5 = (short *)FUN_1403104d0(param_1,*piVar6);
        uVar4 = FUN_140308620();
        if ((psVar5 != (short *)0x0) && (uVar4 != 0)) {
          *psVar5 = (short)uVar4 + (short)piVar6[2];
          iVar2 = *piVar6;
          if (iVar2 == 0x68617363) {
            uVar11 = uVar4 & 0xffff;
          }
          else if (iVar2 == 0x68647363) {
            uVar9 = uVar4 & 0xffff;
          }
          else if (iVar2 == 0x686c6770) {
            sVar7 = (short)uVar4;
          }
        }
        sVar10 = (short)uVar11;
        sVar8 = (short)uVar9;
      }
    }
    *(short *)(param_1 + 0x6a) = *(short *)(param_1 + 0x6a) + sVar10;
    *(short *)(param_1 + 0x6c) = *(short *)(param_1 + 0x6c) + sVar8;
    *(short *)(param_1 + 0x6e) = *(short *)(param_1 + 0x6e) + (sVar7 - sVar8) + sVar10;
    *(short *)(param_1 + 0x76) = *(short *)(param_1 + 0x27a);
    *(short *)(param_1 + 0x74) = *(short *)(param_1 + 0x278) - *(short *)(param_1 + 0x27a) / 2;
    if ((*(longlong *)(param_1 + 0x2f0) != 0) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x2f0) + 0x40) != 0)) {
      FUN_1402f1260(param_1 + 0xa8,FUN_1403103c0);
      return;
    }
  }
  return;
}

