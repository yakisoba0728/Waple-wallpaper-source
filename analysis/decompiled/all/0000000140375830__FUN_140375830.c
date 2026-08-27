// Function: FUN_140375830
// Addr: 140375830
// Size: 587 bytes


char FUN_140375830(byte *param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  bVar1 = param_1[1];
  bVar2 = *param_1;
  uVar8 = 0;
  uVar9 = (uint)param_1[4] * 0x100 + (uint)param_1[5];
  if (uVar9 != 0) {
    do {
      if (uVar8 < (uint)param_1[4] * 0x100 + (uint)param_1[5]) {
        pbVar6 = param_1 + ((ulonglong)uVar8 + 3) * 2;
      }
      else {
        pbVar6 = (byte *)&DAT_14045dd10;
      }
      uVar7 = (uint)*pbVar6 * 0x100 + (uint)pbVar6[1];
      if (uVar7 == 0) {
        pbVar6 = (byte *)&DAT_14045dd10;
      }
      else {
        pbVar6 = param_1 + uVar7;
      }
      switch((uint)bVar2 * 0x100 + (uint)bVar1) {
      case 1:
        iVar5 = (uint)*pbVar6 * 0x100 + (uint)pbVar6[1] + -1;
        if (iVar5 != 0) goto LAB_1403758e8;
LAB_140375a04:
        if (*(int *)(param_2 + 0x18) != 1) goto LAB_140375a5a;
        uVar7 = (uint)pbVar6[3] + (uint)pbVar6[2] * 0x100;
        if (uVar7 == 0) {
          pbVar6 = (byte *)&DAT_14045dd10;
        }
        else {
          pbVar6 = pbVar6 + uVar7;
        }
        uVar10 = (uint)pbVar6[1];
        uVar3 = **(undefined4 **)(param_2 + 0x10);
        uVar7 = (uint)*pbVar6 << 8;
LAB_140375a36:
        if (uVar10 + uVar7 == 1) {
          iVar5 = FUN_1403c70f0(pbVar6,uVar3);
        }
        else {
          if (uVar10 + uVar7 != 2) goto LAB_140375a5a;
          iVar5 = FUN_1403c7170();
        }
        if (iVar5 == -1) goto LAB_140375a5a;
        cVar4 = '\x01';
        break;
      case 2:
        iVar5 = (uint)*pbVar6 * 0x100 + (uint)pbVar6[1];
LAB_1403758e8:
        if ((iVar5 == 1) && (*(int *)(param_2 + 0x18) == 1)) {
          uVar7 = (uint)pbVar6[3] + (uint)pbVar6[2] * 0x100;
          if (uVar7 == 0) {
            pbVar6 = (byte *)&DAT_14045dd10;
          }
          else {
            pbVar6 = pbVar6 + uVar7;
          }
          uVar10 = (uint)*pbVar6 << 8;
          uVar3 = **(undefined4 **)(param_2 + 0x10);
          uVar7 = (uint)pbVar6[1];
          goto LAB_140375a36;
        }
        goto LAB_140375a5a;
      case 3:
      case 8:
        if ((uint)*pbVar6 * 0x100 + (uint)pbVar6[1] == 1) goto LAB_140375a04;
LAB_140375a5a:
        cVar4 = '\0';
        break;
      case 4:
        if ((uint)*pbVar6 * 0x100 + (uint)pbVar6[1] != 1) goto LAB_140375a5a;
        cVar4 = FUN_1404136b0(pbVar6,param_2);
        break;
      case 5:
        cVar4 = FUN_14037c020(pbVar6,param_2);
        break;
      case 6:
        cVar4 = FUN_14037bd90(pbVar6,param_2);
        break;
      case 7:
        if ((uint)*pbVar6 * 0x100 + (uint)pbVar6[1] != 1) goto LAB_140375a5a;
        iVar5 = (uint)pbVar6[3] + (uint)pbVar6[2] * 0x100;
        uVar7 = (uint)pbVar6[5] * 0x10000 + (uint)pbVar6[6] * 0x100 + (uint)pbVar6[4] * 0x1000000 +
                (uint)pbVar6[7];
        if (uVar7 == 0) {
          cVar4 = FUN_14037c200(&DAT_14045dd10,param_2,iVar5);
        }
        else {
          cVar4 = FUN_14037c200(pbVar6 + uVar7,param_2,iVar5);
        }
        break;
      default:
        goto switchD_1403758cf_default;
      }
      if (cVar4 != '\0') {
        return cVar4;
      }
switchD_1403758cf_default:
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar9);
  }
  return '\0';
}

