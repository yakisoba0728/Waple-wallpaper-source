// Function: FUN_1404b7ab8
// Addr: 1404b7ab8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b7abb) overlaps instruction at (ram,0x0001404b7aba)
    */

void FUN_1404b7ab8(longlong param_1,undefined8 param_2,undefined8 param_3,byte *param_4)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  char *in_RAX;
  char *pcVar5;
  char cVar6;
  char in_ZF;
  char *pcVar4;
  
  cVar6 = (char)param_2;
  pcVar5 = (char *)(param_1 + -1);
  if (pcVar5 != (char *)0x0 && in_ZF == '\0') {
    uVar3 = in((short)param_2);
    pcVar4 = (char *)(ulonglong)uVar3;
    *param_4 = *param_4;
    *pcVar4 = *pcVar4 + (char)uVar3;
    pcVar4[-0x56ffe262] = pcVar4[-0x56ffe262] + cVar6;
    uVar3 = (uVar3 + 0xb6122000) - (uint)((uVar3 & 0x100) != 0);
    in_RAX = (char *)(ulonglong)uVar3;
    *pcVar5 = *pcVar5 + (char)uVar3;
  }
  bVar2 = *param_4;
  *param_4 = *param_4 + (byte)in_RAX;
  *in_RAX = *in_RAX + (char)pcVar5 + CARRY1(bVar2,(byte)in_RAX);
  *in_RAX = *in_RAX + cVar6;
  pcVar5 = (char *)((ulonglong)in_RAX ^ 0xf);
  *pcVar5 = *pcVar5 + cVar6;
  pbVar1 = (byte *)((CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                              CONCAT11((byte)((ulonglong)in_RAX >> 8) | (byte)pcVar5 | 0xf0,
                                       (byte)pcVar5)) | 0xf0) + 7);
  *pbVar1 = *pbVar1 | (byte)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

