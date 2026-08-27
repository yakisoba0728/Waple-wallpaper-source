// Function: FUN_1403c7e70
// Addr: 1403c7e70
// Size: 761 bytes


ulonglong FUN_1403c7e70(undefined8 *param_1,undefined8 param_2,uint param_3,int *param_4,
                       char param_5)

{
  int iVar1;
  undefined1 *puVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  bool bVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  uint local_res8 [2];
  uint local_68;
  int local_64 [15];
  
  puVar6 = (undefined8 *)*param_1;
  puVar8 = &DAT_14045dd10;
  puVar10 = &DAT_14045dd10;
  if (puVar6 != (undefined8 *)0x0) {
    puVar10 = puVar6;
  }
  puVar5 = &DAT_14045dd10;
  if (7 < *(uint *)(puVar10 + 3)) {
    puVar5 = (undefined8 *)puVar10[2];
  }
  puVar2 = (undefined1 *)FUN_1403b32d0(puVar5);
  puVar10 = &DAT_14045dd10;
  puVar5 = &DAT_14045dd10;
  if (puVar6 != (undefined8 *)0x0) {
    puVar5 = puVar6;
  }
  if (7 < *(uint *)(puVar5 + 3)) {
    puVar10 = (undefined8 *)puVar5[2];
  }
  lVar12 = (longlong)puVar10 +
           (ulonglong)(byte)puVar2[3] +
           ((ulonglong)(byte)puVar2[2] + (ulonglong)CONCAT11(*puVar2,puVar2[1]) * 0x100) * 0x100;
  pbVar3 = (byte *)FUN_1403c27d0(lVar12,param_3,
                                 (uint)(byte)puVar2[9] * 0x10000 + (uint)(byte)puVar2[10] * 0x100 +
                                 (uint)(byte)puVar2[8] * 0x1000000 + (uint)(byte)puVar2[0xb]);
  pbVar4 = pbVar3;
  if (((pbVar3 != (byte *)0x0) && (puVar2[0x2c] != '\0')) && (puVar2[0x2d] != '\0')) {
    local_res8[0] = 0;
    local_68 = 0;
    local_64[0] = 0;
    pbVar4 = (byte *)0x0;
    uVar9 = (uint)*pbVar3 * 0x100 + (uint)pbVar3[1];
    if ((uVar9 <= param_3) &&
       (pbVar4 = (byte *)0x0, param_3 <= (uint)pbVar3[2] * 0x100 + (uint)pbVar3[3])) {
      uVar7 = (uint)pbVar3[7] +
              (uint)pbVar3[5] * 0x10000 + (uint)pbVar3[6] * 0x100 + (uint)pbVar3[4] * 0x1000000;
      if (uVar7 == 0) {
        puVar6 = &DAT_14045dd10;
      }
      else {
        puVar6 = (undefined8 *)((ulonglong)uVar7 + lVar12);
      }
      pbVar4 = (byte *)FUN_1403cad50(puVar6,param_3 - uVar9,local_res8,&local_68,local_64);
      if ((char)pbVar4 != '\0') {
        pbVar3 = (byte *)param_1[1];
        uVar11 = (ulonglong)local_res8[0];
        pbVar4 = (byte *)&DAT_14045dd10;
        if (pbVar3 != (byte *)0x0) {
          pbVar4 = pbVar3;
        }
        if ((local_res8[0] <= *(uint *)(pbVar4 + 0x18)) &&
           (local_68 <= *(uint *)(pbVar4 + 0x18) - local_res8[0])) {
          uVar9 = local_64[0] - 0x11;
          pbVar4 = (byte *)(ulonglong)uVar9;
          if (uVar9 == 0) {
            bVar13 = local_68 < 9;
          }
          else {
            if (uVar9 != 1) goto LAB_1403c814e;
            bVar13 = local_68 < 0xc;
          }
          if (!bVar13) {
            pbVar4 = (byte *)&DAT_14045dd10;
            if (pbVar3 != (byte *)0x0) {
              pbVar4 = pbVar3;
            }
            if (3 < *(uint *)(pbVar4 + 0x18)) {
              puVar8 = *(undefined8 **)(pbVar4 + 0x10);
            }
            *param_4 = (int)*(char *)(uVar11 + 2 + (longlong)puVar8);
            param_4[1] = (int)*(char *)(uVar11 + 3 + (longlong)puVar8);
            param_4[2] = (uint)*(byte *)(uVar11 + 1 + (longlong)puVar8);
            iVar1 = -(uint)*(byte *)(uVar11 + (longlong)puVar8);
            param_4[3] = iVar1;
            if (param_5 != '\0') {
              FUN_14040a0f0(param_2,param_4);
              fVar15 = DAT_1404926c0;
              fVar16 = (float)*(uint *)(param_1 + 2) / (float)(byte)puVar2[0x2c];
              fVar17 = (float)*(uint *)(param_1 + 2) / (float)(byte)puVar2[0x2d];
              fVar14 = (float)FUN_14041a5c0((float)*param_4 * fVar16 + DAT_1404926c0);
              *param_4 = (int)fVar14;
              fVar14 = (float)FUN_14041a5c0((float)param_4[1] * fVar17 + fVar15);
              param_4[1] = (int)fVar14;
              fVar14 = (float)FUN_14041a5c0((float)param_4[2] * fVar16 + fVar15);
              param_4[2] = (int)fVar14;
              fVar15 = (float)FUN_14041a5c0((float)param_4[3] * fVar17 + fVar15);
              iVar1 = (int)fVar15;
              param_4[3] = iVar1;
            }
            return CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
          }
        }
      }
    }
  }
LAB_1403c814e:
  return (ulonglong)pbVar4 & 0xffffffffffffff00;
}

