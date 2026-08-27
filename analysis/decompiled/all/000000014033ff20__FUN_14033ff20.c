// Function: FUN_14033ff20
// Addr: 14033ff20
// Size: 486 bytes


void FUN_14033ff20(longlong param_1,longlong param_2,int param_3,int param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  int *piVar9;
  
  if (param_3 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x10);
    uVar1 = *(uint *)(param_1 + 4);
    do {
      uVar8 = *(uint *)(param_2 + 0x1c);
      if ((uVar8 & 0x10) == 0) {
        iVar2 = *(int *)(param_2 + 0x30);
        uVar4 = (*(uint *)(param_2 + 0x24) | *(uint *)(param_2 + 0x20)) & param_5;
        if ((uVar4 & 10) == 0) {
          if ((uVar4 & 5) == 0) {
            if ((uVar8 & 0x40) != 0) {
              uVar6 = 0x100;
              uVar4 = 0x80;
              if (param_5 != 0xc) {
                uVar6 = 0x80;
                uVar4 = 0x100;
              }
              if ((uVar8 & uVar4) == 0) {
                if (((uVar8 & uVar6) != 0) && (uVar7 = 0, uVar1 != 0)) {
                  do {
                    piVar9 = *(int **)(lVar3 + uVar7 * 8);
                    iVar5 = (iVar2 - piVar9[1]) - *piVar9;
                    if ((iVar5 < param_4) && (-iVar5 < param_4)) {
                      uVar8 = uVar8 | 0x410;
                      goto LAB_1403400a8;
                    }
                    uVar4 = (int)uVar7 + 1;
                    uVar7 = (ulonglong)uVar4;
                  } while (uVar4 < uVar1);
                }
              }
              else {
                uVar7 = 0;
                if (uVar1 != 0) {
LAB_140340040:
                  piVar9 = *(int **)(lVar3 + uVar7 * 8);
                  if ((param_4 <= iVar2 - *piVar9) || (param_4 <= -(iVar2 - *piVar9)))
                  goto LAB_140340055;
                  uVar8 = uVar8 | 0x210;
LAB_1403400a8:
                  *(uint *)(param_2 + 0x1c) = uVar8;
                  *(int **)(param_2 + 0x28) = piVar9;
                }
              }
LAB_1403400b0:
              if ((*(longlong *)(param_2 + 0x28) == 0) && (uVar7 = 0, uVar1 != 0)) {
                do {
                  piVar9 = *(int **)(lVar3 + uVar7 * 8);
                  if ((*piVar9 <= iVar2) && (iVar2 <= *piVar9 + piVar9[1])) {
                    *(int **)(param_2 + 0x28) = piVar9;
                    break;
                  }
                  uVar8 = (int)uVar7 + 1;
                  uVar7 = (ulonglong)uVar8;
                } while (uVar8 < uVar1);
              }
            }
          }
          else {
            uVar7 = 0;
            if (uVar1 != 0) {
              do {
                piVar9 = *(int **)(lVar3 + uVar7 * 8);
                iVar5 = (iVar2 - piVar9[1]) - *piVar9;
                if ((iVar5 < param_4) && (-iVar5 < param_4)) {
                  *(int **)(param_2 + 0x28) = piVar9;
                  *(uint *)(param_2 + 0x1c) = uVar8 | 0x410;
                  break;
                }
                uVar4 = (int)uVar7 + 1;
                uVar7 = (ulonglong)uVar4;
              } while (uVar4 < uVar1);
            }
          }
        }
        else {
          uVar7 = 0;
          if (uVar1 != 0) {
            do {
              piVar9 = *(int **)(lVar3 + uVar7 * 8);
              iVar5 = iVar2 - *piVar9;
              if ((iVar5 < param_4) && (-iVar5 < param_4)) {
                *(int **)(param_2 + 0x28) = piVar9;
                *(uint *)(param_2 + 0x1c) = uVar8 | 0x210;
                break;
              }
              uVar4 = (int)uVar7 + 1;
              uVar7 = (ulonglong)uVar4;
            } while (uVar4 < uVar1);
          }
        }
      }
      param_2 = param_2 + 0x40;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
LAB_140340055:
  uVar4 = (int)uVar7 + 1;
  uVar7 = (ulonglong)uVar4;
  if (uVar1 <= uVar4) goto LAB_1403400b0;
  goto LAB_140340040;
}

