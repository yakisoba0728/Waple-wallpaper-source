// Function: FUN_140363250
// Addr: 140363250
// Size: 199 bytes


int * FUN_140363250(int *param_1,int *param_2)

{
  undefined1 uVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  int *piVar10;
  int *piVar9;
  
  if (param_1 == param_2) {
    return param_2;
  }
  piVar10 = param_1 + 4;
  while( true ) {
    if (piVar10 == param_2) {
      return param_2;
    }
    iVar4 = *piVar10;
    uVar1 = *(undefined1 *)((longlong)piVar10 + 0xb);
    uVar5 = piVar10[1];
    cVar2 = (char)piVar10[2];
    uVar3 = *(undefined2 *)((longlong)piVar10 + 9);
    uVar6 = piVar10[3];
    if (iVar4 == *param_1) {
      if ((cVar2 == '\0') && (((param_1[1] ^ uVar5) & 0xfffffffe) != 0)) {
        uVar7 = 1;
        if ((int)uVar5 < param_1[1]) {
          uVar7 = 0xffffffff;
        }
      }
      else if (uVar6 < (uint)param_1[3]) {
        uVar7 = 0xffffffff;
      }
      else {
        uVar7 = (uint)((uint)param_1[3] < uVar6);
      }
    }
    else {
      uVar7 = 1;
      if (iVar4 < *param_1) {
        uVar7 = 0xffffffff;
      }
    }
    piVar8 = piVar10;
    if ((int)uVar7 < 0) break;
    while( true ) {
      piVar9 = piVar8 + -4;
      if (iVar4 == *piVar9) {
        if ((cVar2 == '\0') && (((piVar8[-3] ^ uVar5) & 0xfffffffe) != 0)) {
          uVar7 = 1;
          if ((int)uVar5 < piVar8[-3]) {
            uVar7 = 0xffffffff;
          }
        }
        else if (uVar6 < (uint)piVar8[-1]) {
          uVar7 = 0xffffffff;
        }
        else {
          uVar7 = (uint)((uint)piVar8[-1] < uVar6);
        }
      }
      else {
        uVar7 = 1;
        if (iVar4 < *piVar9) {
          uVar7 = 0xffffffff;
        }
      }
      if (-1 < (int)uVar7) break;
      *piVar8 = *piVar9;
      piVar8[1] = piVar8[-3];
      piVar8[2] = piVar8[-2];
      piVar8[3] = piVar8[-1];
      piVar8 = piVar9;
    }
    *(undefined2 *)((longlong)piVar8 + 9) = uVar3;
    *(undefined1 *)((longlong)piVar8 + 0xb) = uVar1;
    *piVar8 = iVar4;
    piVar8[1] = uVar5;
    *(char *)(piVar8 + 2) = cVar2;
    piVar8[3] = uVar6;
    piVar10 = piVar10 + 4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1404211c0(param_1 + 4,param_1,(longlong)piVar10 - (longlong)param_1,uVar1,uVar1);
}

