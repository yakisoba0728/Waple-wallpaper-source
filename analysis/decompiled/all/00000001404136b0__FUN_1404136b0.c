// Function: FUN_1404136b0
// Addr: 1404136b0
// Size: 383 bytes


ulonglong FUN_1404136b0(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  
  uVar4 = (uint)*(byte *)(param_1 + 3) + (uint)*(byte *)(param_1 + 2) * 0x100;
  if (uVar4 == 0) {
    pbVar5 = (byte *)&DAT_14045dd10;
  }
  else {
    pbVar5 = (byte *)((ulonglong)uVar4 + param_1);
  }
  uVar3 = 0;
  iVar7 = (uint)*pbVar5 * 0x100 + (uint)pbVar5[1];
  if (iVar7 == 1) {
    uVar3 = FUN_1403c70f0(pbVar5,**(undefined4 **)(param_2 + 0x10));
  }
  else {
    if (iVar7 != 2) goto LAB_140413718;
    uVar3 = FUN_1403c7170();
  }
  if ((uint)uVar3 != 0xffffffff) {
    if ((uint)uVar3 < (uint)*(byte *)(param_1 + 4) * 0x100 + (uint)*(byte *)(param_1 + 5)) {
      pbVar5 = (byte *)(param_1 + ((uVar3 & 0xffffffff) + 3) * 2);
    }
    else {
      pbVar5 = (byte *)&DAT_14045dd10;
    }
    uVar4 = (uint)*pbVar5 * 0x100 + (uint)pbVar5[1];
    if (uVar4 == 0) {
      pbVar5 = (byte *)&DAT_14045dd10;
    }
    else {
      pbVar5 = (byte *)((ulonglong)uVar4 + param_1);
    }
    uVar3 = (ulonglong)*pbVar5 << 8;
    iVar7 = (uint)pbVar5[1] + (int)uVar3;
    pbVar1 = pbVar5;
    do {
      if (iVar7 == 0) {
        return uVar3 & 0xffffffffffffff00;
      }
      uVar4 = (uint)pbVar1[2] * 0x100 + (uint)pbVar1[3];
      if (uVar4 == 0) {
        pbVar9 = (byte *)&DAT_14045dd10;
      }
      else {
        pbVar9 = pbVar5 + uVar4;
      }
      uVar3 = 0;
      uVar4 = *(uint *)(param_2 + 0x18);
      uVar8 = (uint)pbVar9[2] * 0x100 + (uint)pbVar9[3];
      if (uVar4 == uVar8) {
        if (uVar4 < 2) {
LAB_140413803:
          return CONCAT71((int7)(uVar3 >> 8),1);
        }
        uVar3 = 1;
        while( true ) {
          uVar2 = (uint)uVar3;
          if ((uVar2 < uVar8) && (uVar2 != 0)) {
            pbVar6 = pbVar9 + ((ulonglong)(uVar2 - 1) + 2) * 2;
          }
          else {
            pbVar6 = (byte *)&DAT_14045dd10;
          }
          if (*(int *)(*(longlong *)(param_2 + 0x10) + uVar3 * 4) !=
              (uint)*pbVar6 * 0x100 + (uint)pbVar6[1]) break;
          uVar3 = (ulonglong)(uVar2 + 1);
          if (uVar4 <= uVar2 + 1) goto LAB_140413803;
        }
      }
      iVar7 = iVar7 + -1;
      pbVar1 = pbVar1 + 2;
    } while( true );
  }
LAB_140413718:
  return uVar3 & 0xffffffffffffff00;
}

