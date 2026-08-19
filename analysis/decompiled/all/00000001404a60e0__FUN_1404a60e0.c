// Function: FUN_1404a60e0
// Addr: 1404a60e0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a60e0(int *param_1,longlong param_2)

{
  int *piVar1;
  uint uVar2;
  byte bVar3;
  uint *puVar4;
  byte *in_RAX;
  int unaff_EBX;
  uint unaff_ESP;
  int unaff_ESI;
  
  *param_1 = *param_1 + unaff_EBX;
  bVar3 = *in_RAX;
  puVar4 = (uint *)(param_2 * 2);
  uVar2 = *puVar4;
  *puVar4 = *puVar4 - unaff_ESP;
  piVar1 = (int *)(CONCAT71((int7)((ulonglong)in_RAX >> 8),(byte)in_RAX | bVar3) + param_2);
  *piVar1 = (*piVar1 - unaff_ESI) - (uint)(uVar2 < unaff_ESP);
  *(char *)param_1 = (char)*param_1 + (char)unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

