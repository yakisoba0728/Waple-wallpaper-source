// Function: FUN_1404af5a8
// Addr: 1404af5a8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404af5a8(uint *param_1)

{
  uint in_EAX;
  uint uVar1;
  byte in_CF;
  
  uVar1 = in_EAX + *param_1 + (uint)in_CF;
  *(int *)(ulonglong)uVar1 =
       (*(int *)(ulonglong)uVar1 - uVar1) -
       (uint)(CARRY4(in_EAX,*param_1) || CARRY4(in_EAX + *param_1,(uint)in_CF));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

