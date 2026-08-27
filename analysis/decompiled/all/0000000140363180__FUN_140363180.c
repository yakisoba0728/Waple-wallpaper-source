// Function: FUN_140363180
// Addr: 140363180
// Size: 425 bytes


int * FUN_140363180(int *param_1,int *param_2)

{
  undefined1 uVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  
  piVar7 = param_1;
  if (param_1 == param_2) {
    return param_2;
  }
  while (piVar9 = piVar7 + 4, piVar9 != param_2) {
    iVar4 = *piVar9;
    uVar1 = *(undefined1 *)((longlong)piVar7 + 0x1b);
    uVar5 = piVar9[1];
    cVar2 = (char)piVar9[2];
    uVar3 = *(undefined2 *)((longlong)piVar7 + 0x19);
    uVar6 = piVar9[3];
    if (iVar4 == *param_1) {
      if ((cVar2 == '\0') && (((param_1[1] ^ uVar5) & 0xfffffffe) != 0)) {
        uVar8 = 1;
        if ((int)uVar5 < param_1[1]) {
          uVar8 = 0xffffffff;
        }
      }
      else if (uVar6 < (uint)param_1[3]) {
        uVar8 = 0xffffffff;
      }
      else {
        uVar8 = (uint)((uint)param_1[3] < uVar6);
      }
    }
    else {
      uVar8 = 1;
      if (iVar4 < *param_1) {
        uVar8 = 0xffffffff;
      }
    }
    piVar7 = piVar9;
    if ((int)uVar8 < 0) {
      FUN_1404210f0(param_1 + 4,param_1,(longlong)piVar9 - (longlong)param_1);
      *(undefined2 *)((longlong)param_1 + 9) = uVar3;
      *(undefined1 *)((longlong)param_1 + 0xb) = uVar1;
      *param_1 = iVar4;
      param_1[1] = uVar5;
      *(char *)(param_1 + 2) = cVar2;
      param_1[3] = uVar6;
    }
    else {
      while( true ) {
        piVar10 = piVar9 + -4;
        if (iVar4 == *piVar10) {
          if ((cVar2 == '\0') && (((piVar9[-3] ^ uVar5) & 0xfffffffe) != 0)) {
            uVar8 = 1;
            if ((int)uVar5 < piVar9[-3]) {
              uVar8 = 0xffffffff;
            }
          }
          else if (uVar6 < (uint)piVar9[-1]) {
            uVar8 = 0xffffffff;
          }
          else {
            uVar8 = (uint)((uint)piVar9[-1] < uVar6);
          }
        }
        else {
          uVar8 = 1;
          if (iVar4 < *piVar10) {
            uVar8 = 0xffffffff;
          }
        }
        if (-1 < (int)uVar8) break;
        *piVar9 = *piVar10;
        piVar9[1] = piVar9[-3];
        piVar9[2] = piVar9[-2];
        piVar9[3] = piVar9[-1];
        piVar9 = piVar10;
      }
      *(undefined2 *)((longlong)piVar9 + 9) = uVar3;
      *(undefined1 *)((longlong)piVar9 + 0xb) = uVar1;
      *piVar9 = iVar4;
      piVar9[1] = uVar5;
      *(char *)(piVar9 + 2) = cVar2;
      piVar9[3] = uVar6;
    }
  }
  return param_2;
}

