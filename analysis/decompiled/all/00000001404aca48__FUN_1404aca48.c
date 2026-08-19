// Function: FUN_1404aca48
// Addr: 1404aca48
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aca48(char *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 in_RAX;
  char unaff_BPL;
  uint *puVar3;
  
  uVar1 = CONCAT71((int7)((ulonglong)in_RAX >> 8),uRam6000109aa800109a);
  *param_1 = *param_1 + unaff_BPL + '\b';
  uVar2 = (int)uVar1 + 0xe4050002;
  puVar3 = (uint *)(ulonglong)uVar2;
  *puVar3 = *puVar3 | uVar2;
  *(char *)puVar3 = (char)*puVar3 + (char)uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

