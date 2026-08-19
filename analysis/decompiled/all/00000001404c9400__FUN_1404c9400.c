// Function: FUN_1404c9400
// Addr: 1404c9400
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c9400(char param_1,char *param_2)

{
  undefined8 *unaff_RDI;
  undefined8 in_MM0;
  
  pmulhuw(in_MM0,*unaff_RDI);
  *param_2 = *param_2 + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

