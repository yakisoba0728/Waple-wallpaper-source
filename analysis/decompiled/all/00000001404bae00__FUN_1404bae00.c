// Function: FUN_1404bae00
// Addr: 1404bae00
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bae00(undefined8 param_1,char *param_2,undefined8 param_3,char *param_4)

{
  int in_EAX;
  uint uVar1;
  uint *puVar2;
  
  uVar1 = in_EAX + 0xc5e80289;
  *(uint *)(ulonglong)uVar1 = *(uint *)(ulonglong)uVar1 & uVar1;
  puVar2 = (uint *)((ulonglong)uVar1 & 0xffffffffffffffad);
  *param_4 = *param_4;
  *param_2 = *param_2 + (char)puVar2;
  *(char *)puVar2 = (char)*puVar2 + (char)puVar2;
  *puVar2 = *puVar2 & (uint)puVar2;
  func_0x0001644bcf26();
  *param_4 = *param_4 + -8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

