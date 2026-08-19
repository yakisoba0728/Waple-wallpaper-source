// Function: FUN_1404c5f8c
// Addr: 1404c5f8c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c5f8c(char *param_1,longlong param_2)

{
  byte bVar1;
  uint uVar2;
  char cVar4;
  uint *in_RAX;
  byte *pbVar3;
  char cVar5;
  char cVar6;
  longlong unaff_RBX;
  char unaff_R12B;
  char acStackX_18 [16];
  
  cVar6 = (char)((ulonglong)param_2 >> 8);
  cVar5 = (char)((ulonglong)param_1 >> 8);
  uVar2 = (uint)in_RAX;
  uRam00000001a4515f94 = uRam00000001a4515f94 & uVar2;
  *in_RAX = *in_RAX | uVar2;
  *(char *)(unaff_RBX + -0x4fffd103) = *(char *)(unaff_RBX + -0x4fffd103) + cVar5;
  *param_1 = *param_1 + unaff_R12B;
  *(char *)((longlong)param_1 * 2) =
       *(char *)((longlong)param_1 * 2) + (char)(uVar2 + 0xf4050004 >> 8);
  *(char *)(unaff_RBX + -0x4fffd103) = *(char *)(unaff_RBX + -0x4fffd103) + cVar5;
  *param_1 = *param_1 + unaff_R12B;
  uVar2 = uVar2 + 0xd80a000a;
  bVar1 = (byte)uVar2 | *(byte *)(ulonglong)uVar2;
  cVar4 = (char)(uVar2 >> 8) + cVar6;
  *(char *)((longlong)param_1 * 2) = *(char *)((longlong)param_1 * 2) + cVar4;
  *(char *)(unaff_RBX + -0x4fffd103) = *(char *)(unaff_RBX + -0x4fffd103) + cVar5;
  *param_1 = *param_1 + unaff_R12B;
  pbVar3 = (byte *)((ulonglong)
                    CONCAT31((int3)(CONCAT22((short)(uVar2 >> 0x10),CONCAT11(cVar4,bVar1)) >> 8),
                             bVar1) | 8);
  acStackX_18[param_2 * 2] = acStackX_18[param_2 * 2] + (char)param_1;
  *pbVar3 = *pbVar3 | (byte)pbVar3;
  *(char *)((longlong)param_1 * 2) = *(char *)((longlong)param_1 * 2) + (cVar4 + cVar6) * '\x02';
  *(char *)(unaff_RBX + -0x4fffd103) = *(char *)(unaff_RBX + -0x4fffd103) + cVar5;
  *param_1 = *param_1 + unaff_R12B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

