// Function: FUN_1404a71b0
// Addr: 1404a71b0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a71b0(undefined8 param_1,undefined2 param_2)

{
  int in_EAX;
  uint uVar1;
  uint *puVar2;
  
  uVar1 = in_EAX + 0x600007c4;
  puVar2 = (uint *)(ulonglong)uVar1;
  out(param_2,(char)uVar1);
  *puVar2 = *puVar2 | uVar1;
  out(param_2,(char)uVar1);
  *puVar2 = *puVar2 | uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

