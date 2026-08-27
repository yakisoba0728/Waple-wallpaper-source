// Function: FUN_14032b040
// Addr: 14032b040
// Size: 519 bytes


ulonglong FUN_14032b040(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint local_58 [2];
  undefined4 auStack_50 [6];
  
  uVar6 = 0;
  if (*(uint *)(param_2 + 0x13c) == 0) {
    return 3;
  }
  while( true ) {
    piVar7 = (int *)(uVar6 * 0x10 + *(longlong *)(param_2 + 0x140));
    if (*piVar7 == 8) break;
    uVar9 = (int)uVar6 + 1;
    uVar6 = (ulonglong)uVar9;
    if (*(uint *)(param_2 + 0x13c) <= uVar9) {
      return 3;
    }
  }
  if ((*(uint *)(param_1 + 0xc) <= (uint)piVar7[3]) &&
     (local_58[0] = FUN_1402f5c90(param_1,piVar7[3] - *(uint *)(param_1 + 0xc)), local_58[0] == 0))
  {
    uVar9 = piVar7[2];
    uVar6 = FUN_1402f4fe0(param_1,8);
    local_58[0] = (uint)uVar6;
    if (local_58[0] != 0) {
      return uVar6;
    }
    uVar1 = FUN_1402f5250(param_1);
    uVar10 = uVar1 & 4;
    if (uVar10 == 0) {
      uVar2 = FUN_1402f5250(param_1);
    }
    else {
      uVar2 = FUN_1402f5200();
    }
    FUN_1402f5100(param_1);
    if ((uVar1 & 0xffffff00) == 0) {
      if (0xfffe < uVar2) {
        uVar2 = 0xfffe;
      }
      if (uVar2 == *(int *)(param_2 + 0x1a8) - 1U) {
        if (uVar2 != 0) {
          uVar6 = 1;
          iVar8 = *(int *)(param_1 + 0xc) + 0x10 + uVar2 * 4;
          if (uVar10 == 0) {
            do {
              uVar3 = FUN_1402f5970(param_1,local_58);
              iVar4 = iVar8;
              if (uVar3 <= uVar9) {
                iVar4 = uVar3 + iVar8;
              }
              uVar3 = (int)uVar6 + 1;
              *(int *)(*(longlong *)(param_2 + 0x1b0) + 0xc + uVar6 * 0x10) = iVar4;
              uVar6 = (ulonglong)uVar3;
            } while (uVar3 <= uVar2);
          }
          else {
            do {
              uVar3 = FUN_1402f58c0(param_1,local_58);
              iVar4 = iVar8;
              if (uVar3 <= uVar9) {
                iVar4 = uVar3 + iVar8;
              }
              uVar3 = (int)uVar6 + 1;
              *(int *)(*(longlong *)(param_2 + 0x1b0) + 0xc + uVar6 * 0x10) = iVar4;
              uVar6 = (ulonglong)uVar3;
            } while (uVar3 <= uVar2);
          }
        }
        uVar6 = (ulonglong)local_58[0];
        if (local_58[0] == 0) {
          uVar6 = 0;
          do {
            if (uVar10 == 0) {
              uVar5 = FUN_1402f5970(param_1,local_58);
            }
            else {
              uVar5 = FUN_1402f58c0();
            }
            auStack_50[uVar6] = uVar5;
            if (local_58[0] != 0) {
              return (ulonglong)local_58[0];
            }
            uVar9 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar9;
          } while (uVar9 < 4);
          *(uint *)(param_2 + 0x1d0) = uVar1;
          uVar6 = 0;
        }
        return uVar6;
      }
    }
    return 3;
  }
  return 0x53;
}

