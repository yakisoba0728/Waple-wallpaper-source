// Function: FUN_1403454e0
// Addr: 1403454e0
// Size: 975 bytes


void FUN_1403454e0(longlong param_1,byte *param_2,undefined8 *param_3)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  byte *pbVar9;
  byte *pbVar10;
  longlong lVar11;
  longlong lVar12;
  undefined4 uVar13;
  char *pcVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  undefined1 auStack_a8 [32];
  int local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  int aiStack_60 [8];
  ulonglong local_40;
  
  local_40 = DAT_1404dc110 ^ (ulonglong)auStack_a8;
  lVar8 = *(longlong *)(param_1 + 0x4e0);
  pbVar9 = param_2;
  if ((lVar8 != 0) && (pcVar1 = *(char **)(lVar8 + 0x38), pcVar1 != (char *)0x0)) {
    uVar18 = *(uint *)(lVar8 + 0x88);
    lVar12 = *(longlong *)(lVar8 + 0x80) + (ulonglong)uVar18;
    if ((pcVar1 <= (char *)(lVar12 - 5U)) && (*pcVar1 == '\x01')) {
      pcVar14 = pcVar1 + 5;
      uVar16 = CONCAT31(CONCAT21(CONCAT11(pcVar1[1],pcVar1[2]),pcVar1[3]),pcVar1[4]);
      pbVar9 = (byte *)((ulonglong)uVar18 * 0x24924925 >> 0x20);
      if (((uVar16 <= uVar18 / 7) && (pcVar14 <= (char *)(lVar12 - (ulonglong)(uVar16 * 7)))) &&
         (uVar18 = 0, uVar16 != 0)) {
        do {
          if ((uint)CONCAT11(*pcVar14,pcVar14[1]) <= (uint)param_2) {
            if ((uint)param_2 <= (uint)CONCAT11(pcVar14[2],pcVar14[3])) {
              pbVar10 = (byte *)(pcVar1 + CONCAT21(CONCAT11(pcVar14[4],pcVar14[5]),pcVar14[6]));
              pbVar9 = pbVar10;
              if ((((byte *)(lVar12 - 1U) < pbVar10) || (2 < *pbVar10)) ||
                 ((byte *)(lVar12 - 8U) < pbVar10 + 1)) break;
              lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x80) + 0x1c);
              lVar17 = (longlong)*(int *)(*(longlong *)(param_1 + 0x80) + 0x20);
              pbVar9 = pbVar10 + 9;
              lVar7 = ((longlong)(short)((ushort)pbVar10[1] << 8) | (ulonglong)pbVar10[2]) * lVar15;
              lVar11 = lVar7 + 0x8000 + (lVar7 >> 0x3f);
              local_78 = lVar11 >> 0x10;
              lVar7 = ((longlong)(short)((ushort)pbVar10[3] << 8) | (ulonglong)pbVar10[4]) * lVar17;
              lVar7 = lVar7 + 0x8000 + (lVar7 >> 0x3f);
              local_80 = lVar7 >> 0x10;
              lVar15 = ((longlong)(short)((ushort)pbVar10[5] << 8) | (ulonglong)pbVar10[6]) * lVar15
              ;
              lVar15 = lVar15 + 0x8000 + (lVar15 >> 0x3f);
              local_70 = lVar15 >> 0x10;
              lVar17 = ((longlong)(short)((ushort)pbVar10[7] << 8) | (ulonglong)pbVar10[8]) * lVar17
              ;
              lVar17 = (lVar17 >> 0x3f) + 0x8000 + lVar17;
              local_68 = lVar17 >> 0x10;
              if (*pbVar10 == 2) {
                if ((byte *)(lVar12 - 4U) < pbVar9) break;
                uVar18 = CONCAT31(CONCAT21(CONCAT11(*pbVar9,pbVar10[10]),pbVar10[0xb]),pbVar10[0xc])
                ;
                if (uVar18 == 0xffffffff) {
                  iVar3 = 0;
                  iVar4 = 0;
                  iVar5 = 0;
                  iVar6 = 0;
                }
                else {
                  lVar12 = *(longlong *)(param_1 + 0x2e0);
                  if (*(longlong *)(lVar8 + 0x78) == 0) {
                    uVar13 = 0;
                    uVar16 = uVar18;
                  }
                  else {
                    uVar16 = uVar18;
                    if (*(uint *)(lVar8 + 0x68) <= uVar18) {
                      uVar16 = *(uint *)(lVar8 + 0x68) - 1;
                    }
                    uVar13 = *(undefined4 *)((ulonglong)uVar16 * 4 + *(longlong *)(lVar8 + 0x70));
                    uVar16 = *(uint *)((ulonglong)uVar16 * 4 + *(longlong *)(lVar8 + 0x78));
                  }
                  local_88 = (**(code **)(lVar12 + 0x70))(param_1,lVar8 + 0x48,uVar13,uVar16);
                  uVar16 = uVar18 + 1;
                  if (*(longlong *)(lVar8 + 0x78) == 0) {
                    uVar13 = 0;
                  }
                  else {
                    uVar2 = *(uint *)(lVar8 + 0x68) - 1;
                    if (uVar16 < *(uint *)(lVar8 + 0x68)) {
                      uVar2 = uVar16;
                    }
                    uVar13 = *(undefined4 *)(*(longlong *)(lVar8 + 0x70) + (ulonglong)uVar2 * 4);
                    uVar16 = *(uint *)(*(longlong *)(lVar8 + 0x78) + (ulonglong)uVar2 * 4);
                  }
                  iVar3 = (**(code **)(lVar12 + 0x70))(param_1,lVar8 + 0x48,uVar13,uVar16);
                  uVar16 = uVar18 + 2;
                  if (*(longlong *)(lVar8 + 0x78) == 0) {
                    uVar13 = 0;
                  }
                  else {
                    uVar2 = *(uint *)(lVar8 + 0x68) - 1;
                    if (uVar16 < *(uint *)(lVar8 + 0x68)) {
                      uVar2 = uVar16;
                    }
                    uVar13 = *(undefined4 *)(*(longlong *)(lVar8 + 0x70) + (ulonglong)uVar2 * 4);
                    uVar16 = *(uint *)(*(longlong *)(lVar8 + 0x78) + (ulonglong)uVar2 * 4);
                  }
                  iVar4 = (**(code **)(lVar12 + 0x70))(param_1,lVar8 + 0x48,uVar13,uVar16);
                  uVar18 = uVar18 + 3;
                  if (*(longlong *)(lVar8 + 0x78) == 0) {
                    uVar13 = 0;
                  }
                  else {
                    uVar16 = *(uint *)(lVar8 + 0x68) - 1;
                    if (uVar18 < *(uint *)(lVar8 + 0x68)) {
                      uVar16 = uVar18;
                    }
                    uVar13 = *(undefined4 *)(*(longlong *)(lVar8 + 0x70) + (ulonglong)uVar16 * 4);
                    uVar18 = *(uint *)(*(longlong *)(lVar8 + 0x78) + (ulonglong)uVar16 * 4);
                  }
                  iVar5 = (**(code **)(lVar12 + 0x70))(param_1,lVar8 + 0x48,uVar13,uVar18);
                  iVar6 = local_88;
                }
                lVar12 = (longlong)*(int *)(*(longlong *)(param_1 + 0x80) + 0x1c);
                lVar7 = iVar6 * lVar12;
                lVar17 = (longlong)*(int *)(*(longlong *)(param_1 + 0x80) + 0x20);
                lVar8 = iVar3 * lVar17;
                aiStack_60[0] =
                     (int)((ulonglong)(lVar7 + 0x8000 + (lVar7 >> 0x3f)) >> 0x10) + (int)local_78;
                lVar12 = iVar4 * lVar12;
                aiStack_60[1] =
                     (int)((ulonglong)(lVar8 + 0x8000 + (lVar8 >> 0x3f)) >> 0x10) + (int)local_80;
                lVar17 = iVar5 * lVar17;
                aiStack_60[4] =
                     (int)((ulonglong)(lVar12 + 0x8000 + (lVar12 >> 0x3f)) >> 0x10) + (int)local_70;
                aiStack_60[3] =
                     (int)((ulonglong)(lVar17 + 0x8000 + (lVar17 >> 0x3f)) >> 0x10) + (int)local_68;
              }
              else {
                aiStack_60[1] = (int)((ulonglong)lVar7 >> 0x10);
                aiStack_60[4] = (int)((ulonglong)lVar15 >> 0x10);
                aiStack_60[3] = (int)((ulonglong)lVar17 >> 0x10);
                aiStack_60[0] = (int)((ulonglong)lVar11 >> 0x10);
              }
              aiStack_60[2] = aiStack_60[0];
              aiStack_60[6] = aiStack_60[4];
              aiStack_60[5] = aiStack_60[3];
              aiStack_60[7] = aiStack_60[1];
              pbVar10 = (byte *)0x0;
              do {
                pbVar9 = pbVar10;
                if ((*(byte *)(*(longlong *)(param_1 + 0xd0) + 0x18) & 1) != 0) {
                  FUN_1402f6100(aiStack_60 + (longlong)pbVar9 * 2);
                }
                lVar8 = *(longlong *)(param_1 + 0xd0);
                if ((*(byte *)(lVar8 + 0x18) & 2) != 0) {
                  aiStack_60[(longlong)pbVar9 * 2] =
                       aiStack_60[(longlong)pbVar9 * 2] + *(int *)(lVar8 + 0x10);
                  aiStack_60[(longlong)pbVar9 * 2 + 1] =
                       aiStack_60[(longlong)pbVar9 * 2 + 1] + *(int *)(lVar8 + 0x14);
                }
                pbVar10 = pbVar9 + 1;
              } while (pbVar9 + 1 != (byte *)0x4);
              *param_3 = CONCAT44(aiStack_60[1],aiStack_60[0]);
              param_3[1] = CONCAT44(aiStack_60[3],aiStack_60[2]);
              param_3[2] = CONCAT44(aiStack_60[5],aiStack_60[4]);
              param_3[3] = CONCAT44(aiStack_60[7],aiStack_60[6]);
              break;
            }
          }
          uVar18 = uVar18 + 1;
          pcVar14 = pcVar14 + 7;
        } while (uVar18 < uVar16);
      }
    }
  }
  func_0x0001402ed2f0(local_40 ^ (ulonglong)auStack_a8,pbVar9);
  return;
}

