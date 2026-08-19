// Function: FUN_1404a9cf4
// Addr: 1404a9cf4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a9cf4(byte *param_1,int *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  byte bVar3;
  uint *in_RAX;
  int unaff_EBX;
  undefined4 unaff_0000001c;
  char *unaff_RDI;
  char *pcVar4;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  bVar3 = (char)in_RAX + (char)*in_RAX;
  pcVar4 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar3);
  param_1[CONCAT44(unaff_0000001c,unaff_EBX)] =
       param_1[CONCAT44(unaff_0000001c,unaff_EBX)] + (char)((ulonglong)param_2 >> 8);
  *pcVar4 = *pcVar4 + bVar3;
  bVar1 = *param_1;
  *param_1 = *param_1 + (bVar3 ^ 0xd);
  uVar2 = *(undefined4 *)param_1;
  *(char *)CONCAT44(unaff_0000001c,unaff_EBX) =
       *(char *)CONCAT44(unaff_0000001c,unaff_EBX) + (char)unaff_EBX;
  *param_2 = *param_2 + unaff_EBX;
  *unaff_RDI = *unaff_RDI + (((char)param_1 - (char)uVar2) - CARRY1(bVar1,bVar3 ^ 0xd));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

