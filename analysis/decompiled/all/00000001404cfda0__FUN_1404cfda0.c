// Function: FUN_1404cfda0
// Addr: 1404cfda0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cfda0(undefined8 param_1,int *param_2)

{
  int unaff_ESP;
  int unaff_ESI;
  undefined4 unaff_00000034;
  byte in_CF;
  
  *(uint *)CONCAT44(unaff_00000034,unaff_ESI) =
       (*(int *)CONCAT44(unaff_00000034,unaff_ESI) - unaff_ESI) - (uint)in_CF;
  *param_2 = *param_2 + unaff_ESP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

