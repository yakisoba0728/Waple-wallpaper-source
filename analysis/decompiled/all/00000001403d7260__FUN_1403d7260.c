// Function: FUN_1403d7260
// Addr: 1403d7260
// Size: 352 bytes


longlong FUN_1403d7260(longlong param_1,int param_2,int param_3,uint *param_4)

{
  undefined8 *puVar1;
  byte *pbVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  undefined8 *puVar10;
  
  if (param_2 == 0x47504f53) {
    puVar1 = (undefined8 *)FUN_1403c4ed0(param_1 + 0x148);
  }
  else {
    if (param_2 != 0x47535542) {
      pbVar9 = (byte *)&DAT_14045dd10;
      goto LAB_1403d72c9;
    }
    puVar1 = (undefined8 *)FUN_1403c4f70(param_1 + 0x140);
  }
  puVar10 = &DAT_14045dd10;
  if ((undefined8 *)*puVar1 != (undefined8 *)0x0) {
    puVar10 = (undefined8 *)*puVar1;
  }
  if (*(uint *)(puVar10 + 3) < 4) {
    pbVar9 = (byte *)&DAT_14045dd10;
  }
  else {
    pbVar9 = (byte *)puVar10[2];
  }
LAB_1403d72c9:
  iVar7 = (uint)*pbVar9 * 0x100 + (uint)pbVar9[1];
  if (iVar7 == 1) {
    uVar5 = (uint)pbVar9[6] * 0x100 + (uint)pbVar9[7];
    if (uVar5 == 0) {
      pbVar2 = (byte *)&DAT_14045dd10;
    }
    else {
      pbVar2 = pbVar9 + uVar5;
    }
  }
  else {
    pbVar2 = (byte *)&DAT_14045dd10;
  }
  uVar5 = 0;
  lVar3 = (ulonglong)*pbVar2 << 8;
  uVar6 = (uint)pbVar2[1] + (int)lVar3;
  if (uVar6 != 0) {
    do {
      if (uVar5 == 0xffff) {
        iVar4 = 0;
      }
      else {
        if (iVar7 == 1) {
          uVar8 = (uint)pbVar9[7] + (uint)pbVar9[6] * 0x100;
          if (uVar8 == 0) {
            pbVar2 = (byte *)&DAT_14045dd10;
          }
          else {
            pbVar2 = pbVar9 + uVar8;
          }
        }
        else {
          pbVar2 = (byte *)&DAT_14045dd10;
        }
        if (uVar5 < (uint)*pbVar2 * 0x100 + (uint)pbVar2[1]) {
          pbVar2 = pbVar2 + (ulonglong)uVar5 * 6 + 2;
        }
        else {
          pbVar2 = (byte *)&DAT_14045dd10;
        }
        lVar3 = 0;
        iVar4 = (uint)pbVar2[1] * 0x10000 + (uint)pbVar2[2] * 0x100 + (uint)*pbVar2 * 0x1000000 +
                (uint)pbVar2[3];
      }
      if (param_3 == iVar4) {
        if (param_4 != (uint *)0x0) {
          *param_4 = uVar5;
        }
        return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
  }
  if (param_4 != (uint *)0x0) {
    *param_4 = 0xffff;
  }
  return lVar3;
}

