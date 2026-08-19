// Function: FUN_1404a9c38
// Addr: 1404a9c38
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a9c38(longlong param_1,longlong param_2)

{
  uint uVar1;
  char cVar4;
  longlong in_RAX;
  char *pcVar2;
  uint uVar5;
  byte bVar6;
  longlong unaff_RBX;
  longlong unaff_RDI;
  byte in_CF;
  char *pcVar3;
  
  bVar6 = (byte)((ulonglong)param_2 >> 8);
  pcVar2 = (char *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                            CONCAT11((char)((ulonglong)in_RAX >> 8) + *(char *)(unaff_RDI + param_1)
                                     + (CARRY1(bVar6,*(byte *)(in_RAX + param_2)) ||
                                       CARRY1(bVar6 + *(byte *)(in_RAX + param_2),in_CF)),
                                     (char)in_RAX));
  uVar1 = (int)CONCAT71((int7)((ulonglong)pcVar2 >> 8),(char)in_RAX + *pcVar2) + 0x20000e34;
  pcVar3 = (char *)(ulonglong)uVar1;
  uVar5 = (int)param_1 - iRam000000014d768353;
  pcVar2 = (char *)(unaff_RBX * 5 + 0x4a);
  cVar4 = (char)(uVar1 >> 8);
  *pcVar2 = *pcVar2 + cVar4;
  *(char *)(ulonglong)uVar5 = *(char *)(ulonglong)uVar5 + cVar4;
  *pcVar3 = *pcVar3 + (char)uVar1;
  *pcVar3 = *pcVar3 + cVar4;
  uVar5 = uVar5 - iRam000000014d768363;
  pcVar2 = (char *)(unaff_RBX * 5 + 0x4a);
  *pcVar2 = *pcVar2 + cVar4;
  *(char *)(ulonglong)uVar5 = *(char *)(ulonglong)uVar5 + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

