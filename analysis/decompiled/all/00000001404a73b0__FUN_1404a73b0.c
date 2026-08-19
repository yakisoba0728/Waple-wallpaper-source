// Function: FUN_1404a73b0
// Addr: 1404a73b0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404a7432) */
/* WARNING: Removing unreachable block (ram,0x0001404a7422) */

void FUN_1404a73b0(char *param_1,char *param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined8 in_RAX;
  undefined7 uVar3;
  char cVar4;
  undefined7 uVar5;
  longlong unaff_RBX;
  char unaff_SPL;
  
  uVar5 = (undefined7)((ulonglong)param_1 >> 8);
  uVar3 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar2 = (char)in_RAX + 3;
  bVar2 = bVar2 | *(byte *)CONCAT71(uVar3,bVar2);
  *param_1 = *param_1 + unaff_SPL;
  *(char *)CONCAT71(uVar3,bVar2) = *(char *)CONCAT71(uVar3,bVar2) + bVar2;
  bVar2 = bVar2 + (char)param_2;
  cVar4 = (char)param_1 + *param_2;
  pbVar1 = (byte *)CONCAT71(uVar3,bVar2) + unaff_RBX;
  *pbVar1 = *pbVar1 + bVar2;
  *(byte *)CONCAT71(uVar5,cVar4) =
       *(char *)CONCAT71(uVar5,cVar4) + (bVar2 | *(byte *)CONCAT71(uVar3,bVar2));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

