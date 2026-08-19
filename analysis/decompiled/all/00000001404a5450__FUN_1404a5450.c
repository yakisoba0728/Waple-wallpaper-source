// Function: FUN_1404a5450
// Addr: 1404a5450
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a5450(uint *param_1,byte *param_2)

{
  byte bVar1;
  char cVar2;
  int in_EAX;
  uint uVar3;
  int *unaff_RBX;
  longlong unaff_RBP;
  uint unaff_EDI;
  char *pcVar4;
  
  uVar3 = in_EAX + 0x3600470;
  *param_2 = *param_2 ^ (byte)uVar3;
  *unaff_RBX = *unaff_RBX + (int)param_1;
  uVar3 = uVar3 + *(int *)(ulonglong)uVar3 | *param_1;
  bVar1 = (byte)uVar3;
  *(byte *)param_1 = (byte)*param_1 | bVar1;
  cVar2 = bVar1 + 0x30;
  pcVar4 = (char *)(ulonglong)CONCAT31((int3)(uVar3 >> 8),cVar2);
  *pcVar4 = *pcVar4 + cVar2;
  *(uint *)(unaff_RBP + -0xb42fff4) = *(uint *)(unaff_RBP + -0xb42fff4) & unaff_EDI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

