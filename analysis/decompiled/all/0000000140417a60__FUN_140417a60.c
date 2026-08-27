// Function: FUN_140417a60
// Addr: 140417a60
// Size: 1181 bytes


/* WARNING: Removing unreachable block (ram,0x000140417dc0) */

undefined8 FUN_140417a60(longlong param_1,int param_2,longlong param_3,uint param_4,uint *param_5)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int iVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  byte *pbVar13;
  ulonglong uVar14;
  byte *pbVar15;
  ulonglong uVar16;
  float fVar17;
  uint local_res20;
  
  if (param_2 == 0x47504f53) {
    puVar12 = (undefined8 *)FUN_1403c4ed0(param_1 + 0x148);
  }
  else {
    if (param_2 != 0x47535542) {
      puVar12 = &DAT_14045dd10;
      goto LAB_140417ad1;
    }
    puVar12 = (undefined8 *)FUN_1403c4f70(param_1 + 0x140);
  }
  puVar11 = &DAT_14045dd10;
  if ((undefined8 *)*puVar12 != (undefined8 *)0x0) {
    puVar11 = (undefined8 *)*puVar12;
  }
  if (*(uint *)(puVar11 + 3) < 4) {
    puVar12 = &DAT_14045dd10;
  }
  else {
    puVar12 = (undefined8 *)puVar11[2];
  }
LAB_140417ad1:
  FUN_1403c4e30(param_1 + 0x138);
  puVar5 = (undefined8 *)FUN_1403d0040();
  puVar11 = &DAT_14045dd10;
  if (puVar5 != (undefined8 *)0x0) {
    puVar11 = puVar5;
  }
  lVar6 = FUN_1403c91d0(puVar12);
  uVar4 = (uint)*(byte *)(lVar6 + 5) * 0x10000 + (uint)*(byte *)(lVar6 + 6) * 0x100 +
          (uint)*(byte *)(lVar6 + 4) * 0x1000000 + (uint)*(byte *)(lVar6 + 7);
  local_res20 = 0;
  if (uVar4 == 0) {
LAB_140417ec4:
    *param_5 = 0xffffffff;
    return 0;
  }
