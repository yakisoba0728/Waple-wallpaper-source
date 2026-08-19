// Function: FUN_1404a61f4
// Addr: 1404a61f4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a61f4(char *param_1,longlong param_2)

{
  uint *in_RAX;
  char *pcVar1;
  char unaff_BL;
  undefined7 unaff_00000019;
  char unaff_SPL;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  param_1[CONCAT71(unaff_00000019,unaff_BL)] =
       param_1[CONCAT71(unaff_00000019,unaff_BL)] + (char)param_2;
  param_1[param_2] = param_1[param_2] + (char)((ulonglong)param_2 >> 8);
  pcVar1 = (char *)(CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + (char)param_2) &
                   0xffffffffffffff09);
  *pcVar1 = *pcVar1 + unaff_BL;
  *param_1 = *param_1 + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

