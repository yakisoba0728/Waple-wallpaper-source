// Function: FUN_14030b2b0
// Addr: 14030b2b0
// Size: 131 bytes


int * FUN_14030b2b0(longlong param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined7 uVar7;
  int *in_RAX;
  int *piVar8;
  
  piVar8 = *(int **)(param_1 + 0x240);
  if (piVar8 != (int *)0x0) {
    in_RAX = piVar8 + (ulonglong)*(uint *)(param_1 + 0x238) * 5;
    if (piVar8 < in_RAX) {
      do {
        if (((char)piVar8[3] == *(char *)(param_1 + 0x1f0)) && ((char)piVar8[4] != '\0')) {
          iVar3 = *(int *)(param_1 + 0x250);
          if (*(int *)(param_1 + 0x254) <= iVar3) {
            *(undefined4 *)(param_1 + 0x20) = 0x82;
            return in_RAX;
          }
          puVar1 = (undefined4 *)(*(longlong *)(param_1 + 600) + (longlong)iVar3 * 0x18);
          *(int *)(param_1 + 0x250) = iVar3 + 1;
          *puVar1 = *(undefined4 *)(param_1 + 0x1dc);
          iVar3 = *(int *)(param_1 + 0x1e8);
          puVar1[2] = 1;
          puVar1[1] = iVar3 + 1;
          *(int **)(puVar1 + 4) = piVar8;
          iVar3 = piVar8[1];
          iVar4 = *piVar8;
          if (2 < iVar4 - 1U) {
            *(undefined4 *)(param_1 + 0x20) = 0x84;
            return (int *)CONCAT71((uint7)(uint3)(iVar4 - 1U >> 8),1);
          }
          lVar6 = (longlong)iVar4;
          lVar5 = *(longlong *)(param_1 + 600 + lVar6 * 0x10);
          uVar7 = (undefined7)((ulonglong)(lVar6 * 2) >> 8);
          if (lVar5 == 0) {
            *(undefined4 *)(param_1 + 0x20) = 0x8a;
            return (int *)CONCAT71(uVar7,1);
          }
          if (*(int *)(param_1 + 0x260 + lVar6 * 0x10) < iVar3) {
            *(undefined4 *)(param_1 + 0x20) = 0x83;
            return (int *)CONCAT71(uVar7,1);
          }
          *(longlong *)(param_1 + 0x1e0) = lVar5;
          uVar2 = *(undefined4 *)(param_1 + 0x260 + lVar6 * 0x10);
          *(undefined4 *)(param_1 + 0x1ec) = uVar2;
          *(int *)(param_1 + 0x1e8) = iVar3;
          *(undefined4 *)(param_1 + 500) = 0;
          *(int *)(param_1 + 0x1dc) = iVar4;
          return (int *)((ulonglong)(uint3)((uint)uVar2 >> 8) << 8);
        }
        piVar8 = piVar8 + 5;
      } while (piVar8 < in_RAX);
    }
  }
  *(undefined4 *)(param_1 + 0x20) = 0x80;
  return in_RAX;
}

