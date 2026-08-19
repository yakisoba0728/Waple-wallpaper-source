// Function: FUN_140135a90
// Addr: 140135a90
// Size: 215 bytes


void FUN_140135a90(longlong param_1,undefined1 *param_2,undefined1 *param_3,uint *param_4)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  int *piVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  int *piVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong *local_58 [2];
  undefined1 auStack_48 [16];
  
  if ((*(longlong *)(param_1 + 0x30) != 0) ||
     (*(longlong *)(param_1 + 0x60) != *(longlong *)(param_1 + 0x68))) {
    puVar4 = *(undefined8 **)(param_1 + 0x140);
    for (puVar11 = *(undefined8 **)(param_1 + 0x138); puVar11 != puVar4; puVar11 = puVar11 + 5) {
      puVar8 = puVar11;
      if (7 < (ulonglong)puVar11[3]) {
        puVar8 = (undefined8 *)*puVar11;
      }
      uVar7 = 0;
      uVar13 = 0xcbf29ce484222325;
      if (puVar11[2] * 2 != 0) {
        do {
          pbVar1 = (byte *)(uVar7 + (longlong)puVar8);
          uVar7 = uVar7 + 1;
          uVar13 = (uVar13 ^ *pbVar1) * 0x100000001b3;
        } while (uVar7 < (ulonglong)(puVar11[2] * 2));
      }
      lVar6 = FUN_14007cca0(param_1 + 0x20,local_58,puVar11,uVar13);
      lVar6 = *(longlong *)(lVar6 + 8);
      if ((lVar6 != 0) && (lVar6 != *(longlong *)(param_1 + 0x28))) {
        piVar9 = *(int **)(lVar6 + 0x30);
        piVar5 = *(int **)(lVar6 + 0x38);
        if (piVar9 != piVar5) {
          iVar2 = *(int *)((longlong)puVar11 + 0x24);
          do {
            if (*piVar9 == iVar2) {
              iVar3 = piVar9[1];
              if (iVar3 == 1) {
                *param_2 = 1;
              }
              else if (iVar3 == 2) {
                *param_4 = *param_4 | 1 << ((byte)*(undefined4 *)(puVar11 + 4) & 0x1f);
              }
              else if (iVar3 == 3) {
                *param_4 = 0xffffffff;
              }
              else if (iVar3 == 4) {
                *param_3 = 1;
              }
            }
            piVar9 = piVar9 + 2;
          } while (piVar9 != piVar5);
        }
      }
    }
    plVar10 = *(longlong **)(param_1 + 0x28);
    plVar12 = (longlong *)*plVar10;
    if (plVar12 != plVar10) {
      local_58[0] = plVar10;
      do {
        piVar5 = (int *)plVar12[7];
        for (piVar9 = (int *)plVar12[6]; piVar9 != piVar5; piVar9 = piVar9 + 2) {
          if (*piVar9 == 0) {
            if ((ulonglong)plVar12[5] < 8) {
              plVar10 = plVar12 + 2;
            }
            else {
              plVar10 = (longlong *)plVar12[2];
            }
            uVar7 = 0;
            uVar13 = 0xcbf29ce484222325;
            if (plVar12[4] * 2 != 0) {
              do {
                pbVar1 = (byte *)(uVar7 + (longlong)plVar10);
                uVar7 = uVar7 + 1;
                uVar13 = (uVar13 ^ *pbVar1) * 0x100000001b3;
              } while (uVar7 < (ulonglong)(plVar12[4] * 2));
            }
            lVar6 = FUN_14007cca0(param_1 + 0xf8,auStack_48,plVar12 + 2,uVar13);
            if ((*(longlong *)(lVar6 + 8) != 0) &&
               (*(longlong *)(lVar6 + 8) != *(longlong *)(param_1 + 0x100))) {
              iVar2 = piVar9[1];
              if (iVar2 == 1) {
                *param_2 = 1;
              }
              else if ((iVar2 == 2) || (iVar2 == 3)) {
                *param_4 = 0xffffffff;
              }
              else if (iVar2 == 4) {
                *param_3 = 1;
              }
            }
          }
          plVar10 = local_58[0];
        }
        plVar12 = (longlong *)*plVar12;
      } while (plVar12 != plVar10);
    }
  }
  return;
}

