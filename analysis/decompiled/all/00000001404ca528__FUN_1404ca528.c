// Function: FUN_1404ca528
// Addr: 1404ca528
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ca528(char *param_1,undefined2 param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  
  uVar1 = func_0x000129aea564();
  in(param_2);
  pcVar2 = (char *)CONCAT71((int7)((ulonglong)uVar1 >> 8),0x4a);
  *param_1 = *param_1 + (char)((ulonglong)uVar1 >> 8);
  *pcVar2 = *pcVar2 + 'J';
  func_0x000129aea574();
  in(param_2);
  *param_1 = *param_1 + 'J';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

