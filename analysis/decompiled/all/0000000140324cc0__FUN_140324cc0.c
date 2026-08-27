// Function: FUN_140324cc0
// Addr: 140324cc0
// Size: 195 bytes


int FUN_140324cc0(longlong param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = *param_2;
  uVar1 = *(uint *)(param_1 + 0x18);
  do {
    uVar7 = uVar7 + 1;
    uVar5 = 0;
    uVar6 = uVar1;
    uVar4 = uVar1 >> 1;
    while( true ) {
      if (uVar6 <= uVar5) {
        if (uVar1 <= uVar5) {
          *param_2 = 0;
          return 0;
        }
        if (uVar5 == 0) {
          *param_2 = 0;
          return 0;
        }
        *param_2 = *(uint *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar5 * 0x10);
        return uVar5 + 1;
      }
      uVar2 = *(uint *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar4 * 0x10);
      if (uVar2 == uVar7) break;
      uVar3 = uVar4;
      if (uVar2 < uVar7) {
        uVar5 = uVar4 + 1;
        uVar3 = uVar6;
      }
      uVar6 = uVar3;
      uVar4 = (uVar4 - uVar2) + uVar7;
      if ((uVar6 <= uVar4) || (uVar4 < uVar5)) {
        uVar4 = (uVar6 - uVar5 >> 1) + uVar5;
      }
    }
    if (uVar4 != 0) {
      *param_2 = uVar7;
      return uVar4 + 1;
    }
  } while( true );
}

