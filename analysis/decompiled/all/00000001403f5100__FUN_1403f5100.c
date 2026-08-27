// Function: FUN_1403f5100
// Addr: 1403f5100
// Size: 402 bytes


void FUN_1403f5100(longlong param_1,undefined8 param_2,uint param_3,uint param_4,int param_5)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar8;
  ulonglong uVar7;
  
  uVar5 = (ulonglong)param_3;
  lVar1 = param_1 + uVar5 * 0x14;
  uVar6 = (int)*(short *)(param_1 + 0x10 + uVar5 * 0x14) + param_3;
  uVar7 = (ulonglong)uVar6;
  *(undefined2 *)(lVar1 + 0x10) = 0;
  if ((uVar6 < (uint)param_2) && (param_5 != 0)) {
    bVar3 = *(byte *)(lVar1 + 0x12);
    lVar2 = param_1 + uVar7 * 0x14;
    if (*(short *)(param_1 + 0x10 + uVar7 * 0x14) != 0) {
      FUN_1403f5100(param_1,param_2,uVar6,param_4,param_5 + -1);
    }
    if ((bVar3 & 2) == 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + *(int *)(lVar2 + 8);
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + *(int *)(lVar2 + 0xc);
      iVar4 = *(int *)(lVar1 + 8);
      iVar8 = *(int *)(lVar1 + 0xc);
      if (uVar6 < param_3) {
        if ((param_4 & 0xfffffffd) == 4) {
          do {
            uVar6 = (int)uVar7 + 1;
            iVar4 = iVar4 - *(int *)(param_1 + uVar7 * 0x14);
            *(int *)(lVar1 + 8) = iVar4;
            iVar8 = iVar8 - *(int *)(param_1 + 4 + uVar7 * 0x14);
            *(int *)(lVar1 + 0xc) = iVar8;
            uVar7 = (ulonglong)uVar6;
          } while (uVar6 < param_3);
        }
        else {
          while (uVar6 = uVar6 + 1, uVar6 < param_3 + 1) {
            iVar4 = iVar4 + *(int *)(param_1 + (ulonglong)uVar6 * 0x14);
            *(int *)(lVar1 + 8) = iVar4;
            iVar8 = iVar8 + *(int *)(param_1 + 4 + (ulonglong)uVar6 * 0x14);
            *(int *)(lVar1 + 0xc) = iVar8;
          }
        }
      }
      else if ((param_4 & 0xfffffffd) == 4) {
        while (param_3 < uVar6) {
          param_3 = (int)uVar5 + 1;
          iVar4 = iVar4 + *(int *)(param_1 + uVar5 * 0x14);
          *(int *)(lVar1 + 8) = iVar4;
          iVar8 = iVar8 + *(int *)(param_1 + 4 + uVar5 * 0x14);
          *(int *)(lVar1 + 0xc) = iVar8;
          uVar5 = (ulonglong)param_3;
        }
      }
      else {
        while (param_3 = param_3 + 1, param_3 < uVar6 + 1) {
          iVar4 = iVar4 - *(int *)(param_1 + (ulonglong)param_3 * 0x14);
          *(int *)(lVar1 + 8) = iVar4;
          iVar8 = iVar8 - *(int *)(param_1 + 4 + (ulonglong)param_3 * 0x14);
          *(int *)(lVar1 + 0xc) = iVar8;
        }
      }
    }
    else if ((param_4 & 0xfffffffe) == 4) {
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + *(int *)(lVar2 + 0xc);
    }
    else {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + *(int *)(lVar2 + 8);
    }
  }
  return;
}

