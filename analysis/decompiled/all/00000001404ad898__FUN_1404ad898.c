// Function: FUN_1404ad898
// Addr: 1404ad898
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ad898(char *param_1,byte param_2)

{
  undefined8 in_RAX;
  
  *param_1 = *param_1 + ((byte)((ulonglong)in_RAX >> 8) | param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

