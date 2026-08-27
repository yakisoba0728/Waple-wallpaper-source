// Function: FUN_1402d3b24
// Addr: 1402d3b24
// Size: 30 bytes


/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1402d3b24(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1402d9894();
  if (*(code **)(lVar1 + 0x18) != (code *)0x0) {
    (**(code **)(lVar1 + 0x18))();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402c97e4();
}

