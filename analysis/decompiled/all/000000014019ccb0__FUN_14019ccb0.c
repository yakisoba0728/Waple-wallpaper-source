// Function: FUN_14019ccb0
// Addr: 14019ccb0
// Size: 371 bytes


longlong FUN_14019ccb0(longlong param_1,char *param_2)

{
  byte *pbVar1;
  char cVar2;
  size_t sVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  sVar3 = strlen(param_2);
  uVar5 = 0;
  uVar8 = 0xcbf29ce484222325;
  uVar9 = 0xcbf29ce484222325;
  if (sVar3 != 0) {
    do {
      pbVar1 = (byte *)(param_2 + uVar5);
      uVar5 = uVar5 + 1;
      uVar9 = (uVar9 ^ *pbVar1) * 0x100000001b3;
    } while (uVar5 < sVar3);
  }
  lVar6 = *(longlong *)(DAT_1404e81d8 + 8 + (DAT_1404e81f0 & uVar9) * 0x10);
  if (lVar6 != DAT_1404e81c8) {
    lVar7 = *(longlong *)(DAT_1404e81d8 + (DAT_1404e81f0 & uVar9) * 0x10);
    cVar2 = FUN_14000d010(lVar6 + 0x10,param_2);
    while (cVar2 == '\0') {
      if (lVar6 == lVar7) goto LAB_14019cd5e;
      lVar6 = *(longlong *)(lVar6 + 8);
      cVar2 = FUN_14000d010(lVar6 + 0x10,param_2);
    }
    if (lVar6 != 0) goto LAB_14019cd65;
  }
LAB_14019cd5e:
  lVar6 = DAT_1404e81c8;
LAB_14019cd65:
  if (lVar6 != DAT_1404e81c8) {
    return lVar6 + 0x30;
  }
  uVar5 = 0;
  if (sVar3 != 0) {
    do {
      pbVar1 = (byte *)(param_2 + uVar5);
      uVar5 = uVar5 + 1;
      uVar8 = (uVar8 ^ *pbVar1) * 0x100000001b3;
    } while (uVar5 < sVar3);
  }
  lVar6 = *(longlong *)(param_1 + 0x60);
  uVar8 = *(ulonglong *)(param_1 + 0x88) & uVar8;
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 8 + uVar8 * 0x10);
  if (lVar7 != lVar6) {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x70) + uVar8 * 0x10);
    cVar2 = FUN_14000d010(lVar7 + 0x10,param_2);
    while( true ) {
      if (cVar2 != '\0') {
        if (lVar7 == 0) {
          lVar7 = lVar6;
        }
        lVar4 = 0;
        if (lVar7 != lVar6) {
          lVar4 = lVar7 + 0x30;
        }
        return lVar4;
      }
      if (lVar7 == lVar4) break;
      lVar7 = *(longlong *)(lVar7 + 8);
      cVar2 = FUN_14000d010(lVar7 + 0x10,param_2);
    }
  }
  return 0;
}

