// Function: FUN_1404ce6b4
// Addr: 1404ce6b4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ce6b4(undefined8 param_1,longlong param_2)

{
  undefined3 uVar1;
  uint *puVar2;
  char cVar3;
  char cVar7;
  uint in_EAX;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char cVar8;
  char unaff_BL;
  char unaff_SPL;
  char unaff_BPL;
  undefined7 unaff_00000029;
  uint unaff_ESI;
  
  cVar8 = (char)((ulonglong)param_2 >> 8);
  pcVar5 = (char *)((ulonglong)(in_EAX | 0x5000074) ^ 2);
  pcVar5[-0x27ffc19d] = pcVar5[-0x27ffc19d] + (char)param_2;
  cVar7 = (char)(in_EAX >> 8);
  pcVar5[CONCAT71(unaff_00000029,unaff_BPL) * 8 + 0x210049] =
       pcVar5[CONCAT71(unaff_00000029,unaff_BPL) * 8 + 0x210049] + cVar7;
  *pcVar5 = *pcVar5 + (char)pcVar5;
  uVar1 = (undefined3)((in_EAX | 0x5000074) >> 8);
  cVar3 = (char)pcVar5 + unaff_BL;
  pcVar5 = (char *)((ulonglong)CONCAT31(uVar1,cVar3) + 0x9210049 +
                   CONCAT71(unaff_00000029,unaff_BPL) * 8);
  *pcVar5 = *pcVar5 + cVar7;
  uVar4 = CONCAT31(uVar1,cVar3);
  puVar2 = (uint *)((ulonglong)uVar4 * 2);
  *puVar2 = *puVar2 | unaff_ESI;
  uVar4 = uVar4 + 0x30000234;
  cVar3 = (char)uVar4;
  out((short)param_2,cVar3);
  pcVar5 = (char *)(CONCAT71(unaff_00000029,unaff_BPL) + -0x12);
  *pcVar5 = *pcVar5 + unaff_BPL;
  pcVar5 = (char *)((ulonglong)uVar4 + 0x210049 + CONCAT71(unaff_00000029,unaff_BPL) * 8);
  *pcVar5 = *pcVar5 + unaff_SPL;
  pcVar6 = (char *)(ulonglong)uVar4;
  *(char *)((longlong)pcVar6 * 2) = *(char *)((longlong)pcVar6 * 2) + cVar8;
  pcVar6[param_2] = pcVar6[param_2] + cVar8;
  *pcVar6 = *pcVar6 + cVar8;
  out((short)param_2,cVar3);
  pcVar5 = (char *)(CONCAT71(unaff_00000029,unaff_BPL) + -0x12);
  *pcVar5 = *pcVar5 + unaff_BPL;
  pcVar6[CONCAT71(unaff_00000029,unaff_BPL) * 8 + 0x210049] =
       pcVar6[CONCAT71(unaff_00000029,unaff_BPL) * 8 + 0x210049] + unaff_SPL;
  *pcVar6 = *pcVar6 + cVar3;
  pcVar5 = (char *)(CONCAT71(unaff_00000029,unaff_BPL) + -0x12);
  *pcVar5 = *pcVar5 + unaff_BPL;
  pcVar6[CONCAT71(unaff_00000029,unaff_BPL) * 8 + 0x34010049] =
       pcVar6[CONCAT71(unaff_00000029,unaff_BPL) * 8 + 0x34010049] + unaff_SPL;
  pcVar5 = (char *)(ulonglong)(uVar4 | 0x3983400);
  *pcVar5 = *pcVar5 + (char)((ulonglong)param_1 >> 8);
  *(char *)((longlong)pcVar5 * 2) = cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

