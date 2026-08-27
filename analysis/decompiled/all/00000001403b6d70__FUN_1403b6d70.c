// Function: FUN_1403b6d70
// Addr: 1403b6d70
// Size: 706 bytes


void FUN_1403b6d70(undefined8 *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  uint uVar8;
  byte *pbVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  char cVar14;
  ulonglong uVar15;
  undefined4 local_68;
  undefined1 local_64;
  undefined8 local_60;
  char local_58 [4];
  undefined4 local_54;
  uint local_50;
  undefined8 local_48;
  ulonglong local_40;
  undefined8 local_38;
  ulonglong local_30;
  char local_28;
  
  if (param_2 == (uint *)0x0) {
    *(undefined1 *)(param_1 + 0xb) = 0;
    return;
  }
  *(undefined1 *)(param_1 + 0xb) = 1;
  cVar14 = '\x01';
  uVar12 = *param_2;
  local_68 = 1;
  local_64 = 1;
  uVar15 = 0;
  local_60 = 0;
  local_28 = '\0';
  local_58[0] = '\x01';
  local_54 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  uVar10 = uVar15;
  uVar13 = uVar15;
  while (uVar5 = uVar15, uVar12 != 0) {
    if (local_28 == '\0') {
      if ((cVar14 != '\0') && (uVar12 != 0xffffffff)) {
        local_54 = 0xffffffff;
        puVar6 = (undefined4 *)FUN_1403ed560(local_58,uVar12,1);
        uVar10 = local_30;
        uVar13 = local_40;
        cVar14 = local_58[0];
        if (puVar6 != (undefined4 *)0x0) {
          uVar5 = (ulonglong)(uVar12 >> 6 & 7);
          *(ulonglong *)(puVar6 + uVar5 * 2 + 2) =
               *(ulonglong *)(puVar6 + uVar5 * 2 + 2) | 1L << (ulonglong)(uVar12 & 0x3f);
          *puVar6 = 0xffffffff;
        }
      }
    }
    else if (cVar14 != '\0') {
      local_48._4_4_ = (uint)((ulonglong)local_48 >> 0x20);
      if ((local_50 < local_48._4_4_) &&
         (*(uint *)(uVar13 + (ulonglong)local_50 * 8) == uVar12 >> 9)) {
        uVar2 = *(uint *)(uVar13 + 4 + (ulonglong)local_50 * 8);
LAB_1403b6e5f:
        puVar6 = (undefined4 *)(uVar10 + (ulonglong)uVar2 * 0x48);
        if (puVar6 != (undefined4 *)0x0) {
          uVar5 = (ulonglong)(uVar12 >> 6 & 7);
          local_54 = 0xffffffff;
          *(ulonglong *)(puVar6 + uVar5 * 2 + 2) =
               *(ulonglong *)(puVar6 + uVar5 * 2 + 2) & ~(1L << (uVar12 & 0x3f));
          *puVar6 = 0xffffffff;
        }
      }
      else {
        iVar11 = local_48._4_4_ - 1;
        if (-1 < iVar11) {
          do {
            uVar8 = (uint)(iVar11 + (int)uVar5) >> 1;
            iVar4 = (uVar12 >> 9) - *(int *)(uVar13 + (ulonglong)uVar8 * 8);
            if (iVar4 < 0) {
              iVar11 = uVar8 - 1;
            }
            else {
              if (iVar4 < 1) {
                uVar2 = *(uint *)(uVar13 + 4 + (ulonglong)uVar8 * 8);
                local_50 = uVar8;
                goto LAB_1403b6e5f;
              }
              uVar5 = (ulonglong)(uVar8 + 1);
            }
          } while ((int)uVar5 <= iVar11);
        }
      }
    }
    puVar1 = param_2 + 1;
    param_2 = param_2 + 1;
    uVar12 = *puVar1;
  }
  do {
    while( true ) {
      cVar14 = local_28;
      pbVar9 = (byte *)*param_1;
      iVar11 = (uint)pbVar9[1] + (uint)*pbVar9 * 0x100;
      if (iVar11 == 1) {
        uVar12 = (uint)pbVar9[7] + (uint)pbVar9[6] * 0x100;
        if (uVar12 == 0) {
          pbVar7 = (byte *)&DAT_14045dd10;
        }
        else {
          pbVar7 = pbVar9 + uVar12;
        }
      }
      else {
        pbVar7 = (byte *)&DAT_14045dd10;
      }
      uVar12 = (uint)uVar5;
      if ((uint)pbVar7[1] + (uint)*pbVar7 * 0x100 <= uVar12) {
        FUN_140396110(&local_68);
        return;
      }
      uVar10 = uVar15;
      if (uVar12 != 0xffff) {
        if (iVar11 == 1) {
          uVar8 = (uint)pbVar9[6] * 0x100 + (uint)pbVar9[7];
          if (uVar8 == 0) {
            pbVar9 = (byte *)&DAT_14045dd10;
          }
          else {
            pbVar9 = pbVar9 + uVar8;
          }
        }
        else {
          pbVar9 = (byte *)&DAT_14045dd10;
        }
        if (uVar12 < (uint)pbVar9[1] + (uint)*pbVar9 * 0x100) {
          pbVar9 = pbVar9 + uVar5 * 6 + 2;
        }
        else {
          pbVar9 = (byte *)&DAT_14045dd10;
        }
        uVar10 = (ulonglong)
                 ((uint)pbVar9[1] * 0x10000 + (uint)pbVar9[2] * 0x100 + (uint)*pbVar9 * 0x1000000 +
                 (uint)pbVar9[3]);
      }
      cVar3 = FUN_1403c58e0(local_58,uVar10);
      if (cVar3 != cVar14) break;
LAB_1403b7001:
      uVar5 = (ulonglong)(uVar12 + 1);
    }
    if (*(char *)(param_1 + 10) == '\0') {
      FUN_1403a2a90(param_1 + 4,uVar5);
      goto LAB_1403b7001;
    }
    FUN_1403bd8a0();
    uVar5 = (ulonglong)(uVar12 + 1);
  } while( true );
}

