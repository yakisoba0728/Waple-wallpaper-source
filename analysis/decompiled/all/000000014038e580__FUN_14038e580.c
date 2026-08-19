// Function: FUN_14038e580
// Addr: 14038e580
// Size: 85 bytes


void FUN_14038e580(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
                    /* WARNING: Subroutine does not return */
  FUN_1402fc440("SERIALIZE",uVar1,0,1,0,1,"start [%p..%p] (%lu bytes)",uVar1,param_1[3],
                *(int *)(param_1 + 3) - (int)uVar1);
}

