// Function: FUN_140307a40
// Addr: 140307a40
// Size: 248 bytes


undefined8 FUN_140307a40(longlong param_1,uint param_2,longlong param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  if (((*(longlong *)(param_1 + 0x408) != 0) || (uVar6 = FUN_1403073d0(param_1,0), (int)uVar6 == 0))
     && ((puVar3 = *(uint **)(param_1 + 0x408), *(longlong *)(puVar3 + 2) != 0 ||
         (uVar6 = FUN_140313fd0(param_1,0,0,1), (int)uVar6 == 0)))) {
    uVar5 = param_2;
    if (*puVar3 < param_2) {
      uVar5 = *puVar3;
    }
    lVar8 = *(longlong *)(*(longlong *)(puVar3 + 6) + 0x10);
    uVar7 = 0;
    if (*(char *)(param_1 + 0x401) == '\0') {
      if (uVar5 != 0) {
        do {
          puVar1 = (undefined4 *)(lVar8 + 0xc);
          lVar8 = lVar8 + 0x20;
          *(undefined4 *)(param_3 + uVar7 * 4) = *puVar1;
          uVar4 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar4;
        } while (uVar4 < uVar5);
      }
    }
    else if (uVar5 != 0) {
      do {
        lVar2 = uVar7 * 4;
        lVar8 = lVar8 + 0x20;
        uVar4 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar4;
        *(undefined4 *)(lVar2 + param_3) = *(undefined4 *)(lVar2 + *(longlong *)(puVar3 + 2));
      } while (uVar4 < uVar5);
    }
    uVar5 = (uint)uVar7;
    while (uVar5 < param_2) {
      puVar1 = (undefined4 *)(lVar8 + 0xc);
      lVar8 = lVar8 + 0x20;
      *(undefined4 *)(param_3 + uVar7 * 4) = *puVar1;
      uVar5 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar5;
    }
    uVar6 = 0;
  }
  return uVar6;
}

