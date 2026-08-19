// Function: FUN_1403ed7a0
// Addr: 1403ed7a0
// Size: 161 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403ed7a0(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  int *piVar3;
  float *pfVar4;
  int *piVar5;
  float *pfVar6;
  float *pfVar7;
  
  piVar5 = (int *)&DAT_1404e4ff0;
  uVar1 = *(uint *)(param_1 + 0x14) - 1;
  if (uVar1 < *(uint *)(param_1 + 0x14)) {
    piVar3 = (int *)(*(longlong *)(param_1 + 0x18) + (ulonglong)uVar1 * 0x14);
  }
  else {
    DAT_1404e4ff0 = DAT_14045dde0;
    DAT_1404e4ff8 = _DAT_14045dde8;
    piVar3 = (int *)&DAT_1404e4ff0;
    DAT_1404e5000 = (undefined4)DAT_14045ddf0;
  }
  uVar1 = *(uint *)(param_1 + 0x24) - 1;
  if (uVar1 < *(uint *)(param_1 + 0x24)) {
    piVar5 = (int *)(*(longlong *)(param_1 + 0x28) + (ulonglong)uVar1 * 0x14);
  }
  else {
    DAT_1404e4ff0 = DAT_14045dde0;
    DAT_1404e4ff8 = _DAT_14045dde8;
    DAT_1404e5000 = (undefined4)DAT_14045ddf0;
  }
  if (*piVar3 == 0) {
    *piVar5 = 0;
    return;
  }
  if (*piVar3 == 1) {
    if (*piVar5 == 2) {
      uVar2 = *(undefined8 *)(piVar3 + 2);
      *(undefined8 *)piVar5 = *(undefined8 *)piVar3;
      *(undefined8 *)(piVar5 + 2) = uVar2;
      piVar5[4] = piVar3[4];
      return;
    }
    if (*piVar5 == 1) {
      pfVar4 = (float *)(piVar3 + 1);
      pfVar7 = (float *)(piVar5 + 1);
      pfVar6 = (float *)(piVar3 + 3);
      if (*pfVar4 < *pfVar6) {
        if ((float)piVar3[2] < (float)piVar3[4]) {
          if (*pfVar7 < (float)piVar5[3]) {
            if ((float)piVar5[2] < (float)piVar5[4]) {
              if (*pfVar7 <= *pfVar4) {
                pfVar4 = pfVar7;
              }
              *pfVar7 = *pfVar4;
              pfVar7 = (float *)(piVar3 + 2);
              if ((float)piVar5[2] <= (float)piVar3[2]) {
                pfVar7 = (float *)(piVar5 + 2);
              }
              piVar5[2] = (int)*pfVar7;
              if (*pfVar6 <= (float)piVar5[3]) {
                pfVar6 = (float *)(piVar5 + 3);
              }
              piVar5[3] = (int)*pfVar6;
              pfVar7 = (float *)(piVar3 + 4);
              if ((float)piVar3[4] <= (float)piVar5[4]) {
                pfVar7 = (float *)(piVar5 + 4);
              }
              piVar5[4] = (int)*pfVar7;
              return;
            }
          }
          uVar2 = *(undefined8 *)(piVar3 + 3);
          *(undefined8 *)pfVar7 = *(undefined8 *)pfVar4;
          *(undefined8 *)(piVar5 + 3) = uVar2;
        }
      }
      return;
    }
  }
  return;
}

