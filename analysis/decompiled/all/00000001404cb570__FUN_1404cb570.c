// Function: FUN_1404cb570
// Addr: 1404cb570
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cb570(void)

{
  undefined2 uVar1;
  undefined2 *unaff_RSI;
  
  uVar1 = TaskRegister();
  *unaff_RSI = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

