// Function: FUN_1404a02f8
// Addr: 1404a02f8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404a0330) */

void FUN_1404a02f8(void)

{
  char cVar1;
  undefined8 in_RAX;
  char *pcVar2;
  
  cVar1 = (char)in_RAX + 'p';
  pcVar2 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar1);
  *(char **)((ulonglong)(uint)((int)&stack0x00000000 + *(int *)(pcVar2 + 2)) - 8) = pcVar2;
  *pcVar2 = *pcVar2 + cVar1;
  uRam00000001744f0308 = uRam00000001744f0308 & (uint)pcVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

