// Function: FUN_1404cca30
// Addr: 1404cca30
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cca30(longlong param_1,uint *param_2)

{
  uint in_EAX;
  char in_ZF;
  
  if (param_1 + -1 == 0 || in_ZF != '\0') {
    *(char *)(ulonglong)(in_EAX ^ 0x35470600) =
         *(char *)(ulonglong)(in_EAX ^ 0x35470600) + (char)(param_1 + -1);
    *param_2 = *param_2 | 0x62721;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

