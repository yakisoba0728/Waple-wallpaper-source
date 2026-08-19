// Function: FUN_1404d139c
// Addr: 1404d139c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d139c(undefined8 param_1,char *param_2,undefined8 param_3,char *param_4)

{
  char unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RDI;
  char unaff_R12B;
  
  param_2[unaff_RDI] = param_2[unaff_RDI] | (byte)param_2;
  in((short)param_2);
  *param_4 = *param_4 + unaff_R12B;
  *(char *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + unaff_BL
  ;
  *param_2 = *param_2 + (byte)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

