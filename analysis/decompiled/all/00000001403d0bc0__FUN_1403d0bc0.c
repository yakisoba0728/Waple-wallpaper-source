// Function: FUN_1403d0bc0
// Addr: 1403d0bc0
// Size: 383 bytes


ulonglong FUN_1403d0bc0(longlong *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  
  uVar11 = 0;
  do {
    uVar1 = *(undefined4 *)((longlong)param_1 + uVar11 * 4 + 0x40);
    uVar2 = *(undefined4 *)((longlong)param_1 + uVar11 * 4 + 0x38);
    if ((&DAT_1404621a0)[uVar11] == 0x47504f53) {
      puVar3 = (undefined8 *)FUN_1403c4ed0(*param_1 + 0x148);
LAB_1403d0c31:
      puVar10 = &DAT_14045dd10;
      if ((undefined8 *)*puVar3 != (undefined8 *)0x0) {
        puVar10 = (undefined8 *)*puVar3;
      }
      if (*(uint *)(puVar10 + 3) < 4) {
        pbVar9 = (byte *)&DAT_14045dd10;
      }
      else {
        pbVar9 = (byte *)puVar10[2];
      }
    }
    else {
      if ((&DAT_1404621a0)[uVar11] == 0x47535542) {
        puVar3 = (undefined8 *)FUN_1403c4f70(*param_1 + 0x140);
        goto LAB_1403d0c31;
      }
      pbVar9 = (byte *)&DAT_14045dd10;
    }
    uVar4 = FUN_1403ce450(pbVar9,uVar2);
    uVar5 = FUN_1403cbdc0(uVar4,uVar1);
    uVar14 = (uint)*(byte *)(uVar5 + 5) + (uint)*(byte *)(uVar5 + 4) * 0x100;
    uVar6 = uVar5;
    if (uVar14 != 0) {
      uVar12 = 0;
      do {
        uVar13 = (uint)*(byte *)(uVar5 + 7 + uVar12 * 2) +
                 (uint)*(byte *)(uVar5 + 6 + uVar12 * 2) * 0x100;
        if (uVar13 == 0xffff) {
          uVar6 = 0;
        }
        else {
          if ((uint)*pbVar9 * 0x100 + (uint)pbVar9[1] == 1) {
            uVar7 = (uint)pbVar9[7] + (uint)pbVar9[6] * 0x100;
            if (uVar7 == 0) {
              pbVar8 = (byte *)&DAT_14045dd10;
            }
            else {
              pbVar8 = pbVar9 + uVar7;
            }
          }
          else {
            pbVar8 = (byte *)&DAT_14045dd10;
          }
          if (uVar13 < (uint)pbVar8[1] + (uint)*pbVar8 * 0x100) {
            pbVar8 = pbVar8 + (ulonglong)uVar13 * 6 + 2;
          }
          else {
            pbVar8 = (byte *)&DAT_14045dd10;
          }
          uVar6 = (ulonglong)
                  ((uint)pbVar8[1] * 0x10000 + (uint)pbVar8[2] * 0x100 + (uint)*pbVar8 * 0x1000000 +
                  (uint)pbVar8[3]);
        }
        if (param_2 == (int)uVar6) {
          return CONCAT71((int7)(uVar6 >> 8),1);
        }
        uVar13 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar13;
      } while (uVar13 < uVar14);
    }
    uVar14 = (int)uVar11 + 1;
    uVar11 = (ulonglong)uVar14;
    if (1 < uVar14) {
      return uVar6 & 0xffffffffffffff00;
    }
  } while( true );
}

