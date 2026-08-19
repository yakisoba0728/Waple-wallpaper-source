// Function: FUN_1404bdd1c
// Addr: 1404bdd1c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bdd1c(char *param_1,uint *param_2,undefined8 param_3,char *param_4)

{
  uint in_EAX;
  uint uVar1;
  char unaff_SPL;
  
  *param_4 = *param_4 + unaff_SPL;
  *param_2 = *param_2 | in_EAX & 0xffffffdc;
  *param_1 = *param_1 + (char)param_1;
  uVar1 = (uint)(short)(in_EAX & 0xffffffdc);
  *(uint *)(ulonglong)uVar1 = *(uint *)(ulonglong)uVar1 | uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

