// Function: FUN_14037c2d0
// Addr: 14037c2d0
// Size: 620 bytes


undefined8 FUN_14037c2d0(byte *param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  byte *pbVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  code *pcStack_48;
  code *pcStack_40;
  code *pcStack_38;
  byte *pbStack_30;
  byte *pbStack_28;
  byte *pbStack_20;
  
  do {
    switch(param_3) {
    case 1:
      iVar3 = (uint)*param_1 * 0x100 + (uint)param_1[1] + -1;
      if (iVar3 != 0) {
LAB_14037c30b:
        if (iVar3 != 1) {
          return 0;
        }
      }
      if (*(int *)(param_2 + 0x18) != 1) {
        return 0;
      }
      uVar11 = (uint)param_1[3] + (uint)param_1[2] * 0x100;
      if (uVar11 == 0) {
        param_1 = (byte *)&DAT_14045dde0;
      }
      else {
        param_1 = param_1 + uVar11;
      }
      uVar10 = (uint)*param_1 << 8;
      uVar1 = **(undefined4 **)(param_2 + 0x10);
      uVar11 = (uint)param_1[1];
LAB_14037c460:
      if (uVar10 + uVar11 == 1) {
        pbStack_30 = (byte *)0x14037c47b;
        iVar3 = FUN_1403c71c0(param_1,uVar1);
      }
      else {
        if (uVar10 + uVar11 != 2) {
          return 0;
        }
        pbStack_30 = (byte *)0x14037c474;
        iVar3 = FUN_1403c7240();
      }
      if (iVar3 == -1) {
        return 0;
      }
      return 1;
    case 2:
    case 8:
      if ((uint)*param_1 * 0x100 + (uint)param_1[1] != 1) {
        return 0;
      }
      if (*(int *)(param_2 + 0x18) != 1) {
        return 0;
      }
      uVar11 = (uint)param_1[3] + (uint)param_1[2] * 0x100;
      if (uVar11 == 0) {
        param_1 = (byte *)&DAT_14045dde0;
      }
      else {
        param_1 = param_1 + uVar11;
      }
      uVar10 = (uint)param_1[1];
      uVar1 = **(undefined4 **)(param_2 + 0x10);
      uVar11 = (uint)*param_1 << 8;
      goto LAB_14037c460;
    case 3:
      iVar3 = (uint)*param_1 * 0x100 + (uint)param_1[1];
      goto LAB_14037c30b;
    case 4:
      if ((uint)*param_1 * 0x100 + (uint)param_1[1] == 1) {
        uVar5 = FUN_140413780(param_1);
        return uVar5;
      }
      return 0;
    case 5:
      uVar5 = FUN_14037c0f0(param_1);
      return uVar5;
    case 6:
      iVar3 = (uint)*param_1 * 0x100 + (uint)param_1[1];
      if (iVar3 == 1) {
        pbVar9 = (byte *)&DAT_14045dde0;
        uVar11 = (uint)param_1[2] * 0x100 + (uint)param_1[3];
        if (uVar11 == 0) {
          pbVar7 = (byte *)&DAT_14045dde0;
        }
        else {
          pbVar7 = param_1 + uVar11;
        }
        iVar3 = (uint)*pbVar7 * 0x100 + (uint)pbVar7[1];
        if (iVar3 == 1) {
          uVar11 = FUN_1403c71c0(pbVar7,**(undefined4 **)(param_2 + 0x10));
        }
        else if (iVar3 == 2) {
          uVar11 = FUN_1403c7240(pbVar7,**(undefined4 **)(param_2 + 0x10));
        }
        else {
          uVar11 = 0xffffffff;
        }
        if (uVar11 < (uint)param_1[4] * 0x100 + (uint)param_1[5]) {
          pbVar7 = param_1 + ((ulonglong)uVar11 + 3) * 2;
        }
        else {
          pbVar7 = (byte *)&DAT_14045dde0;
        }
        uVar11 = (uint)pbVar7[1] + (uint)*pbVar7 * 0x100;
        if (uVar11 != 0) {
          pbVar9 = param_1 + uVar11;
        }
        pbStack_20 = (byte *)0x0;
        pcStack_48 = FUN_1403ec2a0;
        pcStack_40 = FUN_1403ec2a0;
        pcStack_38 = FUN_1403ec2a0;
        pbStack_30 = (byte *)0x0;
        pbStack_28 = (byte *)0x0;
        uVar5 = func_0x000140413670(pbVar9,param_2,&pcStack_48);
        return uVar5;
      }
      if (iVar3 != 2) {
        if (iVar3 == 3) {
          iVar3 = (uint)param_1[2] * 0x100 + (uint)param_1[3];
          uVar11 = iVar3 * 2 + 2;
          if (((*(char *)(param_2 + 0x1c) == '\0') ||
              ((iVar3 == 0 &&
               (uVar6 = (ulonglong)
                        CONCAT11(param_1[(ulonglong)uVar11 + 2],param_1[(ulonglong)uVar11 + 3]),
               (uint)param_1[uVar6 * 2 + 6] * 0x100 + (uint)param_1[uVar6 * 2 + 7] == 0)))) &&
             (cVar2 = func_0x00014038e630(param_2,(uint)param_1[(ulonglong)uVar11 + 2] * 0x100 +
                                                  (uint)param_1[(ulonglong)uVar11 + 3],
                                          param_1 + (ulonglong)uVar11 + 6,FUN_1403ec220,param_1),
             cVar2 != '\0')) {
            return 1;
          }
        }
        return 0;
      }
      pbVar9 = (byte *)&DAT_14045dde0;
      uVar11 = (uint)param_1[4] * 0x100 + (uint)param_1[5];
      if (uVar11 == 0) {
        pbVar7 = (byte *)&DAT_14045dde0;
      }
      else {
        pbVar7 = param_1 + uVar11;
      }
      uVar11 = (uint)param_1[7] + (uint)param_1[6] * 0x100;
      if (uVar11 == 0) {
        pbVar8 = (byte *)&DAT_14045dde0;
      }
      else {
        pbVar8 = param_1 + uVar11;
      }
      uVar11 = (uint)param_1[8] * 0x100 + (uint)param_1[9];
      if (uVar11 == 0) {
        pbVar12 = (byte *)&DAT_14045dde0;
      }
      else {
        pbVar12 = param_1 + uVar11;
      }
      uVar11 = func_0x0001403c6850(pbVar8,**(undefined4 **)(param_2 + 0x10));
      if (uVar11 < (uint)param_1[0xb] + (uint)param_1[10] * 0x100) {
        pbVar4 = param_1 + ((ulonglong)uVar11 + 6) * 2;
      }
      else {
        pbVar4 = (byte *)&DAT_14045dde0;
      }
      uVar11 = (uint)pbVar4[1] + (uint)*pbVar4 * 0x100;
      if (uVar11 != 0) {
        pbVar9 = param_1 + uVar11;
      }
      pcStack_48 = FUN_1403ec120;
      pcStack_40 = FUN_1403ec120;
      pcStack_38 = FUN_1403ec120;
      pbStack_30 = pbVar7;
      pbStack_28 = pbVar8;
      pbStack_20 = pbVar12;
      uVar5 = func_0x000140413670(pbVar9,param_2,&pcStack_48);
      return uVar5;
    case 7:
      if ((uint)*param_1 * 0x100 + (uint)param_1[1] != 1) {
        return 0;
      }
      param_3 = (uint)param_1[3] + (uint)param_1[2] * 0x100;
      uVar11 = (uint)param_1[5] * 0x10000 + (uint)param_1[6] * 0x100 + (uint)param_1[4] * 0x1000000
               + (uint)param_1[7];
      if (uVar11 == 0) {
        param_1 = (byte *)&DAT_14045dde0;
      }
      else {
        param_1 = param_1 + uVar11;
      }
      break;
    default:
      return 0;
    }
  } while( true );
}

