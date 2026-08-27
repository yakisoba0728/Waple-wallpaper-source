// Function: FUN_1401e1ca0
// Addr: 1401e1ca0
// Size: 370 bytes


longlong FUN_1401e1ca0(longlong param_1,char *param_2)

{
  byte *pbVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  size_t sVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  sVar5 = strlen(param_2);
  uVar7 = 0;
  uVar8 = 0xcbf29ce484222325;
  uVar9 = 0xcbf29ce484222325;
  if (sVar5 != 0) {
    do {
      pbVar1 = (byte *)(param_2 + uVar7);
      uVar7 = uVar7 + 1;
      uVar9 = (uVar9 ^ *pbVar1) * 0x100000001b3;
    } while (uVar7 < sVar5);
  }
  lVar6 = *(longlong *)(DAT_1404e82e8 + 8 + (DAT_1404e8300 & uVar9) * 0x10);
  if (lVar6 == DAT_1404e82d8) {
LAB_1401e1d4e:
    lVar6 = DAT_1404e82d8;
  }
  else {
    lVar2 = *(longlong *)(DAT_1404e82e8 + (DAT_1404e8300 & uVar9) * 0x10);
    cVar4 = FUN_14000d010(lVar6 + 0x10,param_2);
    while (cVar4 == '\0') {
      if (lVar6 == lVar2) goto LAB_1401e1d4e;
      lVar6 = *(longlong *)(lVar6 + 8);
      cVar4 = FUN_14000d010(lVar6 + 0x10,param_2);
    }
    if (lVar6 == 0) goto LAB_1401e1d4e;
  }
  if (lVar6 != DAT_1404e82d8) {
LAB_1401e1d5e:
    return lVar6 + 0x30;
  }
  uVar7 = 0;
  if (sVar5 != 0) {
    do {
      pbVar1 = (byte *)(param_2 + uVar7);
      uVar7 = uVar7 + 1;
      uVar8 = (uVar8 ^ *pbVar1) * 0x100000001b3;
    } while (uVar7 < sVar5);
  }
  lVar2 = *(longlong *)(param_1 + 0x248);
  uVar8 = *(ulonglong *)(param_1 + 0x270) & uVar8;
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 600) + 8 + uVar8 * 0x10);
  if (lVar6 != lVar2) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 600) + uVar8 * 0x10);
    cVar4 = FUN_14000d010(lVar6 + 0x10,param_2);
    while (cVar4 == '\0') {
      if (lVar6 == lVar3) goto LAB_1401e1df9;
      lVar6 = *(longlong *)(lVar6 + 8);
      cVar4 = FUN_14000d010(lVar6 + 0x10,param_2);
    }
    if (lVar6 == 0) {
      lVar6 = lVar2;
    }
    if (lVar6 != lVar2) goto LAB_1401e1d5e;
  }
LAB_1401e1df9:
  lVar6 = FUN_1401e1390(param_1,param_2);
  return lVar6;
}

