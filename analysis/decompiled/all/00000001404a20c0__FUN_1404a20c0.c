// Function: FUN_1404a20c0
// Addr: 1404a20c0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a20c0(undefined8 param_1,undefined2 param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  
  cVar1 = in(param_2);
  *param_4 = *param_4 + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

