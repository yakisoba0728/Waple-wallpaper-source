// Function: FUN_14039cc50
// Addr: 14039cc50
// Size: 228 bytes


int FUN_14039cc50(undefined8 param_1,uint param_2,uint *param_3,int *param_4,longlong *param_5)

{
  byte *pbVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  
  if (*(uint *)(*param_5 + 0x18) < 4) {
    puVar5 = &DAT_14045dd10;
  }
  else {
    puVar5 = *(undefined8 **)(*param_5 + 0x10);
  }
  lVar2 = FUN_1403c8890(puVar5,(short)param_5[1],0);
  pbVar1 = (byte *)(lVar2 + 4);
  if (param_3 != (uint *)0x0) {
    uVar7 = *param_3;
    uVar6 = (uint)*pbVar1 * 0x100 + (uint)*(byte *)(lVar2 + 5);
    uVar3 = 0;
    if (param_2 <= uVar6) {
      uVar3 = uVar6 - param_2;
    }
    uVar6 = uVar7;
    if (uVar3 <= uVar7) {
      uVar6 = uVar3;
    }
    *param_3 = uVar6;
    puVar8 = (uint *)(pbVar1 + (ulonglong)param_2 * 0x10 + 8);
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      uVar3 = *puVar8;
      iVar4 = uVar3 * 0x1000000 + (uVar3 >> 0x10 & 0xff) * 0x100 + (uVar3 >> 8 & 0xff) * 0x10000 +
              (uVar3 >> 0x18);
      if (uVar7 != 0) {
        uVar7 = uVar7 - 1;
        *param_4 = iVar4;
        param_4 = param_4 + 1;
        iVar4 = (int)DAT_1404e4f20;
      }
      DAT_1404e4f20._0_4_ = iVar4;
      if (uVar6 == 0) break;
      puVar8 = puVar8 + 4;
    }
  }
  return (uint)*pbVar1 * 0x100 + (uint)*(byte *)(lVar2 + 5);
}

