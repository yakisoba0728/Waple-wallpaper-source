// Function: FUN_1401e18b0
// Addr: 1401e18b0
// Size: 18 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1401e18b0(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  longlong lVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar4 = func_0x000140421ed0(param_2);
  uVar7 = 0;
  uVar6 = 0xcbf29ce484222325;
  if (uVar4 != 0) {
    do {
      pbVar1 = (byte *)(param_2 + uVar7);
      uVar7 = uVar7 + 1;
      uVar6 = (uVar6 ^ *pbVar1) * 0x100000001b3;
    } while (uVar7 < uVar4);
  }
  lVar5 = *(longlong *)(_DAT_1404e8378 + 8 + (uRam00000001404e8390 & uVar6) * 0x10);
  if (lVar5 != lRam00000001404e8368) {
    lVar2 = *(longlong *)(_DAT_1404e8378 + (uRam00000001404e8390 & uVar6) * 0x10);
    cVar3 = FUN_14000d0e0(lVar5 + 0x10,param_2);
    while (cVar3 == '\0') {
      if (lVar5 == lVar2) goto code_r0x0001401e195e;
      lVar5 = *(longlong *)(lVar5 + 8);
      cVar3 = FUN_14000d0e0(lVar5 + 0x10,param_2);
    }
    if (lVar5 != 0) goto code_r0x0001401e1965;
  }
code_r0x0001401e195e:
  lVar5 = lRam00000001404e8368;
code_r0x0001401e1965:
  if (lVar5 != lRam00000001404e8368) {
    return lVar5 + 0x30;
  }
  return 0;
}

