// Function: FUN_1401be8e0
// Addr: 1401be8e0
// Size: 36 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401be8e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 in_stack_ffffffffffffffb0;
  
  lVar1 = func_0x000140087560(param_1,"controlpoint","");
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140086eb0(param_1,"controlpoint","");
  }
  lVar1 = func_0x000140087560(param_1,"distanceinner","");
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140086eb0(param_1,"distanceinner","");
  }
  lVar1 = func_0x000140087560(param_1,"distanceouter","");
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140086eb0(param_1,"distanceouter","");
  }
  lVar1 = func_0x000140087560(param_1,"reductioninner","");
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140086eb0(param_1,"reductioninner","",param_4,_UNK_140492910,
                  CONCAT31((int3)((uint)in_stack_ffffffffffffffb0 >> 8),3) & 0xfffffeff,0,0,0);
  }
  func_0x000140421ed0("reductionouter","reductionouter",0);
  return;
}

