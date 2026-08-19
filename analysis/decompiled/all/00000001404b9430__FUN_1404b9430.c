// Function: FUN_1404b9430
// Addr: 1404b9430
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b9430(undefined8 param_1,uint *param_2)

{
  uint unaff_EDI;
  
  *param_2 = *param_2 & unaff_EDI;
  *(char *)param_2 = (char)*param_2 + (char)((ulonglong)param_2 >> 8);
  in(0x27);
  *(char *)param_2 = (char)*param_2 + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

