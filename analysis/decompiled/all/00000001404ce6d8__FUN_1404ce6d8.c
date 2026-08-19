// Function: FUN_1404ce6d8
// Addr: 1404ce6d8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ce6d8(uint *param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  longlong in_RAX;
  char *pcVar3;
  char *pcVar4;
  char cVar5;
  char unaff_SPL;
  char unaff_BPL;
  undefined7 unaff_00000029;
  uint unaff_ESI;
  
  cVar5 = (char)((ulonglong)param_2 >> 8);
  *param_1 = *param_1 & (uint)param_1;
  *(uint *)(in_RAX * 2) = *(uint *)(in_RAX * 2) | unaff_ESI;
  uVar2 = (int)in_RAX + 0x30000234;
  cVar1 = (char)uVar2;
  out((short)param_2,cVar1);
  pcVar4 = (char *)(CONCAT71(unaff_00000029,unaff_BPL) + -0x12);
  *pcVar4 = *pcVar4 + unaff_BPL;
  pcVar4 = (char *)((ulonglong)uVar2 + 0x210049 + CONCAT71(unaff_00000029,unaff_BPL) * 8);
  *pcVar4 = *pcVar4 + unaff_SPL;
  pcVar3 = (char *)(ulonglong)uVar2;
  *(char *)((longlong)pcVar3 * 2) = *(char *)((longlong)pcVar3 * 2) + cVar5;
  pcVar3[param_2] = pcVar3[param_2] + cVar5;
  *pcVar3 = *pcVar3 + cVar5;
  out((short)param_2,cVar1);
  pcVar4 = (char *)(CONCAT71(unaff_00000029,unaff_BPL) + -0x12);
  *pcVar4 = *pcVar4 + unaff_BPL;
  pcVar3[CONCAT71(unaff_00000029,unaff_BPL) * 8 + 0x210049] =
       pcVar3[CONCAT71(unaff_00000029,unaff_BPL) * 8 + 0x210049] + unaff_SPL;
  *pcVar3 = *pcVar3 + cVar1;
  pcVar4 = (char *)(CONCAT71(unaff_00000029,unaff_BPL) + -0x12);
  *pcVar4 = *pcVar4 + unaff_BPL;
  pcVar3[CONCAT71(unaff_00000029,unaff_BPL) * 8 + 0x34010049] =
       pcVar3[CONCAT71(unaff_00000029,unaff_BPL) * 8 + 0x34010049] + unaff_SPL;
  pcVar4 = (char *)(ulonglong)(uVar2 | 0x3983400);
  *pcVar4 = *pcVar4 + (char)((ulonglong)param_1 >> 8);
  *(char *)((longlong)pcVar4 * 2) = cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

