// Function: FUN_140334190
// Addr: 140334190
// Size: 187 bytes


void FUN_140334190(longlong param_1,undefined4 *param_2)

{
  ushort *puVar1;
  int *piVar2;
  ushort uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  lVar4 = *(longlong *)(param_1 + 0x38);
  if (*(char *)(lVar4 + 0x58) == '\0') {
    iVar7 = func_0x00014033c100(lVar4,*param_2,param_2[1]);
    if (iVar7 == 0) goto LAB_1403341e0;
code_r0x0001403341c1:
    if (**(int **)(param_1 + 0x30) == 0) {
      **(int **)(param_1 + 0x30) = iVar7;
      return;
    }
  }
  else {
LAB_1403341e0:
    lVar5 = *(longlong *)(lVar4 + 0x18);
    if (*(uint *)(lVar5 + 8) < *(ushort *)(lVar5 + 0x62) + 3 + (uint)*(ushort *)(lVar5 + 0x1a)) {
      iVar7 = FUN_1402f0940(lVar5,3,0);
      if (iVar7 != 0) goto code_r0x0001403341c1;
    }
    lVar5 = *(longlong *)(lVar4 + 0x28);
    puVar1 = (ushort *)(lVar5 + 2);
    if (*(char *)(lVar4 + 0x59) != '\0') {
      uVar3 = *puVar1;
      lVar6 = *(longlong *)(lVar5 + 0x10);
      piVar2 = (int *)(*(longlong *)(lVar5 + 8) + (ulonglong)uVar3 * 8);
      iVar7 = param_2[2];
      piVar2[1] = (int)param_2[3] >> 10;
      *piVar2 = iVar7 >> 10;
      *(undefined1 *)(lVar6 + (ulonglong)uVar3) = 2;
    }
    *puVar1 = *puVar1 + 1;
    lVar5 = *(longlong *)(lVar4 + 0x28);
    puVar1 = (ushort *)(lVar5 + 2);
    if (*(char *)(lVar4 + 0x59) != '\0') {
      uVar3 = *puVar1;
      lVar6 = *(longlong *)(lVar5 + 0x10);
      piVar2 = (int *)(*(longlong *)(lVar5 + 8) + (ulonglong)uVar3 * 8);
      iVar7 = param_2[4];
      piVar2[1] = (int)param_2[5] >> 10;
      *piVar2 = iVar7 >> 10;
      *(undefined1 *)(lVar6 + (ulonglong)uVar3) = 2;
    }
    *puVar1 = *puVar1 + 1;
    lVar5 = *(longlong *)(lVar4 + 0x28);
    puVar1 = (ushort *)(lVar5 + 2);
    if (*(char *)(lVar4 + 0x59) != '\0') {
      uVar3 = *puVar1;
      lVar4 = *(longlong *)(lVar5 + 0x10);
      piVar2 = (int *)(*(longlong *)(lVar5 + 8) + (ulonglong)uVar3 * 8);
      iVar7 = param_2[6];
      piVar2[1] = (int)param_2[7] >> 10;
      *piVar2 = iVar7 >> 10;
      *(undefined1 *)(lVar4 + (ulonglong)uVar3) = 1;
    }
    *puVar1 = *puVar1 + 1;
  }
  return;
}

