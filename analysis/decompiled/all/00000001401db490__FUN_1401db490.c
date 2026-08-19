// Function: FUN_1401db490
// Addr: 1401db490
// Size: 265 bytes


void FUN_1401db490(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar2 = *param_1;
  lVar5 = (param_1[1] - lVar2 >> 3) * -0x5555555555555555;
  if (lVar5 == 0xaaaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
    FUN_140013120();
  }
  uVar4 = (param_1[2] - lVar2 >> 3) * -0x5555555555555555;
  uVar3 = 0xaaaaaaaaaaaaaaa - (uVar4 >> 1);
  if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
    uVar4 = (uVar4 >> 1) + uVar4;
    uVar3 = lVar5 + 1;
    if (uVar3 <= uVar4) {
      uVar3 = uVar4;
    }
    if (uVar3 < 0xaaaaaaaaaaaaaab) {
      uVar3 = uVar3 * 0x18;
      if (uVar3 == 0) {
        puVar1 = (undefined4 *)(((param_2 - lVar2) / 0x18) * 0x18);
        *puVar1 = *param_3;
        *(undefined8 *)(puVar1 + 2) = 0;
        *(undefined8 *)(puVar1 + 4) = 0;
        lVar2 = *param_1;
        if (param_2 == param_1[1]) {
                    /* WARNING: Subroutine does not return */
          FUN_1404211c0(0,lVar2,param_1[1] - lVar2);
        }
                    /* WARNING: Subroutine does not return */
        FUN_1404211c0(0,lVar2,param_2 - lVar2);
      }
      if (uVar3 < 0x1000) {
        func_0x00014028aff0(uVar3);
        return;
      }
      if (uVar3 < uVar3 + 0x27) {
        func_0x00014028aff0();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140017440();
}

