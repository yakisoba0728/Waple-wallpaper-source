// Function: FUN_1404bfb98
// Addr: 1404bfb98
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bfb98(int *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  undefined8 in_RAX;
  uint unaff_ESP;
  uint unaff_EBP;
  uint unaff_ESI;
  int *piVar3;
  uint *puVar4;
  
  cVar1 = (char)in_RAX + 'B';
  piVar3 = (int *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar1);
  *(char *)piVar3 = (char)*piVar3 + cVar1;
  *param_1 = *param_1 + unaff_ESP;
  uVar2 = (int)piVar3 + *piVar3;
  puVar4 = (uint *)(ulonglong)uVar2;
  *puVar4 = *puVar4 & unaff_EBP;
  cVar1 = (char)uVar2;
  *param_2 = *param_2 + cVar1;
  *(char *)puVar4 = (char)*puVar4 + cVar1;
  out(0xa8,(cVar1 - (char)*puVar4) - CARRY4(unaff_ESI,unaff_ESP));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

