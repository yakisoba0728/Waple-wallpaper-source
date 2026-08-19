// Function: FUN_1404b8518
// Addr: 1404b8518
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b8518(uint *param_1)

{
  uint in_EAX;
  int iVar1;
  char *pcVar2;
  int unaff_ESP;
  byte in_CF;
  
  iVar1 = in_EAX + *param_1 + (uint)in_CF;
  pcVar2 = (char *)((ulonglong)
                    CONCAT31((int3)((uint)iVar1 >> 8),
                             (char)iVar1 -
                             (CARRY4(in_EAX,*param_1) || CARRY4(in_EAX + *param_1,(uint)in_CF))) |
                   0x70);
  *pcVar2 = *pcVar2 + (char)pcVar2;
  iRam00000001b8708530 = iRam00000001b8708530 + unaff_ESP;
  sysenter();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

