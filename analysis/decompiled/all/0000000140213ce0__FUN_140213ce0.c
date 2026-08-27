// Function: FUN_140213ce0
// Addr: 140213ce0
// Size: 228 bytes


longlong FUN_140213ce0(undefined8 param_1,char *param_2)

{
  byte *pbVar1;
  longlong lVar2;
  char cVar3;
  size_t sVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  sVar4 = strlen(param_2);
  uVar7 = 0;
  uVar6 = 0xcbf29ce484222325;
  if (sVar4 != 0) {
    do {
      pbVar1 = (byte *)(param_2 + uVar7);
      uVar7 = uVar7 + 1;
      uVar6 = (uVar6 ^ *pbVar1) * 0x100000001b3;
    } while (uVar7 < sVar4);
  }
  lVar5 = *(longlong *)(DAT_1404e86b8 + 8 + (DAT_1404e86d0 & uVar6) * 0x10);
  if (lVar5 != DAT_1404e86a8) {
    lVar2 = *(longlong *)(DAT_1404e86b8 + (DAT_1404e86d0 & uVar6) * 0x10);
    cVar3 = FUN_14000d010(lVar5 + 0x10,param_2);
    while (cVar3 == '\0') {
      if (lVar5 == lVar2) goto LAB_140213d8e;
      lVar5 = *(longlong *)(lVar5 + 8);
      cVar3 = FUN_14000d010(lVar5 + 0x10,param_2);
    }
    if (lVar5 != 0) goto LAB_140213d95;
  }
LAB_140213d8e:
  lVar5 = DAT_1404e86a8;
LAB_140213d95:
  if (lVar5 != DAT_1404e86a8) {
    return lVar5 + 0x30;
  }
  return 0;
}

