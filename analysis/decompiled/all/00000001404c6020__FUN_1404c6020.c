// Function: FUN_1404c6020
// Addr: 1404c6020
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c6020(char param_1,char *param_2)

{
  undefined8 *in_RAX;
  undefined8 in_MM1;
  
  pmulhuw(in_MM1,*in_RAX);
  *param_2 = *param_2 + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

