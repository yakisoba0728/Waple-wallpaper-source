// Function: FUN_1404c5fac
// Addr: 1404c5fac
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c5fac(char *param_1,longlong param_2)

{
  byte bVar1;
  char cVar4;
  int in_EAX;
  uint uVar2;
  byte *pbVar3;
  char cVar5;
  char cVar6;
  longlong unaff_RBX;
  char unaff_R12B;
  char acStackX_10 [24];
  
  cVar6 = (char)((ulonglong)param_2 >> 8);
  cVar5 = (char)((ulonglong)param_1 >> 8);
  *(char *)(unaff_RBX + -0x4fffd103) = *(char *)(unaff_RBX + -0x4fffd103) + cVar5;
  *param_1 = *param_1 + unaff_R12B;
  uVar2 = in_EAX + 0xe4050006;
  bVar1 = (byte)uVar2 | *(byte *)(ulonglong)uVar2;
  cVar4 = (char)(uVar2 >> 8) + cVar6;
  *(char *)((longlong)param_1 * 2) = *(char *)((longlong)param_1 * 2) + cVar4;
  *(char *)(unaff_RBX + -0x4fffd103) = *(char *)(unaff_RBX + -0x4fffd103) + cVar5;
  *param_1 = *param_1 + unaff_R12B;
  pbVar3 = (byte *)((ulonglong)
                    CONCAT31((int3)(CONCAT22((short)(uVar2 >> 0x10),CONCAT11(cVar4,bVar1)) >> 8),
                             bVar1) | 8);
  acStackX_10[param_2 * 2] = acStackX_10[param_2 * 2] + (char)param_1;
  *pbVar3 = *pbVar3 | (byte)pbVar3;
  *(char *)((longlong)param_1 * 2) = *(char *)((longlong)param_1 * 2) + (cVar4 + cVar6) * '\x02';
  *(char *)(unaff_RBX + -0x4fffd103) = *(char *)(unaff_RBX + -0x4fffd103) + cVar5;
  *param_1 = *param_1 + unaff_R12B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

