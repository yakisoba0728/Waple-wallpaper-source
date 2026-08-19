// Function: FUN_140321350
// Addr: 140321350
// Size: 229 bytes


void FUN_140321350(undefined8 param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int in_stack_00000030;
  undefined8 *in_stack_00000038;
  int in_stack_00000040;
  
  uVar2 = 0x60;
  if ((in_stack_00000030 - 0x3000U & 0xffffefff) == 0) {
    uVar2 = 0x201;
  }
  in_stack_00000038 = (undefined8 *)*in_stack_00000038;
  uVar1 = FUN_1402f80c0(*in_stack_00000038,8,0,uVar2,0,&stack0x00000040,in_stack_00000038,0,0,0,0,0,
                        0,param_1,0);
  if (in_stack_00000040 == 0) {
    func_0x000140421870(param_1,0,0xb8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402f8060(*in_stack_00000038,uVar1);
}

