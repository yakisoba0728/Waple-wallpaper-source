// Function: FUN_1404ca31c
// Addr: 1404ca31c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ca31c(char *param_1,undefined8 param_2)

{
  undefined6 uVar1;
  char unaff_R12B;
  longlong unaff_retaddr;
  
  uVar1 = (undefined6)((ulonglong)param_2 >> 0x10);
  *(char *)CONCAT62(uVar1,CONCAT11(0x32,(char)param_2)) =
       *(char *)CONCAT62(uVar1,CONCAT11(0x32,(char)param_2)) + (char)((ulonglong)param_1 >> 8);
  *param_1 = *param_1 + unaff_R12B;
  *(char *)(unaff_retaddr * 2) = *(char *)(unaff_retaddr * 2) + (char)unaff_retaddr;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

