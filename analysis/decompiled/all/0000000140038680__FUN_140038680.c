// Function: FUN_140038680
// Addr: 140038680
// Size: 6 bytes


void FUN_140038680(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + -1;
  *(longlong *)param_2[1] = lVar1;
  *(longlong *)(lVar1 + 8) = param_2[1];
                    /* WARNING: Subroutine does not return */
  FUN_140017310(param_2 + 6);
}

