// Function: FUN_1404c5e54
// Addr: 1404c5e54
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c5e54(char *param_1,undefined8 param_2)

{
  char unaff_BL;
  undefined7 unaff_00000019;
  char unaff_R12B;
  char *unaff_retaddr;
  
  *param_1 = *param_1 + unaff_R12B;
  *unaff_retaddr = *unaff_retaddr + (char)unaff_retaddr;
  *(char *)CONCAT71(unaff_00000019,unaff_BL) =
       *(char *)CONCAT71(unaff_00000019,unaff_BL) + (char)((ulonglong)param_2 >> 8);
  param_1[4] = param_1[4] + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

