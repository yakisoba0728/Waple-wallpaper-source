// Function: FUN_1404cdc5c
// Addr: 1404cdc5c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cdc5c(undefined8 param_1,char param_2)

{
  undefined1 in_AL;
  undefined7 in_register_00000001;
  longlong unaff_RBP;
  float10 in_ST0;
  
  *(char *)(unaff_RBP + -0x63ffb325) = *(char *)(unaff_RBP + -0x63ffb325) - param_2;
  *(int *)(CONCAT71(in_register_00000001,in_AL) + 2 + CONCAT71(in_register_00000001,in_AL)) =
       (int)in_ST0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

