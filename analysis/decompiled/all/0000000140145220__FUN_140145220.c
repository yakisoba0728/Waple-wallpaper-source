// Function: FUN_140145220
// Addr: 140145220
// Size: 390 bytes


void FUN_140145220(undefined8 *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  
  bVar3 = (byte)param_2 - 4;
  iVar5 = 1 << (bVar3 & 0x1f);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = (longlong)(2 << (bVar3 & 0x1f));
  param_1[4] = (longlong)iVar5;
  param_1[6] = (longlong)-iVar5;
  param_1[3] = 8;
  param_1[5] = 0x10;
  param_1[7] = 0x18;
  if (5 < param_2) {
    bVar3 = (byte)param_2 & 0x1f;
    uVar8 = 1 << bVar3 | 1U >> 0x20 - bVar3;
    iVar5 = 1;
    do {
      iVar7 = param_2 + -2;
      bVar9 = (uVar8 & 1) != 0;
      uVar6 = uVar8 >> 1 | (uint)bVar9 << 0x1f;
      if (iVar7 < 5) {
        uVar8 = uVar6;
        if (bVar9) {
          uVar8 = uVar6 + 3;
        }
        lVar4 = (longlong)((int)uVar8 >> 2);
        param_1[lVar4] = (longlong)(iVar5 * 2);
        param_1[lVar4 + 1] = (longlong)(int)uVar6;
        uVar8 = uVar6;
        if (param_2 == 6) {
          param_1[lVar4 + 2] = (longlong)(iVar5 * 10);
          param_1[lVar4 + 3] = (longlong)(int)(uVar6 + 8);
        }
      }
      else {
        FUN_1401453b0(param_1,param_2 + -3,iVar5,uVar6,iVar5 * 8);
        uVar1 = uVar8 >> 3;
        uVar2 = uVar8 << 0x1d;
        uVar8 = uVar6;
        FUN_1401453b0(param_1,param_2 + -4,iVar5 * 5,uVar6 + (uVar1 | uVar2),iVar5 << 4);
        FUN_1401453b0(param_1,param_2 + -4,iVar5 * -3,(3 << ((char)param_2 - 4U & 0x1f)) + uVar8,
                      iVar5 << 4);
      }
      FUN_1401453b0(param_1,iVar7,-iVar5,3 << ((byte)iVar7 & 0x1f),iVar5 * 4);
      param_2 = param_2 + -1;
      iVar5 = iVar5 * 2;
    } while (5 < param_2);
  }
  return;
}

