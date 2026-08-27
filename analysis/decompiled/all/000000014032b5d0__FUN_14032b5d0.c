// Function: FUN_14032b5d0
// Addr: 14032b5d0
// Size: 554 bytes


int FUN_14032b5d0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  short *psVar6;
  uint uVar7;
  int *piVar8;
  short *psVar9;
  uint uVar10;
  int local_res10 [2];
  ulonglong uVar11;
  
  uVar11 = 0;
  if (*(uint *)(param_2 + 0x13c) != 0) {
    do {
      piVar8 = (int *)(uVar11 * 0x10 + *(longlong *)(param_2 + 0x140));
      if (*piVar8 == 4) {
        if ((uint)piVar8[3] < *(uint *)(param_1 + 0xc)) {
          return 0x53;
        }
        uVar1 = *(undefined8 *)(param_2 + 0x98);
        iVar3 = FUN_1402f5c90(param_1,piVar8[3] - *(uint *)(param_1 + 0xc));
        if (iVar3 != 0) {
          return 0x53;
        }
        uVar10 = piVar8[2];
        local_res10[0] = 0;
        uVar4 = FUN_1402f5970(param_1,local_res10);
        if (local_res10[0] != 0) {
          return local_res10[0];
        }
        uVar7 = uVar4 & 0xffffff00;
        if (uVar7 == 0) {
          if ((uVar4 & 4) == 0) {
            uVar5 = FUN_1402f5970(param_1,local_res10);
          }
          else {
            uVar5 = FUN_1402f58c0();
          }
        }
        else {
          if (uVar7 != 0x100) {
            return 3;
          }
          if ((uVar4 & 4) == 0) {
            uVar2 = FUN_1402f5b60(param_1,local_res10);
            uVar5 = (uint)uVar2;
          }
          else {
            uVar2 = FUN_1402f5ac0();
            uVar5 = (uint)uVar2;
          }
        }
        if (local_res10[0] != 0) {
          return 3;
        }
        if (uVar7 == 0) {
          uVar10 = uVar10 / 0xc;
        }
        else {
          uVar10 = uVar10 / 5;
        }
        if ((uVar10 < uVar5) || (uVar5 == 0)) {
          return 8;
        }
        if (0xfffe < uVar5) {
          uVar5 = 0xfffe;
        }
        *(uint *)(param_2 + 0x1a8) = uVar5 + 1;
        psVar6 = (short *)FUN_1402f7ff0(uVar1,0x10,0,uVar5 + 1,0,local_res10);
        *(short **)(param_2 + 0x1b0) = psVar6;
        if (local_res10[0] != 0) {
          return local_res10[0];
        }
        uVar10 = 1;
        if (*(uint *)(param_2 + 0x1a8) < 2) {
          return 0;
        }
        do {
          psVar9 = psVar6 + 8;
          local_res10[0] = FUN_14032b530(param_1,uVar4,psVar9);
          psVar6[0xe] = 0;
          psVar6[0xf] = 0;
          if (local_res10[0] != 0) {
            FUN_1402f7f90(uVar1,*(undefined8 *)(param_2 + 0x1b0));
            *(undefined8 *)(param_2 + 0x1b0) = 0;
            return local_res10[0];
          }
          if ((psVar6[9] < *psVar9) || ((int)psVar6[0xb] < -(int)psVar6[0xc])) {
            psVar6[9] = 0;
            psVar6[10] = 0;
            psVar6[0xb] = 0;
            psVar6[0xc] = 0;
            *psVar9 = 0;
          }
          uVar10 = uVar10 + 1;
          local_res10[0] = 0;
          psVar6 = psVar9;
        } while (uVar10 < *(uint *)(param_2 + 0x1a8));
        return 0;
      }
      uVar10 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar10;
    } while (uVar10 < *(uint *)(param_2 + 0x13c));
  }
  return 3;
}

