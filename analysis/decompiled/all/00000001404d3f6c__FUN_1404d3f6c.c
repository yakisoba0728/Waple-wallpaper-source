// Function: FUN_1404d3f6c
// Addr: 1404d3f6c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d3f6c(byte *param_1,undefined8 param_2)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  undefined8 in_RAX;
  int unaff_EBX;
  longlong unaff_RBP;
  char *unaff_RDI;
  byte *pbVar4;
  
  param_1[0x8004d3e] = param_1[0x8004d3e] + (char)((ulonglong)in_RAX >> 8);
  *unaff_RDI = (char)in_RAX;
  cVar2 = (char)in_RAX + (char)((ulonglong)param_2 >> 8);
  *(char *)(unaff_RBP + 2) = *(char *)(unaff_RBP + 2) + cVar2;
  bVar3 = cVar2 + 0x2e;
  pbVar4 = (byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar3);
  bVar1 = *pbVar4;
  *pbVar4 = *pbVar4 + bVar3;
  *(uint *)(unaff_RDI + 1) = (*(int *)(unaff_RDI + 1) - unaff_EBX) - (uint)CARRY1(bVar1,bVar3);
  *pbVar4 = *pbVar4 | bVar3;
  bVar1 = *param_1;
  *param_1 = *param_1 + bVar3;
  *(uint *)pbVar4 = *(int *)pbVar4 + (int)pbVar4 + (uint)CARRY1(bVar1,bVar3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

