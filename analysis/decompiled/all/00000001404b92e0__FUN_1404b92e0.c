// Function: FUN_1404b92e0
// Addr: 1404b92e0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b92e0(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  char *in_RAX;
  byte bVar3;
  int unaff_EBX;
  int *unaff_RDI;
  
  bVar3 = (byte)((ulonglong)param_2 >> 8);
  *(char *)(param_2 * 2) = *(char *)(param_2 * 2) + bVar3;
  *(char *)(param_1 + param_2) = *(char *)(param_1 + param_2) + (char)param_2;
  in_RAX[param_2] = in_RAX[param_2] + bVar3;
  pbVar1 = (byte *)(in_RAX + -0x3cffe0ef);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar3;
  *unaff_RDI = *unaff_RDI + unaff_EBX + (uint)CARRY1(bVar2,bVar3);
  *in_RAX = *in_RAX + (char)unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

