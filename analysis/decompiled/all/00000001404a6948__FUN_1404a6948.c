// Function: FUN_1404a6948
// Addr: 1404a6948
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a6948(byte *param_1,undefined8 param_2)

{
  byte bVar1;
  int *piVar2;
  uint uVar3;
  char *in_RAX;
  uint unaff_EBX;
  longlong unaff_RDI;
  
  param_1[unaff_RDI] = param_1[unaff_RDI] + (char)((ulonglong)param_2 >> 8);
  *in_RAX = *in_RAX + (char)param_2;
  *(uint *)(ulonglong)unaff_EBX = *(uint *)(ulonglong)unaff_EBX | unaff_EBX;
  bVar1 = *param_1;
  *param_1 = *param_1 + (byte)unaff_EBX;
  uVar3 = unaff_EBX + 0x54150009 + (uint)CARRY1(bVar1,(byte)unaff_EBX);
  piVar2 = (int *)((ulonglong)
                   (CONCAT31((int3)(uVar3 >> 8),(byte)uVar3 & *(byte *)(ulonglong)uVar3) +
                   0x15002134) * 2);
  *piVar2 = *piVar2 + (int)in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

