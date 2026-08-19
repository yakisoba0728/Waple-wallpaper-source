// Function: FUN_140362060
// Addr: 140362060
// Size: 190 bytes


void FUN_140362060(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  byte *pbVar3;
  byte *pbVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  
  while( true ) {
    if (((*(int *)(param_2 + 4) != 1) && (*(int *)(param_2 + 4) != 2)) ||
       ((uint)*(byte *)(*(longlong *)(param_2 + 8) + 2) * 0x100 +
        (uint)*(byte *)(*(longlong *)(param_2 + 8) + 3) <= *(uint *)(param_2 + 0x10))) {
      return;
    }
    piVar5 = (int *)(param_2 + 0x30);
    if (param_2 == -0x21) {
      piVar5 = (int *)&DAT_00000010;
    }
    if (*piVar5 == 0) break;
    pbVar4 = (byte *)&DAT_14045dde0;
    if (*(int *)(param_2 + 0x30) != 0) {
      pbVar4 = *(byte **)(param_2 + 0x28);
    }
    uVar6 = (uint)pbVar4[1] + (uint)*pbVar4 * 0x100;
    if (uVar6 == 0) {
      pbVar4 = (byte *)&DAT_14045dde0;
    }
    else {
      pbVar4 = (byte *)((ulonglong)uVar6 + *(longlong *)(param_2 + 0x48));
    }
    lVar1 = *param_1;
    pbVar3 = pbVar4;
    for (iVar9 = (uint)*pbVar4 * 0x100 + (uint)pbVar4[1]; iVar9 != 0; iVar9 = iVar9 + -1) {
      uVar6 = (uint)pbVar3[3] + (uint)pbVar3[2] * 0x100;
      if (uVar6 == 0) {
        pbVar8 = (byte *)&DAT_14045dde0;
      }
      else {
        pbVar8 = pbVar4 + uVar6;
      }
      lVar2 = *(longlong *)(lVar1 + 0x18);
      iVar7 = (uint)pbVar8[3] + (uint)pbVar8[2] * 0x100;
      iVar10 = iVar7 + -1;
      if (iVar7 == 0) {
        iVar10 = 0;
      }
      if (*(char *)(lVar2 + 0x40) == '\0') {
        func_0x00014036b7c0(lVar2 + 0x10,pbVar8 + 4,iVar10,2);
      }
      else {
        func_0x000140373430();
      }
      FUN_1403a2ab0(*(undefined8 *)(lVar1 + 0x28),(uint)pbVar8[1] + (uint)*pbVar8 * 0x100);
      pbVar3 = pbVar3 + 2;
    }
    func_0x000140399010(param_2);
    if (*(int *)(param_2 + 0x30) != 0) {
      *(int *)(param_2 + 0x34) = *(int *)(param_2 + 0x34) + 1;
      *(longlong *)(param_2 + 0x28) = *(longlong *)(param_2 + 0x28) + 2;
      *(int *)(param_2 + 0x30) = *(int *)(param_2 + 0x30) + -1;
    }
  }
  return;
}

