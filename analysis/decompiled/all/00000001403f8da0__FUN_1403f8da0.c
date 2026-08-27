// Function: FUN_1403f8da0
// Addr: 1403f8da0
// Size: 195 bytes


void FUN_1403f8da0(longlong param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  longlong lVar1;
  byte bVar2;
  short sVar3;
  ulonglong uVar4;
  
  sVar3 = *(short *)(param_1 + 0x10 + (ulonglong)param_3 * 0x14);
  lVar1 = param_1 + (ulonglong)param_3 * 0x14;
  if ((sVar3 != 0) && (bVar2 = *(byte *)(lVar1 + 0x12), (bVar2 & 2) != 0)) {
    param_3 = (int)sVar3 + param_3;
    uVar4 = (ulonglong)param_3;
    *(undefined2 *)(lVar1 + 0x10) = 0;
    if ((param_3 < param_2) && ((param_3 != param_5 && ((int)-sVar3 == -(int)sVar3)))) {
      FUN_1403f8da0(param_1,param_2,param_3,param_4,param_5);
      if ((param_4 & 0xfffffffe) == 4) {
        *(int *)(param_1 + 0xc + uVar4 * 0x14) = -*(int *)(lVar1 + 0xc);
      }
      else {
        *(int *)(param_1 + 8 + uVar4 * 0x14) = -*(int *)(lVar1 + 8);
      }
      *(short *)(param_1 + 0x10 + uVar4 * 0x14) = -sVar3;
      *(byte *)(param_1 + 0x12 + uVar4 * 0x14) = bVar2;
    }
  }
  return;
}

