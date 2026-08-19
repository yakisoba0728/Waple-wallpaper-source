// Function: FUN_14033e400
// Addr: 14033e400
// Size: 1 bytes


undefined8 FUN_14033e400(uint *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 auStackX_8 [2];
  
  uVar3 = *param_1 + 1;
  if (param_1[1] < uVar3) {
    auStackX_8[0] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_1402f8180(param_2,0x18,param_1[1],*param_1 + 8 & 0xfffffff8,*(undefined8 *)(param_1 + 2),
                  auStackX_8);
  }
  uVar2 = *(uint *)(*(longlong *)(param_1 + 2) + -0x14 + (ulonglong)uVar3 * 0x18);
  puVar1 = (undefined4 *)(*(longlong *)(param_1 + 2) + -0x18 + (ulonglong)uVar3 * 0x18);
  *puVar1 = 0;
  puVar1[4] = 0;
  if (uVar2 != 0) {
    func_0x000140421870(*(undefined8 *)(puVar1 + 2),0,uVar2 >> 3);
  }
  *param_1 = uVar3;
  *param_3 = puVar1;
  return 0;
}

