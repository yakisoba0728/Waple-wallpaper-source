// Function: FUN_1404ad7d0
// Addr: 1404ad7d0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ad7d0(int *param_1,undefined8 param_2)

{
  char cVar1;
  int unaff_ESI;
  longlong unaff_RDI;
  char in_CF;
  
  cVar1 = (char)param_2 * '\x02' + in_CF;
  *param_1 = *param_1 + (int)CONCAT71((int7)((ulonglong)param_2 >> 8),cVar1);
  *(int *)(unaff_RDI + (longlong)param_1) = *(int *)(unaff_RDI + (longlong)param_1) + unaff_ESI;
  *(char *)param_1 = (char)*param_1 + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

