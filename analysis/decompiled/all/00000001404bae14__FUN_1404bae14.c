// Function: FUN_1404bae14
// Addr: 1404bae14
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bae14(undefined8 param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  uint uVar1;
  longlong in_RAX;
  char unaff_SPL;
  
  *(char *)(in_RAX + 2) = *(char *)(in_RAX + 2) + (char)((ulonglong)param_1 >> 8);
  uVar1 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX * '\x02') + 0x5e80021;
  *(uint *)(ulonglong)uVar1 = *(uint *)(ulonglong)uVar1 & uVar1;
  *param_4 = *param_4 + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