LAB_140417ba0:
  uVar16 = (ulonglong)local_res20;
  uVar9 = (uint)*(byte *)(lVar6 + 0xb + uVar16 * 8) +
          (uint)*(byte *)(lVar6 + 8 + uVar16 * 8) * 0x1000000 +
          (uint)*(byte *)(lVar6 + 9 + uVar16 * 8) * 0x10000 +
          (uint)*(byte *)(lVar6 + 10 + uVar16 * 8) * 0x100;
  if (uVar9 == 0) {
    pbVar15 = (byte *)&DAT_14045dd10;
  }
  else {
    pbVar15 = (byte *)((ulonglong)uVar9 + lVar6);
  }
  uVar16 = 0;
  uVar9 = (uint)*pbVar15 * 0x100 + (uint)pbVar15[1];
  if (uVar9 == 0) {
LAB_140417eac:
    *param_5 = local_res20;
    return 1;
  }
  do {
    uVar10 = (uint)pbVar15[uVar16 * 4 + 5] +
             (uint)pbVar15[uVar16 * 4 + 3] * 0x10000 + (uint)pbVar15[uVar16 * 4 + 4] * 0x100 +
             (uint)pbVar15[uVar16 * 4 + 2] * 0x1000000;
    if (uVar10 == 0) {
      pbVar13 = (byte *)&DAT_14045dd10;
    }
    else {
      pbVar13 = pbVar15 + uVar10;
    }
    iVar7 = (uint)*pbVar13 * 0x100 + (uint)pbVar13[1];
    if (iVar7 == 1) {
      if ((uint)pbVar13[2] * 0x100 + (uint)pbVar13[3] < param_4) {
        iVar7 = *(int *)(param_3 + (ulonglong)CONCAT11(pbVar13[2],pbVar13[3]) * 4);
      }
      else {
        iVar7 = 0;
      }
      if ((iVar7 < (short)((ushort)pbVar13[5] + (ushort)pbVar13[4] * 0x100)) ||
         ((short)((ushort)pbVar13[6] * 0x100 + (ushort)pbVar13[7]) < iVar7)) {
        bVar2 = 0;
      }
      else {
        bVar2 = 1;
      }
    }
    else if (iVar7 == 2) {
      bVar2 = pbVar13[2];
      bVar1 = pbVar13[3];
      if ((param_4 == 0) ||
         (iVar7 = (uint)pbVar13[7] +
                  (uint)pbVar13[5] * 0x10000 + (uint)pbVar13[6] * 0x100 +
                  (uint)pbVar13[4] * 0x1000000, iVar7 == -1)) {
        fVar17 = 0.0;
      }
      else {
        fVar17 = (float)FUN_1403c7460(puVar11,iVar7,param_3,param_4,0);
      }
      bVar2 = 0.0 < (float)(int)(short)((ushort)bVar1 + (ushort)bVar2 * 0x100) + fVar17;
    }
    else if (iVar7 == 3) {
      bVar2 = pbVar13[2];
      uVar14 = 0;
      if (bVar2 != 0) {
        do {
          uVar10 = (uint)pbVar13[uVar14 * 3 + 5] +
                   (uint)pbVar13[uVar14 * 3 + 3] * 0x10000 + (uint)pbVar13[uVar14 * 3 + 4] * 0x100;
          if (uVar10 == 0) {
            pbVar8 = (byte *)&DAT_14045dd10;
          }
          else {
            pbVar8 = pbVar13 + uVar10;
          }
          cVar3 = FUN_140386440(pbVar8,param_3,param_4);
          if (cVar3 == '\0') {
            bVar2 = 0;
            goto LAB_140417e69;
          }
          uVar10 = (int)uVar14 + 1;
          uVar14 = (ulonglong)uVar10;
        } while (uVar10 < bVar2);
      }
      bVar2 = 1;
    }
    else if (iVar7 == 4) {
      bVar2 = pbVar13[2];
      uVar14 = 0;
      if (bVar2 != 0) {
        do {
          uVar10 = (uint)pbVar13[uVar14 * 3 + 5] +
                   (uint)pbVar13[uVar14 * 3 + 3] * 0x10000 + (uint)pbVar13[uVar14 * 3 + 4] * 0x100;
          if (uVar10 == 0) {
            pbVar8 = (byte *)&DAT_14045dd10;
          }
          else {
            pbVar8 = pbVar13 + uVar10;
          }
          cVar3 = FUN_140386440(pbVar8,param_3,param_4);
          if (cVar3 != '\0') {
            bVar2 = 1;
            goto LAB_140417e69;
          }
          uVar10 = (int)uVar14 + 1;
          uVar14 = (ulonglong)uVar10;
        } while (uVar10 < bVar2);
      }
      bVar2 = 0;
    }
    else {
      if (iVar7 != 5) break;
      uVar10 = (uint)pbVar13[3] * 0x100 + (uint)pbVar13[2] * 0x10000 + (uint)pbVar13[4];
      if (uVar10 == 0) {
        pbVar13 = (byte *)&DAT_14045dd10;
      }
      else {
        pbVar13 = pbVar13 + uVar10;
      }
      bVar2 = FUN_140386440(pbVar13,param_3,param_4);
      bVar2 = bVar2 ^ 1;
    }
LAB_140417e69:
    if (bVar2 == 0) break;
    uVar10 = (int)uVar16 + 1;
    uVar16 = (ulonglong)uVar10;
    if (uVar9 <= uVar10) goto LAB_140417eac;
  } while( true );
  local_res20 = local_res20 + 1;
  if (uVar4 <= local_res20) goto LAB_140417ec4;
  goto LAB_140417ba0;
}

