// Function: FUN_1403407a0
// Addr: 1403407a0
// Size: 187 bytes


short FUN_1403407a0(longlong param_1,uint *param_2)

{
  longlong lVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = *param_2 + 1;
  if (uVar6 < 0x10000) {
    lVar1 = *(longlong *)(param_1 + 0x18);
    uVar4 = (uint)CONCAT11(*(undefined1 *)(lVar1 + 6),*(undefined1 *)(lVar1 + 7));
    uVar7 = (uint)CONCAT11(*(undefined1 *)(lVar1 + 8),*(undefined1 *)(lVar1 + 9));
    uVar3 = uVar4;
    if (uVar4 <= uVar6) {
      uVar3 = uVar6;
    }
    uVar4 = uVar3 - uVar4;
    if (uVar7 <= uVar4) {
      *param_2 = 0;
      return 0;
    }
    puVar5 = (undefined1 *)((ulonglong)(uVar4 * 2) + lVar1 + 10);
    while( true ) {
      sVar2 = CONCAT11(*puVar5,puVar5[1]);
      if (CONCAT11(*puVar5,puVar5[1]) != 0) {
        *param_2 = uVar3;
        return sVar2;
      }
      if (0xfffe < uVar3) break;
      uVar3 = uVar3 + 1;
      uVar4 = uVar4 + 1;
      puVar5 = puVar5 + 2;
      if (uVar7 <= uVar4) {
        *param_2 = 0;
        return sVar2;
      }
    }
  }
  return 0;
}

