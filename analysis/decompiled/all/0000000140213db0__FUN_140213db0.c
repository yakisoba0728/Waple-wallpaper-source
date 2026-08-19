// Function: FUN_140213db0
// Addr: 140213db0
// Size: 18 bytes


longlong FUN_140213db0(undefined8 param_1,longlong param_2)

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
  lVar5 = *(longlong *)(lRam00000001404e8788 + 8 + (uRam00000001404e87a0 & uVar6) * 0x10);
  if (lVar5 != lRam00000001404e8778) {
    lVar2 = *(longlong *)(lRam00000001404e8788 + (uRam00000001404e87a0 & uVar6) * 0x10);
    cVar3 = FUN_14000d0e0(lVar5 + 0x10,param_2);
    while (cVar3 == '\0') {
      if (lVar5 == lVar2) goto code_r0x000140213e5e;
      lVar5 = *(longlong *)(lVar5 + 8);
      cVar3 = FUN_14000d0e0(lVar5 + 0x10,param_2);
    }
    if (lVar5 != 0) goto code_r0x000140213e65;
  }
code_r0x000140213e5e:
  lVar5 = lRam00000001404e8778;
code_r0x000140213e65:
  if (lVar5 != lRam00000001404e8778) {
    return lVar5 + 0x30;
  }
  return 0;
}

