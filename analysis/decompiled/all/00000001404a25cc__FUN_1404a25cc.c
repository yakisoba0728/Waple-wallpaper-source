// Function: FUN_1404a25cc
// Addr: 1404a25cc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a25cc(byte *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char cVar4;
  undefined8 in_RAX;
  char *pcVar3;
  char cVar5;
  char unaff_BL;
  
  cVar5 = (char)((ulonglong)param_2 >> 8);
  iVar2 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),(byte)in_RAX ^ *param_1) + 0x5017100;
  pcVar3 = (char *)((ulonglong)CONCAT31((int3)((uint)iVar2 >> 8),(char)iVar2 + unaff_BL) &
                   0xffffffffffffff4a);
  *param_1 = *param_1 + (char)((ulonglong)pcVar3 >> 8);
  *pcVar3 = *pcVar3 + (char)pcVar3;
  *param_2 = *param_2 + cVar5;
  iRam00000001454b96e3 = iRam00000001454b96e3 + (int)pcVar3;
  pcVar3 = (char *)(CONCAT71((int7)((ulonglong)pcVar3 >> 8),(char)pcVar3 + unaff_BL) &
                   0xffffffffffffff4a);
  cVar4 = (char)((ulonglong)pcVar3 >> 8);
  *param_1 = *param_1 + cVar4;
  cVar1 = (char)pcVar3;
  *pcVar3 = *pcVar3 + cVar1;
  cRam00000001724a2af2 = cRam00000001724a2af2 + (char)param_2;
  iRam000000018a6ee1f7 = iRam000000018a6ee1f7 + (int)pcVar3;
  *param_1 = *param_1 + cVar4;
  *pcVar3 = *pcVar3 + cVar1;
  cRam00000001454b3b03 = cRam00000001454b3b03 + cVar1 + cVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

