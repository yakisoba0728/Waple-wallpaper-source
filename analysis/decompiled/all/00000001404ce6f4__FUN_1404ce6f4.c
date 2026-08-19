// Function: FUN_1404ce6f4
// Addr: 1404ce6f4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ce6f4(undefined8 param_1,longlong param_2)

{
  char cVar1;
  char *in_RAX;
  char *pcVar2;
  char unaff_SPL;
  char unaff_BPL;
  undefined7 unaff_00000029;
  
  cVar1 = (char)((ulonglong)param_2 >> 8);
  *(char *)((longlong)in_RAX * 2) = *(char *)((longlong)in_RAX * 2) + cVar1;
  in_RAX[param_2] = in_RAX[param_2] + cVar1;
  *in_RAX = *in_RAX + cVar1;
  cVar1 = (char)in_RAX;
  out((short)param_2,cVar1);
  pcVar2 = (char *)(CONCAT71(unaff_00000029,unaff_BPL) + -0x12);
  *pcVar2 = *pcVar2 + unaff_BPL;
  in_RAX[CONCAT71(unaff_00000029,unaff_BPL) * 8 + 0x210049] =
       in_RAX[CONCAT71(unaff_00000029,unaff_BPL) * 8 + 0x210049] + unaff_SPL;
  *in_RAX = *in_RAX + cVar1;
  pcVar2 = (char *)(CONCAT71(unaff_00000029,unaff_BPL) + -0x12);
  *pcVar2 = *pcVar2 + unaff_BPL;
  in_RAX[CONCAT71(unaff_00000029,unaff_BPL) * 8 + 0x34010049] =
       in_RAX[CONCAT71(unaff_00000029,unaff_BPL) * 8 + 0x34010049] + unaff_SPL;
  pcVar2 = (char *)(ulonglong)((uint)in_RAX | 0x3983400);
  *pcVar2 = *pcVar2 + (char)((ulonglong)param_1 >> 8);
  *(char *)((longlong)pcVar2 * 2) = cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

