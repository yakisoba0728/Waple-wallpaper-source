// Function: FUN_1404c3480
// Addr: 1404c3480
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c3480(int *param_1,char *param_2)

{
  byte in_AL;
  undefined7 in_register_00000001;
  char unaff_BL;
  
  *param_2 = *param_2 + in_AL;
  *param_2 = (*param_2 - (char)param_1) - (0xee < in_AL);
  *(char *)CONCAT71(in_register_00000001,in_AL + 0x11) =
       *(char *)CONCAT71(in_register_00000001,in_AL + 0x11) + unaff_BL;
  *param_1 = *param_1 + (int)param_2;
  *(char *)param_1 = (char)*param_1 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

