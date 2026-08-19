// Function: FUN_1404c457c
// Addr: 1404c457c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c457c(uint param_1,byte *param_2,undefined1 *param_3)

{
  byte bVar1;
  uint uVar2;
  uint *in_RAX;
  char *pcVar3;
  byte bVar4;
  char unaff_BL;
  
  bVar4 = (byte)param_2;
  *in_RAX = *in_RAX & param_1;
  bVar1 = (char)in_RAX + (char)*in_RAX;
  pcVar3 = (char *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                            CONCAT11((byte)((ulonglong)in_RAX >> 8) | bVar4,bVar1));
  *param_3 = *param_3;
  (&stack0x0021004c)[(longlong)pcVar3 * 2] = (&stack0x0021004c)[(longlong)pcVar3 * 2] + bVar4;
  *pcVar3 = *pcVar3 + bVar1;
  *param_2 = *param_2 & bVar1;
  uVar2 = (int)pcVar3 + 0xd2fb9800;
  (&stack0x1801004c)[(longlong)(ulonglong)uVar2 * 2] =
       (&stack0x1801004c)[(longlong)(ulonglong)uVar2 * 2] + bVar4;
  pcVar3 = (char *)(ulonglong)CONCAT31((int3)(uVar2 >> 8),(byte)uVar2 | *(byte *)(ulonglong)uVar2);
  pcVar3[(longlong)param_2] = pcVar3[(longlong)param_2] - (char)((ulonglong)param_2 >> 8);
  *pcVar3 = *pcVar3 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

