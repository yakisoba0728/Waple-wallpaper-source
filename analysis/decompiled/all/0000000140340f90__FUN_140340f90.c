// Function: FUN_140340f90
// Addr: 140340f90
// Size: 207 bytes


short FUN_140340f90(longlong param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  short sVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  if (*param_2 == 0xffffffff) {
    return 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x18);
  uVar5 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar2 + 0xc),*(undefined1 *)(lVar2 + 0xd)),
                            *(undefined1 *)(lVar2 + 0xe)),*(undefined1 *)(lVar2 + 0xf));
  uVar7 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar2 + 0x10),*(undefined1 *)(lVar2 + 0x11)),
                            *(undefined1 *)(lVar2 + 0x12)),*(undefined1 *)(lVar2 + 0x13));
  uVar1 = *param_2 + 1;
  uVar6 = uVar5;
  if (uVar5 <= uVar1) {
    uVar6 = uVar1;
  }
  uVar5 = uVar6 - uVar5;
  if (uVar5 < uVar7) {
    puVar4 = (undefined1 *)((ulonglong)(uVar5 * 2) + lVar2 + 0x14);
    while( true ) {
      sVar3 = CONCAT11(*puVar4,puVar4[1]);
      if (sVar3 != 0) break;
      if (uVar6 == 0xffffffff) {
        return 0;
      }
      uVar6 = uVar6 + 1;
      uVar5 = uVar5 + 1;
      puVar4 = puVar4 + 2;
      if (uVar7 <= uVar5) {
        *param_2 = uVar6;
        return 0;
      }
    }
  }
  else {
    sVar3 = 0;
  }
  *param_2 = uVar6;
  return sVar3;
}

