// Function: FUN_1403401e0
// Addr: 1403401e0
// Size: 108 bytes


ulonglong FUN_1403401e0(uint *param_1,uint *param_2,int *param_3,ulonglong param_4,
                       undefined8 param_5)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  ulonglong local_res20;
  
  uVar11 = *param_2;
  uVar12 = (ulonglong)uVar11;
  local_res20 = param_4;
  uVar6 = FUN_1402f80c0(param_5,8,0,uVar11 * 2,0,&local_res20);
  *(undefined8 *)(param_1 + 4) = uVar6;
  uVar7 = local_res20 & 0xffffffff;
  if ((int)local_res20 == 0) {
    uVar6 = FUN_1402f80c0(param_5,0x28,0,uVar11,0,&local_res20);
    *(undefined8 *)(param_1 + 2) = uVar6;
    uVar7 = local_res20 & 0xffffffff;
    if ((int)local_res20 == 0) {
      uVar6 = FUN_1402f80c0(param_5,0x10,0,uVar11 * 2 + 1,0,&local_res20);
      *(undefined8 *)(param_1 + 10) = uVar6;
      if ((int)local_res20 == 0) {
        *param_1 = uVar11;
        if (*(longlong *)(param_1 + 4) == 0) {
          lVar8 = 0;
        }
        else {
          lVar8 = *(longlong *)(param_1 + 4) + uVar12 * 8;
        }
        *(longlong *)(param_1 + 6) = lVar8;
        param_1[1] = 0;
        param_1[8] = 0;
        param_1[0xc] = 0;
        param_1[0xd] = 0;
        puVar3 = *(undefined4 **)(param_1 + 2);
        puVar4 = *(undefined4 **)(param_2 + 2);
        while (uVar11 != 0) {
          *puVar3 = *puVar4;
          puVar3[1] = puVar4[1];
          puVar3[4] = puVar4[2];
          uVar11 = (int)uVar12 - 1;
          uVar12 = (ulonglong)uVar11;
          puVar3 = puVar3 + 10;
          puVar4 = puVar4 + 3;
        }
        if (param_3 != (int *)0x0) {
          iVar5 = *param_3;
          puVar16 = *(uint **)(param_3 + 2);
          *(int **)(param_1 + 0xe) = param_3;
          for (; iVar5 != 0; iVar5 = iVar5 + -1) {
            uVar11 = *puVar16;
            uVar14 = 0;
            pbVar10 = *(byte **)(puVar16 + 2);
            uVar15 = 0;
            uVar12 = 0;
            if (uVar11 != 0) {
              do {
                if (uVar14 == 0) {
                  uVar15 = (uint)*pbVar10;
                  uVar14 = 0x80;
                  pbVar10 = pbVar10 + 1;
                }
                if (((uVar14 & uVar15) != 0) && ((uint)uVar12 < *param_1)) {
                  piVar1 = (int *)(*(longlong *)(param_1 + 2) + uVar12 * 0x28);
                  uVar13 = *(uint *)(*(longlong *)(param_1 + 2) + 0x10 + uVar12 * 0x28);
                  if ((uVar13 & 4) == 0) {
                    piVar1[4] = uVar13 | 4;
                    uVar13 = param_1[1];
                    puVar9 = *(undefined8 **)(param_1 + 6);
                    piVar1[6] = 0;
                    piVar1[7] = 0;
                    if (uVar13 != 0) {
                      while( true ) {
                        piVar2 = (int *)*puVar9;
                        if ((*piVar2 <= piVar1[1] + *piVar1) && (*piVar1 <= *piVar2 + piVar2[1]))
                        break;
                        uVar13 = uVar13 - 1;
                        if (uVar13 == 0) goto code_r0x0001403403d7;
                        puVar9 = puVar9 + 1;
                      }
                      *(int **)(piVar1 + 6) = piVar2;
                    }
code_r0x0001403403d7:
                    if (param_1[1] < *param_1) {
                      *(int **)(*(longlong *)(param_1 + 6) + (ulonglong)param_1[1] * 8) = piVar1;
                      param_1[1] = param_1[1] + 1;
                    }
                  }
                }
                uVar14 = (int)uVar14 >> 1;
                uVar13 = (uint)uVar12 + 1;
                uVar12 = (ulonglong)uVar13;
              } while (uVar13 < uVar11);
            }
            puVar16 = puVar16 + 6;
          }
        }
        uVar11 = *param_1;
        if ((param_1[1] != uVar11) && (uVar11 != 0)) {
          uVar12 = 0;
          uVar14 = uVar11;
          do {
            if ((uint)uVar12 < uVar14) {
              piVar1 = (int *)(*(longlong *)(param_1 + 2) + uVar12 * 0x28);
              uVar15 = *(uint *)(*(longlong *)(param_1 + 2) + 0x10 + uVar12 * 0x28);
              if ((uVar15 & 4) == 0) {
                piVar1[4] = uVar15 | 4;
                uVar14 = param_1[1];
                puVar9 = *(undefined8 **)(param_1 + 6);
                piVar1[6] = 0;
                piVar1[7] = 0;
                if (uVar14 != 0) {
                  while( true ) {
                    piVar2 = (int *)*puVar9;
                    if ((*piVar2 <= piVar1[1] + *piVar1) && (*piVar1 <= *piVar2 + piVar2[1])) break;
                    uVar14 = uVar14 - 1;
                    if (uVar14 == 0) goto code_r0x000140340494;
                    puVar9 = puVar9 + 1;
                  }
                  *(int **)(piVar1 + 6) = piVar2;
                }
code_r0x000140340494:
                uVar14 = *param_1;
                if (param_1[1] < uVar14) {
                  *(int **)(*(longlong *)(param_1 + 6) + (ulonglong)param_1[1] * 8) = piVar1;
                  param_1[1] = param_1[1] + 1;
                  uVar14 = *param_1;
                }
              }
            }
            uVar15 = (uint)uVar12 + 1;
            uVar12 = (ulonglong)uVar15;
            if (uVar11 <= uVar15) {
              return local_res20 & 0xffffffff;
            }
          } while( true );
        }
      }
      uVar7 = local_res20 & 0xffffffff;
    }
  }
  return uVar7;
}

