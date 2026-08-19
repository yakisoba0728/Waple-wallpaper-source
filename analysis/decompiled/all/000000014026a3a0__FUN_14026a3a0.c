// Function: FUN_14026a3a0
// Addr: 14026a3a0
// Size: 221 bytes


void FUN_14026a3a0(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  
  lVar1 = *param_1;
  if (param_1[1] - lVar1 == -0x40) {
                    /* WARNING: Subroutine does not return */
    FUN_140013120();
  }
  uVar6 = param_1[2] - lVar1 >> 6;
  uVar8 = (param_1[1] - lVar1 >> 6) + 1;
  if (0x3ffffffffffffff - (uVar6 >> 1) < uVar6) {
    uVar6 = 0xffffffffffffffe7;
LAB_14026a456:
    func_0x00014028aff0(uVar6);
    return;
  }
  uVar6 = (uVar6 >> 1) + uVar6;
  if (uVar8 <= uVar6) {
    uVar8 = uVar6;
  }
  if (uVar8 < 0x400000000000000) {
    uVar8 = uVar8 * 0x40;
    if (uVar8 == 0) {
      uVar5 = param_3[1];
      puVar7 = (undefined8 *)(param_2 - lVar1 & 0xffffffffffffffc0);
      *puVar7 = *param_3;
      puVar7[1] = uVar5;
      uVar5 = param_3[3];
      puVar7[2] = param_3[2];
      puVar7[3] = uVar5;
      uVar2 = *(undefined4 *)((longlong)param_3 + 0x24);
      uVar3 = *(undefined4 *)(param_3 + 5);
      uVar4 = *(undefined4 *)((longlong)param_3 + 0x2c);
      *(undefined4 *)(puVar7 + 4) = *(undefined4 *)(param_3 + 4);
      *(undefined4 *)((longlong)puVar7 + 0x24) = uVar2;
      *(undefined4 *)(puVar7 + 5) = uVar3;
      *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar4;
      uVar2 = *(undefined4 *)((longlong)param_3 + 0x34);
      uVar3 = *(undefined4 *)(param_3 + 7);
      uVar4 = *(undefined4 *)((longlong)param_3 + 0x3c);
      *(undefined4 *)(puVar7 + 6) = *(undefined4 *)(param_3 + 6);
      *(undefined4 *)((longlong)puVar7 + 0x34) = uVar2;
      *(undefined4 *)(puVar7 + 7) = uVar3;
      *(undefined4 *)((longlong)puVar7 + 0x3c) = uVar4;
      lVar1 = *param_1;
      if (param_2 == param_1[1]) {
                    /* WARNING: Subroutine does not return */
        FUN_1404211c0(0,lVar1,param_1[1] - lVar1);
      }
                    /* WARNING: Subroutine does not return */
      FUN_1404211c0(0,lVar1,param_2 - lVar1);
    }
    if (uVar8 < 0x1000) {
      func_0x00014028aff0();
      return;
    }
    uVar6 = uVar8 | 0x27;
    if (uVar8 < uVar6) goto LAB_14026a456;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140017440();
}

