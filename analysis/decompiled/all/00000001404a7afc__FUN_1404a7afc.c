// Function: FUN_1404a7afc
// Addr: 1404a7afc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a7afc(char *param_1,undefined2 param_2)

{
  char cVar1;
  bool in_SF;
  
  cVar1 = in(param_2);
  if (in_SF) {
    *param_1 = *param_1 + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

