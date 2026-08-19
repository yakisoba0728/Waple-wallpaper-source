// Function: FUN_1404b797c
// Addr: 1404b797c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b797c(char *param_1,undefined2 param_2)

{
  undefined8 in_RAX;
  
  in(param_2);
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

