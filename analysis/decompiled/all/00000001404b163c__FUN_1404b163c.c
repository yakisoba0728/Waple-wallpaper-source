// Function: FUN_1404b163c
// Addr: 1404b163c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b163c(longlong param_1,byte param_2)

{
  int iVar1;
  char *pcVar2;
  char cVar3;
  char cVar4;
  char *in_RAX;
  char *pcVar5;
  
  bRam00000001406c168d = bRam00000001406c168d ^ param_2;
  *in_RAX = *in_RAX + (char)in_RAX;
  iVar1 = (int)in_RAX + 0x15ff4000;
  cVar3 = (char)iVar1 + (char)param_1;
  pcVar5 = (char *)(param_1 + -1);
  cVar4 = (char)((uint)iVar1 >> 8);
  if (pcVar5 == (char *)0x0 || cVar3 == '\0') {
    *pcVar5 = *pcVar5 + cVar4;
    pcVar2 = (char *)((ulonglong)CONCAT31((int3)((uint)iVar1 >> 8),cVar3) * 2);
    *pcVar2 = *pcVar2 - (char)pcVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar5 = (char *)(ulonglong)
                   (CONCAT22((short)((uint)iVar1 >> 0x10),CONCAT11(cVar4 + cVar3,cVar3)) | 0xb740000
                   );
  *pcVar5 = *pcVar5 + cVar3;
  bRam00000001464c16c0 = bRam00000001464c16c0 << 1 | (char)bRam00000001464c16c0 < '\0';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

