// Function: FUN_140345410
// Addr: 140345410
// Size: 1213 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140345410(longlong param_1,uint param_2,undefined8 *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  longlong lVar7;
  longlong lVar8;
  byte *pbVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 uVar12;
  byte *pbVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  undefined1 auStack_a8 [32];
  int local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  int local_60 [8];
  byte *local_40;
  
  pbVar6 = (byte *)(DAT_1404dc040 ^ (ulonglong)auStack_a8);
  local_40 = pbVar6;
  lVar8 = *(longlong *)(param_1 + 0x4e0);
  if ((lVar8 != 0) && (pbVar9 = *(byte **)(lVar8 + 0x38), pbVar9 != (byte *)0x0)) {
    uVar17 = *(uint *)(lVar8 + 0x88);
    lVar11 = *(longlong *)(lVar8 + 0x80) + (ulonglong)uVar17;
    pbVar6 = (byte *)(lVar11 - 5);
    if ((pbVar9 <= pbVar6) && (*pbVar9 == 1)) {
      pbVar13 = pbVar9 + 5;
      uVar15 = CONCAT31(CONCAT21(CONCAT11(pbVar9[1],pbVar9[2]),pbVar9[3]),pbVar9[4]);
      pbVar6 = (byte *)((ulonglong)uVar17 * 0x24924925 & 0xffffffff);
      if (((uVar15 <= uVar17 / 7) &&
          (pbVar6 = (byte *)(lVar11 - (ulonglong)(uVar15 * 7)), pbVar13 <= pbVar6)) &&
         (uVar17 = 0, uVar15 != 0)) {
        do {
          if (CONCAT11(*pbVar13,pbVar13[1]) <= param_2) {
            if (param_2 <= CONCAT11(pbVar13[2],pbVar13[3])) {
              pbVar6 = (byte *)(lVar11 - 1);
              pbVar9 = pbVar9 + CONCAT21(CONCAT11(pbVar13[4],pbVar13[5]),pbVar13[6]);
              if ((pbVar6 < pbVar9) || (2 < *pbVar9)) break;
              pbVar6 = (byte *)(lVar11 - 8);
              if (pbVar6 < pbVar9 + 1) break;
              lVar14 = (longlong)*(int *)(*(longlong *)(param_1 + 0x80) + 0x1c);
              lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x80) + 0x20);
              lVar7 = ((longlong)(short)((ushort)pbVar9[1] << 8) | (ulonglong)pbVar9[2]) * lVar14;
              lVar10 = lVar7 + 0x8000 + (lVar7 >> 0x3f);
              local_78 = lVar10 >> 0x10;
              lVar7 = ((longlong)(short)((ushort)pbVar9[3] << 8) | (ulonglong)pbVar9[4]) * lVar16;
              lVar7 = lVar7 + 0x8000 + (lVar7 >> 0x3f);
              local_80 = lVar7 >> 0x10;
              lVar14 = ((longlong)(short)((ushort)pbVar9[5] << 8) | (ulonglong)pbVar9[6]) * lVar14;
              lVar14 = lVar14 + 0x8000 + (lVar14 >> 0x3f);
              local_70 = lVar14 >> 0x10;
              lVar16 = ((longlong)(short)((ushort)pbVar9[7] << 8) | (ulonglong)pbVar9[8]) * lVar16;
              lVar16 = (lVar16 >> 0x3f) + 0x8000 + lVar16;
              local_68 = lVar16 >> 0x10;
              if (*pbVar9 == 2) {
                pbVar6 = (byte *)(lVar11 - 4);
                if (pbVar6 < pbVar9 + 9) break;
                uVar17 = CONCAT31(CONCAT21(CONCAT11(pbVar9[9],pbVar9[10]),pbVar9[0xb]),pbVar9[0xc]);
                if (uVar17 == 0xffffffff) {
                  iVar2 = 0;
                  iVar3 = 0;
                  iVar4 = 0;
                  iVar5 = 0;
                }
                else {
                  lVar11 = *(longlong *)(param_1 + 0x2e0);
                  if (*(longlong *)(lVar8 + 0x78) == 0) {
                    uVar12 = 0;
                    uVar15 = uVar17;
                  }
                  else {
                    uVar15 = uVar17;
                    if (*(uint *)(lVar8 + 0x68) <= uVar17) {
                      uVar15 = *(uint *)(lVar8 + 0x68) - 1;
                    }
                    uVar12 = *(undefined4 *)((ulonglong)uVar15 * 4 + *(longlong *)(lVar8 + 0x70));
                    uVar15 = *(uint *)((ulonglong)uVar15 * 4 + *(longlong *)(lVar8 + 0x78));
                  }
                  local_88 = (**(code **)(lVar11 + 0x70))(param_1,lVar8 + 0x48,uVar12,uVar15);
                  uVar15 = uVar17 + 1;
                  if (*(longlong *)(lVar8 + 0x78) == 0) {
                    uVar12 = 0;
                  }
                  else {
                    uVar1 = *(uint *)(lVar8 + 0x68) - 1;
                    if (uVar15 < *(uint *)(lVar8 + 0x68)) {
                      uVar1 = uVar15;
                    }
                    uVar12 = *(undefined4 *)(*(longlong *)(lVar8 + 0x70) + (ulonglong)uVar1 * 4);
                    uVar15 = *(uint *)(*(longlong *)(lVar8 + 0x78) + (ulonglong)uVar1 * 4);
                  }
                  iVar2 = (**(code **)(lVar11 + 0x70))(param_1,lVar8 + 0x48,uVar12,uVar15);
                  uVar15 = uVar17 + 2;
                  if (*(longlong *)(lVar8 + 0x78) == 0) {
                    uVar12 = 0;
                  }
                  else {
                    uVar1 = *(uint *)(lVar8 + 0x68) - 1;
                    if (uVar15 < *(uint *)(lVar8 + 0x68)) {
                      uVar1 = uVar15;
                    }
                    uVar12 = *(undefined4 *)(*(longlong *)(lVar8 + 0x70) + (ulonglong)uVar1 * 4);
                    uVar15 = *(uint *)(*(longlong *)(lVar8 + 0x78) + (ulonglong)uVar1 * 4);
                  }
                  iVar3 = (**(code **)(lVar11 + 0x70))(param_1,lVar8 + 0x48,uVar12,uVar15);
                  uVar17 = uVar17 + 3;
                  if (*(longlong *)(lVar8 + 0x78) == 0) {
                    uVar12 = 0;
                  }
                  else {
                    uVar15 = *(uint *)(lVar8 + 0x68) - 1;
                    if (uVar17 < *(uint *)(lVar8 + 0x68)) {
                      uVar15 = uVar17;
                    }
                    uVar12 = *(undefined4 *)(*(longlong *)(lVar8 + 0x70) + (ulonglong)uVar15 * 4);
                    uVar17 = *(uint *)(*(longlong *)(lVar8 + 0x78) + (ulonglong)uVar15 * 4);
                  }
                  iVar4 = (**(code **)(lVar11 + 0x70))(param_1,lVar8 + 0x48,uVar12,uVar17);
                  iVar5 = local_88;
                }
                lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x80) + 0x1c);
                lVar7 = iVar5 * lVar11;
                lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x80) + 0x20);
                lVar8 = iVar2 * lVar16;
                local_60[0] = (int)((ulonglong)(lVar7 + 0x8000 + (lVar7 >> 0x3f)) >> 0x10) +
                              (int)local_78;
                lVar11 = iVar3 * lVar11;
                local_60[1] = (int)((ulonglong)(lVar8 + 0x8000 + (lVar8 >> 0x3f)) >> 0x10) +
                              (int)local_80;
                lVar16 = iVar4 * lVar16;
                local_60[4] = (int)((ulonglong)(lVar11 + 0x8000 + (lVar11 >> 0x3f)) >> 0x10) +
                              (int)local_70;
                local_60[3] = (int)((ulonglong)(lVar16 + 0x8000 + (lVar16 >> 0x3f)) >> 0x10) +
                              (int)local_68;
              }
              else {
                local_60[1] = (int)((ulonglong)lVar7 >> 0x10);
                local_60[4] = (int)((ulonglong)lVar14 >> 0x10);
                local_60[3] = (int)((ulonglong)lVar16 >> 0x10);
                local_60[0] = (int)((ulonglong)lVar10 >> 0x10);
              }
              lVar8 = 0;
              local_60[2] = local_60[0];
              local_60[6] = local_60[4];
              local_60[5] = local_60[3];
              local_60[7] = local_60[1];
              do {
                if ((*(byte *)(*(longlong *)(param_1 + 0xd0) + 0x18) & 1) != 0) {
                  FUN_1402f6030(local_60 + lVar8 * 2);
                }
                lVar11 = *(longlong *)(param_1 + 0xd0);
                if ((*(byte *)(lVar11 + 0x18) & 2) != 0) {
                  local_60[lVar8 * 2] = local_60[lVar8 * 2] + *(int *)(lVar11 + 0x10);
                  local_60[lVar8 * 2 + 1] = local_60[lVar8 * 2 + 1] + *(int *)(lVar11 + 0x14);
                }
                lVar8 = lVar8 + 1;
              } while (lVar8 != 4);
              *param_3 = CONCAT44(local_60[1],local_60[0]);
              param_3[1] = CONCAT44(local_60[3],local_60[2]);
              param_3[2] = CONCAT44(local_60[5],local_60[4]);
              param_3[3] = CONCAT44(local_60[7],local_60[6]);
              return CONCAT71((int7)(CONCAT44(local_60[7],local_60[6]) >> 8),1);
            }
          }
          pbVar6 = (byte *)0x0;
          uVar17 = uVar17 + 1;
          pbVar13 = pbVar13 + 7;
        } while (uVar17 < uVar15);
      }
    }
  }
  return (ulonglong)pbVar6 & 0xffffffffffffff00;
}

