// Function: FUN_1403662c0
// Addr: 1403662c0
// Size: 887 bytes


ulonglong * FUN_1403662c0(ulonglong *param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  
  piVar7 = param_3 + 4;
  if (param_2 < param_3) {
    do {
      iVar1 = param_3[-4];
      piVar8 = param_3 + -4;
      iVar2 = *param_3;
      if (iVar1 == iVar2) {
        if ((char)param_3[-2] == '\0') {
          if (((param_3[-3] ^ param_3[1]) & 0xfffffffeU) != 0) {
            uVar6 = 1;
            if (param_3[-3] < param_3[1]) {
              uVar6 = 0xffffffff;
            }
            goto LAB_14036634a;
          }
        }
        if ((uint)param_3[-1] < (uint)param_3[3]) {
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = (uint)((uint)param_3[3] < (uint)param_3[-1]);
        }
      }
      else {
        uVar6 = 1;
        if (iVar1 < iVar2) {
          uVar6 = 0xffffffff;
        }
      }
LAB_14036634a:
      if ((int)uVar6 < 0) break;
      if (iVar2 == iVar1) {
        if ((char)param_3[2] == '\0') {
          if (((param_3[-3] ^ param_3[1]) & 0xfffffffeU) != 0) {
            uVar6 = 1;
            if (param_3[1] < param_3[-3]) {
              uVar6 = 0xffffffff;
            }
            goto LAB_1403663a0;
          }
        }
        if ((uint)param_3[3] < (uint)param_3[-1]) {
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = (uint)((uint)param_3[-1] < (uint)param_3[3]);
        }
      }
      else {
        uVar6 = 1;
        if (iVar2 < iVar1) {
          uVar6 = 0xffffffff;
        }
      }
LAB_1403663a0:
      if (((int)uVar6 < 0) || (param_3 = piVar8, piVar8 <= param_2)) break;
    } while( true );
  }
  piVar8 = piVar7;
  piVar9 = param_3;
  if (piVar7 < param_4) {
    iVar1 = *param_3;
    do {
      iVar2 = *piVar7;
      if (iVar2 == iVar1) {
        if ((char)piVar7[2] == '\0') {
          if (((piVar7[1] ^ param_3[1]) & 0xfffffffeU) != 0) {
            uVar6 = 1;
            if (piVar7[1] < param_3[1]) {
              uVar6 = 0xffffffff;
            }
            goto LAB_140366414;
          }
        }
        if ((uint)piVar7[3] < (uint)param_3[3]) {
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = (uint)((uint)param_3[3] < (uint)piVar7[3]);
        }
      }
      else {
        uVar6 = 1;
        if (iVar2 < iVar1) {
          uVar6 = 0xffffffff;
        }
      }
LAB_140366414:
      piVar8 = piVar7;
      if ((int)uVar6 < 0) break;
      if (iVar1 == iVar2) {
        if ((char)param_3[2] == '\0') {
          if (((piVar7[1] ^ param_3[1]) & 0xfffffffeU) != 0) {
            uVar6 = 1;
            if (param_3[1] < piVar7[1]) {
              uVar6 = 0xffffffff;
            }
            goto LAB_140366468;
          }
        }
        if ((uint)param_3[3] < (uint)piVar7[3]) {
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = (uint)((uint)piVar7[3] < (uint)param_3[3]);
        }
      }
      else {
        uVar6 = 1;
        if (iVar1 < iVar2) {
          uVar6 = 0xffffffff;
        }
      }
LAB_140366468:
      if (((int)uVar6 < 0) || (piVar7 = piVar7 + 4, piVar8 = piVar7, param_4 <= piVar7)) break;
    } while( true );
  }
joined_r0x000140366485:
  do {
    if (param_4 <= piVar7) {
joined_r0x00014036656d:
      for (; param_2 < param_3; param_3 = param_3 + -4) {
        iVar1 = param_3[-4];
        piVar11 = param_3 + -4;
        iVar2 = *piVar9;
        if (iVar1 == iVar2) {
          if ((char)param_3[-2] == '\0') {
            if (((param_3[-3] ^ piVar9[1]) & 0xfffffffeU) != 0) {
              uVar6 = 1;
              if (param_3[-3] < piVar9[1]) {
                uVar6 = 0xffffffff;
              }
              goto LAB_1403665da;
            }
          }
          if ((uint)param_3[-1] < (uint)piVar9[3]) {
            uVar6 = 0xffffffff;
          }
          else {
            uVar6 = (uint)((uint)piVar9[3] < (uint)param_3[-1]);
          }
        }
        else {
          uVar6 = 1;
          if (iVar1 < iVar2) {
            uVar6 = 0xffffffff;
          }
        }
LAB_1403665da:
        piVar10 = piVar9;
        if (-1 < (int)uVar6) {
          if (iVar2 == iVar1) {
            if ((char)piVar9[2] == '\0') {
              if (((param_3[-3] ^ piVar9[1]) & 0xfffffffeU) != 0) {
                uVar6 = 1;
                if (piVar9[1] < param_3[-3]) {
                  uVar6 = 0xffffffff;
                }
                goto LAB_140366634;
              }
            }
            if ((uint)piVar9[3] < (uint)param_3[-1]) {
              uVar6 = 0xffffffff;
            }
            else {
              uVar6 = (uint)((uint)param_3[-1] < (uint)piVar9[3]);
            }
          }
          else {
            uVar6 = 1;
            if (iVar2 < iVar1) {
              uVar6 = 0xffffffff;
            }
          }
LAB_140366634:
          if ((int)uVar6 < 0) break;
          piVar10 = piVar9 + -4;
          if (piVar10 != piVar11) {
            uVar3 = *(undefined8 *)(param_3 + -2);
            uVar4 = *(undefined8 *)piVar10;
            uVar5 = *(undefined8 *)(piVar9 + -2);
            *(undefined8 *)piVar10 = *(undefined8 *)piVar11;
            *(undefined8 *)(piVar9 + -2) = uVar3;
            *(undefined8 *)piVar11 = uVar4;
            *(undefined8 *)(param_3 + -2) = uVar5;
          }
        }
        piVar9 = piVar10;
      }
      if (param_3 == param_2) {
        if (piVar7 == param_4) {
          *param_1 = (ulonglong)piVar9;
          param_1[1] = (ulonglong)piVar8;
          return param_1;
        }
        if (piVar8 != piVar7) {
          uVar3 = *(undefined8 *)(piVar8 + 2);
          uVar4 = *(undefined8 *)piVar9;
          uVar5 = *(undefined8 *)(piVar9 + 2);
          *(undefined8 *)piVar9 = *(undefined8 *)piVar8;
          *(undefined8 *)(piVar9 + 2) = uVar3;
          *(undefined8 *)piVar8 = uVar4;
          *(undefined8 *)(piVar8 + 2) = uVar5;
        }
        uVar3 = *(undefined8 *)(piVar7 + 2);
        uVar4 = *(undefined8 *)piVar9;
        uVar5 = *(undefined8 *)(piVar9 + 2);
        *(undefined8 *)piVar9 = *(undefined8 *)piVar7;
        *(undefined8 *)(piVar9 + 2) = uVar3;
        *(undefined8 *)piVar7 = uVar4;
        *(undefined8 *)(piVar7 + 2) = uVar5;
        piVar7 = piVar7 + 4;
        piVar8 = piVar8 + 4;
        piVar9 = piVar9 + 4;
      }
      else {
        piVar11 = param_3 + -4;
        if (piVar7 == param_4) {
          piVar10 = piVar9 + -4;
          if (piVar11 != piVar10) {
            uVar3 = *(undefined8 *)(piVar9 + -2);
            uVar4 = *(undefined8 *)piVar11;
            uVar5 = *(undefined8 *)(param_3 + -2);
            *(undefined8 *)piVar11 = *(undefined8 *)piVar10;
            *(undefined8 *)(param_3 + -2) = uVar3;
            *(undefined8 *)piVar10 = uVar4;
            *(undefined8 *)(piVar9 + -2) = uVar5;
          }
          uVar3 = *(undefined8 *)(piVar8 + -2);
          uVar4 = *(undefined8 *)piVar10;
          uVar5 = *(undefined8 *)(piVar9 + -2);
          *(undefined8 *)piVar10 = *(undefined8 *)(piVar8 + -4);
          *(undefined8 *)(piVar9 + -2) = uVar3;
          *(undefined8 *)(piVar8 + -4) = uVar4;
          *(undefined8 *)(piVar8 + -2) = uVar5;
          piVar8 = piVar8 + -4;
          param_3 = piVar11;
          piVar9 = piVar10;
        }
        else {
          uVar3 = *(undefined8 *)piVar7;
          uVar4 = *(undefined8 *)(piVar7 + 2);
          uVar5 = *(undefined8 *)(param_3 + -2);
          *(undefined8 *)piVar7 = *(undefined8 *)piVar11;
          *(undefined8 *)(piVar7 + 2) = uVar5;
          piVar7 = piVar7 + 4;
          *(undefined8 *)piVar11 = uVar3;
          *(undefined8 *)(param_3 + -2) = uVar4;
          param_3 = piVar11;
        }
      }
      goto joined_r0x000140366485;
    }
    iVar1 = *piVar7;
    iVar2 = *piVar9;
    if (iVar2 == iVar1) {
      if ((char)piVar9[2] == '\0') {
        if (((piVar7[1] ^ piVar9[1]) & 0xfffffffeU) != 0) {
          uVar6 = 1;
          if (piVar9[1] < piVar7[1]) {
            uVar6 = 0xffffffff;
          }
          goto LAB_1403664e8;
        }
      }
      if ((uint)piVar9[3] < (uint)piVar7[3]) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = (uint)((uint)piVar7[3] < (uint)piVar9[3]);
      }
    }
    else {
      uVar6 = 1;
      if (iVar2 < iVar1) {
        uVar6 = 0xffffffff;
      }
    }
LAB_1403664e8:
    if (-1 < (int)uVar6) {
      if (iVar1 == iVar2) {
        if ((char)piVar7[2] == '\0') {
          if (((piVar7[1] ^ piVar9[1]) & 0xfffffffeU) != 0) {
            uVar6 = 1;
            if (piVar7[1] < piVar9[1]) {
              uVar6 = 0xffffffff;
            }
            goto LAB_140366541;
          }
        }
        if ((uint)piVar7[3] < (uint)piVar9[3]) {
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = (uint)((uint)piVar9[3] < (uint)piVar7[3]);
        }
      }
      else {
        uVar6 = 1;
        if (iVar1 < iVar2) {
          uVar6 = 0xffffffff;
        }
      }
LAB_140366541:
      if ((int)uVar6 < 0) goto joined_r0x00014036656d;
      if (piVar8 != piVar7) {
        uVar3 = *(undefined8 *)(piVar7 + 2);
        uVar4 = *(undefined8 *)piVar8;
        uVar5 = *(undefined8 *)(piVar8 + 2);
        *(undefined8 *)piVar8 = *(undefined8 *)piVar7;
        *(undefined8 *)(piVar8 + 2) = uVar3;
        *(undefined8 *)piVar7 = uVar4;
        *(undefined8 *)(piVar7 + 2) = uVar5;
      }
      piVar8 = piVar8 + 4;
    }
    piVar7 = piVar7 + 4;
  } while( true );
}

