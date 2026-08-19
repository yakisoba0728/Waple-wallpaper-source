// Function: FUN_14049edc4
// Addr: 14049edc4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049edc4(uint *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  uint uVar1;
  char cVar2;
  uint in_EAX;
  uint uVar3;
  byte bVar6;
  longlong unaff_RBP;
  char *unaff_RDI;
  longlong unaff_GS_OFFSET;
  uint *puVar4;
  int *piVar5;
  
  bVar6 = (byte)((ulonglong)param_2 >> 8);
  *unaff_RDI = *unaff_RDI + (char)param_1;
  *unaff_RDI = *unaff_RDI + (char)param_1;
  uVar3 = (in_EAX ^ 10) + 0x54050002;
  puVar4 = (uint *)(ulonglong)uVar3;
  *puVar4 = *puVar4 | uVar3;
  *(byte *)param_1 = (byte)*param_1 ^ bVar6;
  *puVar4 = *puVar4 + uVar3;
  *(uint *)(unaff_GS_OFFSET + (longlong)param_1) =
       *(uint *)(unaff_GS_OFFSET + (longlong)param_1) ^ uVar3;
  cVar2 = in((short)param_2);
  uVar1 = CONCAT31((int3)(uVar3 >> 8),cVar2);
  piVar5 = (int *)(ulonglong)uVar1;
  *param_4 = *param_4 + -8;
  *(char *)piVar5 = (char)*piVar5 + cVar2;
  *(byte *)piVar5 = (char)*piVar5 + bVar6;
  *param_1 = *param_1 ^ uVar1;
  *(char *)(unaff_RBP + 0x31) = *(char *)(unaff_RBP + 0x31) + (char)(uVar3 >> 8);
  *piVar5 = *piVar5 + uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

