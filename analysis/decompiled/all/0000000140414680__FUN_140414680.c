// Function: FUN_140414680
// Addr: 140414680
// Size: 530 bytes


uint FUN_140414680(longlong param_1,longlong param_2,int param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  if (((*(int *)(param_1 + 0x30) != *(int *)(param_2 + 0x30)) && (*(int *)(param_1 + 0x60) != 0)) &&
     (*(int *)(param_2 + 0x60) != 0)) {
    return 1;
  }
  uVar1 = *(uint *)(param_2 + 0x60);
  uVar4 = 0;
  uVar8 = 0;
  if (*(uint *)(param_1 + 0x60) != uVar1) {
    uVar9 = 0;
    if (uVar1 != 0) {
      do {
        uVar8 = uVar4;
        if (param_3 != -1) {
          iVar2 = *(int *)(*(longlong *)(param_2 + 0x70) + uVar9 * 0x14);
          uVar7 = uVar4 | 8;
          if (iVar2 != param_3) {
            uVar7 = uVar4;
          }
          uVar8 = uVar7 | 4;
          if (iVar2 != 0) {
            uVar8 = uVar7;
          }
        }
        uVar7 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar7;
        uVar4 = uVar8;
      } while (uVar7 < uVar1);
    }
    return uVar8 | 2;
  }
  if (uVar1 != 0) {
    if (param_3 == -1) {
      uVar8 = 0;
      piVar5 = *(int **)(param_1 + 0x70);
      piVar6 = *(int **)(param_2 + 0x70);
      if (uVar1 != 0) {
        do {
          uVar7 = uVar4 | 0x10;
          if (*piVar5 == *piVar6) {
            uVar7 = uVar4;
          }
          uVar3 = uVar7 | 0x20;
          if (piVar5[2] == piVar6[2]) {
            uVar3 = uVar7;
          }
          uVar4 = uVar3 | 0x40;
          if (((piVar6[1] ^ piVar5[1]) & 7U) == 0) {
            uVar4 = uVar3;
          }
          uVar8 = uVar8 + 1;
          piVar5 = piVar5 + 5;
          piVar6 = piVar6 + 5;
        } while (uVar8 < uVar1);
      }
    }
    else {
      uVar8 = 0;
      piVar5 = *(int **)(param_1 + 0x70);
      piVar6 = *(int **)(param_2 + 0x70);
      if (uVar1 != 0) {
        do {
          iVar2 = *piVar6;
          uVar7 = uVar4 | 0x10;
          if (*piVar5 == iVar2) {
            uVar7 = uVar4;
          }
          uVar4 = uVar7 | 0x20;
          if (piVar5[2] == piVar6[2]) {
            uVar4 = uVar7;
          }
          uVar7 = uVar4 | 0x40;
          if (((piVar6[1] ^ piVar5[1]) & 7U) == 0) {
            uVar7 = uVar4;
          }
          uVar3 = uVar7 | 8;
          if (iVar2 != param_3) {
            uVar3 = uVar7;
          }
          uVar4 = uVar3 | 4;
          if (iVar2 != 0) {
            uVar4 = uVar3;
          }
          uVar8 = uVar8 + 1;
          piVar5 = piVar5 + 5;
          piVar6 = piVar6 + 5;
        } while (uVar8 < uVar1);
      }
    }
    if (*(int *)(param_1 + 0x30) == 2) {
      piVar5 = *(int **)(param_1 + 0x80);
      uVar8 = 0;
      piVar6 = *(int **)(param_2 + 0x80);
      if (uVar1 != 0) {
        while( true ) {
          uVar7 = -(*piVar5 - *piVar6);
          if ((int)uVar7 < 0) {
            uVar7 = *piVar5 - *piVar6;
          }
          if (param_4 < uVar7) break;
          uVar7 = -(piVar5[1] - piVar6[1]);
          if ((int)uVar7 < 0) {
            uVar7 = piVar5[1] - piVar6[1];
          }
          if (param_4 < uVar7) break;
          uVar7 = -(piVar5[2] - piVar6[2]);
          if ((int)uVar7 < 0) {
            uVar7 = piVar5[2] - piVar6[2];
          }
          if (param_4 < uVar7) break;
          uVar7 = -(piVar5[3] - piVar6[3]);
          if ((int)uVar7 < 0) {
            uVar7 = piVar5[3] - piVar6[3];
          }
          if (param_4 < uVar7) break;
          piVar5 = piVar5 + 5;
          piVar6 = piVar6 + 5;
          uVar8 = uVar8 + 1;
          if (uVar1 <= uVar8) {
            return uVar4;
          }
        }
        uVar4 = uVar4 | 0x80;
      }
    }
  }
  return uVar4;
}

