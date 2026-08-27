// Function: FUN_1403c7650
// Addr: 1403c7650
// Size: 854 bytes


void FUN_1403c7650(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                  byte *param_5,undefined4 *param_6,uint *param_7)

{
  byte bVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  byte *pbVar15;
  float fVar16;
  float fVar17;
  uint local_d8;
  byte *local_d0;
  byte *local_c0;
  byte *local_b8;
  uint local_b0;
  uint uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  ulonglong local_98;
  
  bVar1 = *(byte *)(param_1 + 1);
  bVar2 = *(byte *)(param_1 + 2);
  FUN_140397a40(param_1 + (ulonglong)CONCAT11(bVar1,bVar2) * 2 + 3,&local_a8,param_2);
  fVar5 = DAT_1404926c0;
  fVar4 = DAT_140471a88;
  fVar3 = DAT_140471a58;
  pbVar15 = (byte *)CONCAT44(uStack_9c,uStack_a0);
  uVar12 = 0;
  uVar10 = 0;
  pbVar11 = pbVar15 + (local_98 & 0xffffffff);
  uVar14 = (uint)bVar1 * 0x100 + (uint)bVar2;
  local_b0 = 0;
  uStack_ac = 0;
  if (uVar14 != 0) {
    uVar13 = 0;
    uVar9 = 0;
    local_d8 = 0;
    local_d0 = pbVar11;
    local_c0 = pbVar15;
    local_b8 = pbVar11;
    do {
      uVar7 = (uint)*(byte *)(param_1 + 3 + uVar9 * 2) * 0x100 +
              (uint)*(byte *)(param_1 + 4 + uVar9 * 2);
      if (uVar7 < (uint)*param_5 * 0x100 + (uint)param_5[1]) {
        if (param_7 == (uint *)0x0) {
LAB_1403c77ae:
          if (uVar7 < (uint)*param_5 * 0x100 + (uint)param_5[1]) {
            pbVar11 = param_5 + (ulonglong)uVar7 * 4 + 2;
          }
          else {
            pbVar11 = (byte *)&DAT_14045dd10;
          }
          uVar6 = (uint)pbVar11[3] +
                  (uint)pbVar11[1] * 0x10000 + (uint)pbVar11[2] * 0x100 + (uint)*pbVar11 * 0x1000000
          ;
          if (uVar6 == 0) {
            pbVar11 = (byte *)&DAT_14045dd10;
          }
          else {
            pbVar11 = param_5 + uVar6;
          }
          fVar17 = (float)FUN_1403bf2b0(pbVar11,param_3,param_4);
          pbVar11 = local_d0;
          if ((param_7 != (uint *)0x0) && (uVar7 < *param_7)) {
            fVar16 = (float)FUN_14041a5c0(fVar17 * fVar4 + fVar5);
            param_7[(ulonglong)uVar7 + 1] = (int)fVar16;
          }
LAB_1403c7844:
          uVar9 = (ulonglong)local_d8;
        }
        else {
          if (uVar7 < *param_7) {
            uVar6 = param_7[(ulonglong)uVar7 + 1];
            if (uVar6 == 0) {
              fVar17 = 0.0;
            }
            else {
              if (uVar6 == 0x80000000) goto LAB_1403c77ae;
              fVar17 = (float)(int)uVar6 * fVar3;
            }
            goto LAB_1403c7844;
          }
          fVar17 = 0.0;
        }
        iVar8 = (int)uVar9;
        if (fVar17 == 0.0) goto LAB_1403c793f;
        if (uVar13 != 0) {
          do {
            if ((int)uVar12 < 1) {
              if (pbVar15 < pbVar11) {
                bVar1 = *pbVar15;
                pbVar15 = pbVar15 + 1;
                uVar12 = (bVar1 & 0x3f) + 1;
                uVar10 = bVar1 & 0xc0;
                if ((bVar1 & 0xc0) == 0) {
                  uVar10 = 1;
                }
                else if (uVar10 == 0x40) {
                  uVar10 = 2;
                }
                else if (uVar10 == 0x80) {
                  uVar10 = 0;
                }
                else if (uVar10 == 0xc0) {
                  uVar10 = 4;
                }
                local_c0 = pbVar15;
                uStack_ac = uVar10;
                if (pbVar15 + uVar10 * uVar12 <= pbVar11) goto LAB_1403c78cc;
              }
              local_b0 = 0;
              break;
            }
LAB_1403c78cc:
            uVar7 = uVar12;
            if (uVar13 <= uVar12) {
              uVar7 = uVar13;
            }
            uVar12 = uVar12 - uVar7;
            uVar13 = uVar13 - uVar7;
            pbVar15 = pbVar15 + uVar7 * uVar10;
            local_c0 = pbVar15;
            local_b0 = uVar12;
          } while (uVar13 != 0);
          uVar13 = 0;
        }
        local_a8 = *param_6;
        uStack_a4 = param_6[1];
        uStack_a0 = param_6[2];
        uStack_9c = param_6[3];
        local_98 = *(ulonglong *)(param_6 + 4);
        FUN_14036a870(&local_c0,&local_a8,fVar17);
        local_d0 = local_b8;
        pbVar11 = local_b8;
        pbVar15 = local_c0;
        uVar10 = uStack_ac;
        uVar12 = local_b0;
      }
      else {
LAB_1403c793f:
        iVar8 = (int)uVar9;
        uVar13 = uVar13 + param_6[4];
      }
      local_d8 = iVar8 + 1;
      uVar9 = (ulonglong)local_d8;
    } while (local_d8 < uVar14);
  }
  return;
}

