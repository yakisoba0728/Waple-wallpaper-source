// Function: FUN_1404aca38
// Addr: 1404aca38
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aca38(char *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  byte *in_RAX;
  uint unaff_EBX;
  char unaff_BPL;
  longlong unaff_RSI;
  uint *puVar3;
  
  *(uint *)(in_RAX + (longlong)param_1) = *(uint *)(in_RAX + (longlong)param_1) & unaff_EBX;
  (&stack0x00000000)[unaff_RSI * 8] = (&stack0x00000000)[unaff_RSI * 8] + (char)unaff_EBX;
  *in_RAX = *in_RAX | (byte)in_RAX;
  uVar1 = CONCAT71(CONCAT61((int6)((ulonglong)in_RAX >> 0x10),
                            (char)((ulonglong)in_RAX >> 8) + param_1[unaff_RSI]),
                   uRam6000109aa800109a);
  *param_1 = *param_1 + unaff_BPL + '\b';
  uVar2 = (int)uVar1 + 0xe4050002;
  puVar3 = (uint *)(ulonglong)uVar2;
  *puVar3 = *puVar3 | uVar2;
  *(char *)puVar3 = (char)*puVar3 + (char)uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

