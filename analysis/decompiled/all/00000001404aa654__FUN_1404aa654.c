// Function: FUN_1404aa654
// Addr: 1404aa654
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aa654(undefined8 *param_1)

{
  undefined8 in_MM4;
  
  pshufw(in_MM4,*param_1,5);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

