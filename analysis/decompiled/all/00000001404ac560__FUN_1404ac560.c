// Function: FUN_1404ac560
// Addr: 1404ac560
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ac560(uint *param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  char *in_RAX;
  byte bVar5;
  char cVar6;
  char unaff_SPL;
  byte *pbVar4;
  
  cVar6 = (char)((ulonglong)param_2 >> 8);
  *param_1 = *param_1 & (uint)param_1;
  cVar3 = (char)in_RAX + *in_RAX;
  pbVar4 = (byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar3);
  *(uint *)(pbVar4 + 0x1c500011) = *(uint *)(pbVar4 + 0x1c500011) | (uint)param_1;
  *pbVar4 = *pbVar4 + cVar3;
  bVar5 = (byte)param_2 & *pbVar4;
  pbVar4[-0x3c] = pbVar4[-0x3c] + cVar6;
  *(char *)param_1 = (char)*param_1 + unaff_SPL;
  *pbVar4 = *pbVar4 + cVar3;
  pbVar1 = pbVar4 + 0x1c;
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar5;
  *pbVar4 = *pbVar4 + cVar3 + CARRY1(bVar2,bVar5);
  pbVar4[-0x3c] = pbVar4[-0x3c] + cVar6;
  *(char *)param_1 = (char)*param_1 + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

