// Function: FUN_140315e80
// Addr: 140315e80
// Size: 194 bytes


undefined8 FUN_140315e80(longlong param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  
  lVar3 = *(longlong *)(param_1 + 0x2a8);
  if (lVar3 != 0) {
    uVar7 = 0;
    if (*(int *)(lVar3 + 0x28) != 0) {
      do {
        lVar4 = *(longlong *)(lVar3 + 0x20);
        if (*(int *)(lVar4 + uVar7 * 0x14) == param_3) {
          iVar5 = *(int *)(lVar4 + 4 + uVar7 * 0x14);
          if (param_2 < iVar5) {
            *param_4 = *(int *)(lVar4 + 8 + uVar7 * 0x14);
          }
          else {
            iVar1 = *(int *)(lVar4 + 0xc + uVar7 * 0x14);
            if (iVar1 < param_2) {
              *param_4 = *(int *)(lVar4 + 0x10 + uVar7 * 0x14);
            }
            else {
              iVar2 = *(int *)(lVar4 + 8 + uVar7 * 0x14);
              iVar5 = FUN_1402f20b0(param_2 - iVar5,*(int *)(lVar4 + 0x10 + uVar7 * 0x14) - iVar2,
                                    iVar1 - iVar5);
              *param_4 = iVar5 + iVar2;
            }
          }
        }
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
      } while (uVar6 < *(uint *)(lVar3 + 0x28));
    }
    return 0;
  }
  return 6;
}

