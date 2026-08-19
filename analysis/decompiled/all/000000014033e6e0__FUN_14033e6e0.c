// Function: FUN_14033e6e0
// Addr: 14033e6e0
// Size: 421 bytes


void FUN_14033e6e0(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  lVar4 = (longlong)param_2;
  iVar6 = param_1[0x205];
  *(bool *)(param_1 + 0x208) = param_2 < param_1[0x204];
  if ((0 < iVar6) &&
     (0x20 < (int)((ulonglong)(iVar6 * lVar4 + 0x8000 + (iVar6 * lVar4 >> 0x3f)) >> 0x10))) {
    iVar6 = (int)(0x200000 / (longlong)param_2);
  }
  param_1[0x206] = iVar6;
  uVar7 = 0;
  do {
    piVar1 = param_1;
    if (uVar7 != 0) {
      if (uVar7 == 1) {
        piVar1 = param_1 + 0x81;
      }
      else if (uVar7 == 2) {
        piVar1 = param_1 + 0x102;
      }
      else {
        piVar1 = param_1 + 0x183;
      }
    }
    iVar6 = *piVar1;
    if (iVar6 != 0) {
      piVar1 = piVar1 + 1;
      do {
        piVar1[7] = (int)((ulonglong)(piVar1[2] * lVar4 + (piVar1[2] * lVar4 >> 0x3f) + 0x8000) >>
                         0x10) + param_3;
        piVar1[6] = (int)((ulonglong)(piVar1[3] * lVar4 + (piVar1[3] * lVar4 >> 0x3f) + 0x8000) >>
                         0x10) + param_3;
        piVar1[5] = (int)((ulonglong)(piVar1[1] * lVar4 + (piVar1[1] * lVar4 >> 0x3f) + 0x8000) >>
                         0x10);
        piVar1[4] = (int)((ulonglong)(*piVar1 * lVar4 + 0x8000 + (*piVar1 * lVar4 >> 0x3f)) >> 0x10)
                    + param_3 + 0x20 & 0xffffffc0;
        iVar6 = iVar6 + -1;
        piVar1 = piVar1 + 8;
      } while (iVar6 != 0);
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 4);
  piVar1 = param_1 + 1;
  for (iVar6 = *param_1; iVar6 != 0; iVar6 = iVar6 + -1) {
    iVar5 = param_1[0x102];
    if (iVar5 != 0) {
      piVar3 = param_1 + 0x103;
      do {
        iVar2 = *piVar1 - *piVar3;
        if (iVar2 < 0) {
          iVar2 = *piVar3 - *piVar1;
        }
        if ((int)((ulonglong)(iVar2 * lVar4 + 0x8000 + (iVar2 * lVar4 >> 0x3f)) >> 0x10) < 0x40) {
          piVar1[7] = piVar3[7];
          piVar1[6] = piVar3[6];
          piVar1[4] = piVar3[4];
          piVar1[5] = piVar3[5];
          break;
        }
        piVar3 = piVar3 + 8;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    piVar1 = piVar1 + 8;
  }
  iVar6 = param_1[0x81];
  piVar1 = param_1 + 0x82;
  do {
    if (iVar6 == 0) {
      return;
    }
    iVar5 = param_1[0x183];
    if (iVar5 != 0) {
      piVar3 = param_1 + 0x184;
      do {
        iVar2 = *piVar1 - *piVar3;
        if (iVar2 < 0) {
          iVar2 = *piVar3 - *piVar1;
        }
        if ((int)((ulonglong)(iVar2 * lVar4 + 0x8000 + (iVar2 * lVar4 >> 0x3f)) >> 0x10) < 0x40) {
          piVar1[7] = piVar3[7];
          piVar1[6] = piVar3[6];
          piVar1[4] = piVar3[4];
          piVar1[5] = piVar3[5];
          break;
        }
        piVar3 = piVar3 + 8;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    piVar1 = piVar1 + 8;
    iVar6 = iVar6 + -1;
  } while( true );
}

